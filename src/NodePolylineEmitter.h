/*
 * NodePolylineEmitter.h
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

#ifndef _NODE_POLYLINE_EMITTER_H
#define _NODE_POLYLINE_EMITTER_H

#ifndef _NODE_H
#include "Node.h"
#endif
#ifndef _PROTO_MACROS_H
#include "ProtoMacros.h"
#endif
#ifndef _PROTO_H
#include "Proto.h"
#endif

#include "SFMFTypes.h"
#include "EmitterNode.h"

class ProtoPolylineEmitter : public EmitterProto {
public:
                    ProtoPolylineEmitter(Scene *scene);
    virtual Node   *create(Scene *scene);

    virtual int     getType() const { return X3D_POLYLINE_EMITTER; }

    virtual bool    isX3dInternalProto(void) { return true; }

    virtual bool    isDeclaredInRwd_h() { return true; }

    FieldIndex coord;
    FieldIndex direction;
    FieldIndex coordIndex;
};

class NodePolylineEmitter : public EmitterNode {
public:
                    NodePolylineEmitter(Scene *scene, Proto *proto);

    virtual int         getComponentLevel(void) const { return 1; }
    virtual int     getX3dVersion(void) const { return 2; } 
    virtual Node   *copy() const { return new NodePolylineEmitter(*this); }

    fieldMacros(SFNode,  coord,      ProtoPolylineEmitter);
    fieldMacros(SFVec3f, direction,  ProtoPolylineEmitter);
    fieldMacros(MFInt32, coordIndex, ProtoPolylineEmitter);
};

#endif
