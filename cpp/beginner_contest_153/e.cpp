// https://atcoder.jp/contests/abc153/tasks/abc153_e

#include<iostream>
#include<cmath>

using namespace std;

typedef pair<int, int> P;

int main() {
    int H, N;
    cin >> H >> N;

    int A[N], B[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }

    int maxA = 0;
    for (int i = 0; i < N - 1; i++) {
        maxA = max(A[i], A[i+1]);
    }

    for (int i = H; i < H + maxA; i++) {
        
    }

    int ump = 0;
    while (H > 0) {
        // 体力Hを減らすための最小の組み合わせ
        int pow;
        int mp;
        int cost = 10000;
        // float perf = 0.0f;
        for (int i = 0; i < N; i++) {
            int cos = ceil(float(H) / float(A[i])) * B[i];
            // cout << i << ":" << cos << endl;
            if (cos < cost) {
                cost = cos;
                pow = A[i]; 
                mp = B[i];
            }
        }
        H -= pow;
        ump += mp;
    }

    
    // // 1魔力あたりの攻撃力が最も大きいものを使って貪欲法
    // int pow;
    // int mp;
    // float perf = 0.0f;
    // for (int i = 0; i < N; i++) {
    //     float cost = float(A[i]) / float(B[i]);
    //     cout << i << ":" << cost << endl;
    //     if (perf < cost) {
    //         perf = cost;
    //         pow = A[i]; 
    //         mp = B[i];
    //     }
    // }

    // int ump = 0;
    // while (H >= pow) {
    //     H -= pow;
    //     ump += mp;
    // }

    // if (H > 0) {
    //     // 1発で殺せるかつ魔力が最小の魔法で殺す
    //     P p[N];
    //     for (int i = 0; i < N; i++) {
    //         p[i] = P(A[i], B[i]);
    //         // cout << p[i].first << " " << p[i].second << endl;
    //     }

    //     // 魔力で昇順ソート
    //     sort(p, p+N, [](P x, P y) { return x.second < y.second; });

    //     // for (int i = 0; i < N; i++) {
    //     //     cout << p[i].first << ", " << p[i].second << endl;
    //     // }

    //     // 残りHPに対して最もMP消費が少ない攻撃パターンで殺す
    //     for (int i = 0; i < N; i++) {
    //         if (H <= p[i].first) {
    //             ump += p[i].second;
    //             break;
    //         }
    //     }
    // }

    cout << H << endl;
    cout << ump << endl;
    
    return 0;
}
