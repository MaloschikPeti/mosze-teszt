#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int* b = new int[N_ELEMENTS];//helytelen változó név, hiányzó _ jel
    std::cout << "1-100 ertekek duplazasa" << std::endl;//helytelen karakter használat a string kezeléshez ' helyett " kéne, hiányzik a sortörés
    for (int i = 0; i < 100; i++)//helytelen for ciklus feltétel csak a kezdőérték van megadva
    {
        b[i] = (i + 1) * 2;//helytelen módon van használva az i iterátor, nem 1-100 ig megy a sor, hanem 0-99-ig
    }
    for (int i = 0; i < 100; i++)//hiányzik a feltételből, hogy az i-nek meddig kell növekednie
    {
        std::cout << "Ertek: " << b[i] << std::endl;//hiányzik a b[i] és a sortörés
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0;//hiányzik a kezdőérték definiálása
    for (int i = 0; i < N_ELEMENTS; i++)//, helyett ; kéne használni
    {
        atlag += b[i];//hiányzik a sorvégi ; jel
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout<<"Sziasztok en vagyok Kovacs Jakab!"
    return 0;
}
