#include <iostream>
using namespace std;

void TowerOfHanoi(int disk, char src, char helper, char destn){
    if(disk ==0){
        return;
    }

    // first move all disks from src rod to helper rod using destn rod
    TowerOfHanoi(disk-1, src,destn,helper);
    cout<<"disk "<<disk<<" From "<<src<<" TO "<<destn <<endl;
    // then move all disk from helper to destn using src
    TowerOfHanoi(disk-1, helper,src,destn);
}



int main(){

    int disk;
    cin>>disk;

    TowerOfHanoi(disk, 'A', 'B' , 'C');

}