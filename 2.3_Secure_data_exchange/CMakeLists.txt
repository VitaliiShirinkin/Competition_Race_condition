cmake_minimum_required (VERSION 3.22)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project ("Secure_data_exchange")

add_executable (Secure_data_exchange "Secure_data_exchange.cpp"  "Data.h" "Data.cpp" "Swap.h" "Swap.cpp")

