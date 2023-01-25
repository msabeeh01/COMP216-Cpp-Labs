#include <iostream>
using namespace std;

class hanoitower
{
public:
	void move(int n, int from, int to, int temp) {
		if (n == 0) return;

		//move pieces from original to temp peg, using to peg as holding area
		move(n - 1, from, temp, to);

		//print out move made
		cout << "Move disk " << n << " from peg: " << from << " to peg: " << to << endl;

		//move pieces from temp peg to target peg, using original peg as holding area
		move(n - 1, temp, to, from);
	}

};

