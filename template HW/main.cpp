
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
	controller.addListener(&result); // 准备好结果收集器 

	CPPUNIT_NS::BriefTestProgressListener progress;
	controller.addListener(&progress); // 准备测试结果打印 CExampleTest::CExampleTest1 : OK
	
	CPPUNIT_NS::TestRunner runner; // 定义执行实体
	runner.addTest(CPPUNIT_NS::TestFactoryRegistry::getRegistry().makeTest());
	runner.run(controller); // 运行测试

	CPPUNIT_NS::TextOutputter outputer(&result, CPPUNIT_NS::stdCOut());//输出流指定
	outputer.write();//结果输出统计		OK (2 tests)

	std::ofstream file("TestResult.xml");//输出文件定义
	CPPUNIT_NS::XmlOutputter xml(&result, file);//
	xml.setStyleSheet("report.xsl");
	xml.write();
	file.close();

	system("pause");

	//return result.wasSuccessful() ? 0 : 1;
}

