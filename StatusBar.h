/*
 * StatusBar.h
 *
 * Copyright (C) 1999 Stephen F. White
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

#ifndef _STATUS_BAR_H
#define _STATUS_BAR_H

#ifndef _SCENE_VIEW_H
#include "SceneView.h"
#endif

typedef struct SStatusBar *SSTATUSBAR;

class StatusBar : public SceneView {
public:
                        StatusBar(Scene *scene, SWND wnd);
                       ~StatusBar();

    virtual void        OnSize(int width, int height);


    const char         *getName(void) const { return "StatusBar"; }

    void                SetText(const char *text);
    const char         *GetText() const;

private:
    SceneView          *m_parent;
    SSTATUSBAR          m_bar;
};

#endif // _STATUS_BAR_H
