#include <iostream>

using namespace std;

class Car {
private:
        string m_mark { "Honda" };
        string m_model { "Accord" };
public:
        Car(string mark = "Honda", string model = "Accord")
        {
            m_mark = mark;
            m_model = model;
        }
        void car()
        {
            cout << " Mark of car: " << m_mark << ", ";
            cout << "Model: " << m_model << "\n";
        }
};

class Parametr {
private:
    string m_type { "Sedan" };
    string m_fuel { "Gasoline" };
    float m_engine { 1.8 }; //moc silnika
public:
    Parametr(string type = "Sedan", string fuel = "Gasoline", float engine = 1.8)
    {
        m_type = type; //typ ciała
        m_fuel = fuel; //typ paliwa
        m_engine = engine;
    }
    void parametr()
    {
        cout << " Type of car: " << m_type << ", ";
        cout << "Fuel: " << m_fuel << ", ";
        cout << "Engine: " << m_engine << "\n";
    }
};

class Customize {
private:
    string m_color { "White" };
    int m_seat { 5 };
public:
    Customize(string color = "White", int seat = 5)
    {
        m_color = color;
        m_seat = seat;
    }
    void customize()
    {
        cout << " Color of car: " << m_color << ", ";
        cout << "Number of seats: " << m_seat << "\n";
    }
};

class Product {
private:
    string m_country {"Japan"};
    int m_year {1999};

public:
    Product(string country = "Japan", int year = 1999)
    {
        m_country = country;
        m_year = year;
    }
    void product()
    {
        cout << " Country of product: " << m_country << ", ";
        cout << "Date of product: " << m_year << "\n\n";
    }
};

int main()
{
        Car def; // marka oraz model
        Parametr def1; //typ kuzowu, paliwo oraz moc silnika
        Customize def2; //color fury, toning oraz ilosc mejsc
        Product def3; //rok produktu oraz kraj
        def.car();
        def1.parametr();
        def2.customize();
        def3.product();

        Car BMW("BMW", "M3 Comp");
        Parametr BMW1("Coupe");
        Customize BMW2("Red");
        Product BMW3("Germany");
        BMW.car();
        BMW1.parametr();
        BMW2.customize();
        BMW3.product();

        return 0;
}
