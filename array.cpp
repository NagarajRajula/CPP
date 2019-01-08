#include<iostream>
using namespace std;

int main()
{
	int i, n;
    float arr[100];

    cout << "Enter total number of elements(1 to 100): ";
    cin >> n;
    cout << endl;
	
	 for(i = 0; i < n; ++i)
    {
       cout << "Enter Number " << i + 1 << " : ";
       cin >> arr[i];
    }
    
    for(int j=n-1;j>=0;j--)
    {
    	cout<<arr[j]<<" ";
	}
}
