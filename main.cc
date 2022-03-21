
//#include "Sign.h"
//#include "ListMaker.h"
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

#include "Iscritti.h"

using namespace std;

int main ( int argc, char* argv[] ){

  //recupero dalla command line il nome del file da aprire
  string   ListaIscritti (argv[1]);
  ifstream inputFile     (ListaIscritti);

  //creo le variabili per il loop
  unsigned int maxSize = 500;
  string cognome;
  string nome;
  vector<Iscritti*> listaIscritti;
  listaIscritti.reserve ( maxSize );
  unsigned int numeroIscritti = 0;
  string dataPrimaIscrizione;
  string oraPrimaIscrizione;
  string rinnovo;

  while ( inputFile >> cognome ) {

    inputFile >> nome;
    inputFile >> dataPrimaIscrizione;
    inputFile >> oraPrimaIscrizione;
    inputFile >> rinnovo;

    //chiamo il costruttore di Iscritto con parametri nome e cognome (dinamico)
    Iscritti* I = new Iscritti(nome, cognome, dataPrimaIscrizione,
                                oraPrimaIscrizione, rinnovo);

    I -> check_ADV();
    //push back del puntatore
    listaIscritti.push_back( I );
    //incremento il contatore
    numeroIscritti++;


  }

  //loop per stampare i nominativi della lista
  cout << "Il numero totale degli iscritti e' "<< numeroIscritti << endl;

  for( Iscritti* x : listaIscritti ){

    cout << x -> get_Cognome() << " " << x -> get_Nome() << " "
          << x -> get_data1() << " " << x -> get_ora() << " " << x -> get_data2() <<
          " " << x -> get_ADV() << endl;

  }

  return 0;

  }
