 ///
 /// @file    main.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-21 16:23:59
 ///
 
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int val,sum=0;
	while(std::cin>>val)
	{
		sum+=val;
	}
	cout<<sum<<endl;
}
