#include <iostream>
#include <iomanip>
#include "sort.h"

using namespace std;


int main()
{
    const int len = 100;
    int *mass= new int[len]();
   
    
    // Для наглядности заполняем массив числами от len до 0.
    for (int i = 0; i < len; i++) {
        mass[i] = len - i;
        
    }
    for (size_t i = 0; i < len; i++) {
        std::swap(mass[i], mass[rand() % len]);
        std::cout << mass[i] << setw(5);
    }
    //
    int *ptr = sort::mHeap_Sort(mass, len);

    std::cout << std::endl << std::endl;
    for (int i = 0; i < len; i++)
        std::cout << mass[i] << setw(5);

    return 0;
}