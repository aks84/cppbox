#include <iostream>
#include <string>

using namespace std;

int A[5]={23,35,56,43,23};

void inter(int A[], int n){
	for (int i = 0; i < n; ++i)
	{
		cout<<i<<" : "<<A[i]<<endl;
	}
}

int main()
{

 
inter(A,5);
 


return 0;
}
