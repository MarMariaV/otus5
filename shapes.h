/*!
	\file
	\brief Заголовочный файл описание классов Фигур
*/
#ifndef SHAPES_H
#define SHAPES_H

#include <memory>
#include "enums.h"

/*!
	\brief Класс Двумерная точка

	Point2 предоставляет возможность создать двумерную точку,
	получить координаты точки
*/
class Point2
{
public:
	//! Конструктор по умолчанию
	Point2() {};
	/*!
		Конструктор с параметром
		\param[in] x Координата по оси x
		\param[in] y Координата по оси y
	*/
	Point2(int x, int y) : _x(x), _y(y) {};
	/*!
		Задание координат
		\param[in] x Координата по оси x
		\param[in] y Координата по оси y
	*/
	void setXY(int x, int y);
	//! Получение координаты x
	int getX();
	//! Получение координаты y
	int getY();
private:
	int _x;
	int _y;
};

/*!
	\brief Базовый класс Фигур

	BaseShape предоставляет интерфейс для создания Фигур
*/
class BaseShape
{
public:
	virtual bool create() = 0;
	virtual ~BaseShape();
};

/*!
	\brief Класс Линия

	Line позволяет создать Фигуру Линия по двум точкам
*/
class Line : public BaseShape
{
public:
	Line() = delete;
	/*!
		Конструктор с параметром
		\param[in] p1 Точка 1
		\param[in] p2 Точка 2
	*/
	Line(Point2 p1, Point2 p2);

private:
	Point2 _p1;
	Point2 _p2;

	bool create() override;
};

/*!
	\brief Класс Прямоугольник

	Line позволяет создать Фигуру Прямоугольник по двум точкам
*/
class Rectangle : public BaseShape
{
public:
	Rectangle() = delete;
	/*!
		Конструктор с параметром
		\param[in] p1 Точка 1
		\param[in] p2 Точка 2
	*/
	Rectangle(Point2 p1, Point2 p2);
private:
	Point2 _p1;
	Point2 _p2;

	bool create() override;
};


#endif // !SHAPES_H
