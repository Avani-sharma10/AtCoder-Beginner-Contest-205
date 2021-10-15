#include <bits/stdc++.h>
using namespace std;
int main(){
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++){
    cin >> A[i];
    A[i]--;
  }
  vector<int> cnt(N, 0);
  for (int i = 0; i < N; i++){
    cnt[A[i]]++;
  }
  bool ok = true;
  for (int i = 0; i < N; i++){
    if (cnt[i] != 1){
      ok = false;
    }
  }
  if (ok){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
