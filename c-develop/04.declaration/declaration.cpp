#include <iostream> //import input output
using namespace std; //so that function cout, cin and other can be read

int main(){
	
	int x;  //declare a variable x
	x = 10; //initial value of variable x
	cout << x << endl; //print variable x

	int y;
	cout << "Input value : ";
	cin >> y; //function input value
	cout << "the value your input is: ";
	cout << y << endl;

	cin.get();
	return 0;
}