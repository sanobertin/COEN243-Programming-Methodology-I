
#include <iostream>
#include <vector>
using namespace std;

class RobotController {
private:
    int size;
    vector<int> array;
    int position;
    vector<pair<string, int>> history;

public:
    RobotController(int size) {
        this->size = size;
        array = vector<int>(size, 0);
        position = 0;
    }

    void right(int n) {
        int new_position = position + n;
        if (new_position < size) {
            position = new_position;
            history.push_back(make_pair("right", n));
        } else {
            cout << "Error: Out of bounds" << endl;
        }
    }

    void left(int n) {
        int new_position = position - n;
        if (new_position >= 0) {
            position = new_position;
            history.push_back(make_pair("left", n));
        } else {
            cout << "Error: Out of bounds" << endl;
        }
    }

    void reboot() {
        position = 0;
        history.push_back(make_pair("reboot", 0));
    }

    void display() {
        cout << "Robot is at position: " << position << endl;
    }

    void showGrid() {
        for (int i = 0; i < size; ++i) {
            if (i == position) {
                cout << "^ ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    void cancel(int n) {
        if (n <= history.size()) {
            for (int i = 0; i < n; ++i) {
                pair<string, int> lastCommand = history.back();
                history.pop_back();
                if (lastCommand.first == "right") {
                    left(lastCommand.second);
                } else if (lastCommand.first == "left") {
                    right(lastCommand.second);
                } else if (lastCommand.first == "reboot") {
                    reboot();
                }
            }
        } else {
            cout << "Error: Not enough commands to cancel." << endl;
        }
    }

    void replay(int n) {
        if (n <= history.size()) {
            for (int i = history.size() - n; i < history.size(); ++i) {
                pair<string, int> lastCommand = history[i];
                if (lastCommand.first == "right") {
                    right(lastCommand.second);
                } else if (lastCommand.first == "left") {
                    left(lastCommand.second);
                } else if (lastCommand.first == "reboot") {
                    reboot();
                }
            }
        } else {
            cout << "Error: Not enough commands to replay." << endl;
        }
    }
};

int main() {
    int size = 10;
    RobotController controller(size);

    while (true) {
        cout << "\nController Menu:" << endl;
        cout << "1. Right" << endl;
        cout << "2. Left" << endl;
        cout << "3. Display" << endl;
        cout << "4. Reboot" << endl;
        cout << "5. Show Grid" << endl;
        cout << "6. Cancel" << endl;
        cout << "7. Replay" << endl;
        cout << "8. Exit" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        int n;
        switch (choice) {
            case 1:
                cout << "Enter the number of cells to move right: ";
                cin >> n;
                controller.right(n);
                break;
            case 2:
                cout << "Enter the number of cells to move left: ";
                cin >> n;
                controller.left(n);
                break;
            case 3:
                controller.display();
                break;
            case 4:
                controller.reboot();
                break;
            case 5:
                controller.showGrid();
                break;
            case 6:
                cout << "Enter the number of operations to cancel: ";
                cin >> n;
                controller.cancel(n);
                break;
            case 7:
                cout << "Enter the number of operations to replay: ";
                cin >> n;
                controller.replay(n);
                break;
            case 8:
                return 0;
            default:
                cout << "Invalid choice. Try again." << endl;
                break;
        }
    }

    return 0;
}

