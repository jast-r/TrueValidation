#ifndef SCANNERREADER_H
#define SCANNERREADER_H

#include "icodesource.h"

class ScannerReader : public ICodeSource
{
    Q_OBJECT
public:
    ScannerReader();

    Code readCode() override;

private:
    ScannerAdapter scannerAdapter;
};

#endif // SCANNERREADER_H
