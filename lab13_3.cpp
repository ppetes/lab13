#include<iostream>

using namespace std;

void mySwap(int &,int &); 

int main(){
	int x,y;
	cin >> x >> y;
	cout << "Before swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	mySwap (x,y);
	cout << "After swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	
	return 0;
}
int a,b;
void mySwap(int &x,int &y){
a = x;
b = y;

y = a;
x = b;


}