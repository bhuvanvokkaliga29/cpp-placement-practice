// This program allocates books to students by minimizing the maximum pages

#include <iostream>
using namespace std;

bool isPossible(int books[], int n, int students, int maxPages) {

    int studentCount = 1;
    int pages = 0;

    for(int i = 0; i < n; i++) {

        if(books[i] > maxPages) {
            return false;
        }

        if(pages + books[i] <= maxPages) {
            pages += books[i];
        }
        else {
            studentCount++;
            pages = books[i];

            if(studentCount > students) {
                return false;
            }
        }
    }

    return true;
}

int main() {

    int books[] = {12, 34, 67, 90};
    int n = sizeof(books) / sizeof(books[0]);
    int students = 2;

    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += books[i];
    }

    int left = 0;
    int right = sum;
    int answer = -1;

    while(left <= right) {

        int mid = left + (right - left) / 2;

        if(isPossible(books, n, students, mid)) {
            answer = mid;
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    cout << "Minimum Maximum Pages: " << answer;

    return 0;
}