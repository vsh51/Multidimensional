#include "pch.h"
#include "../../Multidimensional/create_array.cpp"
#include <sstream>
TEST(CreateArray, TEST_2x2) {
    ostringstream out;
    short** arr = CreateArray<short**, short>(2, 2);
    short j = 31;
    for (int i1 = 0; i1 < 2; i1++)
    {
        for (int i2 = 0; i2 < 2; i2++)
        {
            arr[i1][i2] = j++;
        }
    }

    for (int i1 = 0; i1 < 2; i1++)
    {
        for (int i2 = 0; i2 < 2; i2++)
        {
            out << (int)arr[i1][i2] << " ";
        }
    }

    EXPECT_EQ("31 32 33 34 ", out.str());
}

TEST(CreateArray, TEST_3x2) {
    ostringstream out;
    short** arr = CreateArray<short**, short>(3, 2);
    short j = 31;
    for (int i1 = 0; i1 < 3; i1++)
    {
        for (int i2 = 0; i2 < 2; i2++)
        {
            arr[i1][i2] = j++;
        }
    }

    for (int i1 = 0; i1 < 3; i1++)
    {
        for (int i2 = 0; i2 < 2; i2++)
        {
            out << (short)arr[i1][i2] << " ";
        }
    }

    EXPECT_EQ("31 32 33 34 35 36 ", out.str());
}

TEST(CreateArray, TEST_3x4x3x6) {
    ostringstream out;
    short**** arr = CreateArray<short****, short>(3, 4, 3, 6);
    short j = 10;
    short checker = j;
    for (int i1 = 0; i1 < 3; i1++)
    {
        for (int i2 = 0; i2 < 4; i2++)
        {
            for (int i3 = 0; i3 < 3; i3++)
            {
                for (int i4 = 0; i4 < 6; i4++)
                {
                    arr[i1][i2][i3][i4] = j++;
                }
            }
        }
    }

    for (int i1 = 0; i1 < 3; i1++)
    {
        for (int i2 = 0; i2 < 4; i2++)
        {
            for (int i3 = 0; i3 < 3; i3++)
            {
                for (int i4 = 0; i4 < 6; i4++)
                {
                    out << (short)arr[i1][i2][i3][i4] << " ";

                }
            }
        }
    }

    string out_form = "";
    for (int i = checker; i < 3 * 4 * 3 * 6 + checker; ++i) {
        out_form += to_string(i) + " ";
    }

    EXPECT_EQ(out_form, out.str());
}

TEST(CreateArray, TEST_2x3x4x5x6) {
    ostringstream out;
    short***** arr = CreateArray<short*****, short>(2, 3, 4, 5, 6);
    short j = 31;
    short checker = j;
    for (int i1 = 0; i1 < 2; i1++)
    {
        for (int i2 = 0; i2 < 3; i2++)
        {
            for (int i3 = 0; i3 < 4; i3++)
            {
                for (int i4 = 0; i4 < 5; i4++)
                {
                    for (int i5 = 0; i5 < 6; i5++)
                    {
                        arr[i1][i2][i3][i4][i5] = j++;
                    }
                }
            }
        }
    }

    for (int i1 = 0; i1 < 2; i1++)
    {
        for (int i2 = 0; i2 < 3; i2++)
        {
            for (int i3 = 0; i3 < 4; i3++)
            {
                for (int i4 = 0; i4 < 5; i4++)
                {
                    for (int i5 = 0; i5 < 6; i5++)
                    {
                        out << (short)arr[i1][i2][i3][i4][i5] << " ";
                    }
                }
            }
        }
    }

    string out_form = "";
    for (int i = checker; i < 2 * 3 * 4 * 5 * 6 + checker; ++i) {
        out_form += to_string(i) + " ";
    }

    EXPECT_EQ(out_form, out.str());
}