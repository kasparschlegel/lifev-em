/* -*- mode: c++ -*-

  This file is part of the LifeV library

  Author(s): Gwenol Grandperrin <grandper@iacspc85.epfl.ch>
       Date: 2009-11-04

  Copyright (C) 2009 EPFL

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/
/**
   \file bcManage.cpp
   \author Gwenol Grandperrin <gwenol.grandperrin@epfl.ch>
   \date 2009-11-04
 */

#include <life/lifefem/bcManage.hpp>

namespace LifeV
{

void bcCalculateTangentVectors(std::map< ID,std::vector< Real > > &triad)
{
    // Author:	Gwenol Grandperrin
    // Date:	23.09.09
    //
    // This function basically calculate the tangential vectors
    // and store the component in the triad vector

    std::map< ID,std::vector< Real > >::iterator mapIt;
    for ( mapIt=triad.begin() ; mapIt != triad.end(); ++mapIt )
    {
        //We take max{|n x i|,|n x j|,|n x k|}
        //			=max{sqrt(ny^2+nz^2),sqrt(nx^2+nz^2),sqrt(nx^2+ny^2)}
        //			=max{r1,r2,r3}
        Real nx((*mapIt).second[6]);
        Real ny((*mapIt).second[7]);
        Real nz((*mapIt).second[8]);
        Real nxi=sqrt(ny*ny+nz*nz);
        Real nxj=sqrt(nx*nx+nz*nz);
        Real nxk=sqrt(nx*nx+ny*ny);
        if((nxi>=nxj)&&(nxi>=nxk)) //max = |n x i|
        {
            //We create t1
            (*mapIt).second[0] = 0;
            (*mapIt).second[1] = nz/nxi;
            (*mapIt).second[2] = -ny/nxi;

            //We create t2
            (*mapIt).second[3] = -nxi;
            (*mapIt).second[4] = nx*ny/nxi;
            (*mapIt).second[5] = nx*nz/nxi;
        }
        else if((nxj>=nxi)&&(nxj>=nxk)) //max = |n x j|
        {
            //We create t1
            (*mapIt).second[0] = -nz/nxj;
            (*mapIt).second[1] = 0;
            (*mapIt).second[2] = nx/nxj;

            //We create t2
            (*mapIt).second[3] = nx*ny/nxj;
            (*mapIt).second[4] = -nxj;
            (*mapIt).second[5] = ny*nz/nxj;
        }
        else //max = |n x k|
        {
            //We create t1
            (*mapIt).second[0] = ny/nxk;
            (*mapIt).second[1] = -nx/nxk;
            (*mapIt).second[2] = 0;

            //We create t2
            (*mapIt).second[3] = nx*nz/nxk;
            (*mapIt).second[4] = ny*nz/nxk;
            (*mapIt).second[5] = -nxk;
        }
    }
}

} //End of namespace LifeV