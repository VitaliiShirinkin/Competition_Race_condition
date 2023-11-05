#pragma once
#include <iostream>
#include <mutex>

class Data {

public:
	Data(int& iVal, double& dVal):iVal_(iVal), dVal_(dVal){}
	Data(int&& iVal, double&& dVal) :iVal_(iVal), dVal_(dVal) {}
	Data(Data& other) :iVal_(other.iVal_), dVal_(other.dVal_) {}
	Data(Data&& other) noexcept :iVal_(other.iVal_), dVal_(other.dVal_) {}
	void operator=(Data& other);
	void operator=(Data&& other) noexcept;

	void view();
	std::mutex& get_mutex();
private:
	int iVal_ = 0;
	double dVal_ = 0;
	std::mutex mutex;
};
