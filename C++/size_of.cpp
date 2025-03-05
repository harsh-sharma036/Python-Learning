// Data Type	Size (32-bit System)	Size (64-bit System)	Range
// bool	1 byte	1 byte	true (1) / false (0)
// char	1 byte	1 byte	-128 to 127 (signed) or 0 to 255 (unsigned)
// wchar_t	2 bytes	4 bytes	Platform-dependent (used for wide characters)
// short	2 bytes	2 bytes	-32,768 to 32,767
// int	4 bytes	4 bytes	-2,147,483,648 to 2,147,483,647
// long	4 bytes	8 bytes	System-dependent
// long long	8 bytes	8 bytes	-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
// float	4 bytes	4 bytes	~6-7 decimal places precision
// double	8 bytes	8 bytes	~15-16 decimal places precision
// long double	12 bytes or 16 bytes	16 bytes	Higher precision than double
// void	0 bytes	0 bytes	No size (used for empty return types)
// nullptr_t	0 bytes	0 bytes	Used to represent nullptr


#include <iostream>
using namespace std;

int main() {
    cout << "Size of bool: " << sizeof(bool) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    cout << "Size of short: " << sizeof(short) << " bytes" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of long: " << sizeof(long) << " bytes" << endl;
    cout << "Size of long long: " << sizeof(long long) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of long double: " << sizeof(long double) << " bytes" << endl;
    // cout << "Size of void: " << sizeof(void) << " bytes" << endl;  // Error beacuse void is an incomplete type and does not have a size
    cout << "Size of nullptr_t: " << sizeof(nullptr_t) << " bytes" << endl;
    
    return 0;
}
