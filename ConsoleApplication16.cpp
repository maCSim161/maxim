// ConsoleApplication16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Department.h"
#include "Employee.h"
#include "idCard.h"
#include "Money.h"

using namespace std;

//Money

void Money::set(int newRubley, int newKopeek) 
{
	rubley = getRubley;
	kopeek = getKopeek;
}
int Money::getRubley()
{
	return this->getRubley;
}
unsigned char Money::getKopeek()
{
	return this->getKopeek;
}
void Money::addMoney(Money & someMoney)
{

}
void Money::withdrawMoney(Money & someMoeny)
{

}
void Money::print()
{

}


//Department

void Department::setName(std::string newName)
{
	name = newName;
}
std::string Department::getName()
{
	return this->name;
}
void Department::setHead (Employee* newHead)
{
	head = newHead;
}
Employee* Department::getHeat()
{
	return this->head;
}
void Department::setPosition(std::string newPosition)
{
	position=newPosition;

}
std::string Department::getPosition()
{
	return this->position;
}
void Department::print()
{

}

//Employee

void Employee::setName (std::string newName)
{
	name = newName;
}
std::string Employee::getName()
{
	return this->name;
}

void Employee:: setPosition(std::string newPosition)
{
	position = newPosition;
}
	std::string Employee::getPosition()
	{
		return this->position;
	}

	void Employee::setidCard(idCard* newidCard)
	{
		card = newidCard;
	}
	idCard* Employee::getidCard()
	{
		return this->card;
	}
	void Employee::setRoom(int newRoom)
	{
		room = newRoom;
	}
	int Employee::getRoom()
	{
		return this->room;
	}
	void Employee::setDepartment (Department* newDepartment)
	{
		department = newDepartment;
	}
	Department* Employee::getDepartment()
	{
		return this->department;
	}
	void Employee:: print()
	{

	}	

	//idCard

	void idCard::setNumber (int newNumber)
	{
		number = newNumber;
	}
	int idCard::getNumber()
	{
		return this->number;
	}
	void idCard::setDateExpire(std::string newDateExpore)
	{
		dateExpire = newDateExpore;
	}
	std::string idCard::getDateExpire()
	{
		return this->dateExpire;
	}
	void idCard::print()
	{

	}
	void main ()
	{
		Department GlDPT;
		Department GR;

		idCard GlDPT101;
		idCard GR5016;
		idCard Raz5018;
		idCard Dir201;
		idCard ZamDir5022;
		idCard GlBuh5019;

		Employee GlDPT1011;
		Employee GR102;
		Employee Raz1022;
		Employee Dir2011;
		Employee ZamDir20111;
		Employee GlBuh20222;

		GlDPT.setName("Ivan Ivanovich Ivanov");
		GlDPT.setPosition("Glava Departamenta");
		GlDPT101.setNumber(101);
		GlDPT1011.setRoom(101);

		GR.setName("Petrov Petr Petorovich");
		GR.setPosition("Glavnii Razrabotchik");
		GR5016.setNumber(5016);
		GR102.setRoom(102);

		
	}

	