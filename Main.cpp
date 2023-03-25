#include "IsKPereodic.h"
 
int main(int argc, char* argv[])
{
    //Тесты
    std::string text1 = "abcabcabcabc";
    std::string text2 = "abcdabcabba";
    std::string text3 = "1231123123123";
    std::string text4 = "0";
 
    //Тест #1
    std::cout << "test #1" << std::endl;
    IsKPereodic(text1, 3);
    IsKPereodic(text1, 2);
    IsKPereodic(text1, 0);
    IsKPereodic(text1, -2);
 
    //Тест #2
    std::cout << "test #2" << std::endl;
    IsKPereodic(text2, 1);
    IsKPereodic(text2, 4);
    IsKPereodic(text2, 0);
    IsKPereodic(text2, -2);
 
    //Тест #3
    std::cout << "test #3" << std::endl;
    IsKPereodic(text3, 1);
    IsKPereodic(text3, 3);
    IsKPereodic(text3, 0);
    IsKPereodic(text3, -2);
 
    //Тест #4
    std::cout << "test #4" << std::endl;
    IsKPereodic(text4, 1);
    IsKPereodic(text4, 2);
    IsKPereodic(text4, 0);
    IsKPereodic(text4, -2);
 
    return 0;
}