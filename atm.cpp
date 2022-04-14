#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <windows.h>
#include<fstream>
#include<conio.h>

using namespace std; 
                      //    All veable in this place is globli defined
int a ;

long long deposit_amount;
long long withdrawal;

int psw ;


int func () {
    cout<<"\t\t\t\t\t|---------------------------|"<<endl;
    cout<<"\t\t\t\t\t|********* welcome *********|"<<endl;
    cout<<"\t\t\t\t\t|---------------------------|"<<endl;
    cout<<"                                               "<<endl;
   
cout<<"\t\t\t\t\t    Enter your password :";
cout<<"";
 
cin>>psw;

if (psw==202200)
{
 cout<<"welcome" ;
}

else{
    system("cls");
    cout<<"\t\t\t\t\t    !!!Wrong password"<<endl;
     cout<<"\t\t\t\t\t    Try again !!!"<<endl;
    func();
    
}
 system("cls");






// ofstream pw ;

// pw.open("infnityfree.txt");
// cout<<"password : "<<psw;
// cout<<"confirm password : "<<pass;




 system("cls");

}
// int password (){   


// }





                                    // deposit funcion 

int deposit (){
    if (a==1)
    {
        cout<<"\t\t\t\t\t    Enter amount you want to deposit : ";
        cin>>deposit_amount;
         system("cls");
        cout<<"\t\t\t\t\t    |-------------------------------|"<<endl;
        cout<<"\t\t\t\t\t    |      Deposit successfully     |"<<endl;
        cout<<"\t\t\t\t\t    |      Deposit amount is : "<<deposit_amount<<"   |"<<endl;
        cout<<"\t\t\t\t\t    |-------------------------------|\n"<<endl;
        
    }
    
}

int check_balance (){
    if (a==3)
    {
              cout<<"\t\t\t|-----------------------------------------------------------------------|\n";
              cout<<"\t\t\t|                                                                       |\n";
              cout<<"\t\t\t|                    Your current balace is : "<<deposit_amount-withdrawal<<"                         |"      <<endl;
              cout<<"\t\t\t|                                                                       |\n";
              cout<<"\t\t\t|-----------------------------------------------------------------------|\n";
         
    }
    
}   


int  withdrawal_amount(){
    if (a==2)
    {
        cout<<"\t\t\t\t\t    Enter amount you want to withdrawal : ";
        cin>>withdrawal;
        cout<<"\t\t\t\t\t    |-------------------------------|"<<endl;
        cout<<"\t\t\t\t\t    |  withdrawal  successfully     |"<<endl;
        cout<<"\t\t\t\t\t    |  withdrawl amount is : "<<withdrawal<<"     |"<<endl;
        cout<<"\t\t\t\t\t    |-------------------------------|\n"<<endl;

        if (withdrawal>deposit_amount)
        {
            cout<<"\t\t\t\t !!!!! You can't withdraw because your currnt balance is : "<<deposit_amount<<endl;
            "plese deposit amount\n";
        }
        

    }
    
}
string str;
    int id ;
    string day,month,year ;
int user(){
    
    cout<<"\t\t\t\tEnter your name :";
    cin>>str;
    cout<<"\t\t\t\t!!! acount number less then 8 numbers\n";
    cout<<"\t\t\t\tenter your acount number :";
    
    cin>>id;
    cout<<"\t\t\t\tEnter today day :";
    cin>>day;
    cout<<"\t\t\t\tEnter Month :";
    cin>>month;
    cout<<"\t\t\t\tEnter year :";
    cin>>year;
    
    system("cls");
}
bool istrue =true;








int main() {










 system("color 7c");
    func();
 
   user();

    for (int i = 0; i <10000000000000; i++)
    {

    cout<<"\t\t\t\t     ****************WELCOME TO ATM******************"<<endl;
    cout<<"\t\t\t\t\t|-------------------------------------|\n";
    cout<<"\t\t\t\t\t|      USER ACOUNT DETAILS            |\n";
    cout<<"\t\t\t\t\t|-------------------------------------|\n";
    cout<<"\t\t\t\t\t| Your name is: "<<str<<          "                    |"<<endl;
    cout<<"\t\t\t\t\t| Your acount number is : "<<id<<    "       |         "<<endl;
    cout<<"\t\t\t\t\t| Today date is : "<<day <<month <<year <<                "       |"<<endl;
    cout<<"\t\t\t\t\t|-------------------------------------|\n";
    cout<<"\t\t\t\t|--------------------------------------------------------|"<<endl;
    cout<<"\t\t\t\t|               deposit amount Enter     =>  1           |"<<endl;
    cout<<"\t\t\t\t|               withdrawal amount Enter  =>  2           |"<<endl;
    cout<<"\t\t\t\t|               check amount Enter       =>  3           |"<<endl;
    cout<<"\t\t\t\t|               Exit                     =>  4           |"<<endl;
    cout<<"\t\t\t\t|--------------------------------------------------------|"<<endl;
  
            cout<<"\t\t\t\t\t    Enter your choice : ";
            
    cin>>a;        
    cout<<endl;
            cout<<endl;
            cout<<endl;
    

 system("cls");
   

    
switch (a)
{
case 1:
    deposit();
    
    break;
    case 2:
        withdrawal_amount();
        
    break;
    case 3:
    check_balance();
   int abcd;
    break;
    case 4 :
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t**********************Have a nice day************************* ";
    cout<<"\t\t\t**********************THANKS FOR VISIT************************* ";
    istrue=false;
    return 0;
   

default:
cout<<"\t\t\t\t\t\t    !! Invalid choice\n"<<endl;
    break;
}

    

    }

return 0;
}



