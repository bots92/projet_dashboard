#include "data.h"

Data::Data():Node() {
	// Nothing to do
}

void Data::add(int val) {
	this->data += val;
	this->update(val);
}

void Node::update(int val) {
    for(int i = 0 ; i < this->paths->size() ; i++) {
        //this->paths[i]->function(val);
        std::list<Path*>::iterator it = std::next(this->paths->begin(), i);
        it.reference->function(val);
    }
}
