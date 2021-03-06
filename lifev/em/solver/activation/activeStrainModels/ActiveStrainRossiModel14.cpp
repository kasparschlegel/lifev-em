/*
 * RossiModel14.cpp
 *
 *  Created on: 13/mag/2014
 *      Author: srossi
 */

#include <lifev/em/solver/activation/activeStrainModels/ActiveStrainRossiModel14.hpp>
#include <lifev/em/util/EMUtility.hpp>


namespace LifeV
{



ActiveStrainRossiModel14::ActiveStrainRossiModel14 (  Real inverseViscosity,
		                                              Real coefficient,
                                  		              Real threshold) :
    M_inverseViscosity (inverseViscosity),
    M_activeForceCoefficient(coefficient),
    M_chemicalThreshold(threshold)

{
}


Real
ActiveStrainRossiModel14::computeActiveStress( Real i4f, Real Calcium)
{
    Real dCa = Calcium - M_chemicalThreshold;
    Real fl = EMUtility::FLRelationship( i4f );
    if ( dCa > 0.0 )
    	return M_activeForceCoefficient * dCa * dCa * fl;
    else return 0.0;
}

void
ActiveStrainRossiModel14::solveModel ( Real& timeStep)
{
	if(!M_I4fPtr)
	{
		ASSERT(false, " Cannot solve Active Strain Rossi model without I4f. ")
		exit(-1);
	}
    Int nLocalDof = M_I4fPtr->epetraVector().MyLength();

    for (int ik (0); ik < nLocalDof; ik++)
    {
        int iGID = M_I4fPtr->blockMap().GID (ik);
        Real Pa, dW;
        Real i4f = (*M_I4fPtr)[iGID];
        Real Ca = (*this->M_electroSolution.at(M_calciumIndex) )[iGID];

        Pa = computeActiveStress(i4f, Ca);

        Real g = (*M_fiberActivationPtr) [iGID];
        Real g2 = g * g;
        Real g3 = g * g2;
        Real g4 = g * g3;
        Real g5 = g * g4;

        dW = 2.0 * i4f * ( 3.0 * g - 6.0 * g2 + 10.0 * g3 - 15.0 * g4  + 21.0 * g5 );
        Real grhs = M_inverseViscosity * ( Pa - dW ) / Ca / Ca;
        grhs *= timeStep;
        (*M_fiberActivationPtr) [iGID] += grhs;
    }

}


void
ActiveStrainRossiModel14::setParameters(EMData& data)
{
    M_inverseViscosity = data.activationParameter<Real>("InverseViscosity");
    M_activeForceCoefficient = data.activationParameter<Real>("ActiveForceCoefficient");
    M_chemicalThreshold = data.activationParameter<Real>("ChemicalThreshold");
    M_calciumIndex = data.activationParameter<UInt>("CalciumIndex");
}

} /* namespace LifeV */
