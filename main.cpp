#include <iostream>
#include <string>
using namespace std;

class Roma {
  public:
    int Speks;
    string Vards;
};

class Griekija {
  public:
    int Speks;
    string Vards;
};



int main() {
  int RomasSpeks;
  int GriekijasSpeks;
  int i;
  srand(static_cast<int>(time(0)));
  for(i=0;i<5;i++){
  }

  Roma RomasKaravirs1;
  RomasKaravirs1.Vards = "Romas 1. karavīra spēks";
  RomasKaravirs1.Speks = rand()%10+1;

  Roma RomasKaravirs2;
  RomasKaravirs2.Vards = "Romas 2. karavīra spēks";
  RomasKaravirs2.Speks = rand()%10+1;

  Roma RomasKaravirs3;
  RomasKaravirs3.Vards = "Romas 3. karavīra spēks";
  RomasKaravirs3.Speks = rand()%10+1;

  Roma RomasKaravirs4;
  RomasKaravirs4.Vards = "Romas 4. karavīra spēks";
  RomasKaravirs4.Speks = rand()%10+1;

  Roma RomasKaravirs5;
  RomasKaravirs5.Vards = "Romas 5. karavīra spēks";
  RomasKaravirs5.Speks = rand()%10+1;

  cout << "Romas karavīri: " << endl << RomasKaravirs1.Vards << " - " << RomasKaravirs1.Speks;
  cout << endl;
  cout << RomasKaravirs2.Vards << " - " << RomasKaravirs2.Speks;
  cout << endl;
  cout << RomasKaravirs3.Vards << " - " << RomasKaravirs3.Speks;
  cout << endl;
  cout << RomasKaravirs4.Vards << " - " << RomasKaravirs4.Speks;
  cout << endl;
  cout << RomasKaravirs5.Vards << " - " << RomasKaravirs5.Speks;
  cout << endl;

  RomasSpeks = RomasKaravirs1.Speks + RomasKaravirs2.Speks + RomasKaravirs3.Speks + RomasKaravirs4.Speks + RomasKaravirs5.Speks;

  cout << endl;

  Griekija GriekijasKaravirs1;
  GriekijasKaravirs1.Vards = "Grieķijas 1. karavīra spēks";
  GriekijasKaravirs1.Speks = rand()%10+1;

  Griekija GriekijasKaravirs2;
  GriekijasKaravirs2.Vards = "Grieķijas 2. karavīra spēks";
  GriekijasKaravirs2.Speks = rand()%10+1;

  Griekija GriekijasKaravirs3;
  GriekijasKaravirs3.Vards = "Grieķijas 3. karavīra spēks";
  GriekijasKaravirs3.Speks = rand()%10+1;

  Griekija GriekijasKaravirs4;
  GriekijasKaravirs4.Vards = "Grieķijas 4. karavīra spēks";
  GriekijasKaravirs4.Speks = rand()%10+1;

  Griekija GriekijasKaravirs5;
  GriekijasKaravirs5.Vards = "Grieķijas 5. karavīra spēks";
  GriekijasKaravirs5.Speks = rand()%10+1;

  cout << "Grieķijas karavīri: " << endl << GriekijasKaravirs1.Vards << " - " << GriekijasKaravirs1.Speks;
  cout << endl;
  cout << GriekijasKaravirs2.Vards << " - " << GriekijasKaravirs2.Speks;
  cout << endl;
  cout << GriekijasKaravirs3.Vards << " - " << GriekijasKaravirs3.Speks;
  cout << endl;
  cout << GriekijasKaravirs4.Vards << " - " << GriekijasKaravirs4.Speks;
  cout << endl;
  cout << GriekijasKaravirs5.Vards << " - " << GriekijasKaravirs5.Speks;
  cout << endl;

  GriekijasSpeks = GriekijasKaravirs1.Speks + GriekijasKaravirs2.Speks + GriekijasKaravirs3.Speks + GriekijasKaravirs4.Speks + GriekijasKaravirs5.Speks;

  if (GriekijasSpeks > RomasSpeks){
    cout << endl << "Grieķija uzvar!";
  }

  if (RomasSpeks > GriekijasSpeks){
    cout << endl << "Roma uzvar!";
  }

  return 0;
}
