#include <iostream>
#include<fstream>

std::ifstream fin("input.txt");
std::ofstream fout("output.txt");

struct DormitoryStudent {
    std::string name;
    std::string surname;
    int group;
    double mark;
    int income;
};

void Line() {
    for (int i = 0; i < 50; i++) {
        std::cout << "-";
    }
    std::cout << std::endl;
}

DormitoryStudent* AddStudent(DormitoryStudent* students, int &n) {
    if (n == 0) {
        students = new DormitoryStudent[n + 1];
    }
    else {
        DormitoryStudent* temp = new DormitoryStudent[n + 1];

        for (int i = 0; i < n; i++) {
            temp[i] = students[i];
        }

        delete [] students;

        students = temp;
    }

    return students;
}

DormitoryStudent* DeleteStudent(DormitoryStudent* students, int &n, int student_delete) {
    DormitoryStudent* temp = new DormitoryStudent[n - 1];

    int i = 0, j = 0;
    while (j < n) {
        if (j == student_delete) {
            j++;
            continue;
        }
        temp[i] = students[j];
        j++;
        i++;
    }

    delete[] students;

    students = temp;

    return students;
}

void EnterData(DormitoryStudent* students, int &i) {
    std::cout << "Enter the characteristics of the students in these form:\n";
    std::cout << "Name Surname Group (1-100) Mark (0-10) Parents' income:\n";
    fin >> students[i].name;
    fin >> students[i].surname;
    while (true) {
        fin >> students[i].group;
        if (fin.fail() || students[i].group < 1 || students[i].group > 100) {
            fin.clear();
            fin.ignore(32767, '\n');
            std::cout << "Try again\n";
        } else {
            break;
        }
    }
    while (true) {
        fin >> students[i].mark;
        if (fin.fail() || students[i].mark < 0 || students[i].mark > 10) {
            fin.clear();
            fin.ignore(32767, '\n');
            std::cout << "Try again\n";
        } else {
            break;
        }
    }
    while (true) {
        fin >> students[i].income;
        if (fin.fail() || students[i].income < 0) {
            fin.clear();
            fin.ignore(32767, '\n');
            std::cout << "Try again\n";
        } else {
            break;
        }
    }
}

void Print(DormitoryStudent* students, int &n) {
    for (int i = 0; i < n; i++) {
        std::cout << "#" << i + 1 << "\n";
        std::cout << students[i].name << "\n";
        std::cout << students[i].surname << "\n";
        std::cout << students[i].group << "\n";
        std::cout << students[i].mark << "\n";
        std::cout << students[i].income << "\n";

        Line();
    }
}

void ChangeStudent(DormitoryStudent* students, int &n) {
    bool check2 = true;
    std::cout << "Enter the name and surname of student, which availability is sign to change data about him/her:\n";
    std::string name_check, surname_check;
    fin >> name_check >> surname_check;

    for (int i = 0; i < n; i++) {
        if (name_check == students[i].name && surname_check == students[i].surname) {
            check2 = false;
            std::cout << "This is the suitable student:\n";
            std::cout << students[i].name << "\n";
            std::cout << students[i].surname << "\n";
            std::cout << students[i].group << "\n";
            std::cout << students[i].mark << "\n";
            std::cout << students[i].income << "\n";

            Line();

            int choice;
            std::cout << "Choose the characteristics you want to change:\n";
            std::cout << "1 - the name\n";
            std::cout << "2 - the surname\n";
            std::cout << "3 - the group\n";
            std::cout << "4 - the mark\n";
            std::cout << "5 - the parents' income\n";

            while (true) {
                fin >> choice;
                if (fin.fail() || choice < 1 || choice > 5) {
                    fin.clear();
                    fin.ignore(32767, '\n');
                    std::cout << "Try again\n";
                } else {
                    break;
                }
            }

            switch (choice) {
                case 1: {
                    std::cout << "Change the name of the student:\n";
                    fin >> students[i].name;
                    break;
                }
                case 2: {
                    std::cout << "Change the surname of the student:\n";
                    fin >> students[i].surname;
                    break;
                }
                case 3: {
                    std::cout << "Change the group of the student:\n";
                    fin >> students[i].group;
                    break;
                }
                case 4: {
                    std::cout << "Change the mark of the student:\n";
                    fin >> students[i].mark;
                    break;
                }
                case 5: {
                    std::cout << "Change the income of the students' parents:\n";
                    fin >> students[i].income;
                    break;
                }
                default: {
                    std::cout << "Try again\n";
                }
            }

            Line();

            std::cout << "This is the changed information about student:\n";
            std::cout << students[i].name << "\n";
            std::cout << students[i].surname << "\n";
            std::cout << students[i].group << "\n";
            std::cout << students[i].mark << "\n";
            std::cout << students[i].income << "\n";

            Line();
        }
    }
    if (check2) {
        std::cout << "There are no suitable students to change\n";
    }
}

