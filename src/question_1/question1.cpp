#include "question1.h"

using std::string; using std::cout;

/*bool test_config()
{
    return true;
}*/

double get_sales_commission(double sales)
{
    double num = 0.0;
    double payment_percentage = 0.0;

    if(sales >= 0.0 && sales <= 499.0)
    {
        num = 5.0;
        payment_percentage = sales * (num/100.0);
    }
    else if(sales >= 500.0 && sales <= 999.0)
    {
        num = 6.0;
        payment_percentage = sales * (num/100.0);
        //cout<<"Percentage of sales payment of "<<sales<<" is "<<payment_percentage;
    }
    else if(sales >= 1000.0 && sales <= 1499.0)
    {
        num = 7.0;
        payment_percentage = sales * (num/100.0);
    }

    else if(sales >= 1500.0)
    {
        num = 8.0;
        payment_percentage = sales * (num/100.0);
        //cout<<"Percentage of sales payment of "<<sales<<" is "<<payment_percentage;
    }
    else
    {
        //sales = 0;
    }
    
    return payment_percentage;
}