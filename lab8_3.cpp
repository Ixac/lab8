#include<iostream>
using namespace std;

char before(char x){
	//Write your function definition here
	char op;
	op=x-1;
	if(x>='A' and x<='Z')
		{if(x=='A')
			{
				return 'Z';
			}else
			{
				return op;
			}
		
		}
	else{
		return '0';
	}
		
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
	
