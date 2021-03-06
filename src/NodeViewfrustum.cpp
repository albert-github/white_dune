/*
 * NodeViewfrustum.cpp
 *
 * Copyright (C) 2009 J. "MUFTI" Scheurich
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program (see the file "COPYING" for details); if 
 * not, write to the Free Software Foundation, Inc., 675 Mass Ave, 
 * Cambridge, MA 02139, USA.
 */

#include <stdio.h>
#include "stdafx.h"

#include "NodeViewfrustum.h"
#include "Proto.h"

ProtoViewfrustum::ProtoViewfrustum(Scene *scene)
  : Proto(scene, "Viewfrustum")
{
    bind.set(
          addExposedField(SFBOOL, "bind", new SFBool(false)));
    setFieldFlags(bind, FF_X3DOM_ONLY);

    description.set(
        addExposedField(SFSTRING, "description", new SFString("")));
    setFieldFlags(description, FF_X3DOM_ONLY);

    isActive.set(
          addExposedField(SFBOOL, "isActive", new SFBool(false)));
    setFieldFlags(isActive, FF_X3DOM_ONLY);

    modelview.set(
        addExposedField(SFMATRIX4F, "modelview", new SFMatrix4f()));
    setFieldFlags(modelview, FF_X3DOM_ONLY);

    projection.set(
        addExposedField(SFMATRIX4F, "projection", new SFMatrix4f()));
    setFieldFlags(projection, FF_X3DOM_ONLY);
}

Node *
ProtoViewfrustum::create(Scene *scene)
{ 
    return new NodeViewfrustum(scene, this); 
}

NodeViewfrustum::NodeViewfrustum(Scene *scene, Proto *def)
  : Node(scene, def)
{
}
