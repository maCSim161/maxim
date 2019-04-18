#include <string>

using namespace std;

class Money
{
	class Department
	{
	private:
		int rubley;
		unsigned char kopeek;
	public:
		void set (int newRubley, int newKopeek);
		int getRubley();
		unsigned char getKopeek();
		void addMoney(Money & someMoney);
		void withdrawMoney(Money & someMoeny);
		void print();
	};

