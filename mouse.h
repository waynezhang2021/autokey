#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
inline void move_by(int x,int y)
{
	mouse_event(MOUSEEVENTF_MOVE,x,y,0,0);
}
inline void move_to(int x,int y)
{
	int sx=GetSystemMetrics(SM_CXSCREEN),sy=GetSystemMetrics(SM_CYSCREEN);
	mouse_event(MOUSEEVENTF_MOVE|MOUSEEVENTF_ABSOLUTE,x*sx/65536.0f,y*sy/65536.0f,0,0);
}
inline void left_down()
{
	mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
}
inline void left_up()
{
	mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
}
inline void right_down()
{
	mouse_event(MOUSEEVENTF_RIGHTDOWN,0,0,0,0);
}
inline void right_up()
{
	mouse_event(MOUSEEVENTF_RIGHTUP,0,0,0,0);
}
inline void middle_down()
{
	mouse_event(MOUSEEVENTF_MIDDLEDOWN,0,0,0,0);
}
inline void middle_up()
{
	mouse_event(MOUSEEVENTF_MIDDLEUP,0,0,0,0);
}
inline void left_down(int x,int y)
{
	move_to(x,y);
	mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
}
inline void left_up(int x,int y)
{
	move_to(x,y);
	mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
}
inline void right_down(int x,int y)
{
	move_to(x,y);
	mouse_event(MOUSEEVENTF_RIGHTDOWN,0,0,0,0);
}
inline void right_up(int x,int y)
{
	move_to(x,y);
	mouse_event(MOUSEEVENTF_RIGHTUP,0,0,0,0);
}
inline void middle_down(int x,int y)
{
	move_to(x,y);
	mouse_event(MOUSEEVENTF_MIDDLEDOWN,0,0,0,0);
}
inline void middle_up(int x,int y)
{
	move_to(x,y);
	mouse_event(MOUSEEVENTF_MIDDLEUP,0,0,0,0);
}
void left_click()
{
	left_down();
	left_up();
}
void right_click()
{
	right_down();
	right_up();
}
void middle_click()
{
	middle_down();
	middle_up();
}
void left_click(int x,int y)
{
	move_to(x,y);
	left_down();
	left_up();
}
void right_click(int x,int y)
{
	move_to(x,y);
	right_down();
	right_up();
}
void middle_click(int x,int y)
{
	move_to(x,y);
	middle_down();
	middle_up();
}
void double_left()
{
	left_click();
	left_click();
}
void double_right()
{
	right_click();
	right_click();
}
void double_middle()
{
	middle_click();
	middle_click();
}
void double_left(int x,int y)
{
	left_click(x,y);
	left_click(x,y);
}
void double_right(int x,int y)
{
	right_click(x,y);
	right_click(x,y);
}
void double_middle(int x,int y)
{
	middle_click(x,y);
	middle_click(x,y);
}
void left_drag(int sx,int sy,int ex,int ey)
{
	left_down(sx,sy);
	left_up(ex,ey);
}
void right_drag(int sx,int sy,int ex,int ey)
{
	right_down(sx,sy);
	right_up(ex,ey);
}
void middle_drag(int sx,int sy,int ex,int ey)
{
	middle_down(sx,sy);
	middle_up(ex,ey);
}
void scroll(int d)
{
	mouse_event(MOUSEEVENTF_WHEEL,0,0,d,0);
}
