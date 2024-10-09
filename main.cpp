#include <iostream>
#include <random>

using namespace std; 
 
int main()
{
    int N, M;
    cout << "Введите количество чисел в массиве 1 и 2:" << endl;
    cin >> N; 
    cin >> M;
    double sum = 0;
    double sum1 = 0;
    int S[N];
    int W[M];
    mt19937 gen {random_device()()};
    uniform_int_distribution <> dist (-5, 5);
//первый массив
    for (int i=0; i < N; i++)
    {
        S[i] = dist(gen);
        S[i] = (S[i] < 0);
    }

    for (int i=0; i < N; i++)
    {
        if (S[i] > 0) {
            sum = sum + 1;
        }
    }
    cout << "Количество отрицательных чисел в S:\n" ;
    cout << sum << endl;
//конец 1 массива
//начало 2
    for (int i=0; i < N; i++)
    {
        W[i] = dist(gen);
        W[i] = (W[i] < 0);
    }

    for (int i=0; i < M; i++)
    {
        if (W[i] > 0) {
            sum1 = sum1 + 1;
        }
    }
    cout << "Количество отрицательных чисел в W:\n" ;
    cout << sum1 << endl;
//конец 2
}
