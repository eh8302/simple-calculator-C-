#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter integer a and b"<<endl;
    cin>>a>>b;
    cout<<"Enter the operator"<<endl;
    char op;
    cin>>op;

    if(op == '+'){
        cout<<a+b;
    }
    if(op == '-'){
        cout<<a-b;
    }
    if(op == '*'){
        cout<<a*b;
    }
    if(op == '/'){
        cout<<a/b;
    }
    if(op == '%'){
        cout<<a%b;
    }

}