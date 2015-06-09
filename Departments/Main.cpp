#include "Department.h"
#include "Employee.h"
#include "Exceptions.h"
#include <iostream>
/*
Функции:
  Сотрудник
    edit - Редактирование
    get_name/id/salary/vacation - Получить имя/id/Оклад/Выходные дни
    set_name/id/salary - Установить имя/id/Оклад
    add_vacation - Добавить выходные
    leave_of_absence - Отправить в отпуск
  Отдел
    add - Добавить сотрудника
    remove - Убрать сотрудник
    has - Проверка наличия сотрудника в отделе
    set_name/id/head/adjacent - Установить имя/id/Главу отдела/Соседний отдел
    get_name/id/head/adjacent - Получить имя/id/Главу отдела/Соседний отдел
    add_vacation - Добавить выходные всему отделу
    leave_of_absence - Отправить в отпуск весь отдел
    get_count - Кол-во сотрудников в отделе
*/

void main() {
    Department a, b, c;
    a.generate();
    a.print();

    b.generate();
    b.print();

    c.generate();
    c = c + a;
    c.print();

    Employee emp("Sergey", 15000, 30);

    a.add(emp);

    try {
        a.add(emp);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        b.remove(1);
        a.remove(30);
        c.remove(2);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        a.add("Igor", 25000, 30);
        if (!(a == b)) {
            a.add(*b[3]);
        }
        a.print();
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout <<"\n Count:"<< a.get_сount() << std::endl;
    system("pause");
}
