#include <iostream>
#include <conio.h>
#include <string>
#include "Atm.h"

using namespace std;

int main() {
    int choice = 0,enterPIN;
    long int enteraccount_no;
    ::system("cls"); //clear the screen

   Atm user1;
   user1.setData(1234567,"Maher",1111,50000,"01098136027");
   do{
       ::system("cls");
       cout<<endl<<"****Welcom to ATM****"<<endl;
       cout<<endl<<"enter your account no"<<endl;
       cin>>enteraccount_no;
       cout<<endl<<"enter account pin"<<endl;
       cin>>enterPIN;

       if((enteraccount_no==user1.getAccount_No()) && (enterPIN==user1.getPin())){

           do{
               int amount=0;
               string newMobile,oldMobile;

              system("cls");
               cout<<endl<<"*****Welcome to ATM *****"<<endl;
               cout<<endl<<"select option";
               cout<<endl<<"1. Check balance";
               cout<<endl<<"2. Cash withdraw";
               cout<<endl<<"3. Show User Details";
               cout<<endl<<"4. Update Mobile no";
               cout<<endl<<"5. Eixt"<<endl;
               cin>>choice;

               switch (choice) {
                   case 1:
                       //system("cls");
                       cout<<"your Balance is : "<<user1.getBalance();
                       _getch();
                       break;

                   case 2: cout<<endl<<"enter amount";
                            cin>>amount;
                            user1.cashWithDraw(amount);
                       break;

                   case 3:  cout<<endl<<"****acount details****";
                            cout<<endl<<"-> Acount no : "<<user1.getAccount_No();
                            cout<<endl<<"-> Name : "<<user1.getName();
                            cout<<endl<<"-> Balance : "<<user1.getBalance();
                            cout<<endl<<"-> Moblie no : "<<user1.getMobile();
                            _getch();
                       break;

                   case 4: cout<<endl<<"Enter Old Mobile Number : ";
                            cin>>oldMobile;
                            cout<<endl<<"enter the new Mobile Number : ";
                            cin>>newMobile;
                            user1.setMobile(oldMobile,newMobile);
                   case 5: exit(0);
                   default:
                       cout<<endl<<"enter vaild data!!";
               }

           } while (1);
       }
       else{
           cout<<endl<<"invalid user data!!";
           _getch();
       }

   } while (1);

    return 0;
}
