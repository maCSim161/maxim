#include <string>
using namespace std;

class idCard
{
private:
	int number;
	std::string dateExpire;
public:
	void setNumber (int newNumber);
	int getNumber();
	void setDateExpire(std::string newDateExpore);
	std::string getDateExpire();
	void print();
};

