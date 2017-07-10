/*
    This file is part of L2Extend.

    L2Extend is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    L2Extend is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with L2Extend.  If not, see <http://www.gnu.org/licenses/>.

	You May Not Make Commercial Use of any of our content, and any kind
	of newer implementations will be need to be shared and commited.
*/

#include "COPCondition_on_siege.h"
#include "CCreature.h"

INT32 nCOPCondition_on_siege = 0;
bool COPCondition_on_siege::CanUse(CCreature *pSkillUser, CObject *pTargetObject)
{
	L2SERVER_SHARED_GUARD(nCOPCondition_on_siege);
	TLS_TRACE_BEGIN;

	bool bResult = false;

	if (CCreature* pCaster = pSkillUser->AsCreature())
	{
		bResult = pCaster->bOnBattlefield;
	}

	TLS_TRACE_END;
	return bResult;
}