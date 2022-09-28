// WinCHMStandardKeygen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>
#include "z3++.h"

#pragma comment(lib,"libz3.lib")

using namespace std;
using namespace z3;

int main(){
    std::cout << "find_model_example1\n";
    context c;
    // VirtualCC
    expr exprs[] = {
        c.int_const("x_1"),
        c.int_const("x_2"),
        c.int_const("x_3"),
        c.int_const("x_4"),
        c.int_const("x_5"),
        c.int_const("x_6"),
        c.int_const("x_7"),
        c.int_const("x_8"),
        c.int_const("x_9"),
        c.int_const("x_10"),
        c.int_const("x_11"),
        c.int_const("x_12"),
        c.int_const("x_13"),
        c.int_const("x_14"),
        c.int_const("x_15"),
        c.int_const("x_16"),
        c.int_const("x_17"),
        c.int_const("x_18"),
        c.int_const("x_19"),
        c.int_const("x_20"),
    };
    solver s(c);
    for (int i = 0;i<_countof(exprs);i++) {
        s.add(exprs[i] >= 48);
        s.add(exprs[i] <= 126);
    }
    
    s.add(
        /*exprs[0] * 1 + exprs[1] * 2 + exprs[2] * 3 + exprs[3] * 4 + exprs[4] * 5
        + exprs[5] * 6 + exprs[6] * 7 + exprs[7] * 8 + exprs[8] * 9 + exprs[9] * 10
        + exprs[10] * 11 + exprs[11] * 12 + exprs[12] * 13 + exprs[13] * 14 + exprs[14] * 15
        + exprs[15] * 16 + exprs[16] * 17 + exprs[17] * 18 + exprs[18] * 19 + exprs[19] * 20
        == 0x35ee
        ||
        exprs[0] * 1 + exprs[1] * 2 + exprs[2] * 3 + exprs[3] * 4 + exprs[4] * 5
        + exprs[5] * 6 + exprs[6] * 7 + exprs[7] * 8 + exprs[8] * 9 + exprs[9] * 10
        + exprs[10] * 11 + exprs[11] * 12 + exprs[12] * 13 + exprs[13] * 14 + exprs[14] * 15
        + exprs[15] * 16 + exprs[16] * 17 + exprs[17] * 18 + exprs[18] * 19 + exprs[19] * 20
        == 0x39cd
        ||
        exprs[0] * 1 + exprs[1] * 2 + exprs[2] * 3 + exprs[3] * 4 + exprs[4] * 5
        + exprs[5] * 6 + exprs[6] * 7 + exprs[7] * 8 + exprs[8] * 9 + exprs[9] * 10
        + exprs[10] * 11 + exprs[11] * 12 + exprs[12] * 13 + exprs[13] * 14 + exprs[14] * 15
        + exprs[15] * 16 + exprs[16] * 17 + exprs[17] * 18 + exprs[18] * 19 + exprs[19] * 20
        == 0x2e6f
        ||
        exprs[0] * 1 + exprs[1] * 2 + exprs[2] * 3 + exprs[3] * 4 + exprs[4] * 5
        + exprs[5] * 6 + exprs[6] * 7 + exprs[7] * 8 + exprs[8] * 9 + exprs[9] * 10
        + exprs[10] * 11 + exprs[11] * 12 + exprs[12] * 13 + exprs[13] * 14 + exprs[14] * 15
        + exprs[15] * 16 + exprs[16] * 17 + exprs[17] * 18 + exprs[18] * 19 + exprs[19] * 20
        == 0x2f83
        ||
        exprs[0] * 1 + exprs[1] * 2 + exprs[2] * 3 + exprs[3] * 4 + exprs[4] * 5
        + exprs[5] * 6 + exprs[6] * 7 + exprs[7] * 8 + exprs[8] * 9 + exprs[9] * 10
        + exprs[10] * 11 + exprs[11] * 12 + exprs[12] * 13 + exprs[13] * 14 + exprs[14] * 15
        + exprs[15] * 16 + exprs[16] * 17 + exprs[17] * 18 + exprs[18] * 19 + exprs[19] * 20
        == 0x2E92
        ||
        exprs[0] * 1 + exprs[1] * 2 + exprs[2] * 3 + exprs[3] * 4 + exprs[4] * 5
        + exprs[5] * 6 + exprs[6] * 7 + exprs[7] * 8 + exprs[8] * 9 + exprs[9] * 10
        + exprs[10] * 11 + exprs[11] * 12 + exprs[12] * 13 + exprs[13] * 14 + exprs[14] * 15
        + exprs[15] * 16 + exprs[16] * 17 + exprs[17] * 18 + exprs[18] * 19 + exprs[19] * 20
        == 0x2455
        ||
        exprs[0] * 1 + exprs[1] * 2 + exprs[2] * 3 + exprs[3] * 4 + exprs[4] * 5
        + exprs[5] * 6 + exprs[6] * 7 + exprs[7] * 8 + exprs[8] * 9 + exprs[9] * 10
        + exprs[10] * 11 + exprs[11] * 12 + exprs[12] * 13 + exprs[13] * 14 + exprs[14] * 15
        + exprs[15] * 16 + exprs[16] * 17 + exprs[17] * 18 + exprs[18] * 19 + exprs[19] * 20
        == 0x2f50
        ||*/
        exprs[0] * 1 + exprs[1] * 2 + exprs[2] * 3 + exprs[3] * 4 + exprs[4] * 5
        + exprs[5] * 6 + exprs[6] * 7 + exprs[7] * 8 + exprs[8] * 9 + exprs[9] * 10
        + exprs[10] * 11 + exprs[11] * 12 + exprs[12] * 13 + exprs[13] * 14 + exprs[14] * 15
        + exprs[15] * 16 + exprs[16] * 17 + exprs[17] * 18 + exprs[18] * 19 + exprs[19] * 20
        == 0x2fa6
    );

    auto result = s.check();
    std::cout << s.check() << "\n";

    if (result == sat) {
        model m = s.get_model();
        // std::cout << m << "\n";
        // we can evaluate expressions in the model.
        int64_t licenseKey = m.eval(exprs[0] * 1 + exprs[1] * 2 + exprs[2] * 3 + exprs[3] * 4 + exprs[4] * 5
            + exprs[5] * 6 + exprs[6] * 7 + exprs[7] * 8 + exprs[8] * 9 + exprs[9] * 10
            + exprs[10] * 11 + exprs[11] * 12 + exprs[12] * 13 + exprs[13] * 14 + exprs[14] * 15
            + exprs[15] * 16 + exprs[16] * 17 + exprs[17] * 18 + exprs[18] * 19 + exprs[19] * 20).as_int64();
        switch (licenseKey)
        {
            case 0x35EE:
                printf("1 User LicenseKey: \n");
                break;
            case 0x39CD:
                printf("2 User LicenseKey: \n");

                break;
            case 0x2E6F:
                printf("3 User LicenseKey: \n");

                break;
            case 0x2F83:
                printf("5 User LicenseKey: \n");

                break;
            case 0x2E92:
                printf("10 User LicenseKey: \n");

                break;
            case 0x2455:
                printf("20 User LicenseKey: \n");

                break;

            case 0x2F50:
                printf("50 User LicenseKey: \n");

                break;
            case 0x2FA6:
                printf("9999 User LicenseKey: \n");

                break;
        }
        for (int i = 0; i < _countof(exprs); i++) {
            char c = m.eval(exprs[i]).as_int64();
            cout << c;
        }
        //std::cout << "x + y + 1 = " << m.eval(x + y + 1) << "\n";
    }
    

    system("pause");
}

