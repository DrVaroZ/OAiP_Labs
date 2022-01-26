#include <iostream>

struct TrainSeats {
    std::string destination;
    std::string time_start;
    std::string time_finish;
    std::string seat_type;
    int seat_num;
};

void Line() {
    for (int i = 0; i < 50; i++) {
        std::cout << "-";
    }
    std::cout << std::endl;
}

TrainSeats* AddTrain(TrainSeats* free_seats, int &n) {
    if (n == 0) {
        free_seats = new TrainSeats[n + 1];
    } else {
        TrainSeats* temp = new TrainSeats[n + 1];

        for (int i = 0; i < n; i++) {
            temp[i] = free_seats[i];
        }

        delete [] free_seats;

        free_seats = temp;
    }

    return free_seats;
}

TrainSeats* DeleteTrain(TrainSeats* free_seats, int &n, int train_delete) {
    TrainSeats* temp = new TrainSeats[n - 1];

    int i = 0, j = 0;
    while (j < n) {
        if (j == train_delete) {
            j++;
            continue;
        }
        temp[i] = free_seats[j];
        j++;
        i++;
    }

    delete[] free_seats;

    free_seats = temp;

    return free_seats;
}

void EnterData(TrainSeats* free_seats, int &i) {
    std::cout << "Enter the characteristics of the free seats in these form:\n";
    std::cout << "Destination time-start time-arrive seat-type(A or B or C) number of seats:\n";
    std::cin >> free_seats[i].destination;
    std::cin >> free_seats[i].time_start;
    std::cin >> free_seats[i].time_finish;
    while (true) {
        std::cin >> free_seats[i].seat_type;
        if (std::cin.fail() || (free_seats[i].seat_type != "A" && free_seats[i].seat_type != "B" && free_seats[i].seat_type != "C")) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Try again\n";
        } else {
            break;
        }
    }
    while (true) {
        std::cin >> free_seats[i].seat_num;
        if (std::cin.fail() || free_seats[i].seat_num < 0) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Try again\n";
        } else {
            break;
        }
    }
}

void DefaultData(TrainSeats* free_seats, int &i) {
    free_seats[i].destination = "Minsk";
    free_seats[i].time_start = "9-00";
    free_seats[i].time_finish = "12-00";
    free_seats[i].seat_type = "A";
    free_seats[i].seat_num = 1;
}

void Print(TrainSeats* free_seats, int &n) {
    for (int i = 0; i < n; i++) {
        std::cout << free_seats[i].destination << "\n";
        std::cout << free_seats[i].time_start << "\n";
        std::cout << free_seats[i].time_finish << "\n";
        std::cout << free_seats[i].seat_type << "\n";
        std::cout << free_seats[i].seat_num << "\n";
        Line();
    }
}

void Search(TrainSeats* free_seats, int &n) {
    bool check1 = true;
    std::cout << "Enter the destination, which availability is sign to choose the train:\n";
    std::string arrival_check;
    std::cin >> arrival_check;
    for (int i = 0; i < n; i++) {
        if (arrival_check == free_seats[i].destination) {
            check1 = false;
            std::cout << "This is the suitable train:\n";
            std::cout << free_seats[i].destination << "\n";
            std::cout << free_seats[i].time_start << "\n";
            std::cout << free_seats[i].time_finish << "\n";
            std::cout << free_seats[i].seat_type << "\n";
            std::cout << free_seats[i].seat_num << " --- " << "The number of free seats in suitable train" << "\n";
            Line();
        }
    }
    if (check1) {
        std::cout << "There are no suitable trains to choose\n";
    }
}

void ChangeTime(TrainSeats* free_seats, int &n) {
    bool check2 = true;
    std::cout << "Enter the time-start, which availability in train is sign to delete and change it:\n";
    std::string time_start_check;
    std::cin >> time_start_check;
    for (int i = 0; i < n; i++) {
        if (time_start_check == free_seats[i].time_start) {
            check2 = false;
            std::cout << "This is the suitable train:\n";
            std::cout << free_seats[i].destination << "\n";
            std::cout << free_seats[i].time_start << "\n";
            std::cout << free_seats[i].time_finish << "\n";
            std::cout << free_seats[i].seat_type << "\n";
            std::cout << free_seats[i].seat_num << "\n";
            Line();
            std::cout << "Change the time-start:\n";
            std::cin >> free_seats[i].time_start;
            Line();
            std::cout << "This is the changed train:\n";
            std::cout << free_seats[i].destination << "\n";
            std::cout << free_seats[i].time_start << "\n";
            std::cout << free_seats[i].time_finish << "\n";
            std::cout << free_seats[i].seat_type << "\n";
            std::cout << free_seats[i].seat_num << "\n";
            Line();
        }
    }
    if (check2) {
        std::cout << "There are no suitable trains to change start-time\n";
    }
}

