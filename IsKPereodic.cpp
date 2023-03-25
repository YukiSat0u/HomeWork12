#include "IsKPereodic.h"
 
bool IsKPereodic(const std::string& str, int k)
{
    if (k <= 0 || str.size() % k != 0)
    {
        std::cout << str << " is not a multiple of the number " << k << std::endl;
        return false;
    }
 
    int rep = str.size() / k; //число повторений
    for (int i = 0; i < rep; i++)
    {
        std::string sub = str.substr(i * k, k); // получение подстроки длины k
        if (sub != str.substr(0, k))
        {
            std::cout << str << " is not a multiple of the number " << k << std::endl;
            return false;
        }
    }
    std::cout << str << " is a multiple of the number " << k << std::endl;
    return true;
}