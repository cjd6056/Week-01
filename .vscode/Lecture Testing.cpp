#include <iostream>
#include <array>
#include <algorithm>

int main()
{
    std::array<double, 5> arr = { 98,1,72,49 };
    std::sort( arr.begin(), arr.end() );
    arr[3] = 6;
    arr.at( 2 ) = 0;
    std::replace( arr.begin(), arr.end(), 1, 11 );
    for ( auto a : arr )
    {
        std::cout << a * 2 + 1 << std::endl;
    }
    return 0;
}