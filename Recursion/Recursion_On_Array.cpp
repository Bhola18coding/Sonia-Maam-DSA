
#include <bits/stdc++.h>
using namespace std;
//01. sum of an array 
// int sumofarr(int a[], int n)
// {
//     //BASE CASE 
//     if(n==0)
//     {
//         return 0;
//     }
    
//     //Small ans i.e = a+1, n-1
//     int smallans = sumofarr(a+1,  n-1);
    
//     //Calculation
//     return a[0]+smallans;
// }





//02. multiplication of an array 
// int multiofanarr(int a[], int n)
// {
//     if(n==0)
//     return 1;
    
//     int bigAns = multiofanarr(a+1, n-1);
    
//     int smallans = a[0]*bigAns;
    
//     return smallans;
   
// }





// //03.Maximum of an array 
// int maxi(int a[], int n)
// {
//     if(n==0)
//     return 0;
    
//     int ans = -1; // to store the ans 
//     int bigAns  = maxi(a+1, n-1);
    
//     //calculation 
//     if(a[0]<bigAns)
//     {
//         ans = bigAns;
//     }
//     else 
//     {
//         ans = a[0];
//     }
    
//     return ans;
// }





//04. Minimum of an array
// int mini(int a[], int n)
// {
//     if(n==0)
//     return 1e9;
    
//     int ans = -1; // to store the ans 
//     int bigAns  = mini(a+1, n-1);
    
//     //calculation 
//     if(a[0]>bigAns)
//     {
//         ans = bigAns;
//     }
//     else 
//     {
//         ans = a[0];
//     }
    
//     return ans;
// }



//05. FirstIndex 
// int firstidx(int a[], int n, int target, int i)
// {
//     if(i==n)
//     {
//         return -1;
//     }
    
   
    
//     if(a[i]==target)
//     {
//         return i;
//     }
    
//     // this will search the element 
//     return  firstidx(a, n, target, i+1);
// }




//06.lastIdx 
// int lastIdx(int a[], int n , int i, int x)
// {
//     //Base case 
//     //Here -1 = outofbound 
//     if(i==-1)
//     {
//         return -1;
//     }
    
//     if(a[i]==x)
//     {
//         return i;
//     }
    
//     int search = lastIdx(a, n, i-1, x);
    
//     return search;
// }








////CLASSWORK - 26/DEC 
#include <bits/stdc++.h>
using namespace std;


//Get subs
// vector<int>subs(int i, int a, int n)
// {
    
//      //base case
//      if(i==n)
//      {
//          vector<string>v;
//          v.push_back("");
//          return v;
//      }
     
//      vector<int>ds1 = subs(i+1, a, n);
//      vector<int>ans;
     
//      for(int j=0; j<ds1.size(); j++)
//      {
//          ans.push_back(a[i]+ds1[j]);
//           ans.push_back( +ds1[j]);
//      }
     
//     //  for(int j=0; j<ds1.size(); j++)
//     //  {
//     //      ans.push_back(""+ds1[j]);
//     //  }
     
//      return ans;
// }



//print subs 
void printsubs(int i, int a[], vector<int>&ans, int n)
{
    if(i==n)
    {
        for(int i=0; i<ans.size(); i++)
        {
            cout<<ans[i];
        }
        
        cout<<endl;
        return;
    }
    
    
    //Pick
    ans.push_back(a[i]);
    printsubs(i+1, a, ans , n);
    ans.pop_back();
    
    
    //Not pick
     printsubs(i+1, a, ans , n);
    
    
}

int main()
{
   int a[]={1,2,3};
   int i=0; 
   int n = 3;
   vector<int>ans;
   printsubs(i, a, ans, n);
   

    return 0;
}

int main()
{
    int a[]={5,2, 2, 6,2};
   // cout<<sumofarr(a,  5);
  // cout<<multiofanarr(a,5);
  // cout<< maxi(a, 5);
 // cout<< mini(a, 5);
  // cout<<firstidx(a, 5, 2, 0);
  //cout<<lastIdx(a, 5, 4, 5);
}



 
// // STAIRCASE = Integer return 
// #include <bits/stdc++.h>
// using namespace std;

