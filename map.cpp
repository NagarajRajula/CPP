#include <iostream>
#include <map>

using namespace std;

int main ()
{
 // map<int,string>  m{ {1,”nikhilesh”} , {2,”shrikant”} , {3,”ashish”} };
	map <int,int> m { {1,2} , {2,3} , {3,4} };
  
  cout << m.at(1) ;  // prints value associated with key 1 ,i.e nikhilesh
  cout << m.at(2) ;  // prints value associated with key 2 ,i.e shrikant
  
  /* note that the parameters in the above at() are the keys not the index */

  cout << m[3] ;
}
