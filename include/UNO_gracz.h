#ifndef UNO_GRACZ_H
#define UNO_GRACZ_H
#include<vector>

class UNO_gracz
{
    public:
        std::vector<int> Talia_gracza;
    private:
        UNO_gracz();
        ~UNO_gracz();
        void Dobierz_karte(int n);
        void Postaw_karte(int n);
        void UNO();
        int Sprawdz_ilosc();
};

#endif // UNO_GRACZ_H
