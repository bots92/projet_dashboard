#include <iostream>

#include "node.h"
#include "path.h"

class Treatment : public Path {
	public :
		Treatment();
		Treatment(Node *previousNode, Node *nextNode);
		~Treatment();
		
		void function(int arg);

	protected :

	private :
};
