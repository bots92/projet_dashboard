#include <iostream>

#include "node.h"

class Data : public Node {
	public :
		Data();
		~Data();
		void add(int val);
        void update(int arg);

	protected :

	private :
		int data;
};
