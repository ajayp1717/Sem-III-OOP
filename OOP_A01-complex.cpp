#include<iostream>
using namespace std;
class complex{
    public:
    int real,img;
      complex(){
          real=0;img=0;
      };
      complex(int r,int i){
      real=r;img=i;
      };

    void set();
   
    void input(){
		cout<<"Enter the real part of the complex number ";
		cin>>real;
		cout<<"Enter the imaginary part of the complex number ";
        cin>>img;
    }
    void display(){
        cout<<real<<" + "<<img<<"i"<<endl;

    }
    void add(complex c1,complex c2){
        real=c1.real+c2.real;
        img=c1.img+c2.img;
        cout<<"The sum of the two complex numbers is "<<real<<"+"<<img<<"i"<<endl;
    }

    void mul(complex c1,complex c2){
        real=c1.real*c2.real-c1.img*c2.img;
        img=c1.real*c2.img+c1.img*c2.real;
        cout<<"The product of the two complex numbers is "<<real<<"+"<<img<<"i"<<endl;
    }

    void getop(complex c1,complex c2){
        complex sum1,mult;
        int choice;
        cout<<"Enter Correct Choice to Perform Desired Operation\n1-for Addition.\n2-for Multiplication.";
        cin>>choice;
        switch(choice)
        {
            case 1:
            sum1.add(c1,c2);
            break;
            case 2:
            mult.mul(c1,c2);
            break;    

            default:
            cout<<"Invalid Input";  
            
        }
    }
};

int main() 
{
    complex c1,c2;
    int choice;
    char rep='Y';
    
    while(rep=='y' || rep=='Y')
    {
        c1.input();
        cout<<"\n";
        c2.input();
    
        cout<<"The Numbers Are\n";
        c1.display();
        c2.display();
        complex opt;
        opt.getop(c1,c2);

        cout<<endl<<"Type 'Y' to return to Main Menu. \nType 'N' to End the Program. "<<endl;
        cin>>rep;
    }
    cout<<"Program Ended!";

    return 0;

}  



