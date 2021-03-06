/* -*- mode: c++ -*-
   This program is part of the LifeV library
   Copyright (C) 2001,2002,2003,2004 EPFL, INRIA, Politechnico di Milano

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public License
   as published by the Free Software Foundation; either version 2
   of the License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

#ifndef UDF_HPP
#define UDF_HPP

//#include <life/lifecore/LifeV.hpp>
#include "lifev/core/array/VectorEpetra.hpp"
#include "lifev/core/array/VectorSmall.hpp"

//#include "flowConditions.hpp"

namespace LifeV
{
Real f (const Real& t, const Real& x, const Real& y, const Real& z, const ID& i);

Real u1 (const Real& t, const Real& x, const Real& y, const Real& z, const ID& i);

Real fZero (const Real& t, const Real& x, const Real& y, const Real& z, const ID& i);

// Initial velocity
Real u0 (const Real& t, const Real& x, const Real& y, const Real& z, const ID& i);
Real p0 (const Real& t, const Real& x, const Real& y, const Real& z, const ID& i);
Real E (const Real& /*t*/, const Real& /*x*/, const Real& /*y*/, const Real& /*z*/, const ID& /*i*/);


// Initial displacement and velocity
Real d0 (const Real& t, const Real& x, const Real& y, const Real& z, const ID& i);

Real w0 (const Real& t, const Real& x, const Real& y, const Real& z, const ID& i);

Real aortaPhisPress (const Real&  t, const Real& x = 0, const Real& y = 0, const Real& z = 0, const ID& i = 0);

Real aortaFlux4 (const Real&  t, const Real& x = 0, const Real& y = 0, const Real& z = 0, const ID& i = 0);
Real aortaFlux5 (const Real&  t, const Real& x = 0, const Real& y = 0, const Real& z = 0, const ID& i = 0);
Real aortaFlux7 (const Real&  t, const Real& x = 0, const Real& y = 0, const Real& z = 0, const ID& i = 0);
Real aortaFlux8 (const Real&  t, const Real& x = 0, const Real& y = 0, const Real& z = 0, const ID& i = 0);
Real aortaFlux9 (const Real&  t, const Real& x = 0, const Real& y = 0, const Real& z = 0, const ID& i = 0);
Real aortaFluxIn (const Real&  t, const Real& x = 0, const Real& y = 0, const Real& z = 0, const ID& i = 0);
Real aortaFlux3_ (const Real&  t, const Real& x = 0, const Real& y = 0, const Real& z = 0, const ID& i = 0);
Real aortaFlux3 (const Real&  t, const Real& x = 0, const Real& y = 0, const Real& z = 0, const ID& i = 0);
Real aortaFlux6_ (const Real&  t, const Real& x = 0, const Real& y = 0, const Real& z = 0, const ID& i = 0);
Real aortaFlux6 (const Real&  t, const Real& x = 0, const Real& y = 0, const Real& z = 0, const ID& i = 0);
Real aortaVelIn (const Real&  t, const Real& x, const Real& y, const Real& z, const ID& i);
Real bypassVelInMag (const Real&  t, const Real& /*x*/, const Real& /*y*/, const Real& /*z*/, const ID& /*i*/);
Real bypassVelInlet2 (const Real&  t, const Real& x, const Real& y, const Real& z, const ID& i);
Real bypassVelInlet4 (const Real&  t, const Real& x, const Real& y, const Real& z, const ID& i);

Real linearFlux3_ (Real  t, const Real& /*x*/, const Real& /*y*/, const Real& /*z*/, const ID& i);
Real linearFlux3 (Real  t, const Real& /*x*/, const Real& /*y*/, const Real& /*z*/, const ID& i);
Real linearFluxIn (Real  t, const Real& /*x*/, const Real& /*y*/, const Real& /*z*/, const ID& i);
Real linearFlux4 (Real  t, const Real& /*x*/, const Real& /*y*/, const Real& /*z*/, const ID& i);
Real linearFlux5 (Real  t, const Real& /*x*/, const Real& /*y*/, const Real& /*z*/, const ID& i);
Real linearFlux6 (Real  t, const Real& /*x*/, const Real& /*y*/, const Real& /*z*/, const ID& i);
Real linearFlux6_ (Real  t, const Real& /*x*/, const Real& /*y*/, const Real& /*z*/, const ID& i);
Real linearFlux7 (Real  t, const Real& /*x*/, const Real& /*y*/, const Real& /*z*/, const ID& i);
Real linearFlux8 (Real  t, const Real& /*x*/, const Real& /*y*/, const Real& /*z*/, const ID& i);
Real linearFlux9 (Real  t, const Real& /*x*/, const Real& /*y*/, const Real& /*z*/, const ID& i);
Real linearPress2 (Real  t, const Real& /*x*/, const Real& /*y*/, const Real& /*z*/, const ID& i);

Real inletCylinder (Real  t, const Real& /*x*/, const Real& /*y*/, const Real& /*z*/, const ID& i);
Real linearInletCylinder ( Real  t, const Real& /*x*/, const Real& /*y*/, const Real& /*z*/, const ID& i);
Real linearVelInletCylinder ( Real  t, const Real& x, const Real& y, const Real& z, const ID& i);
Real oneVelInletCylinder ( Real  t, const Real& x, const Real& y, const Real& z, const ID& i);
Real flatNormalVelInlet ( Real  t, const Real& /*x*/, const Real& /*y*/, const Real& /*z*/, const ID& i);
Real linearPopliteal ( Real  t, const Real& /*x*/, const Real& /*y*/, const Real& /*z*/, const ID& /*i*/);
Real linearPontdist ( Real  t, const Real& /*x*/, const Real& /*y*/, const Real& /*z*/, const ID& /*i*/);
Real popliteal ( const Real  t, const Real& x = 0, const Real& y = 0, const Real& z = 0, const ID& i = 0);
Real pont_dist ( const Real  t, const Real& x = 0, const Real& y = 0, const Real& z = 0, const ID& i = 0);
Real u2 (Real  t, const Real& /*x*/, const Real& /*y*/, const Real& /*z*/, const ID& /*i*/);
Real poplitealPressure (Real  t, const Real& /*x*/, const Real& /*y*/, const Real& /*z*/, const ID& /*i*/);

/* NormalizeFct */
class NormalizeFct
{
public:
    typedef VectorSmall<3> return_Type;

    return_Type operator() (const VectorSmall<3>& value)
    {
        Real norm (sqrt ( value[0]*value[0] + value[1]*value[1] + value[2]*value[2]) );

        if (norm > 0)
        {
            return value * (1.0 / norm);
        }
        return value;
    }

    NormalizeFct() {}
    NormalizeFct (const NormalizeFct&) {}
    ~NormalizeFct() {}
};


}



#endif
