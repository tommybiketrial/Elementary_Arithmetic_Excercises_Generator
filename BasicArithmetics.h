#pragma once
#include <windows.h>
#include <time.h>
#include <vector>

using namespace std;

template <typename T>
class QuestionsAndAnswer {

public:
	vector<T> Question1, Question2, Answer, Remainder;

	void generateAdditions(T QuantityOfQuestions, T LowestNumber, T HighestNumber);
	void generateSubtractionsNormal(T QuantityOfQuestions, T LowestNumber, T HighestNumber);
	void generateSubtractionsNoNegative(T QuantityOfQuestions, T LowestNumber, T HighestNumber);
	void generateSubtractionsNegative(T QuantityOfQuestions, T LowestNumber, T HighestNumber);
	void generateMultiplications(T QuantityOfQuestions, T LowestNumber, T HighestNumber);
	void generateDivisionsWithRemainders(T QuantityOfQuestions, T LowestNumber, T HighestNumber);
	void generateDivisions(T QuantityOfQuestions, T LowestNumber, T HighestNumber);

	//print
	/*
	void printQuestionAns(vector<T>ans, vector<T>q1, vector<T>q2, vector<T>remainder, char TYPE) {
		if (remainder[1] == -1) {
			for (int i = 0; i < ans.size(); i++) {
				cout << i + 1 << ". " << q1[i] << " " << TYPE << " " << q2[i] << " = " << ans[i] << "\n";
				//printf("%f. %f %c %f = %f\n",i + 1, q1[i], TYPE, q2[i], ans[i]);
			}
		}
		else {
			for (int i = 0; i < ans.size(); i++) {
				cout << i + 1 << ". " << q1[i] << " " << TYPE << " " << q2[i] << " = " << ans[i] << "..." << remainder[i] << "\n";
				//printf("%d. %d %c %d = %d...%d\n", i + 1, q1[i], TYPE, q2[i], ans[i], remainder[i]);
			}
		}
	}

	void printQuestion(vector<T>q1, vector<T>q2, char TYPE) {
		for (int i = 0; i < q1.size(); i++) {
			cout << i + 1 << ". " << q1[i] << " " << TYPE << " " << q2[i] << " = " << "\n";
			//printf("%f. %f %c %f =\n",i + 1, q1[i], TYPE, q2[i]);
		}
	}
	*/
};

template <typename T> void QuestionsAndAnswer<T>::generateAdditions(T QuantityOfQuestions, T LowestNumber, T HighestNumber) {
	srand(time(NULL));
	vector<T> Q1Arr, Q2Arr, AnsArr, RemainderArr;
	T a, b;
	for (int i = 0; i < QuantityOfQuestions; i++) {
		a = (rand() % (int)HighestNumber + (int)LowestNumber);
		b = (rand() % (int)HighestNumber + (int)LowestNumber);
		Q1Arr.push_back(a);
		Q2Arr.push_back(b);
		AnsArr.push_back(a + b);
		RemainderArr.push_back(-1);
	}
	Question1 = Q1Arr;
	Question2 = Q2Arr;
	Answer = AnsArr;
	Remainder = RemainderArr;
}

template <typename T> void QuestionsAndAnswer<T>::generateSubtractionsNormal(T QuantityOfQuestions, T LowestNumber, T HighestNumber) {
	srand(time(NULL) - 5);
	vector<T> Q1Arr, Q2Arr, AnsArr, RemainderArr;
	T a, b;
	for (int i = 0; i < QuantityOfQuestions; i++) {
		a = (rand() % (int)HighestNumber + (int)LowestNumber);
		b = (rand() % (int)HighestNumber + (int)LowestNumber);
		Q1Arr.push_back(a);
		Q2Arr.push_back(b);
		AnsArr.push_back(a - b);
		RemainderArr.push_back(-1);
	}
	Question1 = Q1Arr;
	Question2 = Q2Arr;
	Answer = AnsArr;
	Remainder = RemainderArr;
}

