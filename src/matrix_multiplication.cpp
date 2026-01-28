#include <iostream>

//A function to set all the elements of a matrix to zero
void initializeMatrix(int inputMatrix[2][2]){
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			inputMatrix[i][j] = 0;
		}
	}
}

//A function to print the matrix formatted as rows and columns onto the console
void printMatrix(int inputMatrix[2][2]){
	//loop through the rows
	for(int i = 0; i < 2; i++){
		//loop through each column ina single row
		for(int j = 0; j < 2; j++){
			printf("%d ", inputMatrix[i][j]);
		}
		//start a new line at the end of a row
		printf("\n");
	}	
}

//A function that takes two 2 * 2 matrices and computes the product of the matrices
void multiplyMatrices(int matrixA[2][2], int matrixB[2][2], int resultMatrix[2][2]){
	//loop through the rows of the result matrix
	for(int row = 0; row < 2; row++){
		//loop through columns of the row
        for(int col = 0; col < 2; col++){
			//for each element of the result matrix, add up components from input matrices
            for(int k = 0; k < 2; k++){
            //k is the shared index when multiplying
            resultMatrix[row][col] += matrixA[row][k] * matrixB[k][col];
            }
        }
    }
}

int main(){
	int matA[2][2];
	int matB[2][2];
	int resultMatrix[2][2];
	
	initializeMatrix(matA);
	initializeMatrix(matB);
	initializeMatrix(resultMatrix);

	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("Enter element [%d][%d] for matrix A: \n", i, j);
			std::cin >> matA[i][j];
		}
	}	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("Enter element [%d][%d] for matrix B: \n", i, j);
			std::cin >> matB[i][j];
		}
	}		
	
	std::cout << "Matrix A is: \n" ;
	printMatrix(matA);
	std::cout << "Matrix B is: \n" ;
	printMatrix(matB);

	multiplyMatrices(matA, matB, resultMatrix);
    printf("the product of matrix A and B is: \n");
    printMatrix(resultMatrix);
}
