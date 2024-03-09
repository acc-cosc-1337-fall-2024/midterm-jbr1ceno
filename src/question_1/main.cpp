#include<question1.h>

using std::string; using std::cin; using std::cout;

int main()
{
    double sales = 0.0;

    cout<<"Please type in a sales amount: ";
    cin>>sales;
    cout<<"\nThe sales of "<<sales<<" yields is a commission of "<<get_sales_commission(sales)<<"\n";
    return 0;
}