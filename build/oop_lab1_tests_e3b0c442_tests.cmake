add_test([=[MatrixOpsTest.CreateAndDelete]=]  C:/C/OOP/oop_lab1/build/oop_lab1_tests.exe [==[--gtest_filter=MatrixOpsTest.CreateAndDelete]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[MatrixOpsTest.CreateAndDelete]=]
  PROPERTIES
    
    DEF_SOURCE_LINE [==[C:/C/OOP/oop_lab1/tests/test.cpp:5]==]
    WORKING_DIRECTORY [==[C:/C/OOP/oop_lab1/build]==]
    SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==]
    
)
add_test([=[MatrixOpsTest.CreateEmpty]=]  C:/C/OOP/oop_lab1/build/oop_lab1_tests.exe [==[--gtest_filter=MatrixOpsTest.CreateEmpty]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[MatrixOpsTest.CreateEmpty]=]
  PROPERTIES
    
    DEF_SOURCE_LINE [==[C:/C/OOP/oop_lab1/tests/test.cpp:11]==]
    WORKING_DIRECTORY [==[C:/C/OOP/oop_lab1/build]==]
    SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==]
    
)
add_test([=[MatrixOpsTest.CreateZeroRows]=]  C:/C/OOP/oop_lab1/build/oop_lab1_tests.exe [==[--gtest_filter=MatrixOpsTest.CreateZeroRows]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[MatrixOpsTest.CreateZeroRows]=]
  PROPERTIES
    
    DEF_SOURCE_LINE [==[C:/C/OOP/oop_lab1/tests/test.cpp:17]==]
    WORKING_DIRECTORY [==[C:/C/OOP/oop_lab1/build]==]
    SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==]
    
)
add_test([=[MatrixOpsTest.CreateZeroCols]=]  C:/C/OOP/oop_lab1/build/oop_lab1_tests.exe [==[--gtest_filter=MatrixOpsTest.CreateZeroCols]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[MatrixOpsTest.CreateZeroCols]=]
  PROPERTIES
    
    DEF_SOURCE_LINE [==[C:/C/OOP/oop_lab1/tests/test.cpp:23]==]
    WORKING_DIRECTORY [==[C:/C/OOP/oop_lab1/build]==]
    SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==]
    
)
add_test([=[MatrixOpsTest.FillValidMatrix]=]  C:/C/OOP/oop_lab1/build/oop_lab1_tests.exe [==[--gtest_filter=MatrixOpsTest.FillValidMatrix]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[MatrixOpsTest.FillValidMatrix]=]
  PROPERTIES
    
    DEF_SOURCE_LINE [==[C:/C/OOP/oop_lab1/tests/test.cpp:29]==]
    WORKING_DIRECTORY [==[C:/C/OOP/oop_lab1/build]==]
    SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==]
    
)
add_test([=[MatrixOpsTest.FillNullMatrix]=]  C:/C/OOP/oop_lab1/build/oop_lab1_tests.exe [==[--gtest_filter=MatrixOpsTest.FillNullMatrix]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[MatrixOpsTest.FillNullMatrix]=]
  PROPERTIES
    
    DEF_SOURCE_LINE [==[C:/C/OOP/oop_lab1/tests/test.cpp:37]==]
    WORKING_DIRECTORY [==[C:/C/OOP/oop_lab1/build]==]
    SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==]
    
)
add_test([=[AlgorithmTest.RowSwapValid]=]  C:/C/OOP/oop_lab1/build/oop_lab1_tests.exe [==[--gtest_filter=AlgorithmTest.RowSwapValid]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[AlgorithmTest.RowSwapValid]=]
  PROPERTIES
    
    DEF_SOURCE_LINE [==[C:/C/OOP/oop_lab1/tests/test.cpp:42]==]
    WORKING_DIRECTORY [==[C:/C/OOP/oop_lab1/build]==]
    SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==]
    
)
add_test([=[AlgorithmTest.RowSwapSameIndex]=]  C:/C/OOP/oop_lab1/build/oop_lab1_tests.exe [==[--gtest_filter=AlgorithmTest.RowSwapSameIndex]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[AlgorithmTest.RowSwapSameIndex]=]
  PROPERTIES
    
    DEF_SOURCE_LINE [==[C:/C/OOP/oop_lab1/tests/test.cpp:56]==]
    WORKING_DIRECTORY [==[C:/C/OOP/oop_lab1/build]==]
    SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==]
    
)
add_test([=[AlgorithmTest.ColSwapValid]=]  C:/C/OOP/oop_lab1/build/oop_lab1_tests.exe [==[--gtest_filter=AlgorithmTest.ColSwapValid]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[AlgorithmTest.ColSwapValid]=]
  PROPERTIES
    
    DEF_SOURCE_LINE [==[C:/C/OOP/oop_lab1/tests/test.cpp:67]==]
    WORKING_DIRECTORY [==[C:/C/OOP/oop_lab1/build]==]
    SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==]
    
)
add_test([=[AlgorithmTest.ColSwapNullptr]=]  C:/C/OOP/oop_lab1/build/oop_lab1_tests.exe [==[--gtest_filter=AlgorithmTest.ColSwapNullptr]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[AlgorithmTest.ColSwapNullptr]=]
  PROPERTIES
    
    DEF_SOURCE_LINE [==[C:/C/OOP/oop_lab1/tests/test.cpp:81]==]
    WORKING_DIRECTORY [==[C:/C/OOP/oop_lab1/build]==]
    SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==]
    
)
set(oop_lab1_tests_TESTS [==[MatrixOpsTest.CreateAndDelete]==] [==[MatrixOpsTest.CreateEmpty]==] [==[MatrixOpsTest.CreateZeroRows]==] [==[MatrixOpsTest.CreateZeroCols]==] [==[MatrixOpsTest.FillValidMatrix]==] [==[MatrixOpsTest.FillNullMatrix]==] [==[AlgorithmTest.RowSwapValid]==] [==[AlgorithmTest.RowSwapSameIndex]==] [==[AlgorithmTest.ColSwapValid]==] [==[AlgorithmTest.ColSwapNullptr]==])
