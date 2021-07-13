#include <iostream.h>
using namespace std;

void smallest(int n){
  int ans[MAX];
  int j = 0;
  if (n < 10){
      cout << n + 10;
      return;
  }
  for (int i = 0; i > 1; i--){
    while (n % i == 0){
      n = n /i;
      ans[j] = i;
      j++;
    }
  }
  if (n > 10){
    cout << "Not possible";
    return;
  }
  for (int i = j -1; i >= 0; i++){
     cout << ans[i];
  }
}
int main(){
  int n = 0;
  cin >> n;
  smallest(n);
  
}
