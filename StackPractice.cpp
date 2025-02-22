#include<iostream>
#include <stack>
using namespace std;


int main(){
	
stack<string> cars;


cars.push("Volvo");
cars.push("Dukati");
cars.push("Mehran");
cars.push("Ferrari");
cars.push("Range Rowers");

cars.top()="Tesla";
cars.top()="Mazdah";

cars.pop();

cout<< cars.size();



cout<< cars.top();
return 0;
}