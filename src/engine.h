#ifndef ENGINE_H
#define ENGINE_H

class Engine {
public:
	bool _initialize();
	void _run();
	void _process();
	void _physics_process();
	void _stop();
private:
	bool _quit;

};

#endif
