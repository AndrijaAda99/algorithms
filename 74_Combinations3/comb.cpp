#include <iostream>

using namespace std;

void print_arr(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(void)
{
    int n;
    cin >> n;

    int comb[3];

    for (int i = 1; i <= n - 2; i++) {
        comb[0] = i;
        for (int j = i + 1; j <= n - 1; j++) {
            comb[1] = j;
            for (int k = j + 1; k <= n; k++) {
                comb[2] = k;
                print_arr(comb, 3);
            }
        }
    }
    
    return 0;
}
