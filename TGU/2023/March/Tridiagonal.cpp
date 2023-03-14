//#include <iostream>
//#include <string>
//using namespace std;
//
//#define n 11
//
//
//void printArray(double* arr, string ArrName) {
//	for (int i = 1; i < n + 1; i++)
//	{
//		cout << ArrName << "[" << i << "] \t= " << arr[i] << endl;
//	}
//	cout << endl;
//}
//
//void findD(double* A, double* B, double* C, double* X, double* D) {
//
//	for (int i = 1; i < n + 2; i++)
//	{
//		D[i] = A[i] * X[i - 1] + B[i] * X[i] + C[i] * X[i + 1];
//		//cout << "D[" << i << "] =\t" << D[i] << endl;
//	}
//}
//
//void findCPrime(double* A, double* B, double* C, double* CP) {
//	for (int i = 1; i < n + 1; i++)
//	{
//		if (i == 1)
//		{
//			CP[i] = C[i] / B[i];
//		}
//		else {
//			CP[i] = C[i] / (B[i] - A[i] * CP[i - 1]);
//		}
//
//		CP[12] = 0.0;
//	}
//}
//
//void findDPrime(double* A, double* B, double* D, double* CP, double* DP) {
//	for (int i = 1; i < n + 2; i++)
//	{
//		if (i == 1)
//		{
//			DP[i] = D[i] / B[i];
//		}
//		else {
//			DP[i] = (D[i] - A[i] * DP[i - 1]) / (B[i] - A[i] * CP[i - 1]);
//		}
//	}
//}
//
//void findXSubstitution(double* CP, double* DP, double* X, double* XS) {
//	for (int i = 0; i < n + 1; i++)
//	{
//		if (i == n)
//		{
//			XS[i] = DP[i];
//		}
//		else {
//			XS[i] = DP[i] - CP[i] * X[i + 1];
//		}
//	}
//}
//
//int main() {
//	double x[12];
//
//	double A[n + 2] = { 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0 };    // lower diagonal
//	double B[n + 2] = { 0.0, 1.0,  2.0,  2.0,  2.0,  2.0,  2.0,  2.0,  2.0,  2.0,  2.0,  1.0, 0.0 };    // main diagonal
//	double C[n + 2] = { 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0 };    // upper diagonal
//	double X[n + 2] = { 0.0, 2.0, 5.0, 4.0, 4.0, 4.0, 4.0, 4.0, 4.0, 4.0, 4.0, 2.0, 0.0 };    // RHS
//
//	double D[n + 2] = { 0.0 };
//	double CP[n + 2] = { 0.0 }; // c primes
//	double DP[n + 2] = { 0.0 }; // d primes
//	double XS[n + 2] = { 0.0 }; // x substitution
//	XS[12] = 0.0;
//
//
//	findD(A, B, C, X, D);
//	printArray(D, "D");
//
//	findCPrime(A, B, C, CP);
//	printArray(CP, "CP");
//
//	findDPrime(A, B, D, CP, DP);
//	printArray(DP, "DP");
//
//	findXSubstitution(CP, DP, X, XS);
//	printArray(XS, "XS");
//
//	return 0;
//}
//
