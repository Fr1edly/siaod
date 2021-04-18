#include "sort.h"
namespace sort {
	int* mHeap_Sort(int* mass, size_t len) {
        int par = 0; // Смещение
        bool mes;
        do
        {
            mes = false;
            for (int i = 0; i < len; i++)
            {
                if (i * 2 + 2 + par < len)
                {
                    if ((mass[i + par] > /*<*/ mass[i * 2 + 1 + par]) || (mass[i + par] > /*<*/ mass[i * 2 + 2 + par]))
                    { //2
                        if (mass[i * 2 + 1 + par] < /*>*/ mass[i * 2 + 2 + par])//1
                        {
                            swap(mass[i + par], mass[i * 2 + 1 + par]);
                            mes = true;
                        }
                        else if (mass[i * 2 + 2 + par] < /*>*/ mass[i * 2 + 1 + par]) // 1
                        {
                            swap(mass[i + par], mass[i * 2 + 2 + par]);
                            mes = true;
                        }
                    }
                    if (mass[i * 2 + 2 + par] < /*>*/ mass[i * 2 + 1 + par]) //1
                    {
                        swap(mass[i * 2 + 1 + par], mass[i * 2 + 2 + par]);
                        mes = true;
                    }
                }
                else if (i * 2 + 1 + par < len)//1
                {
                    if (mass[i + par] > /*<*/ mass[i * 2 + 1 + par])//1
                    {
                        swap(mass[i + par], mass[i * 2 + 1 + par]);
                        mes = true;
                    }
                }
            }
            if (!mes)
                ++par;
        } while (par + 2 < len); // Конец сортировки
		return mass;
	}
    void swap(int& n1, int& n2)
    {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }
}