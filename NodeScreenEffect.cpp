/*
 * NodeScreenEffect.cpp
 *
 * Copyright (C) 2011 J. "MUFTI" Scheurich
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

#include "NodeScreenEffect.h"
#include "Proto.h"
#include "FieldValue.h"
#include "SFBool.h"
#include "SFBool.h"
#include "MFNode.h"
#include "DuneApp.h"

ProtoScreenEffect::ProtoScreenEffect(Scene *scene)
  : Proto(scene, "ScreenEffect")
{
    enabled.set(
        addExposedField(SFBOOL, "enabled", new SFBool(true)));
    needsDepth.set(
        addExposedField(SFBOOL, "needsDepth", new SFBool(false)));
    shaders.set(
        addExposedField(MFNODE, "shaders", new MFNode()));
}

Node *
ProtoScreenEffect::create(Scene *scene)
{ 
    return new NodeScreenEffect(scene, this); 
}

NodeScreenEffect::NodeScreenEffect(Scene *scene, Proto *def)
  : Node(scene, def)
{
}
