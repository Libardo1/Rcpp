// -*- mode: C++; c-indent-level: 4; c-basic-offset: 4; tab-width: 8 -*-
//
// if.h: Rcpp R/C++ interface class library -- dispatch
//
// Copyright (C) 2010 - 2011 Dirk Eddelbuettel and Romain Francois
//
// This file is part of Rcpp.
//
// Rcpp is free software: you can redistribute it and/or modify it
// under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
//
// Rcpp is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Rcpp.  If not, see <http://www.gnu.org/licenses/>.

#ifndef Rcpp__traits_if_h
#define Rcpp__traits_if_h

namespace Rcpp{
namespace traits{
	
template <bool COND, typename LHS, typename RHS>
struct if_ {
	typedef LHS type ;
} ;

template <typename LHS, typename RHS>
struct if_<false,LHS,RHS> {
	typedef RHS type ;
} ;
	
}
}

#endif
