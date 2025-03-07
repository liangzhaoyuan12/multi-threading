#include <iostream>
#include <thread>
using namespace std;
int hello()
{
    cout << "hello-thread" << endl;
    return 0;
}
int add(int a , int b)
{
    cout << "add-thread" << endl;
    cout<<a+b<<endl;
    return a + b;
}
int main(int argc, char *argv[])
{
    cout << "main" << endl;
    thread t(hello);
    t.join();
    thread t1(add, 1, 2);
    t1.join();
    cout << "main end" << endl;
    return 0;
}
