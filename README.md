# About this project
I created this as a testbed/showcase for a basic use of the google test framwork within visual studio.
The architecture in this project is pretty simple, but it demonstrates discrete fixtures for the class being tested (both public and private member functions).

### On the structure of a project with google test
In a single-project solution, I went back and forth on the merits of two architectures:
1. All the unit tests concentrated into a single UnitTests.cpp file, with separate .h/cpp files for the harness classes
2. A .h/.cpp for the tests of each individual class that would contain all the harnesses and tests needed for that class
Ultimately, I think the second option is probably best.  You will be dealing with a lot of files quickly, but a logical naming convention (the foo class is tested by the tests in footest.h/cpp) keeps that from getting confusing.  If you did not plan on relying on test fixture classes, and doing all your work with the TEST macro, then I think the single UnitTests.cpp approach would be better- but it would have to be a very small project for that to make any sense, and small projects have no downsides to more files.

###Visual Studio's Test Playlists are great
An important note for developers that work with hardware, databases, or any setup that isn't always available as you develop:  there are unit test playlists in visual studio that you access by right-clicking the unit tests in the test explorer.  Using this you can create playlists for the various situations you will be developing in.

### Procedure for creating a single project with the google test framework in VS 2017:
1. Create a Project (say a console application)
2. use NuGet (right click project) to add one of the Microsoft.googletest adapters (depending on whether you want static or dynamic compilation, and static or dynamic runtime).  Static/Dynamic is recommended
3. add #define _SILENCE_TR1_NAMESPACE_DEPRECATION_WARNING to preprocessor definitions (hopefully the need to do this will soon disappear)
4. add the following two lines to main
    1. testing::InitGoogleTest(&argc, argv);  
    2. return RUN_ALL_TESTS();  
5. add a new class to the project
6. add a test fixture class to the project.  In the header:
    1. include <gtest.gtest.h>  
    2. include the class you want to test  
    3. forward declare that class  
    4. inherit from : testing :: test  
5. add stubs for (static) SetUpTestCase, (static) TearDownTestCase(),SetUp, and TearDown
6. add a static pointer member variable for the class you want to test
7. In the implementation(cpp) file of the test harness:
    1. initialize your pointer to the class to be NULL  
    2. in SetUpTestCase, delete the object if it is not NULL, and then assign it to a new object  
    3. in TearDownTestCase, delete the object, and set the pointer to NULL  
8. in the header for the class you want to test:
    1. use FRIEND_TEST(TestCaseName, TestName); to anticipate tests and expose methods- public or private  
9. create a UnitTests.cpp file.  In it, declare the tests you want using TEST_F
10. use the test playlist to add your new tests to either StandAlone or WithHardware (or database, or whatever)
11. implement your object

Read the advanced documentation for google test [here](https://github.com/google/googletest/blob/master/googletest/docs/advanced.md)
