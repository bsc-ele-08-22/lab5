#include<iostream>
using namespace std;


int main(){

    int DaysLeft = rand() % 12;
    
    if(DaysLeft>10){
        cout<<"You have an active subscription."<<endl;
    }else if(DaysLeft == 0){
        cout<<"Your subscription has expired."<<endl;
    }else if(DaysLeft <= 1){
        cout<<"Your subscription expires within a day!"<<endl;
        cout<<"Renew now and save 20%!"<<endl;
    }else if(DaysLeft <= 5){
        cout<<"Your subscription expires in " << DaysLeft <<" days"<<endl;
        cout<<"Renew now and save 10%!"<<endl;
    }else{
        cout<<"Your subscription will expire soon. Renew now!" << endl;
    }

    return 0;
}