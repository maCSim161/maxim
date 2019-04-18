
#include <string>



using namespace std;

class Department
{
private:
	std::string name;
	std::string position;
	Employee* head;
public:
	void setPosition(std::string newPosition);
	std::string getPosition();
	void setName (std::string newName);
	std::string getName();
	void setHead (Employee* newHead);
	Employee* getHeat();
	void print();
};

