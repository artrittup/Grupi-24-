/*Projekti ne Github*/



#include <iostream>
using namespace std;

int numri = 1143215;
double bilanci = 700.30;
int pin_kodi = 123;

bool verifikoPIN()
{
    int pin;
    cout << "Pin kodi:";
    cin >> pin;
    if (pin_kodi != pin)
    {
        cout << "PIN gabim! Provo perseri." << endl;
        return false;
    }
    return true;
}

void shfaqBilancin()
{
    cout << "Bilanci aktual: " << bilanci << " EUR" << endl;
}

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


void transferoPara()
{
    if (!verifikoPIN())
        return;

    int nr_llogarie;
    double shume;

    cout << "Vendos numrin e llogarise se marresit: ";
    cin >> nr_llogarie;
    cout << "Vendos shumen per transferim: ";
    cin >> shume;

    if (shume <= 0)
    {
        cout << "Shuma duhet të jetë më e madhe se 0!" << endl;
        return;
    }

    if (shume > bilanci)
    {
        cout << "Nuk keni fonde të mjaftueshme!" << endl;
        return;
    }

    bilanci -= shume;
    cout << "Transferimi u krye me sukses ne llogarine:" << " " << nr_llogarie << " " <<endl<< "Bilanci juaj i ri : " << bilanci << " EUR" << endl;
}

void ndryshoPIN()
{
    if (!verifikoPIN())
        return;

    int pinRi, pinKonfirmim;
    cout << "Vendos PIN-in e ri: ";
    cin >> pinRi;
    cout << "Konfirmo PIN-in e ri: ";
    cin >> pinKonfirmim;

    if (pinRi != pinKonfirmim)
    {
        cout << "PIN-at nuk përputhen! Provo përsëri." << endl;
        return;
    }

    pin_kodi = pinRi;
    cout << "PIN-i u ndryshua me sukses!" << endl;
}

void terhiq(double shume)
{
    if (!verifikoPIN())
        return;

    if (shume <= 0)
    {
        cout << "Shuma e terheqjes duhet të jete me e madhe se 0!" << endl;
        return;
    }

    if (shume > bilanci)
    {
        cout << "Fondet nuk janë të mjaftueshme!" << endl;
        return;
    }

    bilanci -= shume;
    cout << "Terheqja u krye me sukses! Bilanci i ri: " << bilanci << " EUR" << endl;
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
        cout << "3. Transfero para" << endl;
        cout << "4. Ndrsho PIN-in" << endl;
        cout << "5. Terhiq para" << endl;
        cout << "0. Dil" << endl;
        cout << "------------------------------" << endl;
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
        case 3:
            transferoPara();
            break;
        case 4:
            ndryshoPIN();
            break;
        case 5:
        {
            double shume;
            cout << "Shuma per terheqje: ";
            cin >> shume;
            terhiq(shume);
            break;
        }
        case 0:
            cout << "Faleminderit qe perdoret sistemin tone!" << endl;
            break;
        default:
            cout << "Zgjedhje e pavlefshme! Provo perseri." << endl;
        }

    } while (zgjedhja != 0);

    return 0;
}


