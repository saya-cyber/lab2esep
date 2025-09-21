#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int N,sum=0;
	cout<<"N: ";cin>>N;
	int mass[N];
	for(int i =0;i<N;i++)
	{
		cout<<"mass["<<i<<"] = ";cin>>mass[i];
	}
	for(int i =0;i<N;i++)
	{
		sum+=mass[i];
	}
	cout<<"sum: "<<sum;
	return 0;
}