// //We will find here the 0 to N or N to 0 = no.of ways return type int  
// int countways(int n)
// {
//     if(n==0 || n==1)
//     {
//         return 1;
//     }
    
//     if(n==2)
//     {
//         return 2;
//     }
    
//     int ans =  countways(n-1)+countways(n-2)+countways(n-3);
//     return ans;
// }




// int main()
// {
//     int n;
//     cin>>n; 
//     cout<<countways(n);
//     return 0;
// }







//27th Dec 
// #include <bits/stdc++.h>
// using namespace std;


// //Get = Pick or non-pick
// // vector<string>stair(int n)
// // {
// //     //Base case 
// //     if(n==0)
// //     {
// //         vector<string>v;
// //         v.push_back("");
// //         return v;
// //     }
    
// //     if(n<0)
// //     {
// //         vector<string>v2;
// //         return v2;
// //     }
    
    
// //     vector<string>oneJump = stair(n-1); // 1
// //     vector<string>twoJump = stair(n-2); // 2
// //     vector<string>threeJump= stair(n-3); //3
    
// //     vector<string>ans;
    
// //     for(int i=0; i<oneJump.size(); i++)
// //     {
// //         ans.push_back("1"+oneJump[i]);
// //     }
    
// //     for(int j=0; j<twoJump.size(); j++)
// //     {
// //         ans.push_back("2"+twoJump[j]);
// //     }
    
    
// //       for(int k=0; k<threeJump.size(); k++)
// //     {
// //         ans.push_back("3"+threeJump[k]);
// //     }
    
// //     return ans;
    
// // }

//1hr 26 min

// // print  = pick and pick
// // void staircase(int n, string ans, vector<string>&ds)
// // {
// //     if(n==0)
// //     {
// //         ds.push_back(ans);
// //       // cout<<ans <<endl;
// //         return;
// //     }
    
// //     if(n<0)
// //     {
// //         return;
// //     }
    
// //     ans+="1";
// //     staircase(n-1,ans, ds);
// //     //cout<<ans<<endl;
// //     ans.pop_back();
     
// //      ans+="2";
// //     staircase(n-2,ans, ds);
// //     //cout<<ans<<endl;
// //     ans.pop_back();
    
// // }



// int main()
// {
//     int n ; 
//     cin>>n;
// //   vector<string>a = stair(n);
// //   for(int i=0; i<a.size(); i++)
// //   {
// //       cout<<a[i]<<endl;;
// //   }
  
//   vector<string>ds;
//   staircase(n, " ", ds);

// for(int i=0; i<ds.size(); i++)
// {
//     cout<<ds[i]<<endl ;
// }
//     return 0;
// }





   



// 28/December/2023
//GET MAZE OF DIRECTION = LEft, Right, Down , Up, Diagonal
// vector<string>maze(int n, int m, int i, int j,  vector<vector<int>>v)
// {
//     if(i>=n || j>=m || i<0 || j<0 || v[i][j]==1)
//     {
//         vector<string>v1;
//         return v1;
//     }
    
//     if(i==n-1 && j==m-1)
//     {
//         vector<string>v2;
//         v2.push_back("");
//         return v2;
//     }
    
//     v[i][j]=1;
//     vector<string>forDown = maze(n, m, i+1, j, v); // Down 
//     vector<string>forRight = maze(n,m, i, j+1, v); // Right
//     //vector<string>forDiagonal = maze(n, m, i+1, j+1); // Diagonal
//     vector<string>forLeft = maze(n, m, i, j-1, v); // forLeft
//     vector<string>forUp = maze(n, m, i-1, j, v); // up
    
//     vector<string>ans;
//     for(int a=0; a<forDown.size(); a++)
//     {
//         ans.push_back("D"+forDown[a]);
//     }
    
//     for(int b=0; b<forRight.size(); b++)
//     {
//         ans.push_back("R"+forRight[b]);
//     }
    
