#include <iostream>

using namespace std;

class Pencil {
private:
	string m_color{ "red" };
	string m_soft{ "FH" };
	int m_length{ 15 };
public:
	Pencil(string color = "red", string soft = "FH", int length = 15 )
	{
		m_color = color;
		m_soft = soft;
		m_length = length;
	}
	void print()
	{
		cout << " pencil color: " << m_color << ", ";
		cout << "soft: " << m_soft << ", ";
		cout << "length: " << m_length << " cm\n";
	}
};

int main()
{
	Pencil def;
	def.print();
 
	Pencil black("black", "4H", 21);
	black.print();
 
	Pencil blue("blue"); 
	blue.print();
 
	Pencil green("green", "2B");
	green.print();
 
	return 0;
}