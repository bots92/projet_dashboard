#include "treatment.h"

Treatment::Treatment() {
	// Nothing to do
}

Treatment::Treatment(Node *previousNode, Node *nextNode) : Path(previousNode, nextNode) {
	// Nothing to do as well
}

void Treatment::function(int arg) {
	int data = this->nextNode->add(-arg/2);
	this->nextNode->update(arg/2);
}

