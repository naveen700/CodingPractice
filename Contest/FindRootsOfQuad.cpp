#include <iostream>

using namespace std;

float squareRoot(int num){
    float count =1, decimal=0.01;
    while( count * count <= num){
        count++;
    }
    count = count-1;
    if(count*count != num){
        count = count + decimal;
        while(count*count < num){
            count = count + decimal;
        }
    return count-decimal;
    }else{
        return count;
    }
}


int main(){

    int a,b,c;
    cin>>a>>b>>c;

    if((b*b- 4*a*c) < 0 ){
        cout<<"Imaginary";
    }
    else{
        int x = (-b + squareRoot((b*b- 4*a*c)))/(2*a);
        int y =  (-b - squareRoot((b*b- 4*a*c)))/(2*a);

        if(x==y){
            cout<<"Real and Equal"<<endl;
            cout<<x<<" "<<y;
        }else if(x < y){
            cout<<"Real and Distinct"<<endl;
            cout<<x<<" "<<y;
        }else{
            cout<<"Real and Distinct"<<endl;
            cout<<y<<" "<<x;
        }
    }
   
    


    return 0;
}