#ifndef CAMERAADAPTER_H
#define CAMERAADAPTER_H

#include <QObject>

class CameraAdapter : public QObject
{
    Q_OBJECT
public:
    explicit CameraAdapter(QObject *parent = nullptr);

private:


};

#endif // CAMERAADAPTER_H
