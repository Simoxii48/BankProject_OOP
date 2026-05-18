#pragma once
#include "clsBaseScreen.h"
#include "clsTransaction.h"
#include <string>
#include "clsTrxService.h"
#include "clsUserService.h"


class clsTransactionsLogScreen : protected clsBaseScreen
{
	void _printFormatedTrx(const clsTransaction& service) const;
	std::string _getTrxType(const enType& type) const;
public:
	void ShowTransactionsLogScreen(clsTrxService& _trxService, const clsUserService& _userService);
};