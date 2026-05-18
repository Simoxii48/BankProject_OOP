#pragma once
#include "clsBaseScreen.h"
#include "clsClientService.h"
#include "clsTrxService.h"
#include "clsUserService.h"


class clsWithdrawScreen : protected clsBaseScreen
{
public:
	void ShowWithdrawalScreen(clsClientService& _clientService, clsTrxService& _trxService, const clsUserService& _userService);
};