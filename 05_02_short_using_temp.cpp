// 2. Write a program of to sort the array using templates

#include<iostream>
using namespace std;

template <class O>
class Sort {
  O* ex1;
  int r;
public:
  Sort(O v[], int n) {
    if (n <= 0) {
      throw invalid_argument("Empty array provided");
    }
    r = n;
    ex1 = new O[r];
    for (int i = 0; i < r; ++i)
    {
      ex1[i] = v[i];
    }
    
  }
  ~Sort(){
    delete[] ex1;
  }

    void swap(O& a, O& b) {
        O temp = a;
        a = b;
        b = temp;
    }

    void op() {
        for (int i = 0; i < r - 1; i++) {
           int minIndex = i;
            for (int j = i + 1; j < r; j++) {
                if (ex1[j] < ex1[minIndex]) {
                    minIndex = j;
                }
            }
            swap(ex1[minIndex], ex1[i]);
        }
    }

    void dis() const {

        for (int i = 0; i < r; i++)
        {
            cout<< ex1[i] << " ";
        }
        cout<<"\n ";
    }
};

main() {
    int arr[] = { 5,4,3,5,1,2 };
    int len = sizeof(arr) / sizeof(arr[0]);
    Sort<int> obj1(arr, len);
    obj1.op();
    obj1.dis();

    float arr2[] = { 1.2,4.2,5.3,9.2,1.1 };
    len = sizeof(arr2) / sizeof(arr2[0]);
    Sort<float> obj2(arr2, len);
    obj2.op();
    obj2.dis();
}
