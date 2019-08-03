

using NUnit.Framework;
/*

This is just a simple test
You should know about fixtures
You should know about nunit

Frontier has excellent (shameless self promotion) examples

The fabulous unit test best practices doc and videos lays it all out.
You should follow the best practices presented there.

This has been disseminated numerous times. But ...
	Sharepoint, \\avtec3\shared\syackey\a_Unit_Test_Best_Pratices

90% of you answers lie there

 */
namespace Unit_Component_Tests
{
    [TestFixture]
    internal class ManagedAppTests
    {
        /*
            names of tests follow the best practices pattern (as described therein)

            9) Name tests clearly and consistently using a standard naming convention. An example for a naming standard is,
            [UnitOfWork_StateUnderTest_ExpectedBehavior]

        Like:
            ConfigImport_RestoreWithNoTags_ReturnDefaultTagValues

        NOT like:
            test4_tags_fail

        Like gtest, you can use a fixture
        This is just a simple test

        You want whomever follows you in this code to have a clue as to what failed by viewing the name.
        Remember refactoring is improving design while maintaining behavior.

        These tests verify BEHAVIOR(s) 

         */

        [Test]
        public void NoUnitOfWork_HardwiredStateTo1_ReturnsHardwiredTrue()
        {
            // the 'tempo' is arrange, act, assert
            // You MUST have these specifically called out sections
            // See frontier ConfigImportSystemFileUpdateTest for examples

            //Arange

            //Act

            //Assert

            StringAssert.AreEqualIgnoringCase("aaa", "aaa");
        }
    }
}
