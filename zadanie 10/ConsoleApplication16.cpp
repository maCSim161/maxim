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
	bool Time::operator< (Time & minusTime)
	{
		
		if (this -> hours < minusTime.hours) return true;
		else if (this -> hours > minusTime.hours) return false;
		else if (this -> minutes <minusTime.minutes) return true;
		else return false;
		 
		
		
	}
	

	

	bool Time::operator> (Time & minusTime)
	{
	if (this -> hours > minusTime.hours) return true;
		else if (this -> hours < minusTime.hours) return false;
		else if (this -> minutes >minusTime.minutes) return true;
		else return false;
	}
	void Time::Result()
	{
		cout << this->hours << " hours "<<static_cast<unsigned>(this->minutes) << " minutes " << endl; 
	}

int main()
{

	Time a,b, plus, minus;
	bool x,y;
	//int valueMult = 8;
	
	a.setTime(3,10);
	b.setTime(6,50);

	plus=a+b;
	//minus=a-b;
	//mult=a*valueMult;

	plus.Result();
	//minus.Result();
	//mult.Result();

	x=a<b;
	y=a>b;
	cout << x << endl;
	cout << y << endl;

	Time *arr, temp;
	cout << " n";
	arr = new Time[10];
	arr[0].setTime(3,10);
	arr[1].setTime(2,10);
	arr[2].setTime(3,11);
	arr[3].setTime(3,10);
	arr[4].setTime(4,10);
	arr[5].setTime(5,10);
	arr[6].setTime(6,10);
	arr[7].setTime(7,10);
	arr[8].setTime(8,30);
	arr[9].setTime(1,12);

	for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
	for (int i = 0; i < 10; i++) {
		cout << arr[i];
    }
    cout << endl;


}
