/*
 * NodePointPickSensor.cpp
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

#include "NodePointPickSensor.h"
#include "Proto.h"
#include "FieldValue.h"
#include "SFBool.h"
#include "MFString.h"
#include "SFNode.h"
#include "MFNode.h"
#include "SFString.h"
#include "SFString.h"
#include "DuneApp.h"

ProtoPointPickSensor::ProtoPointPickSensor(Scene *scene)
  : Proto(scene, "PointPickSensor")
{
    enabled.set(
        addExposedField(SFBOOL, "enabled", new SFBool(true)));
    objectType.set(
        addExposedField(MFSTRING, "objectType", new MFString("ALL")));
    pickingGeometry.set(
        addExposedField(SFNODE, "pickingGeometry", new SFNode(),
                        VRML_POINT_SET));
    pickTarget.set(
        addExposedField(MFNODE, "pickTarget", new MFNode(),
                        SHAPE_NODE | GROUPING_NODE));
    intersectionType.set(
        addField(SFSTRING, "intersectionType", new SFString("BOUNDS")));
    sortOrder.set(
        addField(SFSTRING, "sortOrder", new SFString("CLOSEST")));
}

Node *
ProtoPointPickSensor::create(Scene *scene)
{ 
    return new NodePointPickSensor(scene, this); 
}

NodePointPickSensor::NodePointPickSensor(Scene *scene, Proto *def)
  : Node(scene, def)
{
}
