#include <iosteam>

using namespace std;

int main(int argc, char* argv[])
{
    int chess_len = int(argv[1]);
    int chess[2] = [int(argv[2]), int(argv[3])];
    int point[2] = [int(argv[4]), int(argv[5])];

    cout << chess_len << chess << point << endl;
    
    retrun 0;
}