 ///
 /// @file    main.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-22 11:26:42
 ///
 
#include <iostream>
#include <cstring>
using std::cout;
using std::endl;
using std::string;
int main()
{
	string s1("some thing");
	for(char &c : s1)
	{
		c='X';
	}
	cout<<s1<<endl;
	return 0;
}
