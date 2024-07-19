// 2. Write a program of to sort the array using templates

#include<iostream>
#include<vector>
using namespace std;

template <class O>
class Sort {
  vector<O> ex1;
  size_t r;
public:
  Sort(O v[], size_t n) {
    if (n <= 0) {
      throw invalid_argument("Empty array provided");
    }
    r = n;
    ex1.assign(v, v + n);
  }

    void swap(O& a, O& b) {
        O temp = a;
        a = b;
        b = temp;
    }

    void op() {
        for (size_t i = 0; i < r - 1; i++) {
           size_t minIndex = i;
            for (size_t j = i + 1; j < r; j++) {
                if (ex1[j] < ex1[minIndex]) {
                    minIndex = j;
                }
            }
            swap(ex1[minIndex], ex1[i]);
        }
    }

    void dis() {

        for (size_t i = 0; i < r; i++)
        {
            cout<< ex1[i] << " ";
        }
        cout<<"\n ";
    }
};

main() {
    int len;
    int arr[] = { 5,4,3,5,1,2 };
    len = sizeof(arr) / sizeof(arr[0]);
    Sort<int> obj1(arr, len);
    obj1.op();
    obj1.dis();

    float arr2[] = { 1.2,4.2,5.3,9.2,1.2 };
    len = sizeof(arr2) / sizeof(arr2[0]);
    Sort<float> obj2(arr2, len);
    obj2.op();
    obj2.dis();
}
