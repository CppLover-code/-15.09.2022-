﻿// Задание 1. Калькулятор

#include <iostream>
using namespace std;

typedef float(*calc) (float, float);


float add(float x, float y)
{
    return x + y;
}
float sub(float x, float y)
{
    return x - y;
}
float multiply(float x, float y)
{
    return x * y;
}
float divide(float x, float y)
{
    if (y == 0)
    {
        cout << " You can't divide it by ZERO!\n";
        return -1;
    }
    else return x / y;
}

size_t p = 4;
calc* oper = new calc[p]{ add, sub, multiply, divide };

int main()
{
	cout << " Calculator " << "\n\n";
    float x, y;
    int numb;

    cout << " Input 1 number: " << "\n";
    cin >> x;

    cout << " Input 2 number: " << "\n";
    cin >> y;

    cout << " Menu \n" << " 0 ----> + \n" << " 1 ----> - \n";
    cout <<  " 2 ----> * \n" << " 3 ----> / \n\n";

    cout << " Please select the operation number: " << "\n";
    cin >> numb;

    cout << " Result: " << oper[numb](x, y) << "\n";
  
    delete[] oper;

    return 0;
}

//// Задание 2. Первый вариант
//
//#include <iostream>
//#include <ctime>
//
//using namespace std;
//
//typedef int(*oper_t) (int*, int*, int*, size_t, size_t);
//int random(int* arr, size_t length)
//{
//    for (size_t i = 0; i < length; i++)
//    {
//        arr[i] = rand() % 10 + 1;
//    }
//
//    for (size_t i = 0; i < length; i++)
//    {
//        cout << arr[i] << ' ';
//    }
//    cout << "\n";
//
//    return arr[length];
//}
//int func(int* ar1, int* ar2, int* ar3, size_t k, size_t v)
//{
//    int sum1 = 0, sum2 = 0;
//
//    for (size_t i = 0; i < v; )
//    {
//        for (size_t x = 0; x < k; x++)
//        {
//            sum1 += ar1[x];
//        }
//        ar3[i] = sum1;
//        i++;
//
//        for (size_t y = 0; y < k; y++)
//        {
//            sum2 += ar2[y];
//        }
//        ar3[i] = sum2;
//        i++;   
//    }
//    //cout << " SUM1 " << sum1 << " SUM2 " << sum2 << "\n";
//    return ar3[v];
//}
//
//int main()
//{
//    srand(time(0));
//    oper_t operation;
//    operation = func;
//
//    size_t k = 7;
//    size_t v = 2;
//    int* A = new int[k];
//    int* B = new int[k];
//    int* C = new int[v];
//
//    cout << " Array A: ";
//    random(A, k);
//    cout << "\n Array B: ";
//    random(B, k);
//
//    operation (A,B,C, k,v);
// 
//    cout << "\n Array C: ";
//    for (size_t i = 0; i < v; i++) cout << C[i] << " ";
//
//    delete[] A;
//    delete[] B;
//    delete[] C;
//
//    return 0;
//}

// //Задание 2. Второй вариант
//
//#include <iostream>
//#include <ctime>
//
//using namespace std;
//
//typedef int(*oper_t) (int*, int*, int*, size_t);
//int random(int* arr, size_t length)
//{
//    for (size_t i = 0; i < length; i++)
//    {
//        arr[i] = rand() % 10 + 1;
//    }
//
//    for (size_t i = 0; i < length; i++)
//    {
//        cout << arr[i] << ' ';
//    }
//    cout << "\n";
//
//    return arr[length];
//}
//int func(int* ar1, int* ar2, int* ar3, size_t k)
//{
//    int sum = 0;
//
//    for (size_t i = 0; i < k; )
//    {
//        for (size_t x = 0; x < k; x++)
//        {
//            for (size_t y = x; y < k; )
//            {
//                sum = ar1[x] + ar2[y];
//                ar3[i] = sum;
//                i++;
//                break;
//            }
//        }
//    }
//    //cout << " SUM1 " << sum1 << " SUM2 " << sum2 << "\n";
//    return ar3[k];
//}
//
//int main()
//{
//    srand(time(0));
//    oper_t operation;
//    operation = func;
//
//    size_t k = 7;
//
//    int* A = new int[k];
//    int* B = new int[k];
//    int* C = new int[k];
//
//    cout << " Array A: ";
//    random(A, k);
//    cout << "\n Array B: ";
//    random(B, k);
//
//    operation(A, B, C, k);
//
//    cout << "\n Array C: ";
//    for (size_t i = 0; i < k; i++)
//    {
//        cout << C[i] << " ";
//    }
//
//    delete[] A;
//    delete[] B;
//    delete[] C;
//
//    return 0;
//}