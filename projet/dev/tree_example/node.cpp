#include "node.h"

Node::Node() {
	this->paths = new std::list<Path*>();
}

void Node::addPath(Path *path) {
	this->paths->push_back(path);
}
