#include <iostream>
#include <mpi.h>

int main(int argc, char argv[]) {
    
    MPI_Init(argc, argv);
    
    int rank, size;
    int *ptr;
    
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    
    int v = 0;
    
    
    if (rank != 0) {
        
    }
    
    else {
        
    }
    
}
