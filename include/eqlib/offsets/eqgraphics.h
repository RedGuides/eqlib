/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-present MacroQuest Authors
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2, as published by
 * the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#pragma once

//
// EQGraphics.dll offsets
//

#define __eqgraphics_fopen_x                                       0x180285ED4

#define CEQGBitmap__GetFirstBitmap_x                               0x180003250

#define CParticleSystem__Render_x                                  0x1800B3FE0
#define CParticleSystem__CreateSpellEmitter_x                      0x1800A3A80

#define CRender__RenderScene_x                                     0x1800DC1B0
#define CRender__RenderBlind_x                                     0x1800DC070
#define CRender__ResetDevice_x                                     0x1800DCD20
#define CRender__UpdateDisplay_x                                   0x1800DDFD0
#define __bRenderSceneCalled_x                                     0x180379430

#define C2DPrimitiveManager__AddCachedText_x                       0x1800F6C50
#define C2DPrimitiveManager__Render_x                              0x1800F7DF0

#define ObjectPreviewView__Render_x                                0x180026870

#define EQGraphics_DebugAPI_Ptr_x                                  0x1803DFDC8

#if __has_include("../../../../private/eqgraphics-private.h")
#include "../../../../private/eqgraphics-private.h"
#endif
