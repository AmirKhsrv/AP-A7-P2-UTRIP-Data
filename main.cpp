#include <iostream>

#include "Utrip.hpp"
#include "Interface.hpp"

using namespace std;

int main(int argc, char* argv[])
{
    ReadData readData(argv[1], argv[2]);
    Utrip utrip(readData.readHotelsData());
    Interface interface(&utrip);
    while (cin)
    {
        try
        {
            interface.runProgram();
        }
        catch(const exception& e)
        {
            cout << e.what() << endl;
        }
    }
    return 0;
}