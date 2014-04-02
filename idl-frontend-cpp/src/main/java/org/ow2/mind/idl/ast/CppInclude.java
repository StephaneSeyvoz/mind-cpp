/**
 * Copyright (C) 2014 Schneider-Electric
 *
 * This file is part of "Mind Compiler" is free software: you can redistribute 
 * it and/or modify it under the terms of the GNU Lesser General Public License 
 * as published by the Free Software Foundation, either version 3 of the 
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT 
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more
 * details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Contact: mind@ow2.org
 *
 * Authors: Stephane Seyvoz
 * Contributors: 
 */

package org.ow2.mind.idl.ast;

/**
 * Define new allowed headers for C++, enriching usual Include. 
 */
public interface CppInclude extends Include {

  String CPP_HEADER_EXTENSION_0 = "hpp";
  String CPP_HEADER_EXTENSION_1 = "h++";
  String CPP_HEADER_EXTENSION_2 = "hxx";
  String CPP_HEADER_EXTENSION_3 = "hh";

}
