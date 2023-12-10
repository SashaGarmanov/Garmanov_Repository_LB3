#pragma once

/**
    @file Book.h
    @brief ������������ ���� ������ �����
    @copyright ����
    @author �������� �.�
    @date 10.12.2023
    @version 1.0.0
\par ���������� ������
    @ref Book
\par �������� �����
    @ref Book

*/

/// ����� �������� ����
/*
    �������� ������ ���� ��� ����������
*/


#include <iostream>
#include <string>

class Book {
private:
    std::string author;     ///<�����
    std::string title;      ///<��������  
    std::string publisher;  ///<������������
    int year;               ///<��� �������
    int pageCount;          ///<���������� �������

public:
    /// ����������� ��� ������ Book
    /**
        ��������� ��������� ��� ������, ��������, ��������, ���� � ���������� ������� � �������������� ��������������� �������� ������� Book.
        \param author ��� ������
        \param title �������� �����
        \param publisher ������������ �����
        \param year ��� ������� �����
        \param pageCount ���������� ������� �����
    */
    Book(std::string author, std::string title, std::string publisher, int year, int pageCount)
        : author(author), title(title), publisher(publisher), year(year), pageCount(pageCount) {}

    /**
        ������ ������� ��������� ��� ������ � ������� �������� ����� ����� ������
        \brief ����� ��������� ������;
        \param authorName ��� ������ 
        \return title �������� ����� ������� ������
        \throw IsEmpty � ����� ������ ��� ����
    */
    void showBooksByAuthor(std::string authorName) {
        if (author == authorName) {
            std::cout << title << std::endl;
        }
    }

    /**
        ������ ������� ������� ������ ����, ���������� �������� �������������
        \brief ������ ���� ��������� ������������;
        \param publisherName �������� ������������ 
        \return title �������� ����� ������� �������������
        \throw IsEmpty � ����� ������������ ��� ����
    */

    void showBooksByPublisher(std::string publisherName) {
        if (publisher == publisherName) {
            std::cout << title << std::endl;
        }
    }

    /**
        ������ ������� ������� ������ ����, ���������� ����� ��������� ����
        \brief ����� ���������� ����� ��������� ����;
        \param targetYear ��� �������
        \return title �������� ����� ���������� ����� ����� ����
        \throw IsEmpty ���� ���������� ����� ����� ���� ���
    */

    void showBooksAfterYear(int targetYear) {
        if (year > targetYear) {
            std::cout << title << std::endl;
        }
    }
};

int main() {

}