//     // for(int c=0; c<forDiagonal.size(); c++)
//     // {
//     //     ans.push_back("Di"+forDiagonal[c]);
//     // }
    
//      for(int d=0; d<forLeft.size(); d++)
//     {
//         ans.push_back("L"+forLeft[d]);
//     }
//      for(int e=0; e<forUp.size(); e++)
//     {
//         ans.push_back("U"+forUp[e]);
//     }
    
//     v[i][j]=0;
    
//     return ans;
// }




// int main()
// {
//     int n,m;
//     cin>>n;
//     cin>>m;
    
//     //Visited matrix 
//     vector<vector<int>>v(n, vector<int>(m,0));
    
//    vector<string>a = maze(n,m,0,0, v);
//    for(int i=0; i<a.size(); i++)
//    {
//        cout<<a[i] <<endl;
//    }
// }





// 29/DEC/23 = HOMEWORK 

// #include<bits/stdc++.h>
// using namespace std;



// //GET MAZE OF DIRECTION = LEft, Right, Down , Up, Diagonal
// vector<string>maze(int n, int m, int i, int j,  vector<vector<int>>v)
// {
//     if(i>=n || j>=m || i<0 || j<0 ||  i<0 || j>=m || i<0 || j<0 || i>=n || j<0 ||  v[i][j]==1)
//     {
//         vector<string>v1;
//         return v1;
//     }
    
//     if(i==n-1 && j==m-1)
//     {
//         vector<string>v2;
//         v2.push_back("");
//         return v2;
//     }
    
//     v[i][j]=1;
    
//     vector<string>forDown = maze(n, m, i+1, j, v); // Down 
//     vector<string>forRight = maze(n,m, i, j+1, v); // Right
//     vector<string>forDiagonal = maze(n, m, i+1, j+1, v); // Diagonal
//     vector<string>forLeft = maze(n, m, i, j-1, v); // forLeft
//     vector<string>forUp = maze(n, m, i-1, j, v); // up
//     vector<string>forRightUp = maze(n, m, i-1, j+1, v);//RigtUp
//     vector<string>forleftUp = maze(n, m, i-1, j-1, v);//leftUp
//      vector<string>forDownleft = maze(n, m, i+1, j-1, v);//DownLeft
    
    
//     vector<string>ans;
    
//     //1 DOWN = D
//     for(int a=0; a<forDown.size(); a++)
//     {
//         ans.push_back("D"+forDown[a]);
//     }
    
//     //2 RIGHT = R
//     for(int b=0; b<forRight.size(); b++)
//     {
//         ans.push_back("R"+forRight[b]);
//     }
    
//     //3 DOWNRIGHT = DR
//     for(int c=0; c<forDiagonal.size(); c++)
//     {
//         ans.push_back("DI"+forDiagonal[c]);
//     }
    
//     //4 LEFT = L
//      for(int d=0; d<forLeft.size(); d++)
//     {
//         ans.push_back("L"+forLeft[d]);
//     }
    
//     //5 UP = U
//      for(int e=0; e<forUp.size(); e++)
//     {
//         ans.push_back("UP"+forUp[e]);
//     }
    
//     //6 RIGHTUP = RU
//        for(int f=0; f<forRightUp.size(); f++)
//     {
//         ans.push_back("RU"+forRightUp[f]);
//     }
    
    
//     //7 LEFTUP = LU
//        for(int g=0; g<forleftUp.size(); g++)
//     {
//         ans.push_back("LU"+forleftUp[g]);
//     }
    
//     //8 DOWNLEFT = DL
    
//       for(int h=0; h<forDownleft.size(); h++)
//     {
//         ans.push_back("DL"+forDownleft[h]);
//     }
    
//     v[i][j]=0;
    
//     return ans;
// }




// int main()
// {
//     int n,m;
//     cin>>n;
//     cin>>m;
    
//     //Visited matrix 
//     vector<vector<int>>v(n, vector<int>(m,0));
    
//     vector<string>a = maze(n,m,0,0, v);
//     for(int i=0; i<a.size(); i++)
//     {
//         cout<<a[i] <<endl;
//     }
// }
