// Task 2.3 Secure_data_exchange.cpp

#include "Swap.h"
#include <iostream>
#include <Windows.h>
#include <thread>


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Data alfa(15, 0.55);
	Data betta(4, 0.21);

	std::cout << "До\n" << "Первый объект:" << std::endl;
	std::thread viewAlfaThBefore(&Data::view, alfa);
	viewAlfaThBefore.join();

	std::cout << "Второй объект:" << std::endl;
	std::thread viewBettaThBefore(&Data::view, betta);
	viewBettaThBefore.join();

	std::thread swap_th(own::swap_uniquelock, std::ref(alfa), std::ref(betta));
	swap_th.join();

	std::cout << "\nПосле\n" << "Первый объект:" << std::endl;
	std::thread viewAlfaThAfter(&Data::view, alfa);
	viewAlfaThAfter.join();

	std::cout << "Второй объект:" << std::endl;
	std::thread viewBettaThAfter(&Data::view, betta);
	viewBettaThAfter.join();

	return 0;
}
