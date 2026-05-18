#pragma once
#include "clsClientService.h"
#include "clsTrxService.h"
#include "clsUserService.h"
#include "clsCurrencyService.h"

class clsStartApp
{
public:
	void startApp(clsClientService& _clientService, clsTrxService& _trxService, clsUserService& _userService,clsCurrencyService& _currencyService);
};