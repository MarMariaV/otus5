/*!
	\file
	\brief Файл реализации класса Работы с документом
*/

#include "settings.h"

void Settings::setShapeType(eShapes type)
{
	currentShape = type;
}

eShapes Settings::getShapeType()
{
	return currentShape;
}
