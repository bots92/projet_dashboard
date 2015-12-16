#include "path.h"

Path::Path() {
	this->previousNode = NULL;
	this->nextNode     = NULL;
}

Path::Path(Node *previousNode, Node *nextNode) {
	this->previousNode = previousNode;
	this->nextNode     = nextNode;
}
