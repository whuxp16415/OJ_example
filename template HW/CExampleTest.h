#ifndef _CEXAMPLE_TEST_H
#define _CEXAMPLE_TEST_H

#include <cppunit/extensions/HelperMacros.h>



class CExampleTest :public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE(CExampleTest);// 定义测试包
	CPPUNIT_TEST(CExampleTest1);	 // 添加测试用例1
	CPPUNIT_TEST(CExampleTest2);	 // 添加测试用例2
	//在这里添加测试用例说明 将测试用例添加到测试套
	CPPUNIT_TEST_SUITE_END();		 // 结束测试包定义
public:
	void setUp();
	void tearDown();
	CExampleTest();
	~CExampleTest();
	void CExampleTest1();//测试用例声明
	void CExampleTest2();
};

#endif