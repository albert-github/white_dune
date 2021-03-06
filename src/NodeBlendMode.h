/*
 * NodeBlendMode.h
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

#pragma once

#include "Node.h"
#include "ProtoMacros.h"
#include "Proto.h"
#include "SFMFTypes.h"
#include "KambiCommonFunctions.h"

class ProtoBlendMode : public Proto {
public:
                    ProtoBlendMode(Scene *scene);
    virtual Node   *create(Scene *scene);

    virtual int     getType() const { return KAMBI_BLEND_MODE; }

    FieldIndex srcFactor;
    FieldIndex destFactor;
    FieldIndex color;
    FieldIndex colorTransparency;
    //X3DOM extensions
    FieldIndex alphaFunc;
    FieldIndex alphaFuncValue;
    FieldIndex equation;

    virtual bool    isKambiProto(void) { return true; }
    virtual bool    isX3domProto(void) { return true; }
};

class NodeBlendMode : public Node {
public:
                    NodeBlendMode(Scene *scene, Proto *proto);

    virtual Node   *copy() const { return new NodeBlendMode(*this); }

    kambiCommonFunctions()

    fieldMacros(SFString, srcFactor,         ProtoBlendMode);
    fieldMacros(SFString, destFactor,        ProtoBlendMode);
    fieldMacros(SFColor,  color,             ProtoBlendMode);
    fieldMacros(SFFloat,  colorTransparency, ProtoBlendMode);
    fieldMacros(SFString, alphaFunc,         ProtoBlendMode);
    fieldMacros(SFFloat,  alphaFuncValue,    ProtoBlendMode);
    fieldMacros(SFString, equation,          ProtoBlendMode);

};


