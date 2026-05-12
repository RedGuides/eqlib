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

#define __eqgraphics_fopen_x                                       0x1802812b8

#define CEQGBitmap__GetFirstBitmap_x                               0x180003250

#define CParticleSystem__Render_x                                  0x1800b2e10
#define CParticleSystem__CreateSpellEmitter_x                      0x1800a2a20

#define CRender__RenderScene_x                                     0x1800dae30
#define CRender__RenderBlind_x                                     0x1800dacf0
#define CRender__ResetDevice_x                                     0x1800db9a0
#define CRender__UpdateDisplay_x                                   0x1800dcba0
#define __bRenderSceneCalled_x                                     0x18036f610

#define C2DPrimitiveManager__AddCachedText_x                       0x1800f57c0
#define C2DPrimitiveManager__Render_x                              0x1800f6960

#define ObjectPreviewView__Render_x                                0x1800277e0

#define EQGraphics_DebugAPI_Ptr_x                                  0x1803d5fa8

#if __has_include("../../../../private/eqgraphics-private.h")
#include "../../../../private/eqgraphics-private.h"
#endif
