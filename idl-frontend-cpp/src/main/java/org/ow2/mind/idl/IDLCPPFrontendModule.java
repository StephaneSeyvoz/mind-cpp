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

import org.ow2.mind.idl.annotation.AnnotationLoader;
import org.ow2.mind.idl.annotation.IDLLoaderPhase;
import org.ow2.mind.idl.parser.IDLFileLoader;

/**
 * This class is used to override specific bindings in the idl-frontend
 * that would not allow us to #include C++ headers with their usual
 * extensions.
 */
public class IDLCPPFrontendModule extends AbstractIDLFrontendModule {

	protected void configureIDLLoader() {
	    bind(IDLLoader.class)
	        .toChainStartingWith(CacheIDLLoader.class)
	        .followedBy(CppHeaderLoader.class)				// contrib
	        .followedBy(BinaryIDLLoader.class)
	        .followedBy(
	            new AnnotationProcessorProvider(IDLLoaderPhase.AFTER_CHECKING))
	        .followedBy(KindDecorationLoader.class)
	        .followedBy(VaArgsDualMethCheckerLoader.class)
	        .followedBy(IDLTypeCheckerLoader.class)
	        .followedBy(ExtendsInterfaceLoader.class)
	        .followedBy(CppIncludeLoader.class)				// contrib
	        .followedBy(
	            new AnnotationProcessorProvider(IDLLoaderPhase.AFTER_PARSING))
	        .followedBy(AnnotationLoader.class).endingWith(IDLFileLoader.class);
	  }
	
	protected void configureIncludeResolver() {
	    bind(IncludeResolver.class)
	        .toChainStartingWith(CachingIncludeResolver.class)
	        .followedBy(InputResourcesIncludeResolver.class)
	        .followedBy(CppIncludeHeaderResolver.class)		// contrib
	        .endingWith(BasicIncludeResolver.class);
	  }
	
}
