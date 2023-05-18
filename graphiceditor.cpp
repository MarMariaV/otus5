/*!
	\file
	\brief Файл реализации класса Графического редактора
*/

#include "graphiceditor.h"
#include "settings.h"

void GraphicEditor::newShape(Point2 point1, Point2 point2)
{
	switch (Settings::getInstance().getShapeType())
	{
	case eShapes::eLine:
		m_shapes.push_back(std::make_unique<Line>(point1, point2)); 
		break;
	case eShapes::eRectangle:
		m_shapes.push_back(std::make_unique<Rectangle>(point1, point2));
		break;
	default:
		break;
	}

	reRender();
}

void GraphicEditor::delShape(Point2 point)
{
	m_shapes.erase(getShapeFromPoint(point));

	reRender();
}

std::list<std::unique_ptr<BaseShape>>::const_iterator GraphicEditor::getShapeFromPoint(Point2 point)
{
	return std::list<std::unique_ptr<BaseShape>>::const_iterator();
}

void GraphicEditor::reRender()
{

}
