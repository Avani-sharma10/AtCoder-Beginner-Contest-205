#include <bits/stdc++.h>
using namespace std;
const long long INF = 1100000000000000000;
int main(){
  int N, Q;
  cin >> N >> Q;
  vector<long long> A(N);
  for (int i = 0; i < N; i++){
    cin >> A[i];
  }
  sort(A.begin(), A.end());
  for (int i = 0; i < Q; i++){
    long long K;
    cin >> K;
    long long tv = INF, fv = 0;
    while (tv - fv > 1){
      long long mid = (tv + fv) / 2;
      long long cnt = upper_bound(A.begin(), A.end(), mid) - A.begin();
      if (mid - cnt >= K){
        tv = mid;
      } else {
        fv = mid;
      }
    }
    cout << tv << endl;
  }
}
