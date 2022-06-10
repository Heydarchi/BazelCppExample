#include <string>
#include <iostream>
#include <ctime>

using namespace std;

class PrintHelper{
public:
    PrintHelper();
    void PrintCurrentTime();
    void PrintCurrentTime(string label);

private:
    int objectNumberTracer=0;

};