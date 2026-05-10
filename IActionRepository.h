#pragma once
#include "clsActionLog.h"
#include <vector>

class IActionRepository
{
public:
	virtual void addAction(const clsActionLog& action) = 0;

	virtual std::vector<clsActionLog> getAllActions() const = 0;
};