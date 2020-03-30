    #include <iostream>
    using namespace std;

    int sumOfArray(int *p ,int i , int n){
        if(i==n-1){
            return p[i];
        }
    
        int sum = p[i] + sumOfArray(p,i+1,n);
        return sum;
    }

    int main(){
        int num[] = {1,2,3,4,5};
        int n = sizeof(num)/sizeof(int);
        int sum = sumOfArray(num,0,n);
        cout<<sum;
    }