#include<iostream>
using namespace std;
class my
{
    int a,b,c;
    friend void Sum(my obj)
    {
        cout<<"Enter The number 1=>";
        cin>>obj.a;
        cout<<"Enter The number 2=>";
        cin>>obj.b;
        obj.c=obj.a+obj.b;
        cout<<"Sum is:"<<obj.c<<endl;
        
        
        if(obj.a>obj.b)
        {
            cout<<"1 is Largest=>"<<obj.a<<endl;
        }
        else
        {
            cout<<"2 is Largest=>"<<obj.b<<endl;
        }
        
        if(obj.a<obj.b)
        {
            cout<<"1 is Small=>"<<obj.a<<endl;
        }
        else
        {
            cout<<"2 is Small=>"<<obj.b<<endl<<endl;
        }
        
        
        
        
    }
    friend void Sub(my obj)
    {
        cout<<"Enter The number 1=>";
        cin>>obj.a;
        cout<<"Enter The number 2=>";
        cin>>obj.b;
        obj.c=obj.a-obj.b;
        cout<<"Sub:"<<obj.c<<endl;
        
        if(obj.a>obj.b)
        {
            cout<<"1 is Largest=>"<<obj.a<<endl;
        }
        else
        {
            cout<<"2 is Largest=>"<<obj.b<<endl;
        }
        
        if(obj.a<obj.b)
        {
            cout<<"1 is Small=>"<<obj.a<<endl;
        }
        else
        {
            cout<<"2 is Small=>"<<obj.b<<endl<<endl;
        }
    }
   friend void Mul(my obj)
    {
        cout<<"Enter The number 1=>";
        cin>>obj.a;
        cout<<"Enter The number 2=>";
        cin>>obj.b;
        obj.c=obj.a*obj.b;
        cout<<"Mul is:"<<obj.c;
        
       if(obj.a>obj.b)
        {
            cout<<"1 is Largest=>"<<obj.a<<endl;
        }
        else
        {
            cout<<"2 is Largest=>"<<obj.b<<endl;
        }
        
        if(obj.a<obj.b)
        {
            cout<<"1 is Small=>"<<obj.a<<endl;
        }
        else
        {
            cout<<"2 is Small=>"<<obj.b<<endl<<endl;
        }
    }
   friend void Div(my obj)
    {
        cout<<"Enter The number 1=>";
        cin>>obj.a;
        cout<<"Enter The number 2=>";
        cin>>obj.b;
        obj.c=obj.a/obj.b;
        cout<<"Div is:"<<obj.c;
        
       if(obj.a>obj.b)
        {
            cout<<"1 is Largest=>"<<obj.a<<endl;
        }
        else
        {
            cout<<"2 is Largest=>"<<obj.b<<endl;
        }
        
        if(obj.a<obj.b)
        {
            cout<<"1 is Small=>"<<obj.a<<endl;
        }
        else
        {
            cout<<"2 is Small=>"<<obj.b<<endl<<endl;
        }
    }
};
int main()
{
   my obj;
   int ch;
   do
   {
        cout<<"1.Sum\n2.Sub\n3.Mul\n4.Div\n5.Larger\n";
        cout<<"Enter the Choice:";
        cin>>ch;
        switch(ch)
        {
            case 1:
            Sum(obj);
            break;
        
            case 2:
            Sub(obj);
            break;
        
            case 3:
            Mul(obj);
            break;
        
            case 4:
            Div(obj);
            break;
            
            
            
           // case 5:
           // condition(obj);
            //break;
        
            case 6:
            return 0;
            break;
        }
   }while(ch!=6);
    return 0 ;

}