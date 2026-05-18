#pragma once
#include "clsBaseScreen.h"
#include "clsUserService.h"
#include "clsActionLog.h"


class clsViewActionsLogScreen : protected clsBaseScreen
{
	void _printActionsLog(const clsActionLog& _actionLog) const;
	void _printActionsLogHeader() const;
public:
	void ShowViewActionsLogScreen(clsUserService& _userService);
};