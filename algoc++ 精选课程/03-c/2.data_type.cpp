#include <iostream> // c++ 标准库的一部分
#include <stdio.h>  // c标准库的一部分
#include <algorithm>

int main() { 
    
    int myNum = 5;               // Integer (whole number)
    float myFloatNum = 5.99;     // Floating point number
    double myDoubleNum = 9.98;   // Floating point number
    char myLetter = 'D';         // Character
    bool myBoolean = true;       // Boolean
    std::string myText = "Hello";     // String
   
    char myname[4] = {'T','O','M'};
    char mydog[4] = "ggg";
    char mycat[] = "ccc";

    printf("myNum = %d\nmyFloatNum = %f\nmyDoubleNum = %f\nmyLetter=%c\nmyname=%s\nmydog=%s\nmycat=%s\n", 
    myNum, myFloatNum, myDoubleNum, myLetter, myname, mydog, mycat);
    // 打印不同的变量可参考 https://www.runoob.com/cprogramming/c-function-printf.html

    reverse(myText.begin(), myText.end());
    std::cout << myText << std::endl;

    return 0;

}