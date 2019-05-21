#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int temp = n;
	    int coefficient = 0;
	    while(temp)
	    {
	        coefficient  += temp/5;
	        temp = temp/5;
	    }
	    cout<<coefficient<<"\n";
	}
	return 0;
}

