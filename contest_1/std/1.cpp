#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

char puzzle[10][10];

void printPuzzle()
{
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 4; ++j)
            cout << puzzle[i][j] << ' ';
        cout << puzzle[i][4] << endl;
    }
}

int main()
{
    int kase = 0;
    while (fgets(puzzle[0], 7, stdin)) //读入7-1=6个字符，即每行的5个字符加换行
    {
        for (int i = 1; i < 5; ++i)
            fgets(puzzle[i], 7, stdin);
        /*
         *cout << "Read Finished" << endl;
         *printPuzzle(); //测试读入情况
         *printf("\n");
         *printf("\n");
         *printf("\n");
         *printf("\n");
         */
        int ei = 0, ej = 0; //找出空的那个格子
        for (int i = 0; i < 5; ++i)
            for(int j = 0; j < 5; ++j)
                if(puzzle[i][j] == ' ')
                {
                    ei = i, ej = j;
                    break;
                }
        bool valid = true; //标志非法指令出现过
        char moves[101];
        int cnt = 0;
        char c;
        while (cin >> c && c != '0') //考虑隔行读入
        {
            moves[cnt++] = c;
            //printf("%c ",moves[cnt-1]);
        }
        //printf("\n");
        int ni = ei, nj = ej;
        for (int i = 0; i<cnt; ++i)
        {
            switch(moves[i])
            {
                case 'U': ni = ei-1; nj = ej; break;
                case 'D': ni = ei+1; nj = ej; break;
                case 'L': nj = ej-1; ni = ei; break;
                case 'R': nj = ej+1; ni = ei; break;
                default: break;
            }
            //非法情况:
            if (ni < 0 || ni > 4 || nj < 0 || nj > 4)
            {
                valid = false;
                break;
            }
            else
            {
                swap(puzzle[ei][ej], puzzle[ni][nj]);
                ei = ni, ej = nj; //更新空格位置
            }

            /*
             *printf("==>%d\n",i);
             *printPuzzle();
             *printf("\n");
             *printf("\n");
             *printf("\n");
             */
        }
        //getchar(); //非常重要！吞掉指令结束符0后面的回车！
        if (valid == false)
            cout << "WRONG" << endl;
        else
            printPuzzle();
        break;
    }
    return 0;
}
