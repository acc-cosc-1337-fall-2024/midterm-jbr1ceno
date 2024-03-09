#include<question1.h>

using std::string; using std::cin; using std::cout;

int main()
{
    int numRun;
    cout<<"Start program by wrting a number that isn't 0: ";
    cin>>numRun;
    double sales = 0.0;

    while(numRun!= 0)
    {
        cout<<"Please type in a sales amount: ";
        cin>>sales;
        cout<<"\nThe sales of "<<sales<<" yields is a commission of "<<get_sales_commission(sales)<<"\n";
        cout<<"\nDo you want to quit the program? If so type 0, if not type another number: ";
        cin>>numRun;
    }

    
    return 0;
}