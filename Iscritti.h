/*
Questa interfaccia definisce l'oggetto che rappresenta un iscritt* a CCP.
*/

#ifndef Iscritti_h
#define Iscritti_h

#include <string.h>

class Iscritti{

public:

  //costruttore
  Iscritti ( const std::string n, const std::string c, const std::string d1,
              const std::string h, const std::string d2 );
  //distruttore
  ~Iscritti ( );
  //cancello costruttore di copia e operatore di assegnamento
  Iscritti            ( const Iscritti& x ) = delete;
  Iscritti&  operator=( const Iscritti& x ) = delete;

  //metodi per recuperare i membri privati
  const std::string get_Nome();
  const std::string get_Cognome();
  const std::string get_data1();
  const std::string get_ora();
  const std::string get_data2();
  bool get_ADV();
  void check_ADV();

private:

  const std::string Nome;
  const std::string Cognome;
  const std::string data1;
  const std::string ora;
  const std::string data2;
  bool ADV;
  unsigned int FirmeDonne;
  unsigned int FirmeUomini;

};

#endif
