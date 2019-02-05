// Nazwa pliku wykonywalnego: StringStory

// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego
// pliku.

// !!! UWAGA !!! 
// Przy wykonaniu tego zadania nie wolno korzystac z std::string!

// Prosze napisac klase MyString. Klasa ta posluzyc ma do ulatwienia 
// operacji na napisach. W tym celu do klasy dodano operatory + i * 
// a takze mozna obiekty tej klasy wypisywac funkcją Print(). 
// Dostepne sa takze naturalne operatory = i == oraz [].
// Trudnoscia w zadaniu jest sprawne zarzadzanie pamiecia. 

// Prosze zwrocic uwage na dobre zarzadzanie pamiecia, zwlaszcza na
// zwolnienie pamieci na koniec programu.

// Pliku Main.cpp, nie wolno modyfikowac.

// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod). 

// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek,
// ani zadnych innych materialow (w tym wlasnych wczesniej
// przygotowanych plikow oprocz makefile)

// Kody zrodlowe musza znajdowac sie w katalogu do ktorego nikt oprocz
// wlasciciela nie ma praw dostepu.

// Rozwiazanie (czyli dodane pliki, makefile (lub CMakeLists.txt) i Main.cpp) 
// nalezy wgrac do UPEL


#include <iostream>
#include "MyString.h"

using namespace std;

int main() {
  MyString s0("Witaj Swiecie");  
  MyString s1("Witaj swiecie");
  const MyString s2("Witaj swiecie");  

  if (s0 == s1 )  
    cout << " s0 i s1 sa identyczne" << endl;
  if (s1 == s2 )  
    cout << " s1 i s2 sa identyczne" << endl;
  if (s2 == s1 )  
    cout << " s2 i s1 sa identyczne" << endl;
  //Uwaga: kolejnosc zmiennych w wyr == zmieniona aby wymuscic poprawnosc const

  s1.Print();
  MyString s3 = s2+" tu i teraz,";
  s3.Print();
  MyString s4 = s1 + ". " + s1 + " - " + s2 + " !!!";
  s4.Print();

  MyString s5 = 2 * MyString("*");
  MyString s6 = s5 + (const MyString&)s5*4;
  s6.Print();
  s6 = s1;
   s6.Print();
   //s6[6] = 'S';
   s6.Print();
  
}
/* wynik
brachwal@vbox:[build]$ ./StringStory 
 s1 i s2 sa identyczne
 s2 i s1 sa identyczne
Witaj swiecie
Witaj swiecie tu i teraz,
Witaj swiecie. Witaj swiecie - Witaj swiecie !!!
**********
Witaj swiecie
Witaj Swiecie
*/