#include<iostream>
using namespace std;
 
void binary(int num)
{
    int rem[10];
 
    for(int i=0;num>=0;i++)
    {
        rem[i] = num % 2;
        num=num / 2;
    }
        cout << rem;
}
 
int main()
{
    int dec, bin;
    //cout << "Enter the number : ";
    cin >> dec;
     if (dec < 0)
        cout << dec << endl;
    else
    {
        //cout<< dec;
        binary(dec);
        cout << endl;}
    return 0;}

