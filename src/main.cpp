#include <iostream>
#include "engine.h"

int main() {
	Engine newEngine;
	if (!newEngine.initialize()) {
		std::cout <<"Failure!\n";
		return -1;
	}

	std::cout << "Engine initialized successfully.\nl";

	return 0;
}
