#include "stdafx.h"
#include "CppUnitTest.h"

#include "../../client/Server.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ClientUnitTest
{
	TEST_CLASS(UnitTestServer)
	{
	public:

		TEST_METHOD(Constructeur)
		{
			Server s("127.0.0.1:1337", "Mon serveur");

			Assert::AreEqual(
				"127.0.0.1:1337",
				s.address().c_str(),
				"L'adresse n'est pas bonne",
				LINE_INFO()
			);
		}
	};
}
