// git1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
#include  "Windows.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Моя автобиография!\n\n" << endl;
	cout << "Имя: Сергей" << endl;
	cout << "Фамилилия: Главацкий" << endl;
	cout << "Отчество: Викторович" << endl;
	cout << "Дата рождения: 20 декабря 1997" << endl;
	cout << "Страна: Украина" << endl;
	cout << "Семейное положение: не женат" << endl;
	cout << "Город проживания: Винница" << endl;
	cout << "Город рождения: с. Степовка" << endl;
	cout << "Школа: СОШ I-III ст. с. Винниковцы" << endl;
	cout << "Дата окончания школы: 2015" << endl;
	cout << "Дата поступления в ВУЗ: 2015" << endl;
	cout << "Университет: ДонНУ им. В. Стуса" << endl;
	cout << "Специальность: Прикладная математика" << endl;
	cout << "Любимый спорт: футбол" << endl;
	cout << "Любимый животное: сова" << endl;
	cout << "Людимый цвет: синий" << endl;
	cout << "Вероисповедание: християнство" << endl;
	cout << "Служба в армии: не служил" << endl;
	cout << "Знание языков программирования: C, C++, C#" << endl;
	cout << "Електроная почта: foegit@gmail.com" << endl;

    return 0;
}

