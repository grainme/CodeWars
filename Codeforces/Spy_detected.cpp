// https://codeforces.com/problemset/problem/1512/A (TE = 15ms , Python = 95ms)

#include <iostream>
#include <bits/stdc++.h>



int main(void)
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  freopen("text.txt","r",stdin);


  int T;
  std::cin >> T;
  while (T--)
  {
    int n;
    std::cin >> n;
    std::vector<int> V(n);

    for (int i = 0; i < n; i++)
    {
        std::cin >> V[i];
    }
    
    for (int i = 0; i < n; i++)
    {
      if(count(V.begin(), V.end(), V[i]) == 1)
      {
        std::cout << i+1 << "\n";
        break;
      }
    }
  }
  
}