void SortStudents(DormitoryStudent* array, int &n, int &min_income) {
    std::string temp1, temp2;
    int j, temp3, temp5;
    double temp4;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (array[i].income < min_income) {
            count++;
        }
    }

    int k = 0;

    for (int i = 0; i < n; i++) {
        if (array[i].income < min_income) {
            temp1 = array[i].name;
            array[i].name = array[k].name;
            array[k].name = temp1;
            temp2 = array[i].surname;
            array[i].surname = array[k].surname;
            array[k].surname = temp2;
            temp3 = array[i].group;
            array[i].group = array[k].group;
            array[k].group = temp3;
            temp4 = array[i].mark;
            array[i].mark = array[k].mark;
            array[k].mark = temp4;
            temp5 = array[i].income;
            array[i].income = array[k].income;
            array[k].income = temp5;
            k++;
        }
    }

    for (int i = count + 1; i < n; i++) {
        temp1 = array[i].name;
        temp2 = array[i].surname;
        temp3 = array[i].group;
        temp4 = array[i].mark;
        temp5 = array[i].income;
        j = i - 1;
        while(j >= count && array[j].mark < temp4) {
            array[j + 1].name = array[j].name;
            array[j].name = temp1;
            array[j + 1].surname = array[j].surname;
            array[j].surname = temp2;
            array[j + 1].group = array[j].group;
            array[j].group = temp3;
            array[j + 1].mark = array[j].mark;
            array[j].mark = temp4;
            array[j + 1].income = array[j].income;
            array[j].income = temp5;
            j--;
        }
    }
}

int main() {
    DormitoryStudent* students = nullptr;
    int n = 0;
    int size;
    int min_income = 200;

    while (true) {
        std::cout << "Enter the number of students:\n";
        fin >> size;
        if (fin.fail() || size < 1) {
            fin.clear();
            fin.ignore(32767, '\n');
            std::cout << "Try again\n";
        }
        else {
            break;
        }
    }

    n = size;
    size = 0;
    while (size < n) {
        students = AddStudent(students, size);
        EnterData(students, size);
        size++;
    }

    bool b = true;

    while (b) {
        int variant;

        while (true) {
            std::cout << "Choose one of the options to do with our data:\n";
            std::cout << "1 - print the data about students\n";
            std::cout << "2 - change the data about existing student\n";
            std::cout << "3 - sort the students according to their income and marks\n";
            std::cout << "4 - add an extra student\n";
            std::cout << "5 - delete a student with entered name and surname\n";
            std::cout << "6 - exit\n";
            fin >> variant;
            if (fin.fail() || variant < 1 || variant > 6) {
                fin.clear();
                fin.ignore(32767, '\n');
                std::cout << "Try again\n";
            }
            else {
                break;
            }
        }

        switch (variant) {
            case 1: {
                Print(students, n);
                break;
            }
            case 2: {
                ChangeStudent(students, n);
                break;
            }
            case 3: {
                SortStudents(students, n, min_income);
                Print(students, n);
                break;
            }
            case 4: {
                students = AddStudent(students, n);
                EnterData(students, n);
                n++;
                break;
            }
            case 5: {
                int count = 0;
                std::string check_name, check_surname;
                std::cout << "Enter name and surname to delete student:\n";
                fin >> check_name >> check_surname;

                for (int i = 0; i < n; i++) {
                    if (check_name == students[i].name && check_surname == students[i].surname) {
                        count++;
                        students = DeleteStudent(students, n, i);
                        n--;
                    }
                }

                if (!count) {
                    std::cout << "There are no suitable students to delete\n";
                }
                break;
            }
            case 6: {
                b = false;
                break;
            }
            default: {
                std::cout << "Try again\n";
                break;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        fout << "#" << i + 1 << "\n" << students[i].name << "\n";
        fout << students[i].surname << "\n";
        fout << students[i].group << "\n";
        fout << students[i].mark << "\n";
        fout << students[i].income << "\n";
    }

    fin.close();
    fout.close();

    return 0;
}
