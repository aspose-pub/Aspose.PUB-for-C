# Process PUB files via C++

[Aspose.PUB for C++](https://products.aspose.com/pub/cpp) is a simple API that allows to read & convert Microsoft Publisher® (PUB) files to PDF format programmatically in your C++ Apps. It also provides easy to understand interfaces to edit metadata of PUB files.

<p align="center">
  <a title="Download ZIP" href="https://github.com/aspose-pub/Aspose.Pub-for-c/archive/master.zip">
    <img src="http://i.imgur.com/hwNhrGZ.png" />
  </a>
</p>

This repository contains [Examples](Examples) for [Aspose.PUB for C++](https://products.aspose.com/pub/cpp) to help you learn and write your own applications.

Directory | Description
--------- | -----------
[Examples](Examples)  | A collection of C++ examples that help you learn and explore the API features


## PUB File Processing Features

- Read & [convert Microsoft Publisher files to PDF](https://docs.aspose.com/pub/cpp/pub-to-pdf/).
- [Read & edit metadata of PUB files](https://docs.aspose.com/pub/cpp/programming-with-documents/) via API.

## Read PUB Files

**Microsoft Publisher:** PUB

## Save PUB As

**Fixed Layout:** PDF

## Platform Independence

You can use Aspose.PUB for C++ to build any type of 32-bit and 64-bit C++ applications. You can use it on server and client-side by simply copying the assembly without worrying about other services or modules.

## Get Started with Aspose.PUB for C++

Are you ready to give Aspose.PUB for C++ a try? Simply execute `Install-Package Aspose.PUB.Cpp` from Package Manager Console in Visual Studio to fetch the NuGet package. If you already have Aspose.PUB for C++ and want to upgrade the version, please execute `Update-Package Aspose.PUB.Cpp` to get the latest version.

## Convert a Microsoft Publisher File to PDF using C# Code

```c++
System::String filePub = dataDir() + u"template.pub";
System::String filePdf = dataDir() + u"output.pdf";

System::Console::WriteLine(u"Convert starting...");

System::SharedPtr<IPubParser> parser = PubFactory::CreateParser(filePub);
System::SharedPtr<Document> document = parser->Parse();
PubFactory::CreatePdfConverter()->ConvertToPdf(document, filePdf);
```

[Home](https://www.aspose.com/) | [Product Page](https://products.aspose.com/pub/cpp) | [Docs](https://docs.aspose.com/pub/cpp/) | [API Reference](https://apireference.aspose.com/pub/cpp) | [Examples](https://github.com/aspose-pub/Aspose.PUB-for-C) | [Blog](https://blog.aspose.com/category/pub/) | [Free Support](https://forum.aspose.com/c/pub) | [Temporary License](https://purchase.aspose.com/temporary-license)
