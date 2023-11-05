#include "Swap.h"

namespace own {

	void swap_lock(Data& alfa, Data& betta) {

		alfa.get_mutex().lock();
		betta.get_mutex().lock();

		Data temp = std::move(betta);
		betta = alfa;
		alfa = temp;

		alfa.get_mutex().unlock();
		betta.get_mutex().unlock();
	}

	void swap_scopedlock(Data& alfa, Data& betta) {

		std::scoped_lock sl(alfa.get_mutex(), betta.get_mutex());

		Data temp = std::move(betta);
		betta = alfa;
		alfa = temp;
	}

	void swap_uniquelock(Data& alfa, Data& betta) {

		std::unique_lock ulalfa(alfa.get_mutex(), std::defer_lock);
		std::unique_lock ulbetta(betta.get_mutex(), std::defer_lock);

		Data temp = std::move(betta);
		betta = alfa;
		alfa = temp;

		std::lock(ulalfa, ulbetta);
	}
}