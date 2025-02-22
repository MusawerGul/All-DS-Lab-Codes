
//2. Write C++ program to convert temperature from centigrade to Fahrenheit.
#include<iostream>
using namespace std;
class converttemperature{
public:
	float  centigrade,Fahrenheit;
	
public:
    void inputs() {
        cout << "Enter Temperature in Centigrades: ";
        cin >> centigrade;
    }
    void converter() {
        Fahrenheit = (centigrade * 9 / 5) + 32;
    }
    void display() {
        cout << "Converted Temperature From Centigrades To Fahrenheits is: " << Fahrenheit << "F" << endl;
    }
};
int main(){
	converttemperature c;
	c.inputs();
	c.converter();
	c.display();
	return 0;
}
