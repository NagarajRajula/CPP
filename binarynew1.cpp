#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int rem[10];
int binary(int num)
{
   
 
    for(int i=0;num>=0;i++)
    {
        rem[i] = num % 2;
        num=num/2;
    }
     return 0;
}
 
/*void count(int a)
{
    for(i=0;)
}*/

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
        int b=binary(dec);
       // count(b);
        cout << endl;}
    return 0;}

