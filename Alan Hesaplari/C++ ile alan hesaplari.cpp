

#include <iostream>
#include<windows.h>
using namespace std;

void display();
void displayCevre();
void displayAlan();

class Sekil {
   protected:
      float x1, y1, x2, y2;

   public:
      Sekil(float a = 0, float b = 0, float c = 0, float d = 0) {
         x1 = a;
         y1 = b;
         y2 = c;
         x2 = d;
      }

   virtual float alan() {
      cout << "\n>>>Genel Alan Hesab�\n\n" << endl;
      return 0;
   }

   virtual float cevre() {
      cout << "\n>>>Genel �evre Uzunlu�u\n\n" << endl;
   }
};

class Kare: public Sekil {
   public: Kare(int a): Sekil(a) {}

   private: float alan() {

      cout << "\n>>>Karenin Alan�: " << (x1 * x1) << "\n\n" << endl;
      return 0;
   }

   private: float cevre() {
      cout << "\n>>>Karenin �evresi: " << (x1 * 4) << "\n\n" << endl;
   }
};

class Dikdortgen: public Sekil {
   public: Dikdortgen(int a, int b): Sekil(a, b) {}

   private: float alan() {

      cout << "\n>>>Dikdortgen Alan�: " << (x1 * y1) << "\n\n" << endl;
      return 0;
   }

   private: float cevre() {
      cout << "\n>>>Dikd�rtgenin �evresi: " << ((x1 + y1) * 2) << "\n\n" << endl;
   }
};

class Ucgen: public Sekil {
   public: Ucgen(int a, int b, int c): Sekil(a, b, c) {}
   Ucgen(int a, int b): Sekil(a, b) {}

   private: float alan() {
      cout << "\n>>>��genin Alan�: " << (x1 * y1 / 2) << "\n\n" << endl;
      return 0;
   }
   private: float cevre() {
      cout << "\n>>>��genin �evresi: " << (x1 + y1 + y2) << "\n\n" << endl;
   }
};

class DikUcgen: public Sekil {
   public: DikUcgen(int a, int b, int c): Sekil(a, b, c) {}
   DikUcgen(int a, int b): Sekil(a, b) {}

   private: float alan() {
      cout << "\n>>>Dik ��genin Alan�: " << (x1 * y1 / 2) << "\n\n" << endl;
      return 0;
   }
   private: float cevre() {
      cout << "\n>>>Dik ��genin �evresi: " << (x1 + y1 + y2) << "\n\n" << endl;
   }
};

void display() {

   int secim;
   while (1) {
      cout << "--------------ANA MENU------------ " << endl <<
         "Alan Hesaplar� (1) " << endl <<
         "�evre Hesaplar� (2) " << endl <<
         "CIKIS (3)" << endl <<
         "------------------------------- " << endl <<
         "Se�iminiz  :";
      cin >> secim;
      system("cls");
      Sekil * sekil;

      switch (secim) {
      case 1: {
         displayAlan();
      }
      break;
      case 2: {
         displayCevre();
      }
      break;

      case 3:
         exit(1);
         break;
      default:
         cout << "\n\n!!!_Yanlis Se�im Yapt�n�z_!!!\n\n   ";

      }
   }
}

void Fonksiyon() {
   Sleep(1500);
   cout << "--------->>>>>>>>Men�ye d�n�l�yor<<<<<<<<<<------------ ";
   for (int i = 1; i <= 3; i++) {
      cout << " |-_-|";
      Sleep(400);
   }
   system("cls");
}

