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

package org.ow2.mind.idl;

import static org.ow2.mind.PathHelper.getExtension;
import static org.ow2.mind.idl.ast.IDLASTHelper.getIncludedPath;
import static org.ow2.mind.idl.ast.CppInclude.CPP_HEADER_EXTENSION_0;
import static org.ow2.mind.idl.ast.CppInclude.CPP_HEADER_EXTENSION_1;
import static org.ow2.mind.idl.ast.CppInclude.CPP_HEADER_EXTENSION_2;
import static org.ow2.mind.idl.ast.CppInclude.CPP_HEADER_EXTENSION_3;
import static org.ow2.mind.idl.ast.Include.HEADER_EXTENSION;
import static org.ow2.mind.idl.ast.Include.IDT_EXTENSION;

import java.util.Map;

import org.objectweb.fractal.adl.ADLException;
import org.ow2.mind.error.ErrorManager;
import org.ow2.mind.idl.IDLLoader.AbstractDelegatingIDLLoader;
import org.ow2.mind.idl.ast.IDL;
import org.ow2.mind.idl.ast.Include;
import org.ow2.mind.idl.ast.IncludeContainer;

import com.google.inject.Inject;

/**
 * This class replaces the usual @see IncludeLoader to allow C++ extensions.
 * See Module class and mind-plugin.xml for override details.
 *
 */
public class CppIncludeLoader extends AbstractDelegatingIDLLoader {

	@Inject
	protected ErrorManager    errorManagerItf;

	@Inject
	protected IncludeResolver idlResolverItf;

	// ---------------------------------------------------------------------------
	// Implementation of the IDLLoader interface
	// ---------------------------------------------------------------------------

	public IDL load(final String name, final Map<Object, Object> context)
			throws ADLException {
		final IDL idl = clientIDLLoaderItf.load(name, context);

		if (idl instanceof IncludeContainer) {
			checkIncludes(idl, context);
		}

		return idl;
	}

	protected void checkIncludes(final IDL container,
			final Map<Object, Object> context) throws ADLException {
		for (final Include include : ((IncludeContainer) container).getIncludes()) {
			final String path = getIncludedPath(include);

			final String extension = getExtension(path);
			if (extension == null
					// standard Include extensions
					|| !(extension.equals(IDT_EXTENSION)
							|| extension.equals(HEADER_EXTENSION)
							// following values come from our CppInclude extending Include
							|| extension.equals(CPP_HEADER_EXTENSION_0)
							|| extension.equals(CPP_HEADER_EXTENSION_1)
							|| extension.equals(CPP_HEADER_EXTENSION_2)
							|| extension.equals(CPP_HEADER_EXTENSION_3))) {
				errorManagerItf.logError(IDLErrors.INVALID_INCLUDE, include, path);
			}

			idlResolverItf.resolve(include, container, null, context);
		}
	}
}
