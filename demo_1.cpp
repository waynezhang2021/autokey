/*
Autokey demo 1
This is just a simple program that types basic numbers and letters.
*/
#pragma once
#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
#include"keyboard.h"
#include"mouse.h"
using namespace std;
int main()
{
	Sleep(1000);
	type_shift(0);
	Sleep(100);
	type("0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
}
