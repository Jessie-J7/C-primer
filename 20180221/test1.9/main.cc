 ///
 /// @file    main.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-21 16:14:57
 ///
 
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int val=50,sum=0;
	while(val<=100)
	{
		sum+=val;
		val++;
	}
	cout<<sum<<endl;
}
