/////////////////////////////////////////////////////////////////////////////////////////////////////
//Name: Eddie G. Pineda										   //
//Date: 10/22/2022										   //
//Program Statement: Create a program to solve Ackermann's Function. Use the following logic:      //
//                          If m = 0 then   return n + 1                                           //
//                          If n = 0 then   return A(m-1,1)                                        //
//                          Otherwise,      return A(m-1,A(m,n-1))                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <iomanip>
using namespace std;

int ackermannFunc(int m, int n); //Function prototype to solve Ackermann's Function

int main() {
	int n1, n2; //Integer variables to store two numbers for the Ackermann Function

	cout << "Please enter two numbers in the following format '1 2': " << flush;
	cin >> n1 >> n2; //Stores the two numbers for the Ackermann Function

	cout << ackermannFunc(n1, n2) << endl; //Outputs the result of the function

	return 0;
}

int ackermannFunc(int m, int n) { //Function definition for Ackermann's Function
	//Logic as described by the problem statement:
	if (m == 0) {
		return n + 1;
	}
	else if (n == 0) {
		return ackermannFunc(m - 1, 1);
	}
	else {
		return ackermannFunc(m - 1, ackermannFunc(m, n - 1));
	}
}
