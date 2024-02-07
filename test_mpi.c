#include <stdio.h>
#include <mpi.h>

int main() {
  MPI_Init(NULL, NULL);
  int my_rank, n_ranks;
  MPI_Comm_rank(MPI_COMM_WORLD, &my_rank);
  MPI_Comm_size(MPI_COMM_WORLD, &n_ranks);
  printf("%d / %d\n", my_rank, n_ranks);
  MPI_Finalize();
}
