//engine.cpp
#include <iostream>
#include <chrono>
#include <string>
#include <algorithm>
#include "engine.h"

bool Engine::_initialize() {
	std::cout <<"Engine initializing.\n";
	Engine::_quit = false;
	Engine::_run();
	return true;
};

void Engine::_run() {
	double t = 0.0;
	double dt = 1 / 60.0;
	double accumulator = 0.0;
	
	using clock = std::chrono::steady_clock;
	using duration = std::chrono::duration<double>;

	//Gets seconds from after engine start
	auto start_time = clock::now();
	auto getSeconds = [&]() {
	return duration(clock::now() - start_time).count();
		};

	auto currentTime = getSeconds();

	while (!_quit) {		
		auto newTime = getSeconds();
		auto frameTime = newTime - currentTime;
		currentTime = newTime;

		if (frameTime > 0.25) frameTime = 0.25;

		accumulator += frameTime;

		//Fixed timestep runs physics loop at 60hz
		while (accumulator >= dt) {
			_physics_process(frameTime);
			t += dt;
			accumulator -= dt;

		}

		_process(frameTime);
	}

};

void Engine::_stop() {

};


void Engine::_process(deltaTime) {

};

void Engine::_physics_process(deltaTime) {

};
