#include <iostream>
using namespace std;

int main(){
	
	int x=5;
	int y=10;
	cout << x << " " << y << endl;
	int a = x++;
	int b = ++y;
	
	cout << x << " " << y << endl;
	cout << a << endl;
	cout << b << endl;
	
	cout << x << " " << y << endl;
	int c = x+++2;
	int d = ++y+2;
	
	cout << c << endl;
	cout << d << endl;
	
	return 0;
}
