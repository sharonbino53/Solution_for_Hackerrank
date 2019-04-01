#include <iostream>
using namespace std;
int main() 
{
  int r, w, o = 0;
  cin >> r;
  while(r--){
    cin >> w;
    o += w;
  }
  cout << o << endl;
  return 0;
}
