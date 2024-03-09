#include"question4.h"

using std::cout; using std::cin;

int main()
{
    int numRun;
    cout<<"Start program by wrting a number that isn't 0: ";
    cin>>numRun;
    int num1 = 0;

    while(numRun!= 0)
    {
        cout<<"Type in a number between 1 and 255: ";
        cin>>num1;
        cout<<"The binary code for "<<num1<<" is "<<decimal_to_binary(num1)<<"\n";
        cout<<"\n Do you want to quit the program? If so type 0, if not type another number: ";
        cin>>numRun;
    }
        

    return 0;
}