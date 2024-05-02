
#include <iostream>
#include <string>

using namespace std;

const int MAX_TASKS = 10; // Maximum number of tasks


struct Task {
 string description;
 bool completed;
};

// ADD to-do list
void addTask(Task tasks[], int &numTasks, const string &description)
{
	if (numTasks >= MAX_TASKS)
	 {
 	cout << "Cannot add more tasks. To-Do list is full.\n";
	return;
	}
	tasks[numTasks].description = description;
 	tasks[numTasks].completed = false;
 	numTasks++;
 	cout << "Task added successfully!\n";
}

// VIEW  to-do list
void viewTasks(const Task tasks[], int numTasks) 
{
	cout << "To-Do List:\n";
	for (int i = 0; i < numTasks; ++i)
	 {
		cout << i+1 << ". ";
		if (tasks[i].completed)
		cout << "[X] ";
		else
		cout << "[ ] ";
		cout << tasks[i].description << endl;
	}
}

// DELETE to-do list
void deleteTask(Task tasks[], int &numTasks, int index) 
{
	if (index < 0 || index >= numTasks) 
	{
		cout << "Invalid task number!\n";
		return;
	}
	for (int i = index; i < numTasks - 1; ++i) 
	{
		tasks[i] = tasks[i + 1];
	}
	numTasks--;
	cout << "Task deleted successfully!\n";
}

int main() {
Task tasks[MAX_TASKS]; // Array to store tasks
int numTasks = 0; // Number of tasks

int choice;
string description;
int index;
do{
	cout << "\tMenu:\n";
	cout<<"___________________________\n";
	cout << " | 1. | Add Task     |\n";
	cout << " | 2. | View Tasks   |\n";
	cout << " | 3. | Delete Task  |\n";
	cout << " | 4. | Exit         |\n";
	cout<<"___________________________\n";
	cout << "Enter your choice: ";
	cin >> choice;

switch(choice) {
	case 1:
		
		cin.ignore(); // Ignore newline character in buffer
		cout << "Enter task description: ";
		getline(cin, description);
		addTask(tasks, numTasks, description);
		break;
		
	case 2:
		
		viewTasks(tasks, numTasks);
		break;
	
	case 3:
		
		cout << "Enter task number to delete: ";
		cin >> index;
		deleteTask(tasks, numTasks, index - 1); // Adjust index to 0-based
		break;
		
	case 4:
		
		cout << "Exiting program...\n";
		break;
		
	default:
		cout << "Invalid choice! Please try again.\n";
	}
} while(choice != 4);
return 0;
}