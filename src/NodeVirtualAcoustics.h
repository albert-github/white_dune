/*
 * NodeVirtualAcoustics.h
 *
 * Copyright (C) 1999 Stephen F. White, 2008 J. "MUFTI" Scheurich
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

// implements the VirtualAcoustics covise/cover plugin

#pragma once

#include "CoverNode.h"
#include "ProtoMacros.h"
#include "Proto.h"
#include "SFMFTypes.h"

class ProtoVirtualAcoustics : public Proto {
public:
                    ProtoVirtualAcoustics(Scene *scene);
    virtual Node   *create(Scene *scene);

    virtual int     getType() const { return COVER_VIRTUAL_ACOUSTICS; }

    FieldIndex soundSources;

    virtual bool          isCoverProto(void) { return true; }
};

class NodeVirtualAcoustics : public CoverNode {
public:
                    NodeVirtualAcoustics(Scene *scene, Proto *proto);

    virtual int     getX3dVersion(void) const { return -1; }    
    virtual Node   *copy() const { return new NodeVirtualAcoustics(*this); }

    fieldMacros(MFNode, soundSources, ProtoVirtualAcoustics)
};

