// Course:  CS213 - Programming II  - 2018
// Title:   Assignment I - Task 1 - Problem 0
// Program: CS213-2018-A1-T1-P0
// Purpose: Skeleton code for the student to start working
// Author:  Dr. Mohammad El-Ramly
// Date:    10 August 2018
// Version: 1.0

#include <iostream>
#include <iomanip>
#include <cassert>
//#include <cassert>

using namespace std;

// A structure to store a matrix
struct matrix
{
  int** data;       // Pointer to 2-D array that will simulate matrix
  int row, col;
};

// Already implemented
void createMatrix (int row, int col, int num[], matrix& mat);

// Student #1 with the smallest ID (e.g., 20170080)
// All these operations return a new matrix with the calculation result
matrix operator+  (matrix mat1, matrix mat2); // Add if same dimensions
matrix operator-  (matrix mat1, matrix mat2); // Sub if same dimensions
matrix operator*  (matrix mat1, matrix mat2); // Multi if col1 == row2
matrix operator+  (matrix mat1, int scalar);  // Add a scalar
matrix operator-  (matrix mat1, int scalar);  // Subtract a scalar
matrix operator*  (matrix mat1, int scalar);  // Multiple by scalar

// Student #2 with the middle ID (e.g., 20170082)
// The last operator >> takes an istream and a matrix and return the
// the same istream so it is possible to cascade input like
// cin >> matrix1 >> matrix2 << endl;
matrix operator+= (matrix& mat1, matrix mat2); // mat1 changes & return
					    // new matrix with the sum
matrix operator-= (matrix& mat1, matrix mat2); // mat1 changes + return new
					     // matrix with difference
matrix operator+= (matrix& mat, int scalar);   // change mat & return new matrix
matrix operator-= (matrix& mat, int scalar);   // change mat & return new matrix
void   operator++ (matrix& mat);   	// Add 1 to each element ++mat
void   operator-- (matrix& mat);    	// Sub 1 from each element --mat
istream& operator>> (istream& in, matrix& mat);
       	// Input matrix like this (dim 2 x 3) cin >> 2 3 4 6 8 9 12 123
       // and return istream to allow cascading input

//Student #3 with the biggest ID (e.g., 20170089)
ostream& operator<< (ostream& out, matrix mat);
       	// Print matrix  as follows (2 x 3)			4	 6 	  8
	       // and return ostream to cascade printing	9	12  	123
bool   operator== (matrix mat1, matrix mat2);	// True if identical
bool   operator!= (matrix mat1, matrix mat2); 	// True if not same
bool   isSquare   (matrix mat);  // True if square matrix
bool   isSymetric (matrix mat);  // True if square and symmetric
bool   isIdentity (matrix mat);  // True if square and identity
matrix transpose(matrix mat);    // Return new matrix with the transpose

