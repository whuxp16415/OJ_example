#ifndef _CEXAMPLE_TEST_H
#define _CEXAMPLE_TEST_H

#include <cppunit/extensions/HelperMacros.h>



class CExampleTest :public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE(CExampleTest);// ������԰�
	CPPUNIT_TEST(CExampleTest1);	 // ��Ӳ�������1
	CPPUNIT_TEST(CExampleTest2);	 // ��Ӳ�������2
	//��������Ӳ�������˵�� ������������ӵ�������
	CPPUNIT_TEST_SUITE_END();		 // �������԰�����
public:
	void setUp();
	void tearDown();
	CExampleTest();
	~CExampleTest();
	void CExampleTest1();//������������
	void CExampleTest2();
};

#endif