void displayAlan() {

   int x1, y1, x2, y2, secim;

   while (1) {
      cout << "--------------ALAN__HESABI__MENUSU------------ " << endl <<
         "Karenin Alan Hesap Sonucu (1) " << endl <<
         "��gen Alan Hesap Sonucu (2) " << endl <<
         "Dikd�rtgen Alan Hesap Sonucu (3)" << endl <<
         "DikUcgen Alan Hesap Sonucu (4)" << endl <<
         "CIKIS (5)" << endl <<
         "Ana Men� (0) " << endl <<
         "------------------------------- " << endl <<
         "Se�iminiz  :";
      cin >> secim;
      system("cls");
      Sekil * sekil;

      switch (secim) {
      case 0: {
         display();
         break;
         Fonksiyon();
      }
      case 1: {
         cout << "Brinci kenar� giriniz: ";
         cin >> x1;

         Kare kare(x1);
         sekil = & kare;
         sekil -> alan();
         Fonksiyon();
      }
      break;
      case 2: {
         cout << "Brinci kenar� giriniz: ";
         cin >> x1;
         cout << "�kinci kenar� giriniz: ";
         cin >> y1;

         Ucgen ucgn(x1, y1);
         sekil = & ucgn;
         sekil -> alan();
         Fonksiyon();
      }
      break;
      case 3: {
         cout << "Brinci kenar� giriniz: ";
         cin >> x1;
         cout << "�kinci kenar� giriniz: ";
         cin >> y1;

         Dikdortgen dikd(x1, y1);
         sekil = & dikd;
         sekil -> alan();
         Fonksiyon();
      }
      break;

      case 4: {
         cout << "Brinci kenar� giriniz: ";
         cin >> x1;
         cout << "�kinci kenar� giriniz: ";
         cin >> y1;

         DikUcgen diku(x1, y1);
         sekil = & diku;
         sekil -> alan();
         Fonksiyon();
      }
      break;

      case 5:
         exit(1);
         break;
      default:
         cout << "\n\n!!!_Yanlis Se�im Yapt�n�z_!!!\n\n   ";
      }

   }
}

void displayCevre() {

   int x1, y1, x2, y2, secim;

   while (1) {
      cout << "--------------CEVRE__HESABI__MENUSU------------ " << endl

         <<
         "Karenin �evre Hesap Sonucu (1) " << endl <<
         "��gen �evre Hesap Sonucu (2) " << endl <<
         "Dikd�rtgen �evre Hesap Sonucu (3)" << endl <<
         "Dik ��gen �evre Hesap Sonucu (4)" << endl <<
         "Ana Men� (0) " << endl <<
         "CIKIS (5)" << endl <<
         "------------------------------- " << endl <<
         "Se�iminiz  :";
      cin >> secim;
      system("cls");
      Sekil * sekil;

      switch (secim) {
      case 0:
         display();
         break;
      case 1: {
         cout << "Brinci kenar� giriniz: ";
         cin >> x1;

         Kare kare(x1);
         sekil = & kare;
         sekil -> cevre();
         Fonksiyon();
      }
      break;
      case 2: {
         cout << "Brinci kenar� giriniz: ";
         cin >> x1;
         cout << "�kinci kenar� giriniz: ";
         cin >> y1;
         cout << "���nc� kenar� giriniz: ";
         cin >> y2;

         Ucgen ucgn(x1, y1, y2);
         sekil = & ucgn;
         sekil -> cevre();
         Fonksiyon();
      }
      break;
      case 3: {
         cout << "Brinci kenar� giriniz: ";
         cin >> x1;
         cout << "�kinci kenar� giriniz: ";
         cin >> y1;

         Dikdortgen dikd(x1, y1);
         sekil = & dikd;
         sekil -> cevre();
         Fonksiyon();
      }
      break;

      case 4: {
         cout << "Brinci kenar� giriniz: ";
         cin >> x1;
         cout << "�kinci kenar� giriniz: ";
         cin >> y1;
         cout << "���nc� kenar� giriniz: ";
         cin >> y2;

         DikUcgen diku(x1, y1, y2);
         sekil = & diku;
         sekil -> cevre();
         Fonksiyon();
      }
      break;
      case 5:
         exit(1);
         break;
      default:
         cout << "\n\n!!!_Yanlis Se�im Yapt�n�z_!!!\n\n   ";

      }
   }
}

int main(int argc, char ** argv) {

   setlocale(LC_ALL, "Turkish");

   display();

   return 0;
}
