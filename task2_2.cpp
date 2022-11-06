#include <iostream>

using namespace std;

class Toothbrush {
private:
	string m_color{ "red" };
	string m_Firm{ "Oral-B" };
	int m_lengthB{ 25 };
	string m_eors{ "Standard" };
public:
	Toothbrush(string color = "red", int lengthB = 25, string Firm = "Oral-B", string eors = "Standard")
	{
		m_color = color;
		m_lengthB = lengthB;
        m_Firm = Firm;
		m_eors = eors;
	}
	void ntat()
	{
		cout << " Toothbrush color: " << m_color << ", ";
		cout << "length brush: " << m_lengthB << " mm\n";
	};
	void EtbStb()
	{
        cout << " Firm: " << m_Firm << ", ";
        cout << "Electric or Standard: " << m_eors << " toothbrush\n\n";
	}
};

int main()
{
	Toothbrush def;
	def.ntat();
	def.EtbStb();

	Toothbrush black("black", 19, "BabyOno", "Electric");
    black.ntat();
	black.EtbStb();

	Toothbrush blue("blue");
	blue.ntat();
	blue.EtbStb();

	Toothbrush green("green", 22, "Rendall Carbon Bristles");
	green.ntat();
	green.EtbStb();

	return 0;
}
