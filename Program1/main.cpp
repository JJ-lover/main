#include <iostream>
#include <helper.h>

int main(int argc, char* argv[])
{
    helper help;
    help.start();
    help.progress();
    help.end();
    std::cout << "Welcome to C++ Program" << std::endl;
    return 0;
}