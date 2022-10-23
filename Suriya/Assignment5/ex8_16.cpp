//Exercise 8.16

#include <iostream>
#include <iomanip>
using namespace std;

void mazeGenerator(char [12][12], int row, int column);

int main(){
    char maze[12][12] = { {'#','#','#','#','#','#','#','#','#','#','#','#'},
                          {'#','.','.','.','#','.','.','.','.','.','.','#'},
                          {'.','.','#','.','#','.','#','#','#','#','.','#'},
                          {'#','#','#','.','#','.','.','.','.','#','.','#'},
                          {'#','.','.','.','.','#','#','#','.','#','.','o'},
                          {'#','#','#','#','.','#','.','#','.','#','.','#'},
                          {'#','.','.','#','.','#','.','#','.','#','.','#'},
                          {'#','#','.','#','.','#','.','#','.','#','.','#'},
                          {'#','.','.','.','.','.','.','.','.','#','.','#'},
                          {'#','#','#','#','#','#','.','#','#','#','.','#'},
                          {'#','.','.','.','.','.','.','#','.','.','.','#'},
                          {'#','#','#','#','#','#','#','#','#','#','#','#'},
    };

    mazeGenerator(maze, 2, 0);

}

void mazeGenerator(char maze[12][12], int row, int column){
    if (maze[row][column] == 'o')
        cout<<"\n The maze is solved!"<<endl;

    else{
        maze[row][column] = 'x';
        for (int i=0; i<12; i++) {
            for (int j = 0; j < 12; j++)
                cout << setw(3) << maze[i][j];
            cout << endl;
        }

        cout<<"\n"<<endl;

        if (maze[row][column+1] == '.' || maze[row][column+1] == 'o')
            mazeGenerator(maze, row, column+1);

        else if(maze[row][column+1] == '#' || maze[row][column+1] == 'x'){
            if(maze[row+1][column] == '.' || maze[row][column+1] == 'o')
                mazeGenerator(maze, row+1, column);

            else if(maze[row-1][column] == '.' || maze[row][column+1] == 'o')
                mazeGenerator(maze, row-1, column);

            else if(maze[row][column-1] == '.' || maze[row][column+1] == 'o')
                mazeGenerator(maze, row, column-1);
        }
    }
}