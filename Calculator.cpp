#include<iostream>
using namespace std;
class calculator{
	public:
		int num1, num2;
		
		void input(){
			cout<<"Enter num1:";
			cin>>num1;
			cout<<"Enter num2:";
			cin>>num2;
			
		}
	
	void add(){
		cout<<"The addition is: "<<num1+num2;
	}
	void sub(){
		cout<<"The subtraction is: "<<num1-num2;
	}
	void mul(){
		cout<<"The multiplication is: "<<num1*num2;
	}
	void div(){
		cout<<"The Division is: "<<num1/num2;
	}
	
};

int main(){
	
	calculator obj;
	obj.input();
	char opr;
	cout<<"Enter Opr(+,-,*,/):";
		cin>>opr;
	
	if (opr=='+'){
		obj.add();
	}
	else if (opr=='-'){
		obj.sub();
	}
	else if(opr=='*'){
		obj.mul();
	}
	else if(opr=='/'){
		obj.div();
	}
	
	return 0;
}
  