#include "mainComponent.hpp"

// -----------------------------------------------------------------------------
// Implementation of the primitive main.
// -----------------------------------------------------------------------------

int mainComponent::main(int argc, char **argv) {

	unsigned char zdata[5];
	unsigned char size=0;

	zigbeeitf->zInit();

	clusteritf->Init();
	clusteritf->serialize(&size, zdata);

	zigbeeitf->zDataRequest(zdata);

	return 0;
}
