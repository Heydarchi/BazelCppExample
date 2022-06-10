#include "helper.h"

PrintHelper::PrintHelper()
{
    objectNumberTracer++;
    cout<<"Object No: "<<objectNumberTracer<<endl;
}

void PrintHelper::PrintCurrentTime()
{
    time_t result = std::time(nullptr);
    cout<<std::asctime(std::localtime(&result))<<"    Object No: "<<objectNumberTracer<<endl;
}

void PrintHelper::PrintCurrentTime(string label)
{
    time_t result = std::time(nullptr);
    cout<<std::asctime(std::localtime(&result))<<"    Object No: "<<objectNumberTracer<<"   label: "<<label<<endl;

}