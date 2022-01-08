#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <stdio.h>
#include <queue>
using namespace std;

vector <string> tops;	// вектор остановок
int n; int m;
int** matrix;			// матрица смежности

void init() {
	// cout << "Количество маршрутов: m = ";
	// cin  >> m;
	cout << "Максимальное количество остановок: n = ";
	cin  >> n;
	matrix = new int*[n];
	for (int i = 0; i < n; i++)
    	matrix[i] = new int[n];
	// cout << "инициализирована матрица смежности:" << endl << "  ";
	// for ( int i = 0; i < n; i++ )
	// 		cout << i+1 << " ";
	// 	cout << endl;
	// 	for ( int i = 0; i < n; i++ ) {
	// 		cout << i+1 << " "; 
	// 		for ( int j = 0; j < n; j++ )
	// 			cout << matrix[i][j] << " ";
	// 		cout << endl;	
	// 	}
}								

int menu()
{
	int input;
	cout << endl << "--------------МЕНЮ--------------"
		 << endl << "0: показать остановки"
		 << endl << "1: добавить остановки"
		 << endl << "2: добавить маршрут"
		 << endl << "3: показать матрицу смежности"
		 << endl << "4: выполнить запрос"
		 << endl << "5: выход"
		 << endl <<"________________________________"
		 << endl << "выберите действие: ";
	cin  >> input;
	return  input;
}

int show_top()
{
	if ( tops.empty() ) {
		cout << "необходимо добавить остановки" << endl;
		return 0;
	}
	cout << "существующие остановки:" << endl;
	for ( int i = 0; i < tops.size(); i++ )
		cout << i+1 << " " << tops[i] << endl;
	return 0;
}

void add_top()
{
	cout << "Введите названия новых остановок " << endl
		 << "(для окончания ввода нажмите #) :" << endl;
	int count = 0;
	while (true) 
	{
		string name;
		cin >> name;
		if ( name == "#" ) 
			break;
		tops.push_back(name);
		count++;
	}
	cout << "добавлено " << count << " ост." << endl;
}

int add_branch()
{
	if ( tops.size() == 0 ){
		cout << "необходимо добавить остановки" << endl;
		return 0;
	}
	int a;
	int b;
	cout << "введите номер пункта А: ";
	cin >> a;
	cout << "введите номер пункта B: ";
	cin >> b;
	a--; b--;
	if ( a > tops.size() ) {
		cout << "ERROR: остановки " << a+1 << " не существует";
		return 0;
	}
	if ( b > tops.size() ) {
		cout << "ERROR: остановки " << b+1 << " не существует";
		return 0;
	}
	if ( a == b ) {
		cout << "ERROR: один пункт введен дважды";
		return 0;	
	}
	else
	if ( matrix[a][b] )
    	cout << "WARNING: маршрут уже сущестсвует";
	else {
    	matrix[a][b] = 1;
		matrix[b][a] = 1;
    	cout << "Маршрут " << tops[a] << " - " << tops[b] << " добавлен";
	}
	return 0;
}

int show_matrix()
{
	if ( tops.empty() ) {
		cout << "Необходимо добавить остановки";
		return 0;
	}
	else {
		cout << "матрица смежности для маршрутов автобусов:" << endl
			 << "  ";
		for ( int i = 0; i < tops.size(); i++ )
			cout << i+1 << " ";
		cout << endl;
		for ( int i = 0; i < tops.size(); i++ ) {
			cout << i+1 << " "; 
			for ( int j = 0; j < tops.size(); j++ )
				cout << matrix[i][j] << " ";
			cout << endl;	
		}
	}
	return 0;
}

bool bfs()
{
	int s;
	int t;
	cout << "Поиск маршрута А - B" << endl
		 << "введите номер пункта А: ";
	cin >> s;
	cout << "введите номер пункта B: ";
	cin >> t;
	s--; t--;
	cout << "Поиск маршрута: " << tops[s] << " - " << tops[t] << endl;

	// s - начальная вершина
	// t - пункт назначения

	// инициализируем очередь
	queue <int> q;
	// добавляем s в очередь
	q.push(s);
	cout << s+1;
	int visited[tops.size()];
	for ( int i = 0; i < tops.size(); i++ )
		visited[i] = 0;
	// помечаем s как посещенную вершину во избежание повторного добавления в очередь
	visited[s] = 1;
	while( q.size() > 0 ) {
		// v - первый элемент очереди
		const int v = q.front();
		// удаляем первый (верхний) элемент из очереди
		q.pop(); 
		int neighbor;
		// ищем соседей v
		for ( neighbor = 0; neighbor < tops.size(); neighbor++ ) {
			// если есть маршрут v - neighbor
			if ( matrix[v][neighbor] !=0 ) {
				// если сосед не посещался
				if ( !visited[neighbor] ) {
					// демонстрация поиска в ширину
					// cout << " - " << neighbor+1;
					// добавляем его в очередь
					q.push(neighbor);
					// помечаем вершину как посещенную
					visited[neighbor] = 1;
					// если сосед является пунктом назначения, мы победили
					if( neighbor == t ) {
						cout << endl << "Маршрут существует";
						return true;
					}
					
				}
			}
		}
	}
	cout << "visited: " << endl;
	for ( int i = 0; i < tops.size(); i++ )
		cout << i << " " << visited[i] << endl;
	// если t не обнаружено, значит пункта назначения достичь невозможно
	cout << endl << "Маршрут не существует" ;
	return false;
}

int main()
{
	init();
	int flag = 0;
	while ( !flag ) 
	{
    	int input = menu();
    	switch (input) {
		case 0:
        	show_top();
        	break;
    	case 1:
        	add_top();
        	break;
    	case 2:
        	add_branch();
        	break;
    	case 3:
        	show_matrix();
        	break;
    	case 4:
        	bfs();
        	break;
    	case 5:
        	cout << "--------------ВЫХОД-------------" << endl;
        	flag = 1;
        	break;
    	default:
        	cout << "404: bad input" << endl;
        	break;
    	}
	}
}
