#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int N,last;
	cout<<"N = "; cin>>N;
	
	bool isTwoHave = false;
	while(N>0)
	{
		last = N%10;
		if(last==2)
			isTwoHave = true;
		N = (N-last)/10;	
	}
	
	if(isTwoHave)
		cout<<"true"<<endl;
	else
		cout<<"false"<<endl;	
	return 0;
}
