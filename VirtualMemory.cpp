#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main(int argc, char const *argv[]){
  int n[6] = {16, 64, 256, 1024, 4096, 16384}; //Array of lengths
  cout << "m = 1677721600" << endl; //1st value of m
  for(int x = 0; x < 6; x++){
    int a, b, c;
    //M array of arrays (pointers)
    int** M = new int* [n[x]]; //2d rray
    for(int i = 0; i < n[x]; i++){ //Array of arrays
      M[i] = new int[n[x]];
    }

    for(int i = 0; i < n[x]; i++){ //Slowly increments the number for rows
      for(int j = 0; j < n[x]; j++){ //Slowly increments the number for columns
        M[i][j] = 0; //Places the value 0 in array
      }
    }

    size_t m1 = 1677721600; //Size_t holds bigger numbers
    auto start1 = high_resolution_clock::now(); //Starts the timer
    for(int i = 0; i < m1; i++){
      c = rand() % 100 + 1; //The number you add to ab position
      b = rand() % n[x]; //Picking a random position column
      a = rand() % n[x]; //Picking a random position rows
      M[a][b] = M[a][b] + c; //makes the cell value the value of c
    }
  auto end1 = high_resolution_clock::now(); //Ends the timer
  auto duration1 = duration_cast<microseconds>(end1 - start1); //Calculates the time taken
  cout << "n = " << n[x] << " took " << duration1.count()/1000 << " Milliseconds" << endl;
  //Prints the time taken in milliseconds
  }

  cout << endl;
  cout << "m = 13421772800" << endl; //2nd value of m
  for(int x = 0; x < 6; x++){
    int a, b, c;
    //M array of arrays (pointers)
    int** M = new int* [n[x]]; //2d rray
    for(int i = 0; i < n[x]; i++){ //Array of array
      M[i] = new int[n[x]];
    }
    //Empty the array
    for(int i = 0; i < n[x]; i++){
        for(int j = 0; j < n[x]; j++){ 
          M[i][j] = 0; 
        }
    }

    size_t m2 = 13421772800;
    auto start2 = high_resolution_clock::now(); //Starts the timer
    for(int i = 0; i < m2; i++){
      c = rand() % 100 + 1; //The number you add to ab position
      b = rand() % n[x]; //Picking a random position column
      a = rand() % n[x]; //Picking a random position rows
      M[a][b] = M[a][b] + c; //Makes the cell value the value of c
    }
    auto end2 = high_resolution_clock::now(); //Ends the timer
    auto duration2 = duration_cast<microseconds>(end2 - start2); //Calculates the time taken
    cout << "n = " << n[x] << " took " << duration2.count()/1000 << " Milliseconds " << endl; 
    //Prints the time taken in milliseconds
  }
  return 0;
}