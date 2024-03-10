#include <iostream>

namespace one
{
    int add(int a = 1, int b = 1);
}

namespace two
{
    int add(int a = 2, int b = 1);
}

int main()
{
    std::cout << one::add() << " " << two::add();
    return 0;
}

int two::add(int a, int b)
{
    return (a + b);
}

int one::add(int a, int b)
{
    return (a + b);
}

