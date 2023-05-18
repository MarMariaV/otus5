/*!
	\file
	\brief Заголовочный файл класса Настройки
*/

#ifndef SETTINGS_H
#define SETTINGS_H

#include "enums.h"

/*!
	\brief Класс Настройки

	Settings хранит все настройки графического редактора
	(например: текущего цвета, ширины линии). Синглтон
*/
class Settings
{
public:
	//! Получение экземпляра класса
	static Settings& getInstance() {
		static Settings instance;
		return instance;
	}
	/*!
		Задание из GUI типа отрисовываемой фигуры
		\param[in] type Тип фигуры
	*/
	void setShapeType(eShapes type);
	//!	Получение типа отрисовываемой фигуры. Задаётся в GUI
	eShapes getShapeType();

private:
	Settings() = default;

	Settings(const Settings& root) = delete;
	Settings& operator=(const Settings&) = delete;
	Settings(Settings&& root) = delete;
	Settings& operator=(Settings&&) = delete;

	~Settings() = default;

	eShapes currentShape;
};

#endif // !SETTINGS_H
