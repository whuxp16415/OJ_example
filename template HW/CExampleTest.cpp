#include "CExampleTest.h"
//������ �ӿ��ļ�
#include "OJ.h"

CPPUNIT_TEST_SUITE_NAMED_REGISTRATION(CExampleTest, "All Tests");//�Զ�ע����԰�  ע��������԰����ֲ�֪����ʲôҪ��

//�����ж�
//CPPUNIT_ASSERT(condition)										// ȷ��conditionΪ�� 
//CPPUNIT_ASSERT_MESSAGE(message, condition)					// ��conditionΪ��ʱʧ��, ����ӡ
//message CPPUNIT_FAIL(message)									// ��ǰ����ʧ��, ����ӡ
//message CPPUNIT_ASSERT_EQUAL(expected, actual)				// ȷ��������� 
//CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expected, actual)		// ʧ�ܵ�ͬʱ��ӡ
//message CPPUNIT_ASSERT_DOUBLES_EQUAL(expected, actual, delta) // ��expected��actual֮������deltaʱʧ�� 
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