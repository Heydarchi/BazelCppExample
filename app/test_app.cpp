#include <iostream>
#include "lib/helper.h"

using namespace std;

int main()
{
    cout<<"Application is started!!"<<endl;
    PrintHelper printHelper1;
    PrintHelper printHelper2;

    printHelper1.PrintCurrentTime();
    printHelper2.PrintCurrentTime("Yohoooo");

    return 1;

}