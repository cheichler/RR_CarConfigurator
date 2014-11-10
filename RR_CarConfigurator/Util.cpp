// stdafx.h : Includedatei f�r Standardsystem-Includedateien
// oder h�ufig verwendete projektspezifische Includedateien,
// die nur in unregelm��igen Abst�nden ge�ndert werden.
//

#pragma once


#include <stdio.h>
#include <tchar.h>

#include "Util.h"


std::string textFileRead(const char *filePath)
{

	std::string content;
	std::ifstream fileStream(filePath, std::ios::in);

	if (!fileStream.is_open())
	{
		std::cerr << "Datei konnte nicht gelesen werden mit Pfad: " << filePath << std::endl;
		return "";
	}

	std::string line = "";
	while (fileStream.good())
	{
		std::getline(fileStream, line);
		content.append(line + "\n");


	}
	fileStream.close();
	return content;
}