// KozekaElizaveta2005
// 4B 6F 7A 65 6B 61 45 6C 69 7A 61 76 65 74 61 32 30 30 35
// 4b 6f 7a 65 6b 61 45 6c 69 7a 61 76 65 74 61 32 30 30 35
// 4b 00 6f 00 7a 00 65 00 6b 00 61 00 45 00 6c 00 69 00 7a 00 61 00 76 00 65 00 74 00 61 00 32 00 30 00 30 00 35 00

// КозекаЕлизавета2005
// CA EE E7 E5 EA E0 C5 EB E8 E7 E0 E2 E5 F2 E0 32 30 30 35
// d0 9a d0 be d0 b7 d0 b5 d0 ba d0 b0 d0 95 d0 bb d0 b8 d0 b7 d0 b0 d0 b2 d0 b5 d1 82 d0 b0 32 30 30 35
// 1a 04 3e 04 37 04 35 04 3a 04 30 04 15 04 3b 04 38 04 37 04 30 04 32 04 35 04 42 04 30 04 32 00 30 00 30 00 35 00

// Козека2005Elizaveta
// CA EE E7 E5 EA E0 32 30 30 35 45 6C 69 7A 61 76 65 74 61
// d0 9a d0 be d0 b7 d0 b5 d0 ba d0 b0 32 30 30 35 45 6c 69 7a 61 76 65 74 61
// 1a 04 3e 04 37 04 35 04 3a 04 30 04 32 00 30 00 30 00 35 00 45 00 6c 00 69 00 7a 00 61 00 76 00 65 00 74 00 61 00

#include <iostream>
#include <locale.h>
#include <cstdlib>
int main()
{
    setlocale(LC_ALL, "Russian");

    int number = 0x12345678;

    char hello[] = "Hello, ";
    char en[] = "KozekaElizaveta2005";
    char ru[] = "КозекаЕлизавета2005";
    char re[] = "Козека2005Elizaveta";

    wchar_t Len[] = L"KozekaElizaveta2005";
    wchar_t Lru[] = L"КозекаЕлизавета2005";
    wchar_t Lre[] = L"Козека2005Elizaveta";

    std::cout << hello << en << std::endl;
    return 0;
}