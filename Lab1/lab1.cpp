#include <iostream>
#include <string>
using namespace std;
class Train {
private:
    string destination;
    int trainNumber;
    string departureTime;
    int totalSeats;
public:
    void set(string dest, int number, string time, int total) {
        destination = dest;
        trainNumber = number;
        departureTime = time;
        totalSeats = total;
    }
    string getDestination() {
        return destination;
    }
    int getTrainNumber() {
        return trainNumber;
    }
    string getDepartureTime() {
        return departureTime;
    }
    void show() {
        cout << "Имя файла: " << destination << endl;
        cout << "Размер: " << trainNumber << endl;
        cout << "Дата создания: " << departureTime << endl;
        cout << "Количество обращений: " << totalSeats << endl;
        cout << endl;
    }
};
int main() {
    const int numTrains = 3;
    Train trains[numTrains];
    trains[0].set("Логотип.exe", 152, "12.06.2022", 8093);
    trains[1].set("Лабораторная2", 527, "05.01.1935", 102932);
    trains[2].set("Лабораторная", 88, "22.12.2023", 1);
    string inputDestination;
    cout << "Введите имя файла: ";
    cin >> inputDestination;
    cout << "Ваш файл: " << inputDestination << ":" << endl;
    for (int i = 0; i < numTrains; ++i) {
        if (trains[i].getDestination() == inputDestination) {
            trains[i].show();
        }
    }
    return 0;
