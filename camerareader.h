#ifndef CAMERAREADER_H
#define CAMERAREADER_H

#include "icodesource.h"

class CameraReader : public ICodeSource
{
    Q_OBJECT
public:
    CameraReader();

    Code readCode() override;
private:
    CameraAdapter CameraAdapter;
};

#endif // CAMERAREADER_H
