#pragma once

/**
    @file Book.h
    @brief Заголовочный файл класса книги
    @copyright ВоГУ
    @author Гарманов А.С
    @date 10.12.2023
    @version 1.0.0
\par Использует классы
    @ref Book
\par Содержит класс
    @ref Book

*/

/// Класс описания книг
/*
    Содержит данные книг для фильтрации
*/


#include <iostream>
#include <string>

class Book {
private:
    std::string author;     ///<Автор
    std::string title;      ///<Название  
    std::string publisher;  ///<Издательство
    int year;               ///<Год издания
    int pageCount;          ///<Количество страниц

public:
    /// Конструктор для класса Book
    /**
        принимает параметры для автора, названия, издателя, года и количества страниц и инициализирует соответствующие атрибуты объекта Book.
        \param author Имя автора
        \param title Название книги
        \param publisher Издательство книги
        \param year Год выпуска книги
        \param pageCount Количество страниц книги
    */
    Book(std::string author, std::string title, std::string publisher, int year, int pageCount)
        : author(author), title(title), publisher(publisher), year(year), pageCount(pageCount) {}

    /**
        Данная функция принимает имя автора и выводит название книги этого автора
        \brief Книги заданного автора;
        \param authorName Имя автора 
        \return title Название книги данного автора
        \throw IsEmpty У этого автора нет книг
    */
    void showBooksByAuthor(std::string authorName) {
        if (author == authorName) {
            std::cout << title << std::endl;
        }
    }

    /**
        Данная функция выводит список книг, выпущенных заданным издательством
        \brief Список книг заданного издательства;
        \param publisherName Название издательства 
        \return title Название книги данного издаьтельства
        \throw IsEmpty У этого издательства нет книг
    */

    void showBooksByPublisher(std::string publisherName) {
        if (publisher == publisherName) {
            std::cout << title << std::endl;
        }
    }

    /**
        Данная функция выводит список книг, выпущенных после заданного года
        \brief Книги выпущенные после заданного года;
        \param targetYear Год издания
        \return title Название книги выпущенной после этого года
        \throw IsEmpty Книг выпущенных после этого года нет
    */

    void showBooksAfterYear(int targetYear) {
        if (year > targetYear) {
            std::cout << title << std::endl;
        }
    }
};

int main() {

}

