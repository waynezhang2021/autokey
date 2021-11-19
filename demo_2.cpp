/*
Autokey demo 2
You must know that in C++,a program can get input with "cin".
However,do you know a program can type to itself?
Here's it!
simple explanation:
	main thread asks for input
	sub-thread types "123" then enter with virtual key codes
	main thread receives input
*/
#pragma once
#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
#include"keyboard.h"
#include"mouse.h"
using namespace std;
void* type(void*)
{
	Sleep(100);
	type("123");
	key_code(13);
}
int main()
{
	int a;
	pthread_create(0,0,type,0);
	cin>>a;
	cout<<"got input:"<<a;
}
