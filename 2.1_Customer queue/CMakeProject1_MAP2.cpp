
#include "CMakeProject1_MAP2.h"
#include <thread>
#include <iostream>



int main()
{
	std::thread c1(client);
	std::thread o1(operationist);

	if (c1.joinable()) {

		c1.join();
	}

	if (o1.joinable()) {

		o1.join();
	}


	return 0;
}
