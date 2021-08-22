nclude <iostream>
#include <vector>

using namespace std;
const int M=5;
const int N=5;
const int L=5;
int calcDroneMinEnergy(const vector<vector<int> > &route) 
//int calcDroneMinEnergy(int route[M][N][L]) 
{
  // your code goes here
  //cout << "The array of the route 3D points are" <<&route << endl;
  /*for(int i=0; i< M ; i++)
  {
    for(int j=0; j< N; j++)
    {
      for(int k=0; k<L; k++)
      {
        cout << "The element of the array is" << route[i][j][k] << endl; 
        //printf("%d ", route[i][j][k]); 
      }
    }
  }*/
 
  //int Largest_Energy_Deficit=0;
  //int EnergyBalance=0;
  /*for(int i=1; i < (sizeof(route)/sizeof(route[0])); i++)
  {
    EnergyBalance=EnergyBalance+(route[i-1][2]-route[i][2]);
    
  }*/
}

int main() {
  //vector<int> myroute; 
  //vector<vector<int> >  matrix(3, vector<int>(3,5));
  /*int route[5][3]= { {0, 2, 10},
            {3,  5,   0},
            {9,  20,  6},
            {10, 12, 15},
            {10, 10,  8} };*/
  vector<vector<int> > vect;
  /*{ { 1, 2, 3 }, 
                             { 4, 5, 6 }, 
                             { 7, 8, 9 } };*/ 
  calcDroneMinEnergy(vect);
  return 0;
}
