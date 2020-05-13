#include <iostream>
using namespace std;

int main()
{
    system("cls");
    cout<<"Welcome to TIC TAC TOE   --by pralay mondal"<<endl;
    //initialization
    string player1,player2;
    char flag ='t';
    char game[3][3] = {
                        {'1','2','3'},
                        {'4','5','6'},
                        {'7','8','9'}
                      };
    int pos1,pos2;
    cout<<"Enter your names \nPlayer 1 (x) : ";
    cin>>player1;
    cout<<"Player 2 (o) : ";
    cin>>player2;
    cout<<"Keep on entering the number on which you want to assign your symbol...."<<endl;
    for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<game[i][j]<<" | ";
            }
            cout<<endl;
        }
    system("pause");
    //main game starts
    while(true)
    {
        //displaying for player 1
        system("cls");
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<game[i][j]<<" | ";
            }
            cout<<endl;
        }
        
        //running game
        cout<<"\n"<<player1<<" : ";
        cin>>pos1;
        system("cls");
        //assigning position and redisplaying
        switch(pos1)
        {
            case 1: game[0][0]='x';
                break;

            case 2: game[0][1]='x';
                break;
            case 3: game[0][2]='x';
                break;
            case 4: game[1][0]='x';
                break;
            case 5: game[1][1]='x';
                break;
            case 6: game[1][2]='x';
                break;
            case 7: game[2][0]='x';
                break;
            case 8: game[2][1]='x';
                break;
            case 9: game[2][2]='x';
                break;
            default:{ cout<<"Wrong Input !!"<<endl;
                    system("pause");
                    return 0;
                    break;}
        }
        if(((game[0][0]==game[0][1])&&(game[0][0]==game[0][2])) || ((game[1][0]==game[1][1])&&(game[1][0]==game[1][2])) || ((game[2][0]==game[2][1])&&(game[2][0]==game[2][2]))
         || ((game[0][0]==game[1][0])&&(game[0][0]==game[2][0])) || ((game[0][1]==game[1][1])&&(game[0][1]==game[2][1])) || ((game[0][2]==game[1][2])&&(game[0][2]==game[2][2]))
         || ((game[0][0]==game[1][1])&&(game[0][0]==game[2][2])) || ((game[0][2]==game[1][1])&&(game[0][2]==game[2][0])))
        {
            flag='x';
            break;
        }
        else 
        flag='t';

      if((game[0][0]!='1')&&(game[0][1]!='2')&&(game[0][2]!='3')
      &&(game[1][0]!='4')&&(game[1][1]!='5')&&(game[1][2]!='6')
      &&(game[2][0]!='7')&&(game[2][1]!='8')&&(game[2][2]!='9'))
      {
          break;
      }

        //displaying for player 2
        system("cls");
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<game[i][j]<<" | ";
            }
            cout<<endl;
        }
        cout<<player2<<" : ";
        cin>>pos2;
        system("cls");
        switch(pos2)
        {
            case 1: game[0][0]='o';
                break;

            case 2: game[0][1]='o';
                break;
            case 3: game[0][2]='o';
                break;
            case 4: game[1][0]='o';
                break;
            case 5: game[1][1]='o';
                break;
            case 6: game[1][2]='o';
                break;
            case 7: game[2][0]='o';
                break;
            case 8: game[2][1]='o';
                break;
            case 9: game[2][2]='o';
                break;
            default:{ cout<<"Wrong Input !!"<<endl;
                    system("pause");
                    return 0;
                    break;}
        }
        if(((game[0][0]==game[0][1])&&(game[0][0]==game[0][2])) || ((game[1][0]==game[1][1])&&(game[1][0]==game[1][2])) || ((game[2][0]==game[2][1])&&(game[2][0]==game[2][2]))
         || ((game[0][0]==game[1][0])&&(game[0][0]==game[2][0])) || ((game[0][1]==game[1][1])&&(game[0][1]==game[2][1])) || ((game[0][2]==game[1][2])&&(game[0][2]==game[2][2]))
         || ((game[0][0]==game[1][1])&&(game[0][0]==game[2][2])) || ((game[0][2]==game[1][1])&&(game[0][2]==game[2][0])))
        {
            flag='o';
            break;
        }
        else
        flag='t';

    }

    //selecting winner
    for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<game[i][j]<<" | ";
            }
            cout<<endl;
        }
    
  
    if(flag=='x')
    {
        cout<<"\n"<<player1<<" wins !!"<<endl;
    }
    
    else if(flag=='o')
    {
        cout<<"\n"<<player2<<" wins !!"<<endl;
    }
    
    else
    {
        cout<<"Oops ! It's a TIE ! "<<endl;
    }
    
    
    
    system("pause");
    return 0;
}