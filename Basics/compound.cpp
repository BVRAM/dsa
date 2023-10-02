#include <iostream>
using namespace std;

int main(){
	
	int x=1;
	int y=3;
	
	x+=1;
	y-=1;
	cout << x << "  " << y;
	cout << endl;
	x*=y;
	y/=x;
	cout << x << "  " << y;
	
	return 0;
}
