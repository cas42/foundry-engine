//engine.h
#ifndef ENGINE_H
#define ENGINE_H

class Engine {
public:
	bool initialize();
	void run();
	void stop();
private:
	bool isRunning;
	void update(float deltaTime);

};

#endif
