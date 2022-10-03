#include <iostream>
#include <bits/stdc++.h>


int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    freopen("text.txt", "r", stdin);
    int a,b,c;
    std::cin >> a>>b>>c;
    int x = a-b;
    if(x >= c or x < 0)
    {
        std::cout << "good luck" << "\n";
    }
    else
    {
        std::cout << "see you next semester" << "\n";
    }
}