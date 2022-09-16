//// Задание 1. Калькулятор
//
//#include <iostream>
//using namespace std;
//
//typedef float(*calc) (float, float);
//
//
//float add(float x, float y)
//{
//    return x + y;
//}
//float sub(float x, float y)
//{
//    return x - y;
//}
//float multiply(float x, float y)
//{
//    return x * y;
//}
//float divide(float x, float y)
//{
//    if (y == 0)
//    {
//        cout << " You can't divide it by ZERO!\n";
//        return -1;
//    }
//    else return x / y;
//}
//
//size_t p = 4;
//calc* oper = new calc[p]{ add, sub, multiply, divide };
//
//int main()
//{
//	cout << " Calculator " << "\n\n";
//    float x, y;
//    int numb;
//
//    cout << " Input 1 number: " << "\n";
//    cin >> x;
//
//    cout << " Input 2 number: " << "\n";
//    cin >> y;
//
//    cout << " Menu \n" << " 0 ----> + \n" << " 1 ----> - \n";
//    cout <<  " 2 ----> * \n" << " 3 ----> / \n\n";
//
//    cout << " Please select the operation number: " << "\n";
//    cin >> numb;
//
//    cout << " Result: " << oper[numb](x, y) << "\n";
//  
//    delete[] oper;
//
//    return 0;
//}

// Задание 2. 

#include <iostream>
using namespace std;


int main()
{
   

    return 0;
}
