#include <iostream>

using namespace std;
#define int long long

signed main() {
    int M;
    cin >> M;
    
    int X, Y;
    cin >> X >> Y;
    
    int W, H;
    cin >> W >> H;
    
    int cnt1 = 0;
    int cnt2 = 0;
    
    if ((X + W) % M != 0) {
        cnt1 += 1;
    }
    
    cnt1 += (W + X) / M;
    cnt1 -= X / M;
    
    if ((Y + H) % M != 0) {
        cnt2 += 1;
    }
    
    cnt2 += (Y + H) / M;
    cnt2 -= Y / M;
    
    cout << cnt2 * cnt1 << endl;
    
    
}
