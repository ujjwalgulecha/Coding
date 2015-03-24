#include "hungarian.h"

std::vector< std::vector<int> > array_to_matrix(int* m, int rows, int cols) {
  int i,j;
  std::vector< std::vector<int> > r;
  r.resize(rows, std::vector<int>(cols, 0));

  for(i=0;i<rows;i++)
  {
    for(j=0;j<cols;j++)
      r[i][j] = m[i*cols+j];
  }
  return r;
}


int main() {

  /* an example cost matrix */
  int r[3*3] =  {20,90,10,60,30,40,90,90, 120};
  std::vector< std::vector<int> > m = array_to_matrix(r,3,3);

  /* initialize the gungarian_problem using the cost matrix*/
  Hungarian hungarian(m , 3,3, HUNGARIAN_MODE_MINIMIZE_COST) ;

  //fprintf(stderr, "assignement matrix has a now a size %d rows and %d columns.\n\n",  hungarian.ro,matrix_size);

  /* some output */
  fprintf(stderr, "cost-matrix:");
  hungarian.print_cost();

  /* solve the assignement problem */
  hungarian.solve();

  /* some output */
  fprintf(stderr, "assignment:");
  hungarian.print_assignment();


  return 0;
}
