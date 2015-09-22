/******************************************************************************
 * Icinga 2                                                                   *
 * Copyright (C) 2012-2015 Icinga Development Team (http://www.icinga.org)    *
 *                                                                            *
 * This program is free software; you can redistribute it and/or              *
 * modify it under the terms of the GNU General Public License                *
 * as published by the Free Software Foundation; either version 2             *
 * of the License, or (at your option) any later version.                     *
 *                                                                            *
 * This program is distributed in the hope that it will be useful,            *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of             *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the              *
 * GNU General Public License for more details.                               *
 *                                                                            *
 * You should have received a copy of the GNU General Public License          *
 * along with this program; if not, write to the Free Software Foundation     *
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.             *
 ******************************************************************************/

#include "icinga/customvarobject.hpp"
#include "icinga/customvarobject.tcpp"
#include "icinga/macroprocessor.hpp"
#include "base/logger.hpp"
#include "base/function.hpp"
#include "base/exception.hpp"
#include "base/objectlock.hpp"

using namespace icinga;

REGISTER_TYPE(CustomVarObject);

int CustomVarObject::GetModifiedAttributes(void) const
{
	//TODO-MA
	return 0;
}

void CustomVarObject::SetModifiedAttributes(int, const MessageOrigin::Ptr&)
{
	//TODO-MA
}

bool CustomVarObject::IsVarOverridden(const String& name) const
{
	//TODO: implement
	return false;
}

void CustomVarObject::ValidateVars(const Dictionary::Ptr& value, const ValidationUtils& utils)
{
	MacroProcessor::ValidateCustomVars(this, value);
}
