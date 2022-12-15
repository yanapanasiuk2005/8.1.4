#include <iostream>
#include <string>
using namespace std;
int Count(const string str, const char c)
{
	size_t pos = 0;
	int k = 0;
	while ((pos = str.find(c, pos)) != -1)
	{
		k++;
		pos++;
	}
	return k;
}
int Count2(const string str, const char d)
{
	size_t pos = 0;
	int k = 0;
	while ((pos = str.find(d, pos)) != -1)
	{
		k++;
		pos++;
	}
	return k;
}
int Count3(const string str, const char f)
{
	size_t pos = 0;
	int k = 0;
	while ((pos = str.find(f, pos)) != -1)
	{
		k++;
		pos++;
	}
	return k;
}
string Change(string& s)
{
	size_t pos = 0;
	while ((pos = s.find('+', pos)) != -1) {
		if (s[pos + 1] == '+') {
			s.replace(pos, 2, "***");
			pos += 2;
		}
		else pos += 1;
	}
	return s;
}
string Change1(string& dest)
{
	size_t pos = 0;
	while ((pos = dest.find('-', pos)) != -1) {
		if (dest[pos + 1] == '-') {
			dest.replace(pos, 2, "***");
			pos += 2;
		}
		else pos += 1;
	}
	return dest;
}
string Change2(string& dest1)
{
	size_t pos = 0;
	while ((pos = dest1.find('=', pos)) != -1) {
		if (dest1[pos + 1] == '=') {
			dest1.replace(pos, 2, "***");
			pos += 2;
		}
		else pos += 1;
	}
	return dest1;
}
int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	char c = '+';
	char d = '-';
	char f = '=';
	cout << "String contained " << Count(str, c) << " symbols '+' " <<
		endl;
	cout << "String contained " << Count2(str, d) << " symbols '-' " <<
		endl;
	cout << "String contained " << Count2(str, f) << " symbols '=' " <<
		endl;
	string dest = Change(str);
	string dest1 = Change1(dest);
	string dest2 = Change2(dest1);
	cout << "Modified string (result): " << dest2 << endl;
	return 0;
}