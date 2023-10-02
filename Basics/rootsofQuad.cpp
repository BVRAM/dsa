#include <iostream>
#include <cmath>
using namespace std;

int main(){
	// find root of quadratic equation
	int a,b,c,root1,root2;
	cout << "Enter the values of a" << endl;
  cin >> a;
	cout << "Enter the values of b" << endl;
  cin >> b;
  cout << "Enter the values of c" << endl;
  cin >> c;
  root1 = (-b+(sqrt(b*b - (4*a*c))))/(2*a);
  root2 = (-b-(sqrt(b*b - (4*a*c))))/(2*a);
  cout << "The roots are : " <<endl;
  cout << "root1 : " << root1<<endl;
  cout << "root2 : " << root2<<endl;
}
