#include <bits/stdc++.h>
using namespace std;
int main(){
  long long A, B, C;
  cin >> A >> B >> C;
  if (C % 2 == 0){
    A = abs(A);
    B = abs(B);
  }
  if (A < B){
    cout << "<" << endl;
  } else if (A > B){
    cout << ">" << endl;
  } else {
    cout << "=" << endl;
  }
}
