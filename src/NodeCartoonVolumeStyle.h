/*
 * NodeCartoonVolumeStyle.h
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

#pragma once

#include "Node.h"
#include "ProtoMacros.h"
#include "Proto.h"
#include "SFMFTypes.h"

class ProtoCartoonVolumeStyle : public Proto {
public:
                    ProtoCartoonVolumeStyle(Scene *scene);
    virtual Node   *create(Scene *scene);

    virtual int     getType() const { return X3D_CARTOON_VOLUME_STYLE; }
    virtual int     getNodeClass() const 
        { return COMPOSABLE_VOLUME_RENDER_STYLE_NODE; }

    virtual bool    isX3dInternalProto(void) { return true; }

    FieldIndex colorSteps;
    FieldIndex enabled;
    FieldIndex orthogonalColor;
    FieldIndex parallelColor;
    FieldIndex surfaceNormals;
};

class NodeCartoonVolumeStyle : public Node {
public:
                    NodeCartoonVolumeStyle(Scene *scene, Proto *proto);

    virtual const char* getComponentName(void) const
        { return "VolumeRendering"; }
    virtual int     getComponentLevel(void) const { return 3; }
    virtual int     getX3dVersion(void) const { return 3; }
    virtual Node   *copy() const { return new NodeCartoonVolumeStyle(*this); }

    fieldMacros(SFInt32, colorSteps, ProtoCartoonVolumeStyle);
    fieldMacros(SFBool, enabled, ProtoCartoonVolumeStyle);
    fieldMacros(SFColorRGBA, orthogonalColor, ProtoCartoonVolumeStyle);
    fieldMacros(SFColorRGBA, parallelColor, ProtoCartoonVolumeStyle);
    fieldMacros(SFNode, surfaceNormals, ProtoCartoonVolumeStyle);
};

