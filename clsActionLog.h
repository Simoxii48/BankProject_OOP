#pragma once
#include <string>

class clsActionLog
{
private:
	std::string _user, _action, _time;
public:
	clsActionLog(const std::string& user, const std::string& action, const std::string& time);

	// Getters
	const std::string& user() const;
	const std::string& action() const;
	const std::string& timeStamp() const;

	// Destructor
	~clsActionLog() = default;
};