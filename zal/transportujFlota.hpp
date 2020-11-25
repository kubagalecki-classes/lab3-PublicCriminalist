#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    int dostawa,magazyn=0,liczba=0;
    Stocznia stocznia{};
    while(towar>magazyn){
      Statek* s1=stocznia();
      dostawa=s1->transportuj();
      magazyn+=dostawa;
      if(dynamic_cast<Zaglowiec*>(s1)) liczba++;
      delete s1;
    }
    return liczba;
}