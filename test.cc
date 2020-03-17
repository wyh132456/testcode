#include <iostream>
using std::cout;
using std::endl;
int __init demo_init(void);
int main(int argc, char const *argv[])
{
    cout << "hello" <<endl;
    cout << "world" <<endl;
    system("pause");
    return 0;
}

extern void my_func(void);

int __init demo_init(void)
{
    my_func();
    printK(**********);
    return 0;
}