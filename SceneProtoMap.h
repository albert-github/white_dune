/*
 * SceneProtoMap.h
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

#ifndef _SCENE_PROTO_MAP_H
#define _SCENE_PROTO_MAP_H

#include "ProtoMap.h"

class Scene;

class SceneProtoMap {
public:                       
    static void        createProtoMap(ProtoMap *protoMap, Scene *scene, 
                                      bool add = true);
    static void        updateProtoMap(ProtoMap *protoMap, Scene *scene);
    static void        addOrReplace(ProtoMap *protos, const char *string,
                                    Proto *proto, bool add = true);
};

#endif
