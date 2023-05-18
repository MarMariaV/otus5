/*!
	\file
	\brief Файл реализации класса Главного окна
*/

#include "mainwindow.h"
#include "graphiceditor.h"
#include "settings.h"
#include "document.h"

MainWindow::MainWindow()
{
	m_graphicEditor = new GraphicEditor();
}

MainWindow::~MainWindow()
{
}

void MainWindow::makePoint(int x, int y)
{
	bool firstPoint = true; // должна задаваться в другом месте
	if (firstPoint)
		point1.setXY(x, y);
	else
	{
		point2.setXY(x, y);
		m_graphicEditor->newShape(point1, point2);
	}
}

void MainWindow::newDocument()
{
	m_docs.push_back(std::make_unique<Document>());
}

void MainWindow::openDocument(String name)
{
	// тут должна быть проверка на существование
	m_docs.push_back(std::make_unique<Document>(name));
}

void MainWindow::closeDocument()
{
	// тут должна быть проверка на существование + на несохранённые изменения
	m_docs.erase(currentDocIter);
}

