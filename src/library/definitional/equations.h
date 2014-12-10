/*
Copyright (c) 2014 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#pragma once
#include "kernel/expr.h"

namespace lean {
bool is_equation(expr const & e);
expr const & equation_lhs(expr const & e);
expr const & equation_rhs(expr const & e);
expr mk_equation(expr const & lhs, expr const & rhs);

bool is_decreasing(expr const & e);
expr const & decreasing_app(expr const & e);
expr const & decreasing_proof(expr const & e);
expr mk_decreasing(expr const & t, expr const & H);

bool is_equations(expr const & e);
bool is_wf_equations(expr const & e);
unsigned equations_size(expr const & e);
void to_equations(expr const & e, buffer<expr> & eqns);
expr const & equations_wf_proof(expr const & e);
expr mk_equations(unsigned num, expr const * eqns);
expr mk_equations(unsigned num, expr const * eqns, expr const & Hwf);

expr mk_inaccessible(expr const & e);
bool is_inaccessible(expr const & e);

void initialize_equations();
void finalize_equations();
}
