#include <iostream>
using namespace std;

class node{

    public:
            int value;
            node*link;

     node(int value)
    {
        this->value = value;
        this->link = nullptr;
    }

    
};

class linkedlist{

        private:
                node*firstnode;
                int count;

        public:
             linkedlist()
                {
                    firstnode =nullptr;
                    count = 0;
                }

        void newinsertdata(int data)
        {
            node *newnode = new node(data);
            newnode->link = firstnode;
            firstnode = newnode;
            cout << endl << "new data inssert successfully .... Done" << endl ; 
            count++;
        }

        void dataSearch(int index)
        {
            if(index < 0 || index >= count)
            {
                cout << endl  << "your index is invalid/wrong ...sorry!"<< endl; // validation...
                return;
            }

             node *temp = firstnode;
            for (int i = 0; i < index; i++)
            {
                temp = temp->link;
            }

            cout << "node is index " << index << " has value: " << temp->value << endl ;
           
        }

        void removeATposition(int index)
        {
            if(firstnode == nullptr || count == 0)
            {
                cout << " List is empty...!!" <<endl ;
                return;
            }

            if(index < 0 || index >= count)
            {
                cout << endl  << "your index is position ...sorry!" << endl; // validation...
                return;
            }

            if(index == 0)
            {
                node *delnode = firstnode;
                firstnode = firstnode->link;
                delete delnode;
                count--;
                cout << endl << "First node delete successfully...!" << endl;
                return;
            }
            
            node *prev = firstnode;
            for (int i = 0; i < index - 1; i++)
            {
                prev = prev->link;
            }

            node *delnode = prev->link; 
            prev->link = delnode->link;

            delete delnode;
            cout << "node is remove/delete..... successfully." << endl ;
            count--;
        }

             void listOFreverse()
                {
                    node *prev = nullptr;
                    node *curr = firstnode;
                    node *next = nullptr;

                    while (curr != nullptr)
                    {
                        next = curr->link;
                        curr->link = prev;
                        prev = curr;
                        curr = next;
                    }

                    firstnode = prev;
                    cout << endl <<  "List reversed successfully..." << endl;
                    displayALLshow();
                }

                void displayALLshow()
                {
                    if (firstnode == nullptr)
                    {
                        cout << endl << "List is empty." << endl ;
                        return;
                    }

                    node *temp = firstnode;
                    cout << endl  << "Linked List Elements: " ;

                    while (temp != nullptr)
                    {
                        cout << temp->value << " ";
                        temp = temp->link;
                    }
                    cout << "  " << endl;
                }

};

int main()
{
    linkedlist list;
    int choice;
    int data;
    int index;
    
    do
    {
        cout << endl <<"---------linked menu---------";
        cout << endl;
        cout << "1. Insert is data Beginning\n";
        cout << "2. Search list Data\n";
        cout << "3. Delete Data is Position\n";
        cout << "4. Reverse the List Data\n";
        cout << "5. Display All List Data\n";
        cout << "0. Exit\n";
        
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
            cout << "Enter data to insert: ";
            cin >> data;
            list.newinsertdata(data);
            break;

        case 2:
            cout << "Enter position to search: ";
            cin >> index;
            list.dataSearch(index);
            break;

        case 3:
            cout << "Enter position to delete: ";
            cin >> index;
            list.removeATposition(index);
            break;

        case 4:
            list.listOFreverse();
            break;

        case 5:
             list.displayALLshow();
            break;

        case 0:
            cout << "Exiting program...";
            break;

        default:
            cout << "Invalid choice.....! Please try again....";
            break;
        }
    } while (choice != 0);

    return 0;
}