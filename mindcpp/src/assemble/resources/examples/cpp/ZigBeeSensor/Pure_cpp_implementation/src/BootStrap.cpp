#include "ZigBeeSensor.hpp"

int main(int argc, char *argv[]) {
	int r;
	ZigBeeSensor ZigBeeSensorInstance;
	// call the "main" entry point of the application
	r = ZigBeeSensorInstance.mainComponentInstance.main(argc, argv);

	return r;
}