//__________________________________________


 int main()
{
//int x;//variable for scalar
  int data1 [] = {1,2,3,4,5,6,7,8};
  int data2 [] = {13,233,3,4,5,6,7,8};
  int data3 [] = {10,100,10,100,10,100,10,100};
  int data4 [] = {13,233,3,4,5,6};
  int data5 [] = {10,100,10,100,10,100,10,100,1,1,1,1};

 //eman ayman
  int choose;

        while (true){
 /* matrix mat1, mat2, mat3;
  createMatrix (4, 2, data1, mat1);
    cout << "enter matrix 1  " << endl;
    cin >> mat1;
  createMatrix (4, 2, data2, mat2);
    cout << "enter matrix 2 " << endl;
    cin >> mat2;*/
    cout << " which procces you want to do \n "
    << "1) sum two matrices \n "
    << "2) difference between two matrices  \n"
    << "3) ++ matrix \n"
    << "4) -- matrix \n"
    << "5) sum matrix with num \n"
    << "6) minus from matrix \n"
    <<"7) sum two matrices and put the result in matrix 3 \n"
    <<"8) subtract two matrices and put the result in matrix 3 \n"
    <<"9) multiply two matrices and put the result in matrix 3 \n"
    <<"10) sum matrix with num and put the result in matrix 3 \n"
    <<"11) subtract matrix with number and put the result in matrix 3 \n"
    <<"12) multiply matrix with number and put the result in matrix 3 \n"
    <<"13) Check if two matrices are equal or not! \n"
    << "14) Check if two matrices aren't equal or not! \n"
    << "15) Check if the matrix is square or not! \n"
    << "16) Check if the matrix is symmetric or not! \n"
    << "17) Check if the matrix is identity or not! \n"
    << "18) transpose the matrix \n";
    cin >>choose ;
    if (choose ==1)
        {
            matrix mat1, mat2, mat3,mat4,mat5;
  createMatrix (4, 2, data3, mat3);
  createMatrix (4, 2, data1, mat1);
    cout << "enter matrix 1  " << endl;
    cin >> mat1;
  createMatrix (4, 2, data2, mat2);
    cout << "enter matrix 2 " << endl;
    cin >> mat2;
    cout << "the sum of the two matrices is  \n";
        {
            mat1 += mat2;
   for(int i = 0; i < mat1.row ;i++)
        {
   for(int j = 0;j < mat1.col;j++)
       {
        cout << mat1.data[i][j] << " ";
       }
        cout << endl;
        }
        }
        }

    if (choose==2)
        {
            matrix mat1, mat2, mat3,mat4,mat5;
  createMatrix (4, 2, data3, mat3);
  createMatrix (4, 2, data1, mat1);
    cout << "enter matrix 1  " << endl;
    cin >> mat1;
  createMatrix (4, 2, data2, mat2);
    cout << "enter matrix 2 " << endl;
    cin >> mat2;
    cout << "the difference between the two matrices is \n";
            mat1 -= mat2;
    for(int i = 0; i < mat1.row ;i++)
            {
    for(int j = 0;j < mat1.col;j++)
        {
    cout << mat1.data[i][j] << " ";
        }
    cout << endl;
    }
    }

   if(choose==3)
    {
        matrix mat1;
  createMatrix (4, 2, data1, mat1);
    cout << "enter matrix 1 with 8 num  " << endl;
    cin >> mat1;
        mat1+=1;
  {
     for(int i = 0; i < mat1.row ;i++)
  {
    for(int j = 0;j < mat1.col;j++)
        {
    cout << mat1.data[i][j] << " ";
        }
   cout << endl;
  }
  }
  }
  if(choose==4)
   {
       matrix mat1;
  createMatrix (4, 2, data1, mat1);
    cout << "enter matrix 1 with 8 num  " << endl;
    cin >> mat1;

       mat1-=1;
  {
     for(int i = 0; i < mat1.row ;i++)
  {
    for(int j = 0;j < mat1.col;j++)
        {
    cout << mat1.data[i][j] << " ";
        }
   cout << endl;
  }
  }
  }

  if (choose==5)
    {
        matrix mat1;
  createMatrix (4, 2, data1, mat1);
    cout << "enter matrix 1 with 8 num  " << endl;
    cin >> mat1;

        int scalar;
  cout << "enter the num that you want to add it with matrix 1 " << endl;
  cin >> scalar;
  cout << "sum matrix with num \n";
    mat1 +=scalar ;
  for(int i = 0; i < mat1.row ;i++)
    {
    for(int j = 0;j < mat1.col;j++)
    {
    cout << mat1.data[i][j] << " ";
    }

  cout << endl;
  }
  }
  if (choose==6){
    matrix mat1;

  createMatrix (4, 2, data1, mat1);
    cout << "enter matrix 1 with 8 num  " << endl;
    cin >> mat1;

        int scalar;
  cout << "enter the num that you want to - it with matrix 1 "<< endl;
  cin >> scalar;
  cout << "the - of the  matrix 1 is >> \n";
    mat1 -=scalar ;
  for(int i = 0; i < mat1.row ;i++)
  {
    for(int j = 0;j < mat1.col;j++)
        {
    cout << mat1.data[i][j] << " ";
        }

  cout << endl;
  }
  }


   if (choose ==7){matrix mat1, mat2, mat3;
  createMatrix (4, 2, data3, mat3);
  createMatrix (4, 2, data1, mat1);
    cout << "enter matrix 1 with 8 num  " << endl;
    cin >> mat1;
  createMatrix (4, 2, data2, mat2);
    cout << "enter matrix 2 with 8 num " << endl;
    cin >> mat2;
      mat3=mat1+mat2;{
       for(int i = 0; i < mat3.row ;i++)
  {
    for(int j = 0;j < mat3.col;j++)
        {
    cout << mat3.data[i][j] << " ";
        }

  cout << endl;
  }
  }}
  if (choose ==8){
        matrix mat1, mat2, mat3;
  createMatrix (4, 2, data3, mat3);
  createMatrix (4, 2, data1, mat1);
    cout << "enter matrix 1  with 8 num " << endl;
    cin >> mat1;
  createMatrix (4, 2, data2, mat2);
    cout << "enter matrix 2 with 8 num " << endl;
    cin >> mat2;
      mat3=mat1-mat2;{
       for(int i = 0; i < mat3.row ;i++)
  {
    for(int j = 0;j < mat3.col;j++)
        {
    cout << mat3.data[i][j] << " ";
        }

  cout << endl;
  }
  }}
 if (choose==9){
        matrix mat1, mat4,mat5;
  createMatrix (4, 2, data1, mat1);
    cout << "enter matrix 1  with 8 num " << endl;
    cin >> mat1;
        createMatrix (2,3, data4, mat4);
        createMatrix (4,3, data5, mat5);
        cout<<"enter the matrix that you want to multiply with it that Consists with 6 num  \n";
        cin >> mat4;
    mat5=mat1*mat4;
  for(int i = 0; i < mat5.row ;i++)
  {
    for(int j = 0;j < mat5.col;j++)
        {
    cout << mat5.data[i][j] << " ";
        }

  cout << endl;
  }
  }
  if (choose ==10){
        matrix mat1, mat3;
  createMatrix (4, 2, data3, mat3);
  createMatrix (4, 2, data1, mat1);
    cout << "enter matrix 1  with 8 num " << endl;
    cin >> mat1;

       int scalar;
  cout << "enter the num that you want to add it with matrix 1 " << endl;
  cin >> scalar;
  cout << "sum matrix with num \n";
    mat3 =mat1+scalar ;
  for(int i = 0; i < mat3.row ;i++)
    {
    for(int j = 0;j < mat1.col;j++)
    {
    cout << mat3.data[i][j] << " ";
    }

  cout << endl;
  }
  }
  if (choose==11){
        matrix mat1, mat3;
  createMatrix (4, 2, data3, mat3);
  createMatrix (4, 2, data1, mat1);
    cout << "enter matrix 1 with 8 num  " << endl;
    cin >> mat1;

        int scalar;
  cout << "enter the num that you want to add it with matrix 1 " << endl;
  cin >> scalar;
  cout << "sum matrix with num \n";
    mat3 =mat1-scalar ;
  for(int i = 0; i < mat3.row ;i++)
    {
    for(int j = 0;j < mat1.col;j++)
    {
    cout << mat3.data[i][j] << " ";
    }

  cout << endl;
  }
  }
        if (choose ==12)
        {
            matrix mat1, mat3;
  createMatrix (4, 2, data3, mat3);
  createMatrix (4, 2, data1, mat1);
    cout << "enter matrix 1  with 8 num " << endl;
    cin >> mat1;

            int scalar;
  cout << "enter the num that you want to add it with matrix 1 " << endl;
  cin >> scalar;
  cout << "sum matrix with num \n";
    mat3 =mat1*scalar ;
  for(int i = 0; i < mat3.row ;i++)
    {
    for(int j = 0;j < mat1.col;j++)
    {
    cout << mat3.data[i][j] << " ";
    }

  cout << endl;
  }
  }
if (choose ==13){
        matrix mat1, mat2;
  createMatrix (4, 2, data2, mat2);
  createMatrix (4, 2, data1, mat1);
cout << "enter the first matrix\n";
cin >> mat1;
cout << "enter the second matrix\n";
cin >> mat2;
operator== (mat1 , mat2);
if (operator== (mat1 , mat2))
        cout <<"matrices are identical";
    else
        cout <<"matrices aren't identical";
}
//_______________________________________________________________________
if (choose ==14){
     matrix mat1, mat2;
  createMatrix (4, 2, data2, mat2);
  createMatrix (4, 2, data1, mat1);
cout << "enter the first matrix\n";
cin >> mat1;
cout << "enter the second matrix\n";
cin >> mat2;
operator!= (mat1 , mat2);
if (operator!= (mat1 , mat2))
        cout <<"matrices aren't identical";
    else
        cout <<"matrices are identical";
}
//_______________________________________________________________________
if (choose ==15){
     matrix mat1;
  createMatrix (4, 2, data1, mat1);
cout << "enter the matrix\n";
cin >> mat1;
isSquare( mat1);
  if (isSquare( mat1))
        cout << "the matrix is square\n";
  else
        cout << "the matrix isn't square\n";
}
//_______________________________________________________________________
if (choose ==16){
     matrix mat1, mat2;
  createMatrix (4, 2, data2, mat2);
  createMatrix (4, 2, data1, mat1);
cout << "enter the matrix\n";
cin >> mat1;
 isSymetric ( mat1);
    if (isSymetric(mat1))
        cout << "Yes the matrix is symmetric\n";
    else
        cout << "No the matrix isn't symmetric\n";
}
//_______________________________________________________________________
if (choose ==17){
     matrix mat1;
  createMatrix (4, 2, data1, mat1);
cout << "enter the matrix\n";
cin >> mat1;
isIdentity ( mat1);
    if (isIdentity ( mat1))
        cout << "the matrix is identity type\n";
    else
        cout << "the matrix isn't identity type\n";
}
//_______________________________________________________________________
if (choose ==18){
     matrix mat1;
  createMatrix (4, 2, data1, mat1);
cout << "enter the matrix\n";
cin >> mat1;
 transpose( mat1);
    cout<<"transpose of matrix: "<<endl;
    for(int i=0;i<mat1.row;i++) {
       for(int j=0;j<mat1.col;j++) {
          cout<<mat1.data[i][j]<<" ";
          if(j==mat1.row-1)
          cout<<endl;
       }}}
  }
  return 0;}
 // _______________________
