#include <iostream>
#include "geometry.h"
#include <cstdlib>

using namespace std;

int main() {
    Triangle t;

    do {
        cout << "Enter coordinates of points (3 points): ";
        cin >> t.A.x >> t.A.y >> t.B.x >> t.B.y >> t.C.x >> t.C.y;
    
        if (t.isDegenerate()) {
            cout << "It is degenerate triangle. Enter another coordinates\n";
        }
    } while (t.isDegenerate());
    

    int n;
    cout << "How much points required to check?";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        Point p;
        cout << "Enter coordinates of points" << i + 1 << ": ";
        cin >> p.x >> p.y;

        if (t.contains(p)) {
            if (t.isOnEdge(p))
                cout << "Point locates on triangle limit\n";
            else
                cout << "Point inside of triangle\n";
        } else {
            cout << "Point outside of triangle.\n";
        }
    }

    return 0;
}
