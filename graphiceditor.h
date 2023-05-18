/*!
	\file
	\brief Заголовочный файл класса Графического редактора
*/

#ifndef GRAPHICEDITOR_H
#define GRAPHICEDITOR_H

#include <list>
#include "shapes.h"

/*!
	\brief Класс Графического редактора

	GraphicEditor предоставляет возможность создать новую фигуру,
	удалить существующую фигуру
*/
class GraphicEditor
{
public:
	/*!
		Создаёт новую фигуру по двум точкам
		\param[in] point1 Координаты первой точки
		\param[in] point2 Координаты второй точки
	*/
	void newShape(Point2 point1, Point2 point2);
	/*!
		Удаляет фигуру в точке клика мыши, если она существует
		\param[in] point Координаты точки клика мыши
	*/
	void delShape(Point2 point);

private:
	std::list<std::unique_ptr<BaseShape>> m_shapes; //< Контейнер с указателями на все фигуры

	/*!
		Находит среди нарисованных фигур ту, которая находится в заданной точке
		\param[in] point Координаты точки клика мыши
	*/
	std::list<std::unique_ptr<BaseShape>>::const_iterator getShapeFromPoint(Point2 point);
	/*!
		Отрисовка на текущем документе 
	*/
	void reRender();
};

#endif // !GRAPHICEDITOR_H

