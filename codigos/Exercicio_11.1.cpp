//Demostrar o funcionamento da leitura de um arquivo XML com a biblioteca XmlTextReader
/*
#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <msclr\marshal_cppstd.h>

using namespace std;
using namespace System::Xml;


int main() {
  XmlTextReader^ reader = nullptr;
  try {
    // Load the reader with the XML file.
    reader = gcnew XmlTextReader("books.xml");

    // Read the XML document.
    while (reader->Read()) {
      switch (reader->NodeType) {
      case XmlNodeType::Element:
        Console::Write("<{0}", reader->Name);
        if (reader->HasAttributes) {
          while (reader->MoveToNextAttribute()) {
            Console::Write(" {0}='{1}'", reader->Name, reader->Value);
          }
        }
        Console::WriteLine(">");
        break;
      case XmlNodeType::Text:
        Console::WriteLine(reader->Value);
        break;
      case XmlNodeType::EndElement:
        Console::Write("</{0}>", reader->Name);
        Console::WriteLine();
        break;
      }
    }
  } finally {
    if (reader != nullptr)
      reader->Close();
  }

  return 0;
}
*/

#include "stdafx.h"
#include <tchar.h>
#using <mscorlib.dll>
#using <System.xml.dll>
using namespace System;
using namespace System::Xml;

int main() {
  XmlTextReader *reader = new XmlTextReader("books.xml");
  while (reader->Read()) {
    switch (reader->NodeType) {
    case XmlNodeType::Element: // O nó é um elemento.
      Console::Write("<{0}", reader->Name);
      Console::WriteLine(">");
      break;
    case XmlNodeType::Text: // Exibe o texto em cada elemento.
      Console::WriteLine(reader->Value);
      break;
    case XmlNodeType::EndElement: // Exibe o fim do elemento.
      Console::Write("</{0}", reader->Name);
      Console::WriteLine(">");
      break;
    }
  }
  delete reader;
}