// Takes an array of data and stores in matrix according
// to rows and columns
void createMatrix (int row, int col, int num[], matrix& mat) {
  mat.row = row;
  mat.col = col;
  mat.data = new int* [row];

  for (int i = 0; i < row; i++)
    mat.data[i] = new int [col];

  for (int i = 0; i < row; i++)
    for (int j = 0; j < col; j++)
      mat.data[i][j] = num[i * col + j];
}
istream& operator>> (istream& in, matrix& mat)
    {
    for (int i=0; i < mat.row;i++)
    {
        for(int j = 0; j < mat.col;j++)
            in >> mat.data[i][j];
    }
    return in;
    }
    ostream& operator<< (ostream& out, matrix mat)
            {
    for (int i=0;i<mat.row;i++)
            {
for(int j = 0; j < mat.col;j++)
            {
            out << mat.data[i][j];
            }

return out;
    }
    }

matrix operator+= (matrix& mat1, matrix mat2)
    {
        if(mat1.row == mat2.row && mat2.col == mat1.col){
        for (int i=0; i < mat1.row;i++)
    {
        for(int j = 0; j < mat1.col;j++)
    {
            mat1.data[i][j]+= mat2.data[i][j];
    }
    }
    return mat1;
    }
    }
matrix operator-= (matrix& mat1, matrix mat2)
    {
        if(mat1.row == mat2.row && mat2.col == mat1.col)
    {
        for (int i=0; i < mat1.row;i++)
    {
        for(int j = 0; j < mat1.col;j++)
    {

    mat1.data[i][j]-=mat2.data[i][j];
    }
    }
    return mat1;
    }
    }

