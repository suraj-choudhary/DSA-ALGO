//
//  NQueen.h
//  DSA&ALGO
//
//  Created by suraj kumar on 27/03/24.
//

#ifndef NQueen_h
#define NQueen_h


void printBoard(int n, int board[][20]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
}

bool canPlace(int board[][20], int n, int x, int y) {
    //column
    for(int k = 0; k < x; k++) {
        if(board[k][y] == 1) {
            return false;
        }
    }
    
    
    int i = x;
    int j = y;
    /// left diagonal

    while (i >= 0 && j >= 0) {
        if(board[i][j] == 1) {
            return false;
        }
        i--;
        j--;
    }
    /// right diagonal
    i = x;
    j = y;
    
    while (i >= 0 && j < n) {
        if(board[i][j] == 1) {
            return false;
        }
        i--;
        j++;
    }
    
    return true;
}

bool solvedNQueen(int n, int board[][20], int i) {
    //base case
    if(n == i) {
        //print board
        printBoard(n, board);
        return true;
    } else {
        for(int j = 0; j < n; j++) {
            //wheather the current position safe or not
            
            if(canPlace(board, n, i, j)) {
                board[i][j] = 1;
                bool success = solvedNQueen(n, board, i + 1);
                if(success) {
                    return true;
                }
                board[i][j] = 0;
                
            }
        }
    }
    
    
    return false;
}


int nqueenMain() {
    int board[20][20] = {0};
    int n = 4;
    solvedNQueen(n, board, 0);
    return 0;
}

#endif /* NQueen_h */
