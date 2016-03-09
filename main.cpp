#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

class ZOO
{

    public :
    int waga;
    virtual void daj_glos() = 0;
};

class Kon: public ZOO
{
    public: Kon(){
        waga = 200;
    }

     void daj_glos() {cout << "Iihaa!"<< endl;}
};

class Forfiter: public ZOO
{
    public: Forfiter(){
        waga = 100;
    }

     void daj_glos() {cout << "Szwagieer!!"<< endl;}
};

class Koza: public ZOO
{
    public: Koza(){
        waga = 70;
    }

     void daj_glos() {cout << "Meeee!"<< endl;}
};


int main()
{
    srand(time(NULL));

    int waga_suma =0;
    vector<ZOO*> z;

    for(int i=0; i<20; ++i)
	{
		if(rand()%100 < 30)
			z.push_back(new Forfiter());
		else if(rand()%100>30 && rand()%100<60)
			z.push_back(new Kon());
        else
            z.push_back(new Koza());
	}

   /* z.push_back(new Kon);
    z.push_back(new Forfiter);
    z.push_back(new Koza);
    for(int i = 0; i < z.size();i++)
    {
        z[i]->daj_glos();
        waga_suma += z[i]->waga;
        cout<<z[i]->waga<<endl;
        cout<<"Waga ogolna: ";
        cout<<waga_suma<<endl;
    }*/

    return 0;
}
