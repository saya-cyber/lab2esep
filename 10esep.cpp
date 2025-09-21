#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int X,N;
	cout<<"X: ";cin>>X;
	cout<<"N: ";cin>>N;
	int mass[N];
	for(int i =0;i<N;i++)
	{
		cin>>mass[i];
	}
	bool isTrue=false;
	for(int i =0;i<N;i++)
	{
		if(mass[i]==X)
			isTrue=true;
			
	}
	if(isTrue)
		cout<<"Bar";
	else
		cout<<"Joq";	
	
	return 0;
}
