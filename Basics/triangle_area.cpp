#include <iostream>;
using namespace std;
int main() {
    int b,h;
    cout << "Enter breadth and heigh of triangle :" << endl;
    cin >> b >> h;
    
    int area = (float)(b*h)/2;
    
    cout << "Area of Triangle : " << area << endl;
    return 0;
}
