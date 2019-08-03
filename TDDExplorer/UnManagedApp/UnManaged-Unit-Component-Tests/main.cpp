
/******************************************************************************/
/*!
* @file main.cpp
*
* Boilerplate access to gtest and gmock
* You need add nothing to this file
*/
/******************************************************************************/

#include "gtest/gtest.h"
#include "gmock/gmock.h"

int main(int argc, char** argv)
{
	::testing::InitGoogleMock(&argc, argv);
	return RUN_ALL_TESTS();
}
