//
// Created by pc on 7/13/2023.
//

#ifndef MINI_PROJECT_ATM_ATM_H
#define MINI_PROJECT_ATM_ATM_H
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;
class Atm {
private:
    long int account_No;
    string name;
    int Pin;
    double balance;
    string mobile_No;
public:
    void setData(long int account_noa,string namea,int pin,double balancea,string mobile_Noa){
        account_No=account_noa;
        name=namea;
        Pin=pin;
        balance=balancea;
        mobile_No=mobile_Noa;
    }

    //the getters
    long int  getAccount_No(){
        return account_No;
    }
    string getName(){
        return name;
    }
    int getPin(){
        return Pin;
    }
    double getBalance(){
        return balance;
    }
    string getMobile() {
        return mobile_No;
    }
    //the setters
    void setMobile(string old_mob, string new_mob){
        if(old_mob==mobile_No){
            mobile_No=new_mob;
            cout<<endl<<"Sucessfully Updated Mobile no.";
            _getch();
        }
        else{
            cout<<endl<<"incorrect!! Mobile no";
            _getch();
        }
    }
    void cashWithDraw(int amount){
        if(amount>0 && amount<balance){
            balance-=amount;
            cout<<endl<<"Please Collect Your Cash";
            cout<<endl<<"Available Balance : "<<balance;
            _getch();
        }
        else{
            cout<<endl<<"invalid balance or invalid input";
            _getch();
        }
    }
};


#endif //MINI_PROJECT_ATM_ATM_H
