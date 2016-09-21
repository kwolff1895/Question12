/*
 * 3Darray.cpp
 *
 *  Created on: Sep 14, 2016
 *      Author: Kimberly
 */

#include <iostream>
#include <stdlib.h>
#include <array>
using namespace std;

void createMatrix(int &arrayList, int &variable1,int &variable2, int &variable3 );
void PrintMatrix(int &arrayList);

int main(){//create 3D array and 3 int variables initialized to -1
	int n;
	int arrayList= new int[n];
	int variable1 = -1;
	int variable2 = -1;
	int variable3 = -1;

	return arrayList;
}
/*
 * generate 3 random numbers, each between 2 and 6,
 * and set the parameters to each of the random numbers
 * allocate memory for your 3 dimensional array.
 * Fill in the 3-dimensional array with the sum of the
 * x,y, and z index at each location within the array.
 */
void createMatrix(int &arrayList, int &variable1,int &variable2, int &variable3 ){
	&variable1 = rand()%2+4;
	&variable2 = rand()%2+4;
	&variable3 = rand()%2+4;
	&arrayList[&variable1][&variable2][&variable3];
	int sum = &variable1 + &variable2 + &variable3;
	for (int i = 0; i< sizeof(arrayList); i++){
		arrayList[i]=sum;
	}

}

void PrintMatrix(int &arrayList){
	for (int i=0; i< sizeof(arrayList); i++){
		cout<<"This is a value in the matrix: "<<arrayList[i];

	}
	delete []arrayList;
}
