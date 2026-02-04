#include <iostream>
using namespace std;

int main()
{

    int m,n;
    cin>>n>>m;

    int a[n][m],b[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>b[i][j];
        }
    }

    int counter = 0;
    int indeks = 0;
    while (indeks < m){
        for (int i = 0; i < m; i++) {
            bool kolona = true;
            for (int j = 0; j < n; j++) {
                if (a[j][indeks] != b[j][i]) {
                    kolona = false;
                }
            }
            if (kolona) {
                counter++;
            }
        }
        indeks++;
    }
    cout << counter << endl;


    return 0;
}