matrix  operator+= (matrix& mat, int scalar)
    {
    for (int i=0; i < mat.row;i++)
    {
        for(int j = 0; j < mat.col;j++)
    {
        mat.data[i][j]+=scalar;
    }
    }
    return mat;
    }


    matrix  operator-= (matrix& mat, int scalar)
    {
        for (int i=0; i < mat.row;i++)
    {
        for(int j = 0; j < mat.col;j++)
    {
        mat.data[i][j]-=scalar;}
    }
    return mat;
    }

void   operator++ (matrix& mat)
{for (int i=0; i < mat.row;i++)
    {
        for(int j = 0; j < mat.col;j++)
    {


    mat.data[i][j]+=1;
}}}
void   operator-- (matrix& mat)
{for (int i=0; i < mat.row;i++)
    {
        for(int j = 0; j < mat.col;j++)
    {


    mat.data[i][j]-=1;
}}}
///////////////////////////////////////////////////////
void setmat (int row, int col, matrix& mat)//function for create a new matrix mat by using mat1 and mat2;
{
    mat.row = row;
    mat.col = col;
    mat.data = new int* [row];

    for (int i = 0; i < row; i++)
        mat.data[i] = new int [col];
}matrix operator+  (matrix mat1, matrix mat2) // Add if same dimensions
{
    matrix mat;
    assert((mat1.row==mat2.row) && (mat1.col==mat2.col));

        setmat(mat1.row,mat1.col,mat);
        cout <<"matrix have the same dimensions"<<endl << " matrix 3 is \n" ;
        for (int i=0; i<mat1.row; i++)
        {
            for (int j=0; j<mat2.col; j++)
            {
                mat.data[i][j]=mat1.data[i][j]+mat2.data[i][j];

            }

        }
    return mat ;
}
matrix operator-  (matrix mat1, matrix mat2)// Sub if same dimensions
{

    matrix mat;
    assert((mat1.row==mat2.row) && (mat1.col==mat2.col));

        setmat(mat1.row,mat1.col,mat);
        cout <<"matrix have the same dimensions"<<endl<<" matrix 3 is \n";
        for (int i=0; i<mat1.row; i++)
        {
            for (int j=0; j<mat2.col; j++)
            {
                mat.data[i][j]=mat1.data[i][j] - mat2.data[i][j];

            }

        }
    return mat ;
}


