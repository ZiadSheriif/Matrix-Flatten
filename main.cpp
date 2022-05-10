#include <iostream>
#include <vector>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    int n, m, p;
    cout << "-----------------Enter the Dimensions of the 3D array-----------------"
         << "\n";
    cout << "Length:";
    cin >> n;
    cout << "Width:";
    cin >> m;
    cout << "Height:";
    cin >> p;
    vector<vector<vector<int>>> D3(n, vector<vector<int>>(m, vector<int>(p)));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < p; k++) {
                cout << "i:" << i << " j:" << j << " k:" << k << " ==> ";
                cin >> D3[i][j][k];
                cout << "\n";
            }
        }
    }

    int q = n * m * p, y;
    vector<int> D1(q);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < p; k++) {
                y = i * m * p + j * p + k;
                D1[y] = D3[i][j][k];
            }
        }
    }
    cout<<"1D Array Elements: \n";
    for (int i = 0; i < q; i++) {
        cout << D1[i] << " ";
    }
    return 0;
}