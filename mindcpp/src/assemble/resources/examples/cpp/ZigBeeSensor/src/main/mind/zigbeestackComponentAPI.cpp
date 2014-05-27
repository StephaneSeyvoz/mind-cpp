
// -----------------------------------------------------------------------------
// Implementation of the primitive zigbeestackComponentAPI.
// -----------------------------------------------------------------------------


#include "zigbeestackComponentAPI.adl.hpp"


void zigbeestackComponentAPI::DataRequest(unsigned char*a_data) {
	return afitf.DataRequest(a_data);
}

void zigbeestackComponentAPI::Init(void ) {
	return sysitf.Init();
}
