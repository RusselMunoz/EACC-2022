#include <iostream>
#include <iomanip> // Required for output manipulators
using namespace std;

int main(){
	
	double x = 123.4567, y = 987.6547;
	
	cout << fixed << showpoint << setprecision(3);
	cout << "x is " << x << endl;
	cout << "y is " << y << endl;
	
	return 0;
}
