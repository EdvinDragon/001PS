//
// Created by s063645 on 9/24/2025.
//
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  double GBP_Bendras   = 0.8729;
  double GBP_Pirkti    = 0.8600;
  double GBP_Parduoti  = 0.9220;
  double USD_Bendras   = 1.1793;
  double USD_Pirkti    = 1.1460;
  double USD_Parduoti  = 1.2340;
  double INR_Bendras   = 104.6918;
  double INR_Pirkti    = 101.3862;
  double INR_Parduoti  = 107.8546;
  double Eur;
  int n, v;
  string Val;

  cout << "Iveskite skaičiu" << endl;
  cout << "1, jei norite paliginti," << endl;
  cout << "2, jei norite pirkti," << endl;
  cout << "3, jei norite parduoti." << endl;
  cin >> n;

  cout << "Pasirinkite Norima Valiuta(Iveskite skaičiu):" << endl;
  cout << "1. GBP; 2. USD; 3. INR;" << endl;
  cin >> v;
  if (v == 1) Val="GBP";
  else if (v == 2) Val="USD";
  else if (v == 3) Val="INR";
  else cout << "error" << endl;

  switch(n)
  {
  case 1:
        cout << "Pasirinkuote Palyginima" << endl;
        cout << "Iveskite Euru kieki:" << endl;
        cin >> Eur;

        cout <<fixed<<setprecision(3)<< "Perkant " << Val << " yra: ";
            if(v==1) cout << Eur*GBP_Pirkti << endl;
            else if (v==2) cout << Eur*USD_Pirkti << endl;
            else if (v==3) cout << Eur*INR_Pirkti << endl;
            else cout << "error" << endl;

        break;
  case 2:
        cout << "Pasirinkuote Pirkti" << endl;
        cout << "Iveskite Euru kieki:" << endl;
        cin >> Eur;

        cout <<fixed<<setprecision(3)<< "Bendras kovertas Eur i " << Val << " yra: ";
        if(v==1) cout << Eur*GBP_Parduoti << endl;
        else if (v==2) cout << Eur*USD_Parduoti << endl;
        else if (v==3) cout << Eur*INR_Parduoti << endl;
        else cout << "error" << endl;

        break;
  case 3:
        cout << "pasirinkuote Parduoti" << endl;
        cout << "Iveskite norima Euru kieki:" << endl;
        cin >> Eur;

        cout <<fixed<<setprecision(3)<< "Bendras kovertas Eur i " << Val << " yra: ";
        if(v==1) cout << Eur*GBP_Bendras << endl;
        else if (v==2) cout << Eur*USD_Bendras << endl;
        else if (v==3) cout << Eur*INR_Bendras << endl;
        else cout << "error" << endl;

        break;
  default:
       cout << "Klaida, tokio atvėjaus nera"<< endl;
  }

  return 0;
}