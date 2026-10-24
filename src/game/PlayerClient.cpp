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

#include "pch.h"

#include "eqlib/game/EverQuest.h"
#include "eqlib/game/Globals.h"
#include "eqlib/game/PlayerClient.h"

namespace eqlib {

//============================================================================
// PlayerClient
//============================================================================

const char* PlayerClient::GetClassString() const
{
	return pEverQuest->GetClassDesc(GetClass());
}

const char* PlayerClient::GetClassThreeLetterCode() const
{
	return pEverQuest->GetClassThreeLetterCode(GetClass());
}

const char* PlayerClient::GetRaceString() const
{
	return pEverQuest->GetRaceDesc(GetRace());
}

PlayerClient* PlayerClient::GetEncounterLockOwner() const
{
	if (LockID == 0 || !pSpawnManager)
	{
		return nullptr;
	}

	PlayerHashTable& hashtable = pSpawnManager->m_hashTable;
	for (PlayerHashTable::Node* node = hashtable.m_table[LockID % hashtable.TABLE_SIZE]; node; node = node->m_next)
	{
		if (node->m_hashKey == LockID)
		{
			return node->m_value;
		}
	}

	return nullptr;
}

} // namespace eqlib
