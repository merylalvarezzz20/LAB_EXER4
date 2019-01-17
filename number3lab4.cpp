#include <iostream>
using namespace std;

int main() {
	int meryl[5];
	int*ptr = meryl; 
	
	cout<<"1st number:";
	cin >>meryl[0];
	cout<<"1st number:";
	cin >>meryl[1];
	cout<<"1st number:";
	cin >>meryl[2];
	cout<<"1st number:";
	cin >>meryl[3];
	cout<<"1st number:";
	cin >>meryl[4];
	
	for(int i = 0; i <=4; i++){
		cout<<*ptr<<endl;
		ptr++;
	}
	return 0;
}
