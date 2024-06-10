#include<iostream>
using namespace std;


int main()
{

    int DaysLeft = rand() % 12;
    cout<<DaysLeft<<endl; 

    switch (DaysLeft)
    {
    case 0:
        cout<<"Your subscription has expired."<<endl;
        break;
    case 1:
        cout<<"Your subscription expires within a day!"<<endl;
        cout<<"Renew now and save 20%!"<<endl;
        break;
    case 2:
        cout<<"Your subscription expires in " << DaysLeft <<" days"<<endl;
        cout<<"Renew now and save 10%!"<<endl;
        break;
    case 3:
        cout<<"Your subscription will expire soon. Renew now!" << endl;
        break;

    default:
        cout<<"You have an active subscription."<<endl;
        break;
    }
    return 0;
}