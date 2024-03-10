#include <iostream>

void add(int &a, int &b)
{
    a = a + b;
}
int main()
{
    int n = 3;
    int m = 4;
    add(n,m);
    std::cout << n;
    
}