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

#include "eqlib/graphics/GraphicsEngine.h"
#include "eqlib/game/MathTypes.h"

namespace eqlib {

//============================================================================

//----------------------------------------------------------------------------
class CActorInterface;

//----------------------------------------------------------------------------
class CParticleSystemInterface
{
public:
	virtual void UpdateAllEmittersScalingRadius(CActorInterface*) = 0;
	virtual int LoadEmitterDefinitions() = 0;
};

//============================================================================
// ParticlePointInterface
//============================================================================

// The data behind CActorInterface::AddPointDefinition / GetParticlePointData.
class [[offsetcomments]] CParticlePointDefinition
{
public:
/*0x00*/ CXStr      Tag;
/*0x08*/ int        BoneIndex;
/*0x0c*/ CVector3   Translation;
/*0x18*/ CVector3   Rotation;       // EQ 512-unit angles
/*0x24*/ CVector3   Scale;
/*0x30*/ CMatrix44  Transform;      // built from Translation, Rotation and Scale
/*0x70*/
};

// A named attach point on an actor's model (e.g. R_POINT_DAG), see ActorClient::pParticlePoints.
class [[offsetcomments]] CParticlePointInterface
{
public:
/*0x00*/ virtual CXStr& GetName() = 0;
/*0x08*/ virtual CMatrix44& GetWorldSpaceMatrix() = 0; // refreshes from the bone or model first; row[3] is the world position
/*0x10*/ virtual CVector3& GetPositionOffset() = 0;     // the definition's Translation
};

//============================================================================
// Emitter
//============================================================================

struct SEmitterDefData;

class [[offsetcomments]] CEmitterInterface
{
public:
/*0x00*/ virtual void SetBoundingScale(float scale, const SEmitterDefData*) = 0;
/*0x08*/ virtual float GetBoundingScale() const = 0;
/*0x10*/ virtual float GetBoundingRadius() const = 0;
/*0x18*/ virtual void SetAlwaysVisible(bool) = 0;
/*0x20*/ virtual bool IsAlwaysVisible() const = 0;
/*0x28*/ virtual void SetLocation(const CVector3&) = 0;
/*0x30*/ virtual void SetOrientation(const CMatrix33&) = 0;
/*0x38*/ virtual void SetTransform(const CMatrix44&) = 0;
/*0x40*/ virtual void SetLifeRemaining(float) = 0;
/*0x48*/ virtual float GetLifeRemaining() const = 0;
/*0x50*/ virtual ~CEmitterInterface() {}
};

class [[offsetcomments]] CEmitter : public CEmitterInterface
{
public:
/*0x08*/ bool                     bInitialized;       // set once the particle buffer is allocated
/*0x09*/ uint8_t                  Unknown0x0009[0x10 - 0x09];
/*0x10*/ int                      MaxParticles;
/*0x14*/ uint8_t                  Unknown0x0014[0x3c - 0x14];
/*0x3c*/ CVector3                 Position;
/*0x48*/ CMatrix33                Orientation;
/*0x6c*/ uint8_t                  Unknown0x006c[0x70 - 0x6c];
/*0x70*/ CActorInterface*         pActor;
/*0x78*/ void*                    Unknown0x0078;      // position source, used ahead of pActor
/*0x80*/ CParticlePointInterface* pAttachPoint;       // when set, the emitter follows it every frame
/*0x88*/ void*                    pParticles;         // 0x80-byte particle records
/*0x90*/ void*                    pParticlesEnd;      // pParticles + MaxParticles records
/*0x98*/ uint8_t                  Unknown0x0098[0xc8 - 0x98];
/*0xc8*/
};

// Returned by CSceneGraph::CreateParticleCloudInstance.
class [[offsetcomments]] CParticleCloudInterface
{
public:
/*0x00*/ virtual ~CParticleCloudInterface() {}
/*0x08*/ virtual CEmitterInterface* GetEmitterInterface() const = 0;
};

//============================================================================

} // namespace eqlib
