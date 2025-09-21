#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int N,fact=1;
	cout<<"N: ";cin>>N;
	for(int i =1;i<N+1;i++)
	{
		fact=fact*i;
	}
	cout<<"fact: "<<fact;
	return 0;
}
