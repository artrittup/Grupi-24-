/*Projekti ne Github*/

/*Detyrat per Artrit Telakub: Krijo aplikacionin, funksione dhe rregullo funksionin main*/
/*Detyrat per Arbenit Krasniq-in: Krijo nje funksion dhe inmplemento ne main*/
/*Detyrat per Orges Gegaj: Krijo nje funksion dhe inmplemento ne main*/


#include <iostream>
using namespace std;
// Variablat globale
int numri = 1143215;
double bilanci = 700.52;
int pin_kodi = 123;

// Funksioni për verifikimin e PIN-it
bool verifikoPIN()
{
    int pin;
    cout << "Pin kodi: ";
    cin >> pin;
    if (pin_kodi != pin)
    {
        cout << "PIN gabim! Provo perseri." << endl;
        return false;
    }
    return true;
}

// Funksioni për të shfaqur bilancin
void shfaqBilancin()
{
    cout << "Bilanci aktual: " << bilanci << " EUR" << endl;
}
// Funksioni për depozitim
void depono(double shume)
{
    if (!verifikoPIN())
        return;

    if (shume <= 0)
    {
        cout << "Shuma e depozitimit duhet të jete me e madhe se 0!" << endl;
        return;
    }

    bilanci += shume;
    cout << "Depozitimi u krye me sukses! Bilanci i ri: " << bilanci << " EUR" << endl;
}


int main()
{
    int zgjedhja;

    do
    {
        cout << "\n------------------------------" << endl;
        cout << "Menyja e Bankes" << endl;
        cout << "1. Shfaq bilancin" << endl;
        cout << "2. Depono para" << endl;
        cout << "0. Dil" << endl;
        cout << "Zgjedhni nje opsion: ";
        cin >> zgjedhja;

        
        switch (zgjedhja)
        {
        case 1:
            shfaqBilancin();
            break;
        case 2:
        {
            double shume;
            cout << "Shuma per depozite: ";
            cin >> shume;
            depono(shume);
            break;
        }
        case 0:
            cout << "Faleminderit qe perdoret sistemin tone!" << endl;
            break;
        default:
            cout << "Zgjedhje e pavlefshme! Provo përseri." << endl;
        }

    } while (zgjedhja != 0);

    return 0;
}


