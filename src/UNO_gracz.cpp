#include "UNO_gracz.h"

UNO_gracz::UNO_gracz()
{
    //ctor
}

UNO_gracz::~UNO_gracz()
{
    //dtor
}

bool UNO_gracz::czyWygrana(){
    if(Talia_gracza.size() == 0) return true;
}

void UNO_gracz::Dobierz_karte(int n){


}

int UNO_gracz::Sprawdz_ilosc(){
    return Talia_gracza.size();
}
