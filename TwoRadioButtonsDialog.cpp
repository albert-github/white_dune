/*
 * TwoRadioButtonsDialog.cpp
 *
 * Copyright (C) 1999 Stephen F. White, 2006 J. "MUFTI" Scheurich
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

#include "stdafx.h"
#include "TwoRadioButtonsDialog.h"
#include <stdio.h>
#include <stdlib.h>
#include "swt.h"
#include "resource.h"

TwoRadioButtonsDialog::TwoRadioButtonsDialog(SWND parent, int idd, 
                                             bool setFirstButton)
  : Dialog(parent, idd)
{
    m_value = setFirstButton;
    LoadData();
}

TwoRadioButtonsDialog::~TwoRadioButtonsDialog()
{
}

void
TwoRadioButtonsDialog::SaveData()
{
    m_value = swGetCheck(swGetDialogItem(m_dlg, IDC_RADIO_BUTTON_1));
}

void
TwoRadioButtonsDialog::LoadData()
{
    swSetCheck(swGetDialogItem(m_dlg, IDC_RADIO_BUTTON_1), m_value);
    swSetCheck(swGetDialogItem(m_dlg, IDC_RADIO_BUTTON_2), !m_value);
}

