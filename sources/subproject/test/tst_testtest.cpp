#include <QString>
#include <QtTest>
#include "finding_max_composite_number_function.h"
#include "search_coefficients_of_equation_function.h"
#include "Search_sum_or_difference_function.h"
#include "treat_to_king_of_chess_function.h"

class TestTest : public QObject
{
    Q_OBJECT

public:
    TestTest();

private Q_SLOTS:
    void testCase1();
    void test_sum_or_difference();
    void test_factorial_function();
    void test_max_composite_number_function();
    void test_treat_to_king_of_chess_function();
    void test_i_coefficient_of_equation_function();
    void test_j_coefficient_of_equation_function();
    void test_k_coefficient_of_equation_function();
};

TestTest::TestTest()
{
}

void TestTest::testCase1()
{
    QVERIFY2(true, "Failure");
}

void TestTest::test_sum_or_difference(){

//     QCOMPARE(sum_or_difference_function(10.18),28);
//     QCOMPARE(sum_or_difference_function(18.10), 8);
}

/// что у вас реально был по заданию факториал?
void TestTest::test_factorial_function(){
    QCOMPARE(counting_factorial_function(4),24);
}

/// Надо добавить еще тестовых вариантов
void TestTest::test_max_composite_number_function(){
    QCOMPARE(finding_max_composite_number_function(1038,5147),5148);
}

/// Вы проверяете здесь только один вариант угрозы, было бы хорошо проверить все или почти все,
/// можно дописать в этот же тест
void TestTest::test_treat_to_king_of_chess_function(){
    QCOMPARE(treat_to_king_of_chess_function(1,3,2,2,2,1,4,5),2);
}

void TestTest::test_i_coefficient_of_equation_function(){
    QCOMPARE(search_i_coefficient_of_equation_function(2,2,2),10);
}

void TestTest::test_j_coefficient_of_equation_function(){
    QCOMPARE(search_j_coefficient_of_equation_function(2,2,2),10);
}

void TestTest::test_k_coefficient_of_equation_function(){
    QCOMPARE(search_k_coefficient_of_equation_function(2,2,2),10);
}


QTEST_APPLESS_MAIN(TestTest)
#include "tst_testtest.moc"
