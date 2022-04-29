# Virtual-Memory-Test
This program was created using the the algorithm:
while more input do{
  read a triple [i,j,x];
  M[i,j] := M[i,j] + x;
}
in order to determine if virtual memory would be used once physical memory was gone, in order to prevent a program from crashing.

The program was tested with matrix sizes of 16, 64, 256, 1024, and 16384. These matrixes were all tested by having the program generate a random number and place it in a random location in the matrix for both 1,677,721,600 iterations and 13,421,772,800 iterations. As this occured the program was timed in milliseconds in order to determine how long it took to run through the respective number of iterations for each matrix. 
    
