#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
} *head = NULL;
void insertAtBegining(int value)
{
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    if (head == NULL)
    {
        newNode->next = NULL;
        head = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
    cout << "\nOne node is inserted" << endl;
}
void insertAtEnd(int value)

{
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        struct Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    cout << "\nOne node is inserted";
    cout << endl;
}
void deleteAtBegining()
{
    struct Node *temp = head;
    head = head->next;
    free(temp);
    cout << "\nOne node is deleted from begining";
    cout << endl;
}
void deleteAtEnd()

{
    struct Node *end = head;
    struct Node *prev = NULL;
    while (end->next)
    {
        prev = end;
        end = end->next;
    }
    prev->next = NULL;
    free(end);
    cout << "\nOne node is deleted from End";
    cout << endl;
}

void display()
{
    if (head == NULL)
    {
        cout << "\nLinked List is Empty!!";
    }
    else
    {
        struct Node *temp = head;
        cout << "\nLinked List Elements are: ";
        cout << "Head-->";
        while (temp->next != NULL)
        {
            cout << temp->data << "-->";
            temp = temp->next;
        }

        cout << temp->data << "-->NULL\n";
    }
    cout << endl;
}

int main()
{
    int choice, value, choice2;
    while (1)
    {
    mainMenu:
        cout << "Press 1 for Insert Value" << endl;
        cout << "Press 2 for Delete Values" << endl;
        cout << "Press 3 for Display Values" << endl;
        cout << "Press 4 to EXIT" << endl;
        cout << "Enter Your Choce: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the value to be INSERT: ";
            cin >> value;
            while (1)
            {
                cout << "\nWhere you want to Insert: \n1. At the Begining\n2. At the End";
                cout << "\nEnter your choice: ";
                cin >> choice2;
                switch (choice2)
                {
                case 1:
                    insertAtBegining(value);
                    break;

                case 2:
                    insertAtEnd(value);
                    break;

                default:
                    cout << "\nWrong choice!! Try Again";
                    goto mainMenu;
                }
                goto subMenuEnd;
            }
        subMenuEnd:
            break;

        case 2:
            while (1)
            {
                cout << "Where You Want to Insert" << endl;
                cout << "1. At the Begining" << endl;
                cout << "2. At the End" << endl;
                cout << "Enter your choice: ";
                cin >> choice2;
                switch (choice2)
                {
                case 1:
                    deleteAtBegining();
                    break;

                case 2:
                    deleteAtEnd();
                    break;

                default:
                    cout << "Wrong choice!! Try Again";
                    goto mainMenu;
                }
                goto subMenuEndd;
            }
        subMenuEndd:
            break;

        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;

        default:
            cout << "\nWrong Choice!! Try Again!!\n\n";
        }
    }
}