void InsertionSort(TrainSeats* array, int &n) {
    std::string temp1, temp2, temp3, temp4;
    int j, temp5;

    for (int i = 1; i < n; i++) {
        temp1 = array[i].destination;
        temp2 = array[i].time_start;
        temp3 = array[i].time_finish;
        temp4 = array[i].seat_type;
        temp5 = array[i].seat_num;
        j = i - 1;
        while(j >= 0 && array[j].destination > temp1) {
            array[j + 1].destination = array[j].destination;
            array[j].destination = temp1;
            array[j + 1].time_start = array[j].time_start;
            array[j].time_start = temp2;
            array[j + 1].time_finish = array[j].time_finish;
            array[j].time_finish = temp3;
            array[j + 1].seat_type = array[j].seat_type;
            array[j].seat_type = temp4;
            array[j + 1].seat_num = array[j].seat_num;
            array[j].seat_num = temp5;
            j--;
        }
    }
}

int main() {
    TrainSeats* free_seats = nullptr;
    int n = 0;
    int choice;

    while (true) {
        std::cout << "Choose the option you'd like to use to fill an array:\n";
        std::cout << "1 - enter the number of trains\n";
        std::cout << "2 - enter yes/no every time you'd like to fill an array\n";
        std::cout << "3 - enter the number of free seats = 13 to finish filling an array\n";
        std::cin >> choice;
        if (std::cin.fail() || choice < 1 || choice > 3) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Try again\n";
        }
        else {
            break;
        }
    }

    switch (choice) {
        case 1: {
            int size;
            std::cout << "Enter the number of trains:\n";
            std::cin >> size;

            n = size;
            size = 0;
            while (size < n) {
                free_seats = AddTrain(free_seats, size);
                EnterData(free_seats, size);
                size++;
            }

            break;
        }
        case 2: {
            int size = 0;
            int yes_no = 0;

            do
            {
                free_seats = AddTrain(free_seats, size);
                EnterData(free_seats, size);

                size++;

                std::cout << "Continue entering data - (1 - yes, 0 - no): ";
                std::cin >> yes_no;
                std::cin.get();
            } while (yes_no != 0);

            n = size;

            break;
        }
        case 3: {
            int size = 0;

            do
            {
                free_seats = AddTrain(free_seats, size);
                EnterData(free_seats, size);

                if (free_seats[size].seat_num == 13) {
                    free_seats[size].seat_num = 0;
                    break;
                } else {
                    size++;
                }

            } while (true);

            n = size;

            break;
        }
        default: {
            std::cout << "Try again\n";
            break;
        }
    }

    bool b = true;

    while (b) {
        int variant;

        while (true) {
            std::cout << "Choose one of the options to do with our data:\n";
            std::cout << "1 - print the data\n";
            std::cout << "2 - find a train according to a destination\n";
            std::cout << "3 - change the time-start of an existing train\n";
            std::cout << "4 - sort the trains in alphabet order\n";
            std::cout << "5 - add an extra train\n";
            std::cout << "6 - delete a train with entered destination\n";
            std::cout << "7 - add a default train (Minsk 9-00 12-00 A 1)\n";
            std::cout << "8 - exit\n";
            std::cin >> variant;
            if (std::cin.fail() || variant < 1 || variant > 8) {
                std::cin.clear();
                std::cin.ignore(32767, '\n');
                std::cout << "Try again\n";
            }
            else {
                break;
            }
        }

        switch (variant) {
            case 1: {
                Print(free_seats, n);
                break;
            }
            case 2: {
                Search(free_seats, n);
                break;
            }
            case 3: {
                ChangeTime(free_seats, n);
                break;
            }
            case 4: {
                InsertionSort(free_seats, n);
                Print(free_seats, n);
                break;
            }
            case 5: {
                free_seats = AddTrain(free_seats, n);
                EnterData(free_seats, n);
                n++;
                break;
            }
            case 6: {
                int count = 0;
                std::string check_dest;
                std::cout << "Enter a destination to delete train:\n";
                std::cin >> check_dest;

                for (int i = 0; i < n; i++) {
                    if (check_dest == free_seats[i].destination) {
                        count++;
                        free_seats = DeleteTrain(free_seats, n, i);
                        n--;
                    }
                }

                if (!count) {
                    std::cout << "There are no suitable trains to delete\n";
                }
                break;
            }
            case 7: {
                free_seats = AddTrain(free_seats, n);
                DefaultData(free_seats, n);
                n++;
                break;
            }
            case 8: {
                b = false;
                break;
            }
            default: {
                std::cout << "Try again\n";
                break;
            }
        }
    }

    return 0;
}
