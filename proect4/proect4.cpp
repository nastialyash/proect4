
#include <iostream>
using namespace std;
int main()
{
    const int SIZE = 10; 
    int arr[SIZE];

    
    srand(time(0));

    
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << endl;

   
    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < SIZE; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Min element: " << min << endl;
    cout << "Max element: " << max << endl;





   
        const int MONTHS = 12;
        double profit[MONTHS];
        int start, end;

       
        cout << "Ente a cout of money :\n";
        for (int i = 0; i < MONTHS; i++) {
            cout << "Місяць " << i + 1 << ": ";
            cin >> profit[i];
        }

       
        cout << "Enter a diapason of months :\n";
        cout << "start of month: ";
        cin >> start;
        cout << "End of month: ";
        cin >> end;

        
        if (start < 1 || end > 12 || start > end) {
            cout << "Not good.\n";
            return 1;
        }

      
        int minMonth = start - 1; 
        int maxMonth = start - 1;
        for (int i = start - 1; i < end; i++) {
            if (profit[i] < profit[minMonth]) {
                minMonth = i;
            }
            if (profit[i] > profit[maxMonth]) {
                maxMonth = i;
            }
        }

       
        cout << "Mont of min: " << minMonth + 1 << "  " << profit[minMonth] << "\n";
        cout << "Month of max: " << maxMonth + 1 << "  " << profit[maxMonth] << "\n";

        
    


}

