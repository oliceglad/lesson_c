#include <iostream>
#include <cstdlib>

using namespace std;
int main () {
    int N;
    int summ = 0;
    int count = 0;
    int k = 6;
    int i, array[N];

    cin >> N;

    for(i = 0; i < N; i++ ) {
        array[i] = (-20*k) + rand() % (20*k);
        // cin >> array[i];
        cout << array[i] << " ";
    }

    for (i = 0; i < N; i++) {
        if (array[i] < 0) {
            summ += array[i];
            count++;
        }
    }

    cout << summ / count << endl;
}
