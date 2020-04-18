#include <iostream>
using namespace std;

bool findPathOfMaze(char maze[][100] ,int i, int j,int row, int col, int out[][100] ){
    // base condition
    if(i==row-1 && j == col-1 ){
        // destination reached at this level
        out[i][j] = 1;
        // print the out which is path to destination.
        for(int l=0 ; l < row; l++){
            for(int m=0; m < col; m++){
                cout<<out[l][m]<< " ";
            }
            cout<<endl;
        }
        cout<<endl;

        return false;
    }

    out[i][j] = 1;
    // to check if we can move to the right

    if( i< row && j+1 < col  && maze[i][j+1] != 'x' ){
        out[i][j+1] = 1;
        bool canMoveRight = findPathOfMaze(maze , i, j+1, row,col,out); 
        if(canMoveRight){
            return true;
        }
    }

    // to check if we can move downwards
    if(i+1<row && j < col && maze[i+1][j] != 'x')
        {
            out[i+1][j] = 1;
            bool canMoveDown = findPathOfMaze(maze,i+1,j,row,col ,out);
            if(canMoveDown){
                return true;
            }
        
        }

    // if cannot move to right or down then we must backtrack in our path
    out[i][j] = 0;
    return false;


}

int main(){
    int row, col;
    cin>>row>>col;

    char maze[100][100];

    for(int i=0; i < row; i++){
        for(int j=0; j <col; j++){
            cin>>maze[i][j];
        }
    }
    int out[100][100]={0};

    bool isTherPath = findPathOfMaze(maze,0,0,row,col,out);
    
    if(!isTherPath){
        cout<<"There is no path for this available for this maze";
    }
    
    return 0;
}