#include <iostream>

void initializeMatrix(int inputMatrix[2][2]){
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			inputMatrix[i][j] = 0;
		}
	}
}

void printMatrix(int inputMatrix[2][2]){
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("%d ", inputMatrix[i][j]);
		}
		printf("\n");
	}	
}

int main(){
	int matA[2][2];
	int matB[2][2];
	
	initializeMatrix(matA);
	initializeMatrix(matB);

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
}
