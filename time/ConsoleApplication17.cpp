#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include "Time.h"

using namespace std;

void Time::setTime(long newHours, unsigned char newMinutes)
{
	hours=newHours;
	minutes=newMinutes;
}
long Time::getHours()
{
	return hours;
}
unsigned char Time::getMinutes()
{
	return minutes;
}
	Time Time::operator+(Time & plusTime)
	{
		Time result;
		result.hours=this->hours+plusTime.hours;
		result.minutes=this->minutes+plusTime.minutes;
		if (result.minutes >= 60){
			result.hours++;
			result.minutes -= 60;
	}
		return result;
	}
	

	Time Time::operator-(Time & minusTime)
	{
	Time result;
	result.hours=this->hours-minusTime.hours;
	result.minutes=this->minutes-minusTime.minutes;
	if (result.minutes >= 60){
		result.hours--;
		result.minutes = 256 - 60;
	}
	return result;
	}
	/*Time Time::operator*(Time & mulTime)
	{
		Time result;
		unsigned char result;
		result.hours= this->hours * mulTime;
		result.minutes= this->minutes * mulTime;
		result = result.minutes / 60;
		result.hours + (int)result;
		result.minutes = result%60;
		return result;
	}*/
	void Time::Result()
	{
		cout << this->hours << " hours "<<static_cast<unsigned>(this->minutes) << " minutes " << endl; 
	}

int main()
{

	Time a,b, plus, minus;
	//int valueMult = 8;

	a.setTime(3,10);
	b.setTime(2,40);

	plus=a+b;
	minus=a-b;
	//mult=a*valueMult;

	plus.Result();
	minus.Result();
	//mult.Result();
}

