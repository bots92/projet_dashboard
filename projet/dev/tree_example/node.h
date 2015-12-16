#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <list>

#include "path.h"

class Node {
	public :
		Node();
		~Node();

		void addPath(Path* path);
        virtual void update(int arg);

	protected :
		std::list<Path*> *paths;

	private :
};

#endif
