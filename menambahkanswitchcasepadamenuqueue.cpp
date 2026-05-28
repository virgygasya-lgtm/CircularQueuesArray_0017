#include <iostream>
using namespace std; 

class Queues
{

    private:
    static const int max = 3;
    int FRONT, REAR; 
    int queue_array[max];

    public:
    Queues()
{
    FRONT = -1;
    REAR = -1;
}
void insert()
{
    int num;
cout << "Enter a number: ";
cin >> num;
if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR + 1))
{
    cout << "\nQueue overflow\n";
    return;
}
if (FRONT == -1)
{
    FRONT = 0;
    REAR = 0;
}
else
{
    if (REAR == max - 1)
        REAR = 0;
    else
        REAR = REAR + 1;
}
queue_array[REAR] = num;
}
void remove()
{
    if (FRONT == -1)
{
    cout << "Queue underflow\n";
    return;
}
cout << "\nThe element deleted from the queue is: " 
     << queue_array[FRONT] << "\n";
     if (FRONT == REAR)
{
    FRONT = -1;
    REAR = -1;
}
else
{
    if (FRONT == max - 1)
        FRONT = 0;
    else
        FRONT = FRONT + 1;
}
}
void display()
{
    if (FRONT == -1)
    {
        cout << "Queue is empty\n";
        return;
    }
    cout << "Elements in the queue are: ";
    if (FRONT <= REAR)
    {
        for (int i = FRONT; i <= REAR; i++)
        {
            cout << queue_array[i] << " ";
        }
    }
    else
    {
        for (int i = FRONT; i < max; i++)
        {
            cout << queue_array[i] << " ";
        }
        for (int i = 0; i <= REAR; i++)
        {
            cout << queue_array[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    Queues q;
    char ch;

    while (true)
    {
        cout << "Menu" << endl;
        cout << "1. Implement insert operation" << endl;
        cout << "2. Implement Delete Operation" << endl;
        cout << "3. Display values " << endl;
        cout << "4. Exit " << endl;
        cout << "Enter your choice: ";
        cin >> ch;
    }
}
 switch (ch)
            {
            case '1':
                {
                    q.insert();
                    break;
                }
            case '2':
                {
                    q.remove();
                    break;
                }
            case '3':
                {
                    q.display();
                    break;
                }
            case '4':
                {
                    return 0;
                }
            default:
                {
                    cout << "Invalid option!!!" << endl;
                    break;
                }
            }
        }
        catch (exception &e)
        {
            cout << "check for the values entered." << endl;
        }
    }
    return 0;
