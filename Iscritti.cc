//implementazione della classe Iscritti

#include <string>
#include "Iscritti.h"

//costruttore
Iscritti::Iscritti( std::string N, std::string C, std::string D1, std::string H,
                    std::string D2 ) : Nome(N), Cognome(C), data1(D1), ora(H), data2(D2)
{

  ADV = false;

}

//distruttore
Iscritti::~Iscritti(){}

//metodi
const std::string Iscritti::get_Nome()    { return Nome; }
const std::string Iscritti::get_Cognome() { return Cognome; }
const std::string Iscritti::get_data1()   { return data1; }
const std::string Iscritti::get_ora()     { return ora; }
const std::string Iscritti::get_data2()   { return data2; }
bool Iscritti::get_ADV()                  { return ADV; }

void Iscritti::check_ADV(){

   if(data1.substr(0,4) == "2021") { ADV = true; }else{ ADV = false; }
   return;

}
