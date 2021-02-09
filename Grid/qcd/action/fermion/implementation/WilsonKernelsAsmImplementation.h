/*************************************************************************************

    Grid physics library, www.github.com/paboyle/Grid 



    Source file: ./lib/qcd/action/fermion/WilsonKernelsAsm.cc

    Copyright (C) 2015

Author: Peter Boyle <paboyle@ph.ed.ac.uk>
Author: paboyle <paboyle@ph.ed.ac.uk>
Author: Guido Cossu <guido.cossu@ed.ac.uk>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

    See the full license in the file "LICENSE" in the top level distribution directory
*************************************************************************************/
/*  END LEGAL */

#pragma once

#include <Grid/qcd/action/fermion/FermionCore.h>

NAMESPACE_BEGIN(Grid);

///////////////////////////////////////////////////////////
// Default to no assembler implementation
// Will specialise to AVX512 if available
///////////////////////////////////////////////////////////
template<class Impl> void 
WilsonKernels<Impl >::AsmDhopSite(const StencilView &st, const DoubledGaugeFieldView &U,SiteHalfSpinor *buf,
				  int ss,int ssU,int Ls,int Ns,const FermionFieldView &in, const FermionFieldView &out)
{
  assert(0);
}

template<class Impl> void 
WilsonKernels<Impl >::AsmDhopSiteDag(const StencilView &st, const DoubledGaugeFieldView &U,SiteHalfSpinor *buf,
				     int ss,int ssU,int Ls,int Ns,const FermionFieldView &in, const FermionFieldView &out)
{
  assert(0);
}

template<class Impl> void 
WilsonKernels<Impl >::AsmDhopSiteInt(const StencilView &st, const DoubledGaugeFieldView &U,SiteHalfSpinor *buf,
				     int ss,int ssU,int Ls,int Ns,const FermionFieldView &in, const FermionFieldView &out)
{
  assert(0);
}

template<class Impl> void 
WilsonKernels<Impl >::AsmDhopSiteDagInt(const StencilView &st, const DoubledGaugeFieldView &U,SiteHalfSpinor *buf,
					int ss,int ssU,int Ls,int Ns,const FermionFieldView &in, const FermionFieldView &out)
{
  assert(0);
}

template<class Impl> void 
WilsonKernels<Impl >::AsmDhopSiteExt(const StencilView &st, const DoubledGaugeFieldView &U,SiteHalfSpinor *buf,
				     int ss,int ssU,int Ls,int Ns,const FermionFieldView &in, const FermionFieldView &out)
{
  assert(0);
}

template<class Impl> void 
WilsonKernels<Impl >::AsmDhopSiteDagExt(const StencilView &st, const DoubledGaugeFieldView &U,SiteHalfSpinor *buf,
					int ss,int ssU,int Ls,int Ns,const FermionFieldView &in, const FermionFieldView &out)
{
  assert(0);
}

NAMESPACE_END(Grid);

