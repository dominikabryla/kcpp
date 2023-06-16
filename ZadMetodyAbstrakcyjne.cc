// Zadanie 5.6
// --------------------------------------
// Bazując na pliku LClassMetodyAbstrakcyjne.cc stwórz program który oblicza:
// - obwód, pole powierzchni
// dla:
// - kwadrat, trójkąt, prostokąt, koło (jako klasy dziedziczące po klasie abstrakcyjnej Figura),
// oraz funkcja Dystans (dodatkowo w klasie Koło):
//   Jeśli rząd podaje, że na każdego obywatela w sklepie (kościele etc) przypada X metrów kwadratowych (argument przekazywany do funkcji)
//   to w jakiej odległości (promieniu - to ma funkcja Dystans zwracać) może znaleźć się następna osoba.
// Nazwij program: ZadMetodyAbstrakcyjne.cc 

#include <iostream>
#include <cmath>
using namespace std;

//------------------------------------------------------------------
class Figura
{
public:
    virtual void Narysuj() = 0;
    virtual double ObliczObwod() = 0;
    virtual double ObliczPole() = 0;
};

//------------------------------------------------------------------
class Trojkat : public Figura
{
private:
    double a, b, c;

public:
    Trojkat(double a, double b, double c) : a(a), b(b), c(c) {}

    void Narysuj()
    {
        cout << "Przepis na narysowanie trojkata" << endl;
    }

    double ObliczObwod()
    {
        return a + b + c;
    }

    double ObliczPole()
    {
        double p = (a + b + c) / 2;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }
};

//------------------------------------------------------------------
class Kwadrat : public Figura
{
private:
    double a;

public:
    Kwadrat(double a) : a(a) {}

    void Narysuj()
    {
        cout << "Przepis na narysowanie kwadrata" << endl;
    }

    double ObliczObwod()
    {
        return 4 * a;
    }

    double ObliczPole()
    {
        return a * a;
    }
};

//------------------------------------------------------------------
class Prostokat : public Figura
{
private:
    double a, b;

public:
    Prostokat(double a, double b) : a(a), b(b) {}

    void Narysuj()
    {
        cout << "Przepis na narysowanie prostokata" << endl;
    }

    double ObliczObwod()
    {
        return 2 * (a + b);
    }

    double ObliczPole()
    {
        return a * b;
    }
};

//------------------------------------------------------------------
class Kolo : public Figura
{
private:
    double r;

public:
    Kolo(double r) : r(r) {}

    void Narysuj()
    {
        cout << "Przepis na narysowanie kola" << endl;
    }

    double ObliczObwod()
    {
        return 2 * M_PI * r;
    }

    double ObliczPole()
    {
        return M_PI * r * r;
    }
    
    double Dystans(double x)
    {
        double y = sqrt(r * r - x * x); // obliczenie współrzędnej Y na obwodzie koła
        return sqrt(x * x + y * y); // obliczenie dystansu
    }
};

//------------------------------------------------------------------
int main()
{
    Figura *figury[4];

    figury[0] = new Kwadrat(5);
    figury[1] = new Trojkat(3, 4, 5);
    figury[2] = new Prostokat(4, 6);
    figury[3] = new Kolo(10);

    for (int i = 0; i < 4; i++)
    {
        figury[i]->Narysuj();
        cout << "Obwod: " << figury[i]->ObliczObwod() << endl;
        cout << "Pole: " << figury[i]->ObliczPole() << endl;
        cout << endl;
    }

    // Obliczanie dystansu dla koła
    Kolo *kolo = dynamic_cast<Kolo *>(figury[3]);
    if (kolo)
    {
        double dystans = kolo->Dystans (2);
        cout << "Dystans: " << dystans << endl;
    }


    return 0;
}
