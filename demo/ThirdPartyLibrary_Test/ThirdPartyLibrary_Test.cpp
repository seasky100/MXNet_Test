#include <iostream>
#include "openblas_test.hpp"

int main()
{
	int ret = test_openblas_1();

	if (ret == 0) fprintf(stdout, "====== test success ======\n");
	else fprintf(stderr, "###### test fail ######\n");
}