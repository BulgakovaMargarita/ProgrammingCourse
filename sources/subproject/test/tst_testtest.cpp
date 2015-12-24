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
    void test_coefficient_of_equation_function();
};

TestTest::TestTest()
{
}

void TestTest::testCase1()
{
    QVERIFY2(true, "Failure");
}


void TestTest::test_max_composite_number_function(){
    QCOMPARE(findings_max_composite_number(1038,5147),5148);
    QCOMPARE(findings_max_composite_number(38,500),538);
}

void TestTest::test_treat_to_king_of_chess_function(){
    QCOMPARE(treats_to_king_of_chesss(1,3,2,2,2,1,4,5),2);
    QCOMPARE(treats_to_king_of_chesss(3,5,2,2,2,1,4,5),3);
}

void TestTest::test_coefficient_of_equation_function(){
    int i;
    int j;
    int k;
    coefficient_of_equation(1,2,3, &i, &j, &k);
    QCOMPARE(i,-6);
    QCOMPARE(j,11);
    QCOMPARE(k,-6);
}





QTEST_APPLESS_MAIN(TestTest)
#include "tst_testtest.moc"
