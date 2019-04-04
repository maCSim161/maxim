#include <string>
#include "spell.h"
class mage
{
private:
	std::string name;
	int hp;
	int mp;
public:
		void init(int newhp, int newmp, std::string newname);
std::string getname();
void say(std::string text);
int cast (spell & spl, mage & target);
void hit (spell & spl);
};
