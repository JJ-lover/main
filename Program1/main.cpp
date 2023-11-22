#include <iostream>
#include <helper.h>

class A
{
    public:
    void upload() {
        std::cout << "A upload" << std::endl;
    }
};

class B
{
    public:
    void upload() {
        std::cout << "B upload" << std::endl;
    }
};

template <typename T>
void uploadT(T& t)
{
    t.upload();
}

int main(int argc, char* argv[])
{
    helper help;
    help.start();
    help.progress();
    help.end();
    A a;
    B b;
    uploadT(a);
    uploadT(b);
    std::cout << "Welcome to C++ Program" << std::endl;
    return 0;
}