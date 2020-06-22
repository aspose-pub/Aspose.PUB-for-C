#include "..\Aspose.PUB.h"

using namespace System;
using namespace Aspose::Pub;

void ConvertPubToPdf()
{
	// Initialize license object
	auto license = System::MakeObject<Aspose::Pub::License>();
	// Set license
	license->SetLicense(dataDir() + u"License\\Aspose.PUB.C++.lic");

	System::String filePub = dataDir() + u"1.pub";
	System::String filePdf = dataDir() + u"1.pdf";

	System::Console::WriteLine(u"Convert starting...");

	System::SharedPtr<IPubParser> parser = PubFactory::CreateParser(filePub);
	System::SharedPtr<Document> document = parser->Parse();
	PubFactory::CreatePdfConverter()->ConvertToPdf(document, filePdf);

	System::Console::WriteLine(u"Convert done.");
}