template <typename T> void QuestionsAndAnswer<T>::generateSubtractionsNoNegative(T QuantityOfQuestions, T LowestNumber, T HighestNumber) {
	srand(time(NULL) - 10);
	vector<T> Q1Arr, Q2Arr, AnsArr, RemainderArr;
	T a, b;
	for (int i = 0; i < QuantityOfQuestions; i++) {
		a = (rand() % (int)HighestNumber + (int)LowestNumber);
		b = (rand() % (int)HighestNumber + (int)LowestNumber);
		if (b > a) {
			int tmp = a;
			a = b;
			b = tmp;
		}
		Q1Arr.push_back(a);
		Q2Arr.push_back(b);
		AnsArr.push_back(a - b);
		RemainderArr.push_back(-1);
	}
	Question1 = Q1Arr;
	Question2 = Q2Arr;
	Answer = AnsArr;
	Remainder = RemainderArr;
}

template <typename T> void QuestionsAndAnswer<T>::generateSubtractionsNegative(T QuantityOfQuestions, T LowestNumber, T HighestNumber) {
	srand(time(NULL) - 15);
	vector<T> Q1Arr, Q2Arr, AnsArr, RemainderArr;
	T a, b;
	for (int i = 0; i < QuantityOfQuestions; i++) {
		a = (rand() % (int)HighestNumber + (int)LowestNumber);
		b = (rand() % (int)HighestNumber + (int)LowestNumber);
		if (a > b) {
			int tmp = a;
			a = b;
			b = tmp;
		}
		Q1Arr.push_back(a);
		Q2Arr.push_back(b);
		AnsArr.push_back(a - b);
		RemainderArr.push_back(-1);
	}
	Question1 = Q1Arr;
	Question2 = Q2Arr;
	Answer = AnsArr;
	Remainder = RemainderArr;
}

template <typename T> void QuestionsAndAnswer<T>::generateMultiplications(T QuantityOfQuestions, T LowestNumber, T HighestNumber) {
	srand(time(NULL) - 20);
	vector<T> Q1Arr, Q2Arr, AnsArr, RemainderArr;
	T a, b;
	for (int i = 0; i < QuantityOfQuestions; i++) {
		a = (rand() % (int)HighestNumber + (int)LowestNumber);
		b = (rand() % (int)HighestNumber + (int)LowestNumber);
		Q1Arr.push_back(a);
		Q2Arr.push_back(b);
		AnsArr.push_back(a * b);
		RemainderArr.push_back(-1);
	}
	Question1 = Q1Arr;
	Question2 = Q2Arr;
	Answer = AnsArr;
	Remainder = RemainderArr;
}

template <typename T> void QuestionsAndAnswer<T>::generateDivisionsWithRemainders(T QuantityOfQuestions, T LowestNumber, T HighestNumber) {
	srand(time(NULL) - 25);
	vector<T> Q1Arr, Q2Arr, AnsArr, RemainderArr;
	T a, b;
	for (int i = 0; i < QuantityOfQuestions; i++) {
		a = (rand() % (int)(HighestNumber - LowestNumber)) + (int)LowestNumber + 1;
		b = (((rand() % (int)(HighestNumber - LowestNumber)) + (int)LowestNumber + 1) / 5) + 1;
		Q1Arr.push_back(a);
		Q2Arr.push_back(b);
		AnsArr.push_back(a / b);
		RemainderArr.push_back(a % b);
	}
	Question1 = Q1Arr;
	Question2 = Q2Arr;
	Answer = AnsArr;
	Remainder = RemainderArr;
}

template <typename T> void QuestionsAndAnswer<T>::generateDivisions(T QuantityOfQuestions, T LowestNumber, T HighestNumber) {
	srand(time(NULL) - 30);
	vector<T> Q1Arr, Q2Arr, AnsArr, RemainderArr;
	T a, b;
	for (int i = 0; i < QuantityOfQuestions; i++) {
		a = (rand() % (int)(HighestNumber - LowestNumber)) + (int)LowestNumber + 1;
		b = (((rand() % (int)(HighestNumber - LowestNumber)) + (int)LowestNumber + 1) / 5) + 1;
		Q1Arr.push_back(a);
		Q2Arr.push_back(b);
		AnsArr.push_back(a / b);
		RemainderArr.push_back(-1);
	}
	Question1 = Q1Arr;
	Question2 = Q2Arr;
	Answer = AnsArr;
	Remainder = RemainderArr;
}