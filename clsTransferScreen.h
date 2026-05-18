#pragma once
#include "clsBaseScreen.h"
#include "clsClientService.h"
#include "clsTrxService.h"
#include "clsUserService.h"


class clsTransferScreen : protected clsBaseScreen
{
public:
	void ShowTransferScreen(clsClientService& _clientService, clsTrxService& _trxService, const clsUserService& _userService);
};