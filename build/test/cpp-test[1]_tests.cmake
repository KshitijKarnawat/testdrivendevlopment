add_test([=[pidcontroller.Test_Case_1]=]  /home/bmv/abhi/testdrivendevlopment/build/test/cpp-test [==[--gtest_filter=pidcontroller.Test_Case_1]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[pidcontroller.Test_Case_1]=]  PROPERTIES WORKING_DIRECTORY /home/bmv/abhi/testdrivendevlopment/build/test SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  cpp-test_TESTS pidcontroller.Test_Case_1)
