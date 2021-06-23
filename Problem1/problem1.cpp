
#include <iostream>
using namespace std;

/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/

int Problem1( int input ) {
	int sum = 0;
	for (int i = 0; i < input; i++) {
		if (!(i % 3)) {
			sum += i;
		}
		if (!(i % 5)) {
			sum += i;
		}
		if (!(i % 15)) {
			sum -= i;
		}
	}
	return sum;
}

int main(){
    cout << Problem1(1000) << endl ;
}