#include<bits/stdc++.h>
using namespace std;

class calculator{

    float a, b;


    public:
    
    void takeInput(){
        cout<<"Enter first number: ";
        cin>>a;
        cout<<"Enter second number: ";
        cin>>b;
        
    }

    float add(){
        return a+b;
    }
    float diff()
    {
        return a-b;
    }
    float multi(){
        return a*b;
    } 
    float div(){
        if(b == 0)
        {
            cout<<"Division by zero ";
            return INT_MAX;
        }
        else{
            return a/b;
        }
    }

};

int main()
{

    
    char s;
    while(true){
        cout<<"Enter the operation to perform or c character to stop: ";
        cin>>s;
        
        calculator c;
        if(s == '+')
        {
            c.takeInput();
            cout<<"Add: "<<c.add()<<endl;
        }
        else if(s == '-')
        {
            c.takeInput();
            cout<<"Sub: "<<c.diff()<<endl;
        }
        else if(s == '*')
        {
            c.takeInput();
            cout<<"Multi: "<<c.multi()<<endl;

        }
        else if(s == '/')
        {
            c.takeInput();
            cout<<"Div: "<<c.div()<<endl;

        }
        else if(s == 'c'){
            break;
        }
       
    }
    
    return 0;

}