#include "Data.h"

void Data::operator=(Data& other) {

	iVal_ = other.iVal_;
	dVal_ = other.dVal_;
}

void Data::operator=(Data&& other) noexcept {

	iVal_ = other.iVal_;
	dVal_ = other.dVal_;
}

void Data::view() {

	mutex.lock();

	std::cout << "int: " << iVal_ << '\n' << "double: " << dVal_ << std::endl;

	mutex.unlock();
}

std::mutex& Data::get_mutex() {
	return mutex;
}
