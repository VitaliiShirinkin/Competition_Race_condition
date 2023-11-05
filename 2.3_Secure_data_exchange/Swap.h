#pragma once
#include <mutex>
#include "Data.h"

namespace own {

	void swap_lock(Data& alfa, Data& betta);
	void swap_scopedlock(Data& alfa, Data& betta);
	void swap_uniquelock(Data& alfa, Data& betta);
}