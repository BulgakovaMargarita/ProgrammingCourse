#include <iostream>

#include <QString>
#include <QtTest>
using namespace std;

#include <stdio.h>
#include <stdlib.h>



class TestTest : public QObject
{
    Q_OBJECT

public:
    TestTest();

private Q_SLOTS:
   int max_vozmojnoe2(int,int);
   int poisk_ugrozi2(int, int, int, int, int, int, int, int);
   int poisk_i(int, int, int);
   int poisk_j(int, int, int);
   int poisk_k(int, int, int);
   int strange_function(int, int);
   int fact_function(int);
};

TestTest::TestTest()
{
}



void TestTest::test_fact_function(){
    QCOMPARE(fact_function(4), 24);
}


void TestTest::test_strange_function(){
    QCOMPARE(strange_function(20, 12), 8);
    QCOMPARE(strange_function(7, 30), 37);
}


void TestTest::test_variant7_1(){
      QCOMPARE(poisk_i(2,2,2), 73);
      QCOMPARE(poisk_j(2,2,2), -100);
      QCOMPARE(poisk_k(2,2,2), -100);
}



void TestTest::test_variant7_2(){
       QCOMPARE(poisk_ugrozi2(1,2,3,3,1,3,4,3), 2);
}


void TestTest::max_vozmojnoe(){
    QCOMPARE(max_vozmojnoe2(8024,4157), 8157);
}

QTEST_APPLESS_MAIN(TestTest)

#include "tst_qt_teststest.moc"



