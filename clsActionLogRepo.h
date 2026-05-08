#pragma once
#include "IActionRepository.h"
#include "clsActionLog.h"
#include <vector>
#include <string>

class clsActionLogRepo : public IActionRepository
{
	std::string _fileName;
	std::string _Delim = "#//#";
	
	std::string _convertObjectActionToStringRecord(const clsActionLog& actionLog) const;

	clsActionLog _convertStringRecordToActionLog(const std::string& record) const;

public:
	explicit clsActionLogRepo(const std::string& fileName);

	void addAction(const clsActionLog& actionLog) override;

	std::vector<clsActionLog> getAllActions() const override;
};