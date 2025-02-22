//3. Write C++ program to build simple calculator using switch case statement.
#include<iostream>
using namespace std;
int main(){
	int num1,num2,result;
	cout<<"Enter 1st Number:";
	cin>>num1;
	cout<<"Enter 2nd Number:";
	cin>>num2;
	char opt;
	cout<<"Enter The Operator(*,+,-,/):";
	cin>>opt;
	switch(opt){
		case '*':
		result=num1*num2;
		cout<<"Multiplication of  num1 and num2 is:"<<result<<endl;
		break;
		case '-':
		result=num1-num2;
		cout<<"Subtraction of  num1 and num2 is:"<<result<<endl;
		break;
		case '+':
		result=num1+num2;
		cout<<"Addition of  num1 and num2 is:"<<result<<endl;
		break;
		case '/':
	    double result=num1/num2;
		cout<<"Division of  num1 and num2 is:"<<result<<endl;
		break;
	
	}
	return 0;
}