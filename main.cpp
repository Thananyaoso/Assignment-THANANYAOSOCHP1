#include <iostream>
using namespace std;

void swap(int * p, int *pb, int n){
  for (int i = 0; i < n / 2; i++) {
      int temp = *p;
      *p = *pb;
      *pb = temp;
      p++;
      pb--;
  }
}

int main(int argc, char **argv) {
    int n = argc - 1;
    int *a = new int[n];

    cout << "Original Array:" << endl;
    for (int i = 0; i < n; i++) {
        a[i] = atoi(argv[i + 1]);
        cout << "a[" << i << "] = " << a[i] << endl;
    }

    int *p = a;
    int *pb = &a[n - 1];
    swap(p, pb, n);
    cout << endl << "Swapped Array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = " << a[i] << endl;
    }

    delete[] a;
    return 0;
}