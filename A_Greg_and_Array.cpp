#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define op()                      \
	ios_base::sync_with_stdio(0); \
	cin.tie(0);                   \
	cout.tie(0);


long long int A[100001];
long long int B[100001]; 
long long int C[100001]; 
long long int M[100001][3];

int main() {
	op();
    int n, m, k;
    while (cin >> n >> m >> k) {
        memset(A, 0, sizeof(A));
        memset(B, 0, sizeof(B));
        memset(C, 0, sizeof(C));
        memset(M, 0, sizeof(M));
        for (int i = 0; i < n; i++)
            cin >> A[i];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < 3; j++)
                cin >> M[i][j];
            M[i][0]--, M[i][1]--;
        }
        for (int i = 0; i < k; i++) {
            int a, b;
            cin >> a >> b;
            a--, b--;
            C[a]++, C[b + 1]--;
        }
        long long int tmp = 0;
        for (int i = 0; i < m; i++) {
            tmp += C[i];
            B[M[i][0]] += tmp * M[i][2];
            B[M[i][1] + 1] -= tmp * M[i][2];
        }
        tmp = 0;
        for (int i = 0; i < n; i++) {
            tmp += B[i];
            if (i == 0)
                cout << (tmp + A[i]);
            else
                cout << " " << (tmp + A[i]);
        }
        cout << '\n';
    }
    return 0;
}

