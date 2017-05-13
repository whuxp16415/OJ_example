#include "CExampleTest.h"
//测试类 接口文件
#include "OJ.h"

CPPUNIT_TEST_SUITE_NAMED_REGISTRATION(CExampleTest, "All Tests");//自动注册测试包  注意这个测试包名字不知道有什么要求

//常用判定
//CPPUNIT_ASSERT(condition)										// 确信condition为真 
//CPPUNIT_ASSERT_MESSAGE(message, condition)					// 当condition为假时失败, 并打印
//message CPPUNIT_FAIL(message)									// 当前测试失败, 并打印
//message CPPUNIT_ASSERT_EQUAL(expected, actual)				// 确信两者相等 
//CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expected, actual)		// 失败的同时打印
//message CPPUNIT_ASSERT_DOUBLES_EQUAL(expected, actual, delta) // 当expected和actual之间差大于delta时失败 
CExampleTest::CExampleTest()
{

};
CExampleTest::~CExampleTest()
{

};
void CExampleTest::setUp()
{
	//std::cout << "begin test" << std::endl;
};
void CExampleTest::tearDown()
{
	//std::cout << "finish test" << std::endl;
};
void CExampleTest::CExampleTest1()
{
	int a[] = { 2,1 };
	char szRst[10] = { 0 };
	char *strExpect = "12";
	smallestDigit(a, 2, szRst);
	CPPUNIT_ASSERT(0 == strcmp(szRst, strExpect));
};
void CExampleTest::CExampleTest2()
{
	//TO DO
};