/* RevKit (www.revkit.org)
 * Copyright (C) 2009-2014  University of Bremen
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * @file fredkin_gates_to_toffoli.hpp
 *
 * @brief Converts Fredkin gates in a circuit to Toffoli gates
 *
 * @author Mathias Soeken
 * @since  2.0
 */

#ifndef FREDKIN_GATES_TO_TOFFOLI_HPP
#define FREDKIN_GATES_TO_TOFFOLI_HPP

#include <reversible/circuit.hpp>

namespace cirkit
{

void fredkin_gates_to_toffoli( const circuit& src, circuit& dest );

}

#endif

// Local Variables:
// c-basic-offset: 2
// eval: (c-set-offset 'substatement-open 0)
// eval: (c-set-offset 'innamespace 0)
// End: