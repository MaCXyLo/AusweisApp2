/*!
 * \copyright Copyright (c) 2016-2020 Governikus GmbH & Co. KG, Germany
 */

#include "MsgHandlerInfo.h"

#include "VersionInfo.h"

using namespace governikus;

MsgHandlerInfo::MsgHandlerInfo()
	: MsgHandler(MsgType::INFO)
{
	mJsonObject[QLatin1String("VersionInfo")] = VersionInfo::getInstance().toJsonObject();
}
