#include<iostream>
using namespace std;
void showbalance(double balance );
double deposit();
double withdraw(double balance );
int main ()
{
    double balance=123 ;
    int choice ;
    do 
    {
    cout<<"**************************"<<endl;
    cout<<"enter your choice :"<<endl;
    cout<<"**************************"<<endl;
    cout<<"1 check balance "<<endl;
    cout<<"2 deposit "<<endl;
    cout<<"3 withdraw"<<endl;
    cout<<"4 exit "<<endl;
    cin>>choice;
    switch(choice){
        case 1: showbalance(balance);
                break;
        case 2: balance += deposit();
                showbalance(balance);
                break;
        case 3: balance -= withdraw(balance);
                showbalance(balance);
                break;
        case 4: cout<<"thank for visiting \n";
                break;
        default: cout<<"invalid choice\n";
                break;
    }
    }while(choice !=4);

} 
void showbalance(double balance ){
    cout<<balance<<'\n';

}
double deposit(){
    double amount ;
    cout<<"enter amount tobe deposited :";
    cin>>amount ;
    if(amount>=0){
        return amount ;

    } 
    else {
        cout<<"no money ";
        return 0;
    }
}
double withdraw(double balance ){
    double amount ;
    cout<<"enter amount to be detected ";
    cin >>amount;
    if(amount<balance )
    {
        return amount ;
    }
    else {
        cout<<"apne zada he paisa nikal lia "<<'\n';
        reurn 0; 
    }
    
} 
