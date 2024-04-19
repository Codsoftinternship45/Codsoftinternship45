#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void print_tasks(string task[], int task_count) {
    cout << "Tasks to do" << endl;
    cout << "--------------------" << endl;
    for (int i = 0; i < task_count; i++) {
        cout << "Task " << i << " : " << task[i] << endl;
    }
    cout << "--------------------" << endl;
}

int main() {
    string tasks[10] = {""};
    int task_count = 0;
    int option = -1;

    while (option != 0) {
        cout << "-----TO-DO LIST------" << endl;
        cout << "1- To add a new task" << endl;
        cout << "2- To view the tasks" << endl;
        cout << "3- To remove a task" << endl;
        cout << "4- Task completed" << endl;
        cout << "0- Terminate the program" << endl;
        cin >> option;

        switch (option) {
            case 1: {
                if (task_count >= 10) {
                    cout << "Task list is full" << endl;
                } else {
                    cout << "Enter a new task: ";
                    cin.ignore();
                    getline(cin, tasks[task_count]);
                    task_count++;
                }
                break;
            }
            case 2: {
                print_tasks(tasks, task_count);
                break;
            }
            case 3: {
                int rem_task;
                cout << "Enter the task number to remove: ";
                cin >> rem_task;

                if (rem_task < 0 || rem_task >= task_count) {
                    cout << "Invalid task number" << endl;
                } else {
                    for (int i = rem_task; i < task_count - 1; i++) {
                        tasks[i] = tasks[i + 1];
                    }
                    task_count--;
                    cout << "Task removed successfully" << endl;
                }
                break;
            }
            case 4: {
                int com_task;
                cout << "Enter the task number to mark as completed: ";
                cin >> com_task;

                if (com_task < 0 || com_task >= task_count) {
                    cout << "Invalid task number" << endl;
                } else {
                    cout << "Task '" << tasks[com_task] << "' completed" << endl;
                    for (int i = com_task; i < task_count - 1; i++) {
                        tasks[i] = tasks[i + 1];
                    }
                    task_count--;
                }
                break;
            }
            case 0: {
                cout << "Terminating the program" << endl;
                break;
            }
            default: {
                cout << "Invalid option" << endl;
                break;
            }
        }
    }

    return 0;
}
