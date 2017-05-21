#include "stdafx.h"
#include "CppUnitTest.h"
#include "../../server/diseaseDAO.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ServerUnitTest
{		
	TEST_CLASS(UnitTestDiseaseDAO)
	{
	public:
		
		TEST_METHOD(Constructor)
		{
			diseaseDAO d();
		}

		TEST_METHOD(FindAll)
		{
			diseaseDAO d("./diseases.txt");
			std::list<Disease> diseases =  d.FindAll();
			if(diseases.empty())
			{
				Assert::Fail();
			}
		}

	};
	
}