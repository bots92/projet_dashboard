#include <iostream>

#include "data.h"
#include "treatment.h"

int main(void) {

    Data *A = new Data();
    Data *B = new Data();
    Data *C = new Data();

    Treatment *p1 = new Treatment(A, B);
    Treatment *p2 = new Treatment(B, C);
    Treatment *p3 = new Treatment(A, C);

	A->addPath(p1);
	A->addPath(p3);
	B->addPath(p2);

	std::cout << "Hello World !" << std::endl;
	return 0;
}
