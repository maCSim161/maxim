
#include "stdafx.h"
#include "mage.h"
#include <stdio.h>
#include <iostream>

using namespace std;



void mage::init (int newhp, int newmp, std::string newname)
{
	hp = newhp;
	mp = newmp;
	name = newname;
}
void mage::hit (spell & spl)
{
	hp=hp-spl.dhp;
	mp=mp-spl.dmp;
	if (hp<=0) say("ya produl");

}
void mage::say(std::string text)
{
	cout << this -> name <<" says " << text << endl <<endl;
}

int mage::cast(spell & spl, mage & target)
{
	cout<<this-> name << "hit "<< spl.name << target.getname() <<endl;
	target.hit (spl);

}

void main ()
{
 mage vanya;
 mage boris;

 spell bolt;
 spell drain;

 vanya.init (100,100, " vanya ");
 vanya.say(" privet ");

 boris.init (100,100, " boris ");
 boris.say (" privet ");

 bolt.dhp = 50;
 bolt.dmp = 50;
 bolt.name = " bolt ";

 drain.dhp = 25;
 drain.dmp = 25;
 drain.name = " drain ";
}





