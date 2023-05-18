/*!
	\file
	\brief Заголовочный файл класса Главного окна
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <list>
#include "shapes.h"

class GraphicEditor;
class Document;

/*!
	\brief Класс Главного окна

	MainWindow Главное окно GUI
*/
class MainWindow
{
public:
	//! Конструктор по умолчанию
	MainWindow();
	~MainWindow();
	/*!
		Сохранение точек для отрисовки фигуры и вызов метода отрисовки
		Может быть вызвана, если активен режим рисования фигуры
		\param[in] x Координата по оси x
		\param[in] y Координата по оси y
	*/
	void makePoint(int x, int y);
	//! Создание нового документа
	void newDocument();
	/*!
		Открытие существующего документа
		\param[in] name Путь к файлу и его имя
	*/
	void openDocument(String name);
	//! Закрытие документа
	void closeDocument();

private:
	GraphicEditor* m_graphicEditor;
	std::list<std::unique_ptr<Document>> m_docs;
	std::list<std::unique_ptr<Document>>::const_iterator currentDocIter;

	Point2 point1;
	Point2 point2;

};
#endif // !MAINWINDOW_H

