#include <vector>
#include <iostream>
#include <unordered_set>

using namespace std;

bool isValidSudoku(vector<vector<char>>& board) {
    vector<unordered_set<char>> row(9);
    vector<unordered_set<char>> col(9);
    vector<unordered_set<char>> box(9);

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            char c = board[i][j];
            if(c != '.'){
                // Box Index
                int index = (i / 3) * 3 + (j / 3);

                // Check if c already exist in set.
                if(row[i].count(c) || col[j].count(c) || box[index].count(c)){
                    return false;
                }

                row[i].insert(c);
                col[j].insert(c);
                box[index].insert(c);
            }
        }
    }

    return true;
};

int main(){
    vector<vector<char>> board = 
    {
        {'1', '2', '.', '.', '3', '.', '.', '.', '.'},
        {'4', '.', '.', '5', '.', '.', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '.', '3'},
        {'5', '.', '.', '.', '6', '.', '.', '.', '4'},
        {'.', '.', '.', '8', '.', '3', '.', '.', '5'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '.', '.', '.', '.', '.', '2', '.', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '8'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };

    bool boolean = isValidSudoku(board);

    cout << boolean << endl;
};