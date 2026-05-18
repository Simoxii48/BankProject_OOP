#pragma once
#include "clsBaseScreen.h"
#include "clsTrxService.h"
#include "clsClientService.h"
#include "clsUserService.h"

class clsDepositScreen : protected clsBaseScreen
{
public:
	void ShowDepositScreen(clsClientService& _clientService, clsTrxService& _trxService, const clsUserService& _userService);
};