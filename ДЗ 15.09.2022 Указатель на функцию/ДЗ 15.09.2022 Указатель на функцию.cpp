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

//// Задание 2. 
//// Первый вариант
//
//#include <iostream>
//using namespace std;
//
//void func(int* ar1, int* ar2, int* ar3, size_t k, size_t v)
//{
//    int sum1 = 0, sum2 = 0;;
//
//    for (size_t i = 0; i < v; )
//    {
//        for (size_t x = 0; x < k; x++)
//        {
//            sum1 += ar1[x];
//        }
//        //cout << " A " << sum1 << "\n";
//        ar3[i] = sum1;
//        i++;
//
//        for (size_t y = 0; y < k; y++)
//        {
//            sum2 += ar2[y];
//        }
//        //cout << " B " << sum2 << "\n";
//        ar3[i] = sum2;
//        i++;
//    }
//    cout << "MasC ";
//    for (size_t i = 0; i < v; i++)
//    {
//        cout << ar3[i] << " ";
//    }
//
//}
//
//int main()
//{
//    size_t k = 7;
//    size_t v = 2;
//    int* A = new int[k] { 5, 5, 5, 5, 5, 5, 5 };
//    int* B = new int[k] { 6,6, 6, 6, 6, 6, 6 };
//    int* C = new int[v];
//
//    func(A, B, C, k, v);
//
//    delete[] A;
//    delete[] B;
//    delete[] C;
//
//    return 0;
//}

// Задание 2. 
// Второй вариант

#include <iostream>
using namespace std;

typedef int(*oper_t) (int*, size_t);

//void func(int* ar1, int* ar2, int* ar3, size_t k, size_t v)
//{
//    int sum1 = 0, sum2 = 0;;
//
//    for (size_t i = 0; i < v; )
//    {
//        for (size_t x = 0; x < k; x++)
//        {
//            sum1 += ar1[x];
//        }
//        //cout << " A " << sum1 << "\n";
//        ar3[i] = sum1;
//        i++;
//
//        for (size_t y = 0; y < k; y++)
//        {
//            sum2 += ar2[y];
//        }
//        //cout << " B " << sum2 << "\n";
//        ar3[i] = sum2;
//        i++;
//    }
//    cout << "MasC ";
//    for (size_t i = 0; i < v; i++)
//    {
//        cout << ar3[i] << " ";
//    }
//
//}

int sumA(int* ar1, size_t k)
{
    int sum1 = 0;
    for (size_t x = 0; x < k; x++)
    {
        sum1 += ar1[x];
    }
    return sum1;
}
int sumB(int* ar2, size_t k)
{
    int sum2 = 0;
    for (size_t x = 0; x < k; x++)
    {
        sum2 += ar2[x];
    }
    return sum2;
}



int main()
{
    size_t k = 7;
    
    int* A = new int[k] { 5, 5, 5, 5, 5, 5, 5 };
    int* B = new int[k] { 6, 6, 6, 6, 6, 6, 6 };
    //int* C = new int[v];
    size_t v = 2;
    oper_t* C = new oper_t[v]{ sumA, sumB };

    //func(A, B, C, k, v);
    for (size_t i = 0; i < v; )
    {
        cout << C[i](A, k) << "\n";
        i++;
        cout << C[i](B, k) << "\n";
        i++;
    }
    


    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}

