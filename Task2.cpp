#include<iostream>
using namespace std;
class my
{
    public:
    int num1,num2;
    friend void largest_value(my obj)
    {
        cout<<"Enter The Number 1=>";
        cin>>obj.num1;
        cout<<"Enter The Number 2=>";
        cin>>obj.num2;
        if(obj.num1>obj.num2)
        {
            cout<<"Number 1 is Largest=>"<<obj.num1<<endl;
        }
        else 
        {
            cout<<"Number 2 is Largest=>"<<obj.num2<<endl;
        }
        
        
       if(obj.num1%2==0)
        {
            cout<<"Number1 is Even=>"<<obj.num1<<endl;
        }
        else 
        {
            cout<<"Number1 is odd=>"<<obj.num1<<endl;
        }
        
        if(obj.num2%2==0)
        {
            cout<<"Number2 is Even=>"<<obj.num2<<endl;
        }
        else 
        {
            cout<<"Number2 is odd=>"<<obj.num2<<endl;
        }
    
    }
};
int main()
{
    my obj;
   largest_value(obj);
    return 0 ;

}