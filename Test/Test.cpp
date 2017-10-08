// Test.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include "../EMFParser/EMFParser.h"
#include "../SPLParser/SPLParser.h"

int main() {

    EMFParser parser(L"ppt.emf", ParserPolicy::PP_WIN_API);
    const std::wstring str = parser.GetText();

    EMFParser parser2(L"ppt.emf", ParserPolicy::PP_FILE_FORMAT);
    const std::wstring str2 = parser.GetText();

    SPLParser parer3(L"0000s10.SPL");
    bool rv = parer3.ExtractEMFFile();

    return 0;
}

