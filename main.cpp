#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int* b = new int[NELEMENTS];//helytelen változó név, hiányzó _ jel
    std::cout << '1-100 ertekek duplazasa'//helytelen karakter használat a string kezeléshez ' helyett " kéne, hiányzik a sortörés
        for (int i = 0;)//helytelen for ciklus feltétel csak a kezdõérték van megadva
        {
            b[i] = i * 2;//helytelen módon van használva az i iterátor, nem 1-100 ig megy a sor, hanem 0-99-ig
        }
    for (int i = 0; i; i++)//hiányzik a feltételbõl, hogy az i-nek meddig kell növekednie
    {
        std::cout << "Ertek:"//hiányzik a b[i] és a sortörés
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;//hiányzik a kezdõérték definiálása
    for (int i = 0; i < N_ELEMENTS, i++)//, helyett ; kéne használni
    {
        atlag += b[i]//hiányzik a sorvégi ; jel
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}