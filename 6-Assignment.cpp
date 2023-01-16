//
// Created by DELL on 16/01/2023.
//
#include "iostream"
#include "string"

using namespace std;
int main()
{
    string email;
    bool atFlag = false;
    bool comFlag = false;
    cout<<"Enter email address :";
    cin>>email;
    for(int c = 0; c<email.length(); c++)
        if(email[c] == '@')
            atFlag = true;
    int size = email.length();
    if(email.substr(size-4,size-1) ==".com")
        comFlag = true;
    if(atFlag and comFlag)
        cout<<"Valid email address"<<endl;
    else{
        cout<<"Invalid email address"<<endl;
    }
    return 0;
}