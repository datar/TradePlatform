#pragma once
#include <Windows.h>

#include "futu_data_types.h"
#include "futu_message_interface.h"
#include "futu_sdk_interface.h"

#include "CTimeCounter.h"
#include "MessageFlow.h"
#include "SystemType.h"

#define pause _getch

//Global names for HengSheng system
static const char* const HS_FIELD_FUTU = "futu";
//static const char* const HS_SECTION_

//Global
extern CTimeCounter g_Counter;
extern MessageFlow Messages;

