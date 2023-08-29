//My CodSoft Task 3
//29th Aug

#include<bits/stdc++.h>
class ToDoListManager {
public:
    void addTask(const std::string &task) {
        tasks.push_back(task);
        std::cout << "Task added!" << std::endl;
    }

    void viewTasks() {
        if (tasks.empty()) {
            std::cout << "No tasks in the list." << std::endl;
        } else {
            std::cout << "Tasks:" << std::endl;
            for (size_t i = 0; i < tasks.size(); ++i) {
                std::cout << i + 1 << ". " << tasks[i] << std::endl;
            }
        }
    }

    void deleteTask(int index) {
        if (index >= 1 && index <= static_cast<int>(tasks.size())) {
            std::cout << "Task '" << tasks[index - 1] << "' deleted." << std::endl;
            tasks.erase(tasks.begin() + index - 1);
        } else {
            std::cout << "Invalid task index." << std::endl;
        }
    }

private:
    std::vector<std::string> tasks;
};

int main() {
    ToDoListManager todoManager;

    while (true) {
        std::cout << "\nTo-Do List Manager" << std::endl;
        std::cout << "1. Add Task" << std::endl;
        std::cout << "2. View Tasks" << std::endl;
        std::cout << "3. Delete Task" << std::endl;
        std::cout << "4. Exit" << std::endl;

        int choice;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            std::string task;
            std::cout << "Enter the task: ";
            std::cin.ignore();
            std::getline(std::cin, task);
            todoManager.addTask(task);
        } else if (choice == 2) {
            todoManager.viewTasks();
        } else if (choice == 3) {
            int index;
            std::cout << "Enter the task index to delete: ";
            std::cin >> index;
            todoManager.deleteTask(index);
        } else if (choice == 4) {
            std::cout << "Exiting..." << std::endl;
            break;
        } else {
            std::cout << "Invalid choice. Please choose again." << std::endl;
        }
    }

    return 0;
}
