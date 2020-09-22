#include <iostream>
using namespace std;
int main()
{
	int i=0;
	int *const pi=&i;//нельзя изменить значение pi; const верхнего уровня
	const int ci=42;//нельзя изменить ci, const верхнего уровня
	const int *p2=&ci;//нельзя изменить p2; const нижнего уровня
	const int *const p3=p2;//справа const верхнего уровня, слева нет
	const int &r=ci;//const в ссылочных типах всегда нижнего уровня
	
	//различие между спецификаторами const верхнего и нижнего уровня проявляется при копировании объекта
	i=ci;//ok: копирование значения ci; спецификатор const верхнего уровня в ci игнорируется
	p2=p3;//ok: указывемые типы совпадают; спецификатор const верхнего уровня в p3 игнорируется
}
