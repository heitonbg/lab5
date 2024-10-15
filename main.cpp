#include <iostream>
#include <random>
using namespace std;
void generateAndCountArrays() {
    int N;
    cout << "Введите размер массива:" << endl;
    cin >> N;
    int S[N];

    mt19937 gen(random_device{}());
    uniform_int_distribution<> dist(-5, 5);

    double sum = 0;
    for (int i = 0; i < N; i++) {
        S[i] = dist(gen);
        S[i] = (S[i] < 0);
    }

    for (int i = 0; i < N; i++) {
        if (S[i] > 0) {
            sum = sum + 1;
        }
    }
    cout << "Количество отрицательных элементов в массиве:" << sum << endl;
}
int main() {
    generateAndCountArrays();
    generateAndCountArrays();
    return 0;
}



