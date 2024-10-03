#include<bits/stdc++.h>
using namespace std;

int main()
{
    start:
  cout<<"Two player offline game:"<<endl;
  cout<<"**TIK TAK TOE**"<<endl;
  cout<<endl<<"Please use 1-9 to mark your position."<<endl;
  cout<<endl<<"Can you beat the computer?"<<endl;
  cout<<endl<<"[START]"<<endl<<endl<<endl;
  cout<<"Your Turn:"<<endl;
  int i, j, u,count=0,chal=0;
  char a[3][3];
  for(i=0;i<=2;i++){
     for(j=0;j<=2;j++){
         a[i][j]='O';
         cout<<a[i][j];
     }
     cout<<endl;
  }
  move1:
  {
  cin>>u;
  if(u==1){
  i=0;
  j=0;
  if(a[i][j]=='O'){
    a[i][j]='A';
  }else{
    cout<<endl<<"Wrong move"<<endl;
    goto move1;
  }
  }
  else if(u==2){
  i=0;
  j=1;
  if(a[i][j]=='O'){
    a[i][j]='A';
  }else{
    cout<<endl<<"Wrong move"<<endl;
    goto move1;
  }
  }
  else if(u==3){
  i=0;
  j=2;
  if(a[i][j]=='O'){
    a[i][j]='A';
  }else{
    cout<<endl<<"Wrong move"<<endl;
    goto move1;
  }
  }
  else if(u==4){
  i=1;
  j=0;
  if(a[i][j]=='O'){
    a[i][j]='A';
  }else{
    cout<<endl<<"Wrong move"<<endl;
    goto move1;
  }
  }
  else if(u==5){
  i=1;
  j=1;
  if(a[i][j]=='O'){
    a[i][j]='A';
  }else{
    cout<<endl<<"Wrong move"<<endl;
    goto move1;
  }
  }
  else if(u==6){
  i=1;
  j=2;
  if(a[i][j]=='O'){
    a[i][j]='A';
  }else{
    cout<<endl<<"Wrong move"<<endl;
    goto move1;
  }
  }
  else if(u==7){
  i=2;
  j=0;
  if(a[i][j]=='O'){
    a[i][j]='A';
  }else{
    cout<<endl<<"Wrong move"<<endl;
    goto move1;
  }
  }
  else if(u==8){
  i=2;
  j=1;
  if(a[i][j]=='O'){
    a[i][j]='A';
  }else{
    cout<<endl<<"Wrong move"<<endl;
    goto move1;
  }
  }
  else if(u==9){
  i=2;
  j=2;
  if(a[i][j]=='O'){
    a[i][j]='A';
  }else{
    cout<<endl<<"Wrong move"<<endl;
    goto move1;
  }
  }
  else{
  cout<<endl<<"Wrong move"<<endl;
  }
  cout<<endl;
  for(i=0;i<=2;i++){
     for(j=0;j<=2;j++){
         cout<<a[i][j];
     }
     cout<<endl;
  }
  for(i=0;i<=2;i++){
     for(j=0;j<=2;j++){
         if(a[i][j]=='O'){
            count++;
         }
     }
  }
  if(count==0){
            cout<<endl<<"***Draw***!"<<endl<<"Maybe we 're same as thought!"<<endl;
            goto r;
         }
    count=0;
  for(i=0;i<=2;i++){
     for(j=0;j<=2;j++){
         if(a[i][j]=='A'){
            count++;
         }
         if(count==3){
            cout<<endl<<"***You Win***"<<endl<<"Congratulations";
            goto r;
         }
     }
     count=0;
  }
  for(j=0;j<=2;j++){
     for(i=0;i<=2;i++){
         if(a[i][j]=='A'){
            count++;
         }
         if(count==3){
            cout<<endl<<"***You Win***"<<endl<<"Congratulations";
            goto r;
         }
     }
     count=0;
  }
  if((a[0][0]=='A' && a[1][1]=='A' && a[2][2]=='A')||(a[0][2]=='A' && a[1][1]=='A' && a[2][0]=='A')){
            cout<<endl<<"***You Win***"<<endl<<"Congratulations";
            goto r;
    }
  cout<<endl<<"Computer's Turn"<<endl;
  goto move2;
  }


  move2:
  {
      chal=0;
        {
            if(a[1][1]=='O'){
                a[1][1]='B';
                chal=1;
                goto jump;
            }
    if(chal==0){
    if(a[0][0]=='B' && a[1][1]=='B' && a[2][2]=='O'){
       a[2][2]='B';
        chal=1;
        goto jump;
    }
    else if(a[0][0]=='B' && a[1][1]=='O' && a[2][2]=='B'){
       a[1][1]='B';
        chal=1;
        goto jump;
    }
    else if(a[0][0]=='O' && a[1][1]=='B' && a[2][2]=='B'){
       a[0][0]='B';
        chal=1;
        goto jump;
    }
  }
  if(chal==0){
    if(a[0][2]=='B' && a[1][1]=='B' && a[2][0]=='O'){
       a[2][0]='B';
        chal=1;
        goto jump;
    }
    else if(a[0][2]=='B' && a[1][1]=='O' && a[2][0]=='B'){
       a[1][1]='B';
        chal=1;
        goto jump;
    }
    else if(a[0][2]=='O' && a[1][1]=='B' && a[2][0]=='B'){
       a[0][2]='B';
        chal=1;
        goto jump;
    }
  }
    if(chal==0){
    for(i=0;i<=2;i++){
     for(j=0;j<=2;j++){
         if(a[i][j]=='B'){
           count++;
           if(count==2){
     for(j=0;j<=2;j++){
         if(a[i][j]!='A' && a[i][j]!='B'){
         a[i][j]='B';
         chal=1;
         goto jump;
         }
     }
           }
         }
     }count=0;
    }
        }
  if(chal==0){
  for(j=0;j<=2;j++){
     for(i=0;i<=2;i++){
         if(a[i][j]=='B'){
           count++;
           if(count==2){
     for(i=0;i<=2;i++){
         if(a[i][j]!='A' && a[i][j]!='B'){
         a[i][j]='B';
         chal=1;
         goto jump;
         }
     }
           }
         }
     }count=0;
  }
  }
    if(chal==0){
       for(i=0;i<=2;i++){
     for(j=0;j<=2;j++){
         if(a[i][j]=='A'){
           count++;
           if(count==2){
     for(j=0;j<=2;j++){
         if(a[i][j]!='A' && a[i][j]!='B'){
         a[i][j]='B';
         chal=1;
         goto jump;
         }
     }
           }
         }
     }count=0;
    }
    }
  if(chal==0){
  for(j=0;j<=2;j++){
     for(i=0;i<=2;i++){
         if(a[i][j]=='A'){
           count++;
           if(count==2){
     for(i=0;i<=2;i++){
         if(a[i][j]!='A' && a[i][j]!='B'){
         a[i][j]='B';
         chal=1;
         goto jump;
         }
     }
           }
         }
     }count=0;
  }
  }
  if(chal==0){
    if(a[0][0]=='A' && a[1][1]=='A' && a[2][2]=='O'){
       a[2][2]='B';
        chal=1;
        goto jump;
    }
    else if(a[0][0]=='A' && a[1][1]=='O' && a[2][2]=='A'){
       a[1][1]='B';
        chal=1;
        goto jump;
    }
    else if(a[0][0]=='O' && a[1][1]=='A' && a[2][2]=='A'){
       a[0][0]='B';
        chal=1;
        goto jump;
    }
  }
  if(chal==0){
    if(a[0][2]=='A' && a[1][1]=='A' && a[2][0]=='O'){
       a[2][0]='B';
        chal=1;
        goto jump;
    }
    else if(a[0][2]=='A' && a[1][1]=='O' && a[2][0]=='A'){
       a[1][1]='B';
        chal=1;
        goto jump;
    }
    else if(a[0][2]=='O' && a[1][1]=='A' && a[2][0]=='A'){
       a[0][2]='B';
        chal=1;
        goto jump;
    }
  }
  if(chal==0){
    for(i=0;i<=2;i++){
     for(j=0;j<=2;j++){
         if(a[i][j]=='O'){

            a[i][j]='B';
            chal=1;
            goto jump;
            }
        }
        }
    }
    }


  jump:
  cout<<endl;
  for(i=0;i<=2;i++){
     for(j=0;j<=2;j++){
         cout<<a[i][j];
     }
     cout<<endl;
  }
  for(i=0;i<=2;i++){
     for(j=0;j<=2;j++){
         if(a[i][j]=='O'){
            count++;
         }
     }
  }
  if(count==0){
            cout<<endl<<"***Draw***!"<<endl<<"Maybe we 're same as thought!"<<endl;
            goto r;
         }
    count=0;
  for(i=0;i<=2;i++){
     for(j=0;j<=2;j++){
         if(a[i][j]=='B'){
            count++;
         }
         if(count==3){
            cout<<endl<<"***Computer Win***"<<endl<<"Better luck next time!";
            goto r;
         }
     }
     count=0;
  }
  for(j=0;j<=2;j++){
     for(i=0;i<=2;i++){
         if(a[i][j]=='B'){
            count++;
         }
         if(count==3){
            cout<<endl<<"***Computer Win***"<<endl<<"Better luck next time!";
            goto r;
         }
     }
     count=0;
  }
    if((a[0][0]=='B' && a[1][1]=='B' && a[2][2]=='B')||(a[0][2]=='B' && a[1][1]=='B' && a[2][0]=='B')){
            cout<<endl<<"***Computer Win***"<<endl<<"Better luck next time!";
            goto r;
    }
  cout<<endl<<"Your Turn"<<endl;

  goto move1;
  }
 r:
     cout<<endl<<endl<<endl<<"Wanna play another match?:"<<endl<<"Press '1' for play"<<endl<<"Otherwise press any key!"<<endl;
     int result;
     cin>>result;
     if(result==1){
        goto start;
     }

  return 0;
}
