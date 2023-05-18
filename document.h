/*!
	\file
	\brief Заголовочный файл класса Работы с документом
*/

#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <list>
#include <memory>
#include "enums.h"

/*!
	\brief Класс Работы с документом

	Document предоставляет возможность создать новый документ для отрисовки,
	открыть существующий, сохранить изменения
*/
class Document
{
public:
	//! Конструктор по умолчанию
	Document();
	/*!
		Конструктор с параметром
		\param[in] name Путь к файлу и его имя 
	*/
	Document(String name);
	~Document();
	/*!
		Сохранение документа
		\param[in] name Путь к файлу и его имя
	*/
	void saveDocument(String name);
};

#endif // !DOCUMENT_H

