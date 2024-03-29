

/*

This is just a simple test
You should know about fixtures
You should know about gmock

Frontier, VPGate, VPGatePlugings are overflowing with examples

The fabulous unit test best practices doc and videos lays it all out.
You should follow the best practices presented there.

This has been disseminated numerous times. But ...
	Sharepoint, \\avtec3\shared\syackey\a_Unit_Test_Best_Pratices

90% of you answers lie there

 */

#include <gtest/gtest.h>
#include <gmock/gmock.h>
using namespace testing;

/*
	names of tests follow the best practices pattern (as described therein)

	9) Name tests clearly and consistently using a standard naming convention. An example for a naming standard is,
	[UnitOfWork_StateUnderTest_ExpectedBehavior]

Like:
	PropertyTree_NoTagValues_ReturnsHasChangedFalse

NOT like:
	test4_tags_fail

Using a fixture, then the signature would be, for example:
	TEST_F(RegistrarConfig, PropertyTree_NoTagValues_ReturnsHasChangedFalse)
Just a test, for example:
	TEST(RegistrarConfig, PropertyTree_NoTagValues_ReturnsHasChangedFalse) {

You want whomever follows you in this code to have a clue as to what failed by viewing the name.
Remember refactoring is improving design while maintaining behavior.

These tests verify BEHAVIOR(s) 

 */
 

TEST(ThisIsNotReallyATest, NoUnitOfWork_HardwiredStateTo1_ReturnsHardwiredTrue) 
{
	// the 'tempo' is arrange, act, assert
	// You MUST have these specifically called out sections
	// See frontier RegistrarConfigUnitTests for examples
	
	// arrange

	// act

	// assert
	 ASSERT_EQ(1, 1);

 }
