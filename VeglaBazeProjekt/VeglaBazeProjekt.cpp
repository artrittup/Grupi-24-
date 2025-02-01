/*Projekti ne Github*/

/*Detyrat per Artrit Telakub: Krijo aplikacionin, funksione dhe rregullo funksionin main*/
/*Detyrat per Arbenit Krasniq-in: Krijo nje funksion dhe inmplemento ne main*/
/*Detyrat per Orges Gegaj: Krijo nje funksion dhe inmplemento ne main*/


#include <iostream>
using namespace std;
struct Llogaria
{
    int numri;
    double bilanci;
    int pin_kodi;

    void depono(double deponim)
    {
        int pin;
        cout << "Pin kodi: ";
        cin >> pin;
        if (pin_kodi != pin)
        {
            cout << "Pin gabim" << endl;
            return;
        }

        bilanci += deponim;
    }
};

int main()
{
    Llogaria a{ 1143215, 700.52, 123 };
    cout << "Bilanci fillestar: " << a.bilanci << endl;
    double deponimi;
    cout << "Sa doni ti depononi:";
    cin >> deponimi;
    a.depono(deponimi);
    cout << "Bilanci final: " << endl
        << a.bilanci;


int main()
{
    cout << "Checkout the branch";
    return 0;
}