matrix operator*  (matrix mat1, matrix mat4)// Multi if col1 == row2
{
    matrix mat;
    if (mat1.col==mat4.row )
    {
        setmat(mat1.row,mat4.col,mat);
        for (int i=0; i<mat1.row; i++)
            for (int j=0; j<mat4.col; j++)
                mat.data[i][j]=0;

        cout <<"matrix have the same dimensions"<<endl<<" matrix 3 is \n";
        for (int i=0; i<mat1.row; i++)
        {
            for (int j=0; j<mat4.col; j++)
            {
                for (int k=0; k<mat1.col ; k++)
                {
                        mat.data[i][j]+=mat1.data[i][k]*mat4.data[k][j];
                }


            }

        }
    }
    else
        cout<<" the matrix do not have same dimensions"<<endl<<endl;
    return mat ;
}
matrix operator+  (matrix mat1, int scalar) // Add a scalar
{
    matrix mat;


    setmat(mat1.row,mat1.col,mat);
    for (int i=0; i<mat1.row; i++)
    {
        for (int j=0; j<mat1.col; j++)
        {
            mat.data[i][j]=mat1.data[i][j]+scalar;

        }

    }
    return mat ;
}
matrix operator-  (matrix mat1, int scalar) // Subtract a scalar
{
    matrix mat;


    setmat(mat1.row,mat1.col,mat);
    for (int i=0; i<mat1.row; i++)
    {
        for (int j=0; j<mat1.col; j++)
        {
            mat.data[i][j]=mat1.data[i][j]-scalar;

        }

    }
    return mat ;
}
matrix operator*  (matrix mat1, int scalar)  // Multiple by scalar
{
    matrix mat;


    setmat(mat1.row,mat1.col,mat);
    for (int i=0; i<mat1.row; i++)
    {
        for (int j=0; j<mat1.col; j++)
        {
            mat.data[i][j]=mat1.data[i][j]*scalar;

        }

    }
    return mat ;
}
bool   operator== (matrix mat1, matrix mat2)
 {
    for(int i=0; i < mat1.row;i++)
    {
        for(int j = 0; j < mat1.col;j++)
        {
            for(int i=0; i < mat2.row;i++)
            {
                for(int j = 0; j < mat2.col;j++)
                {
                    if (mat1.data[i][j]!=mat2.data[i][j])

                        return 0;
                    else
                        return 1;
                }
            }
        }
    }

}
bool   operator!= (matrix mat1, matrix mat2)
{
    for(int i=0; i < mat1.row;i++)
    {
        for(int j = 0; j < mat1.col;j++)
        {
            for(int i=0; i < mat2.row;i++)
            {
                for(int j = 0; j < mat2.col;j++)
                {
                    if (mat1.data[i][j]==mat2.data[i][j])

                        return 0;
                    else
                        return 1;
                }
            }
        }
    }
}
bool   isSquare   (matrix mat1)
{
    for (int i = 0; i < mat1.row; i++)
        for (int j = 0; j < mat1.col; j++)
            if (mat1.row!= mat1.col)
                return false;
    return true;
}
bool   isSymetric (matrix mat1)
{
    for (int i = 0; i < mat1.row; i++)
        for (int j = 0; j < mat1.col; j++)
            if (mat1.data[i][j] != mat1.data[j][i])
                return false;
    return true;
}

bool   isIdentity (matrix mat1)
{
     for (int i = 0; i < mat1.row; i++)
    {
        for (int j = 0; j < mat1.col; j++)
        {
            if (mat1.row == mat1.col)

                if ((i%4==0) && (mat1.data[i][j]==1))
                    return true;

                else
                    return false;
            else
                return false;
        }
    }
}
matrix transpose(matrix mat1)
{
    for (int i = 0; i < mat1.row; i++)
    {
        for (int j = 0; j < mat1.col; j++)
        {
            mat1.data[i][j] = mat1.data[j][i];
        }
    }
}



