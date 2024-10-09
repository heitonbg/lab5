#include <iostream>
#include <random>

using namespace std; 
 
int main()
{
    double sum = 0;
    double sum1 = 0;
    const int N = 5;
    const int M = 5;
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
    cout << "S:\n" ;
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
    cout << "W:\n" ;
    cout << sum1 << endl;
//конец 2
}
