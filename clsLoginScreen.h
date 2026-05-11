#pragma once
#include "clsBaseScreen.h"
#include "clsClientService.h"
#include "clsUserService.h"
#include "clsTrxService.h"
#include "clsCurrencyService.h"

class clsLoginScreen : protected clsBaseScreen
{
	void _pressKey();
public:
	void showLoginScreen(clsClientService& _clientService, clsTrxService& _trxService, clsUserService& _userService, clsCurrencyService& _currencyService);
};