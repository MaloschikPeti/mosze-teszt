#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int* b = new int[N_ELEMENTS];//helytelen v�ltoz� n�v, hi�nyz� _ jel
    std::cout << "1-100 ertekek duplazasa" << std::endl;//helytelen karakter haszn�lat a string kezel�shez ' helyett " k�ne, hi�nyzik a sort�r�s
    for (int i = 0; i < 100; i++)//helytelen for ciklus felt�tel csak a kezd��rt�k van megadva
    {
        b[i] = (i + 1) * 2;//helytelen m�don van haszn�lva az i iter�tor, nem 1-100 ig megy a sor, hanem 0-99-ig
    }
    for (int i = 0; i < 100; i++)//hi�nyzik a felt�telb�l, hogy az i-nek meddig kell n�vekednie
    {
        std::cout << "Ertek: " << b[i] << std::endl;//hi�nyzik a b[i] �s a sort�r�s
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0;//hi�nyzik a kezd��rt�k defini�l�sa
    for (int i = 0; i < N_ELEMENTS; i++)//, helyett ; k�ne haszn�lni
    {
        atlag += b[i];//hi�nyzik a sorv�gi ; jel
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}