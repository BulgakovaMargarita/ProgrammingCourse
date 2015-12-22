#include <QString>
#include <QtTest>
#include "finding_max_composite_number_function.h"
#include "search_coefficients_of_equation_function.h"
#include "treat_to_king_of_chess_function.h"

class TestTest : public QObject
{
    Q_OBJECT

public:
    TestTest();

private Q_SLOTS:
    void testCase1();
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


/// Надо добавить еще тестовых вариантов
void TestTest::test_max_composite_number_function(){
    QCOMPARE(findings_max_composite_number(1038,5147),5148);
}

/// Вы проверяете здесь только один вариант угрозы, было бы хорошо проверить все или почти все,
/// можно дописать в этот же тест
void TestTest::test_treat_to_king_of_chess_function(){
    QCOMPARE(treats_to_king_of_chess(1,3,2,2,2,1,4,5),2);
}

void TestTest::test_i_coefficient_of_equation_function(){
    QCOMPARE(i_coefficient_of_equation(2,2,2),10);
}

void TestTest::test_j_coefficient_of_equation_function(){
    QCOMPARE(j_coefficient_of_equation(2,2,2),10);
}

void TestTest::test_k_coefficient_of_equation_function(){
    QCOMPARE(k_coefficient_of_equation(2,2,2),10);
}


QTEST_APPLESS_MAIN(TestTest)
#include "tst_testtest.moc"
