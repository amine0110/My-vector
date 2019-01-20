// template.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>
using namespace std;

//template <typename T>




void ordre_croissant(double t[]) // cette fonction fait l'ordre croissant
{
	cout << "Ordre croissant : " << endl;
	int a = 0;
	bool s = false;
	int b = 0;

	do {
		s = false;
		for (int i = 0; i < 4; i++)
		{
			if (t[i] > t[i + 1])
			{
				a = t[i];
				t[i] = t[i + 1];
				t[i + 1] = a;
				s = true;
			}
		}
	} while (s == true);
} 

void ordre_decroissant(double t[]) // cette fonction fait l'ordre décroissant
{
	cout << "Ordre decroissant : " << endl;
	int a = 0;
	bool s = false;
	int b = 0;

	do {
		s = false;
		for (int i = 0; i < 4; i++)
		{
			if (t[i] < t[i + 1])
			{
				a = t[i];
				t[i] = t[i + 1];
				t[i + 1] = a;
				s = true;
			}
		}
	} while (s == true);
}

double max(double t[]) // cette fonction définie la grande valeur du tableau
{
	ordre_croissant(t);
	return t[4];
}

double min(double t[]) // cette fonction définie la petite valeur du tableau
{
	ordre_croissant(t);
	return t[0];
}

double somme(double t[]) // cette fonction fait la somme
{
	double r = 0;
	for (int i = 0; i < 5; i++) r += t[i];
	return r;
}

double fin(double t[]) // cette fonction donne le dernier element du tableau
{
	return t[4];
}

double debut(double t[]) // cette fonction donne le premier element du tableau
{
	return t[0];
}

void print(double t[]) // cette fonction affiche le tableau
{
	for (int i = 0; i < 5; i++) cout << t[i] << endl;
}

int main()
{
	double a[] = { 5,4,2,0,9 };
	ordre_croissant(a);
	print(a);
	
	ordre_decroissant(a);
	print(a);

	cout << "le max est : " << max(a) << endl;
	cout << "la somme = " << somme(a) << endl;
	cout << "la fin est : " << fin(a) << endl;
	cout << "le debut est : " << debut(a) << endl;
	
	
	
	
	
	return 0;
}

