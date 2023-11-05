
cmake_minimum_required (VERSION 3.8)


project ("CMakeProject1_MAP2")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (CMakeProject1_MAP2 "CMakeProject1_MAP2.cpp" "CMakeProject1_MAP2.h")

target_compile_features (CMakeProject1_MAP2 PRIVATE cxx_std_17)

