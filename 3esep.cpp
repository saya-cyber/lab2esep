#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int N,sum=0;
	cout<<"N: ";cin>>N;
	for(int i =1;i<N+1;i++)
	{
		sum+=i;
	}
	cout<<"sum: "<<sum;
	
	return 0;
}
