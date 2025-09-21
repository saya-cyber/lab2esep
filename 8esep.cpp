#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int N;
	cout<<"N: ";cin>>N;
	int mass[N];
	for(int i =0;i<N;i++)
	{
		cout<<"mass["<<i<<"] = ";cin>>mass[i];
		
	}
	int max=mass[0];
	
	for(int i =1;i<N;i++)
	{
		if(mass[i]>max)
		{
			max = mass[i];
		}
	}
	cout<<"max: "<<max;
	return 0;
}
