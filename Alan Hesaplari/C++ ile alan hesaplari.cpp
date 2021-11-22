

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
      cout << "\n>>>Genel Alan Hesabý\n\n" << endl;
      return 0;
   }

   virtual float cevre() {
      cout << "\n>>>Genel Çevre Uzunluðu\n\n" << endl;
   }
};

class Kare: public Sekil {
   public: Kare(int a): Sekil(a) {}

   private: float alan() {

      cout << "\n>>>Karenin Alaný: " << (x1 * x1) << "\n\n" << endl;
      return 0;
   }

   private: float cevre() {
      cout << "\n>>>Karenin Çevresi: " << (x1 * 4) << "\n\n" << endl;
   }
};

class Dikdortgen: public Sekil {
   public: Dikdortgen(int a, int b): Sekil(a, b) {}

   private: float alan() {

      cout << "\n>>>Dikdortgen Alaný: " << (x1 * y1) << "\n\n" << endl;
      return 0;
   }

   private: float cevre() {
      cout << "\n>>>Dikdörtgenin Çevresi: " << ((x1 + y1) * 2) << "\n\n" << endl;
   }
};

class Ucgen: public Sekil {
   public: Ucgen(int a, int b, int c): Sekil(a, b, c) {}
   Ucgen(int a, int b): Sekil(a, b) {}

   private: float alan() {
      cout << "\n>>>Üçgenin Alaný: " << (x1 * y1 / 2) << "\n\n" << endl;
      return 0;
   }
   private: float cevre() {
      cout << "\n>>>Üçgenin Çevresi: " << (x1 + y1 + y2) << "\n\n" << endl;
   }
};

class DikUcgen: public Sekil {
   public: DikUcgen(int a, int b, int c): Sekil(a, b, c) {}
   DikUcgen(int a, int b): Sekil(a, b) {}

   private: float alan() {
      cout << "\n>>>Dik Üçgenin Alaný: " << (x1 * y1 / 2) << "\n\n" << endl;
      return 0;
   }
   private: float cevre() {
      cout << "\n>>>Dik Üçgenin Çevresi: " << (x1 + y1 + y2) << "\n\n" << endl;
   }
};

void display() {

   int secim;
   while (1) {
      cout << "--------------ANA MENU------------ " << endl <<
         "Alan Hesaplarý (1) " << endl <<
         "Çevre Hesaplarý (2) " << endl <<
         "CIKIS (3)" << endl <<
         "------------------------------- " << endl <<
         "Seçiminiz  :";
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
         cout << "\n\n!!!_Yanlis Seçim Yaptýnýz_!!!\n\n   ";

      }
   }
}

void Fonksiyon() {
   Sleep(1500);
   cout << "--------->>>>>>>>Menüye dönülüyor<<<<<<<<<<------------ ";
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
         "Üçgen Alan Hesap Sonucu (2) " << endl <<
         "Dikdörtgen Alan Hesap Sonucu (3)" << endl <<
         "DikUcgen Alan Hesap Sonucu (4)" << endl <<
         "CIKIS (5)" << endl <<
         "Ana Menü (0) " << endl <<
         "------------------------------- " << endl <<
         "Seçiminiz  :";
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
         cout << "Brinci kenarý giriniz: ";
         cin >> x1;

         Kare kare(x1);
         sekil = & kare;
         sekil -> alan();
         Fonksiyon();
      }
      break;
      case 2: {
         cout << "Brinci kenarý giriniz: ";
         cin >> x1;
         cout << "Ýkinci kenarý giriniz: ";
         cin >> y1;

         Ucgen ucgn(x1, y1);
         sekil = & ucgn;
         sekil -> alan();
         Fonksiyon();
      }
      break;
      case 3: {
         cout << "Brinci kenarý giriniz: ";
         cin >> x1;
         cout << "Ýkinci kenarý giriniz: ";
         cin >> y1;

         Dikdortgen dikd(x1, y1);
         sekil = & dikd;
         sekil -> alan();
         Fonksiyon();
      }
      break;

      case 4: {
         cout << "Brinci kenarý giriniz: ";
         cin >> x1;
         cout << "Ýkinci kenarý giriniz: ";
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
         cout << "\n\n!!!_Yanlis Seçim Yaptýnýz_!!!\n\n   ";
      }

   }
}

void displayCevre() {

   int x1, y1, x2, y2, secim;

   while (1) {
      cout << "--------------CEVRE__HESABI__MENUSU------------ " << endl

         <<
         "Karenin Çevre Hesap Sonucu (1) " << endl <<
         "Üçgen Çevre Hesap Sonucu (2) " << endl <<
         "Dikdörtgen Çevre Hesap Sonucu (3)" << endl <<
         "Dik Üçgen Çevre Hesap Sonucu (4)" << endl <<
         "Ana Menü (0) " << endl <<
         "CIKIS (5)" << endl <<
         "------------------------------- " << endl <<
         "Seçiminiz  :";
      cin >> secim;
      system("cls");
      Sekil * sekil;

      switch (secim) {
      case 0:
         display();
         break;
      case 1: {
         cout << "Brinci kenarý giriniz: ";
         cin >> x1;

         Kare kare(x1);
         sekil = & kare;
         sekil -> cevre();
         Fonksiyon();
      }
      break;
      case 2: {
         cout << "Brinci kenarý giriniz: ";
         cin >> x1;
         cout << "Ýkinci kenarý giriniz: ";
         cin >> y1;
         cout << "Üçüncü kenarý giriniz: ";
         cin >> y2;

         Ucgen ucgn(x1, y1, y2);
         sekil = & ucgn;
         sekil -> cevre();
         Fonksiyon();
      }
      break;
      case 3: {
         cout << "Brinci kenarý giriniz: ";
         cin >> x1;
         cout << "Ýkinci kenarý giriniz: ";
         cin >> y1;

         Dikdortgen dikd(x1, y1);
         sekil = & dikd;
         sekil -> cevre();
         Fonksiyon();
      }
      break;

      case 4: {
         cout << "Brinci kenarý giriniz: ";
         cin >> x1;
         cout << "Ýkinci kenarý giriniz: ";
         cin >> y1;
         cout << "Üçüncü kenarý giriniz: ";
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
         cout << "\n\n!!!_Yanlis Seçim Yaptýnýz_!!!\n\n   ";

      }
   }
}

int main(int argc, char ** argv) {

   setlocale(LC_ALL, "Turkish");

   display();

   return 0;
}
