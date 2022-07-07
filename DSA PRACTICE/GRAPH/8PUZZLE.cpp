#include<bits/stdc++.h>
using namespace std;

class Cost{
    public:
        int g;
        int h;
        int f;
        vector<vector<int>> puzzle;
        vector<vector<vector<int>>> path;
        bool reached = false;
        pair<int,int> blank;
        Cost(int g,vector<vector<int>>& puzzle,vector<vector<int>>& goal,pair<int,int>& blank)
        {
            this->g = g;
            this->h = calculateHeuristic
        }

}

void solvePuzzle(vector<vector<int>>& puzzle,vector<vector<int>>& goal,pair<int,int>& blank)
{

}

int main()
{
    vector<vector<int>> goal(3,vector<int>(3,0));
    vector<vector<int>> puzzle(3,vector<int>(3,0));

    goal[0][0] = 1;
    goal[0][1] = 2;
    goal[0][2] = 3;
    goal[1][0] = 8;
    goal[1][1] = 0;
    goal[1][2] = 4;
    goal[2][0] = 7;
    goal[2][1] = 6;
    goal[2][2] = 5;

    // initial state:
    pair<int,int> blank;
    puzzle[0][0] = 2;
    puzzle[0][1] = 8;
    puzzle[0][2] = 3;
    puzzle[1][0] = 1;
    puzzle[1][1] = 6;
    puzzle[1][2] = 4;
    puzzle[2][0] = 7;
    puzzle[2][1] = 0;
    puzzle[2][2] = 5;
    blank = {2,1};
    solvePuzzle(puzzle,goal,blank);

    return 0;
}