#include <iostream>
#include <string>

using namespace std;

class Study
{
  public:
    string name;
    string wydzial;
    string semestr; 
};

int main() 
{
    Study stDane1;
    stDane1.name = "Marek,";
    stDane1.wydzial = "Informatyka,";
    stDane1.semestr = "Semestr 3";
    
    Study stDane2;
    stDane2.name= "Agnieszka,";
    stDane2.wydzial = "Architektura,";
    stDane2.semestr = "Semestr 5";
    
    Study stDane3;
    stDane3.name= "Paweł,";
    stDane3.wydzial = "Lotnictwo,";
    stDane3.semestr = "Semestr 2";

    cout << stDane1.name << " " << stDane1.wydzial << " " << stDane1.semestr << "\n";
    cout << stDane2.name << " " << stDane2.wydzial << " " << stDane2.semestr << "\n";
    cout << stDane3.name << " " << stDane3.wydzial << " " << stDane3.semestr << "\n";

  return 0;
}