#include "Department.h"
#include "Employee.h"
#include "Exceptions.h"
#include <iostream>
/*
�������:
  ���������
    edit - ��������������
    get_name/id/salary/vacation - �������� ���/id/�����/�������� ���
    set_name/id/salary - ���������� ���/id/�����
    add_vacation - �������� ��������
    leave_of_absence - ��������� � ������
  �����
    add - �������� ����������
    remove - ������ ���������
    has - �������� ������� ���������� � ������
    set_name/id/head/adjacent - ���������� ���/id/����� ������/�������� �����
    get_name/id/head/adjacent - �������� ���/id/����� ������/�������� �����
    add_vacation - �������� �������� ����� ������
    leave_of_absence - ��������� � ������ ���� �����
    get_count - ���-�� ����������� � ������
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
    std::cout <<"\n Count:"<< a.get_�ount() << std::endl;
    system("pause");
}
