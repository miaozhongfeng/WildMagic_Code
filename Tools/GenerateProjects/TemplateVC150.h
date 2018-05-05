// Geometric Tools, LLC
// Copyright (c) 1998-2014
// Distributed under the Boost Software License, Version 1.0.
// http://www.boost.org/LICENSE_1_0.txt
// http://www.geometrictools.com/License/Boost/LICENSE_1_0.txt
//
// File Version: 5.15.0 (2017/05/26)

#ifndef TEMPLATEVC150_H
#define TEMPLATEVC150_H

class TemplateVC150
{
public:
    static void GenerateDx9 (const char* projectName);
    static void GenerateWgl (const char* projectName);

private:
    static void Generate (const char* projectName, const char* prefix,
        char* projectLines[]);

    enum
    {
        NUM_PROJECT_LINES = 366,
        NUM_FILTER_LINES = 23
    };

    static char* msDx9ProjectLines[NUM_PROJECT_LINES];
    static char* msWglProjectLines[NUM_PROJECT_LINES];
    static char* msFilterLines[NUM_FILTER_LINES];
};

#endif