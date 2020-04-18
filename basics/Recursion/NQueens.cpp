#include <iostream>
using namespace std;

bool is_SafeToPlaceQueen(int board[][10]  , int i , int j , int row ){
    //  check whether there is any eleement present vertically or horizontally
    for(int k=0; k<row; k++){
        if(board[i][k] == 1 || board[k][j] == 1){
            return false;
        }
    }

    //  check if there is any element present diagonally
    //  left diagonal
    int k= i-1;
    int l = j-1;

    while(k>=0 && l>=0){
        if(board[k][l] == 1){
            return false;
        }
        k--;
        l--;
    }

    //  check if there is any element present diagonally 
    //  right diagonal

    k=i-1;
    l=j+1;

    while(k>=0 && l<row){
        if(board[k][l] == 1){
            return false;
        }
        k--;
        l++;
    }

    return true;
}






bool solveNQueens(int board[][10] , int i, int row){
    // base condition
    if(i==row){

        // print the board possible solution have been found 
        for(int j=0; j<row; j++){
            for(int k=0; k<row;k++){
                if(board[j][k] == 1){
                    cout<< "Q ";
                }else{
                    cout<<"_ ";
                }
            }
            cout<<endl;
        }

        cout<<endl;
    //  hack to generate all possible solution return false
        return false;
    }

    for(int c=0; c<row; c++){
        if(is_SafeToPlaceQueen(board,i,c,row)){
            board[i][c] = 1;
            bool doesItWorkForOther = solveNQueens(board , i+1 ,row);
            if(doesItWorkForOther){
                return true;
            }
            //  it means current postion of queen does not work for other queens so need to remove it from board
            board[i][c] = 0;
        }
    }


    return false;

}





int main(){
    int q;
    cin>>q;
    int board[10][10];

    solveNQueens(board, 0,q);

    return 0;
}