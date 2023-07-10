#include<iostream>

using namespace std;

int main()
{

	int n;
	cin>>n; // take input
	int num,exor=0;
	for(int i=0;i<n;i++)
	{

	cin>>num;
	exor^=num; // performing xor of elements
	
	}
	if(exor==0)

		cout<<"1";
	else

		cout<<"0";
	
	return 0;
}
