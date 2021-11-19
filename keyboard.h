#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
void down(int code)
{
	keybd_event(code,0,0,0);
}
void up(int code)
{
	keybd_event(code,0,KEYEVENTF_KEYUP,0);
}
void key_code(int code)
{
	up(code);
	down(code);
}
void type_shift(int code)
{
	down(16);
	key_code(code);
	up(16);
}
void key_char(char c)
{
	if(c>='0'&&c<='9')
		key_code(48+c-'0');
	if(c>='a'&&c<='z')
		key_code(65+c-'a');
	if(c>='A'&&c<='Z')
		type_shift(65+c-'A');
}
void type(string s)
{
	for(char c:s)
		key_char(c);
}
void sync_type(string s)
{
	for(char c:s)
		down(c);
	for(char c:s)
		up(c);
}
