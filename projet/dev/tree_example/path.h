#ifndef PATH_H
#define PATH_H

#include <iostream>

class Node;

class Path {
	public :
		Path();
		Path(Node *previousNode, Node *nextNode);
		~Path();

        virtual void function(int val);
		
	protected :
		Node *previousNode;
		Node *nextNode;
		
	private :
};

#endif
