
#include <cppunit/TextOutputter.h>
#include <cppunit/XmlOutputter.h>
#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/extensions/TestFactoryRegistry.h>//CppUnit::TestFactoryRegistry::getRegistry().makeTest()
#include <cppunit/TestResult.h>//CppUnit::TestResult
#include <cppunit/TestResultCollector.h>
#include <cppunit/TestRunner.h>

int main()
{
	CPPUNIT_NS::TestResult controller;
	CPPUNIT_NS::TestResultCollector result;
	controller.addListener(&result); // ׼���ý���ռ��� 

	CPPUNIT_NS::BriefTestProgressListener progress;
	controller.addListener(&progress); // ׼�����Խ����ӡ CExampleTest::CExampleTest1 : OK
	
	CPPUNIT_NS::TestRunner runner; // ����ִ��ʵ��
	runner.addTest(CPPUNIT_NS::TestFactoryRegistry::getRegistry().makeTest());
	runner.run(controller); // ���в���

	CPPUNIT_NS::TextOutputter outputer(&result, CPPUNIT_NS::stdCOut());//�����ָ��
	outputer.write();//������ͳ��		OK (2 tests)

	std::ofstream file("TestResult.xml");//����ļ�����
	CPPUNIT_NS::XmlOutputter xml(&result, file);//
	xml.setStyleSheet("report.xsl");
	xml.write();
	file.close();

	system("pause");

	//return result.wasSuccessful() ? 0 : 1;
}

