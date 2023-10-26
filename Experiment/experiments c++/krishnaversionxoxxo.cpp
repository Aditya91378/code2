
		#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
void display(char moves[]){
    char pos[30]={moves[0],-77,moves[1],-77,moves[2],'\n',-60,-59,-60,-59,-60,'\n',moves[3],-77,moves[4],-77,moves[5],'\n',-60,-59,-60,-59,-60,'\n',moves[6],-77,moves[7],-77,moves[8],'\n'};
    for (int j=0;j<30;j++){
        cout<<pos[j];
    }
}
bool checkwin(char moves[],char m){
    for(int i=0;i<3;i++){
        if(moves[0+(3*i)]==m && moves[1+(3*i)]==m && moves[2+(3*i)]==m){
            return true;
        }
    }
    for(int i=0;i<3;i++){
        if(moves[0+i]==m && moves[3+i]==m && moves[6+i]==m){
            return true;
        }
    }
    if((moves[0]==m && moves[4]==m && moves[8]==m)||(moves[2]==m && moves[4]==m && moves[6]==m)){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    char moves[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    int move,comp;
    for(int i=0;i<5;i++){
        cout<<"\nComputer's move \n";
        do{
            srand(time(NULL));
            comp=rand()%9;
        }while(moves[comp]!=' ');
        moves[comp]='x';
        display(moves);
        if(checkwin(moves,'x')){
            cout<<"Computer Wins\n";
            break;
        }
        if(i==4){
            cout<<"Tie\n";
            break;
        }
        do{
            cout<<"enter 1-9\n";
            cin>>move;
        }while(moves[move-1]!=' ');
        moves[move-1]='o';
        display(moves);
        if(checkwin(moves,'o')){
            cout<<"You Win\n";
            break;
        }
    }
	return 0;
}


