#include <Windows.h>
#include <iostream>
#include <memory>

#include "../NM_Engine/NM_Index.h"
#ifdef _DEBUG
	#pragma comment(lib, "../../Bin/Debug/NM_Engine.lib")
#else
	#pragma comment(lib, "../../Bin/Release/NM_Engine.lib")
#endif

int main()
{
	auto nmCommon = std::make_unique<CNoMercy>();
	if (!nmCommon || !nmCommon.get())
	{
		printf("NoMercy class can NOT created! Last error: %u\n", GetLastError());
		return EXIT_FAILURE;
	}

	nmCommon->InitTest(true);

	printf(" # COMPLETED! # \n");

	std::cin.get();

    return EXIT_SUCCESS;
}

