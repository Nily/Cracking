#include<iostream>
#include<string>

using namespace std;

bool isSubstring(string s, string t)
{
	if(s.find(t) != s.npos)
		return true;
	else
		return false;
}
bool isRotation(string s, string t)
{
	if(s.length() != t.length() || s.length() <= 0)
		return false;
	return isSubstring(s+t,t);
}
/*
int main()
{
	string s,t;
	while(cin>>s>>t)
	{
		cout<<"rotation is "<<isRotation(s,t);
	}
	return 0;
}
*/