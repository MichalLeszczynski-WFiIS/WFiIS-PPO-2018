// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego
// pliku.

// Prosze napisac funkcje wykonujace operacje na tablicach
// reprezentujacych liste studentow.

// W tablicy "namesList" przechowywane sa pierwsze i drugie imie
// studenta oddzielone jedna spacja.

// W tablicy "surnamesList" przechowywane sa nazwiska studentow.

// W tablicy "yearsList" przechowywane sa lata na ktorych studiuja
// studenci.

// UWAGA
// Tablice powinny dostosowywac sie do liczby elementow, ktore maja byc
// w nich przechowywane. Operacje alokacji oraz dealokacji pamieci 
// prosze wykonywac poprzez operatory new i delete, odpowiednio.

// Prosze zwrocic uwage na dobre zarzadzanie pamiecia.

// Pliku Main.cpp, nie wolno modyfikowac.

// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod).

// Zarzadzanie procesem kompilacji oraz definicjami zmiennych preprocesora
// można wykonać poprzez dedykowany Makefile lub CMakeLists.txt.

// Pliki programu proszę uporządkować według następującego schematu:
// Lab05/
//      /CMakeLists.txt (lub Makefile)
//      /Main.cpp
//      /include/*pliki naglowkowe*
//      /src/*pliki .cpp*

// Kody zrodlowe musza znajdowac sie w katalogu do ktorego nikt oprocz
// wlasciciela nie ma praw dostepu.

#include "StudentList.h"
#include "StudentList.h"

int main ()
{
  int numberOfStudents = 0;
  char** namesList = NULL;
  char** surnamesList = NULL;
  int* yearsList = NULL;





  AddStudent(&numberOfStudents, &namesList, &surnamesList, &yearsList, "Chuck", "Jozef", "Norris", 7);
  AddStudent(&numberOfStudents, &namesList, &surnamesList, &yearsList, "John", "Wieslaw", "Rambo", 3);
  AddStudent(&numberOfStudents, &namesList, &surnamesList, &yearsList, "Johny", "Eugeniusz", "Bravo", 1);
/*
  std::cout<<"Only names:\n";
  PrintListContent (numberOfStudents, namesList);

  std::cout<<"\nOnly surnames:\n";
  PrintListContent (numberOfStudents, surnamesList);

  std::cout<<"\nEverything full:\n";
  PrintAllListContent (numberOfStudents, namesList, surnamesList, yearsList);
  
#ifdef DELETE
  const int studentToDeleteListIndex = 1;
  DeleteStudent(&numberOfStudents, &namesList, &surnamesList, &yearsList, studentToDeleteListIndex);

  std::cout<<"\nEverything after delete:\n";
  PrintAllListContent (numberOfStudents, namesList, surnamesList, yearsList);
#endif
  */
  ClearStudents (&numberOfStudents, &namesList, &surnamesList, &yearsList);

  return 0;
}

/* wynik dzialania programu:
brachwal@vbox:[build]$ ./Lab05 
Only names:
Chuck Jozef
John Wieslaw
Johny Eugeniusz

Only surnames:
Norris
Rambo
Bravo

Everything full:
Norris, Chuck Jozef - year 7
Rambo, John Wieslaw - year 3
Bravo, Johny Eugeniusz - year 1

Everything after delete:
Norris, Chuck Jozef - year 7
Bravo, Johny Eugeniusz - year 1
*/
