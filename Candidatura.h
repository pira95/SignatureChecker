/*
Questa classe rappresenta una candidatura con le firme dei sostenitori delle
quali controllare la validita'
*/

#ifndef Candidatura_h
#define Candidatura_h

#include <string>
#include <vector>

class Candidatura {

publiic:

  Candidatura ( const std::string FileFirme );
  ~Candidatura ( );

  //cancello costruttore di copia e operatore di assegnamento
  Candidatura            ( const Candidatura& x ) = delete;
  Candidatura&  operator=( const Candidatura& x ) = delete;

private:

  const std::string CandCognome;
  const std::string CandNome;
  const std::string Sesso;

  struct Firma{
    std::string NomeS;
    std::string CognomeS;
  };

  vector<Firma*> sostenitori;




};


#endif Candidatura_h
