#include <iostream>

using namespace std;
#define int long long

signed main() {
    int mest_in_row, mesto;
    cin >> mest_in_row >> mesto; 
    int len_two_rows = 2 * mest_in_row + 1;
    int how_many_rows_pair = mesto / len_two_rows; //How many of full rows pair are there (and we skipped them)
    
    if (mesto % len_two_rows == 0) //check if we are sitting at the last seat of the second row (we need to check this to know how many full rows_pair skipped)
    {
        how_many_rows_pair -= 1; 
    }
    
    int mest_without_two_rows = mesto - how_many_rows_pair * len_two_rows; 
    
    if (mest_without_two_rows > mest_in_row){ //if in even row
        int rows_behind = 1 + how_many_rows_pair * 2;
        cout << rows_behind + 1 << ' ';
        cout << mesto - (how_many_rows_pair * len_two_rows + mest_in_row);
    }
    else{
        int rows_behind = how_many_rows_pair * 2; // if in odd row
        cout << rows_behind + 1 << ' ';
        cout << mesto - (how_many_rows_pair * len_two_rows);
    }
    
    
}
