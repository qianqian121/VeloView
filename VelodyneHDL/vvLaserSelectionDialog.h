// Copyright 2013 Velodyne Acoustics, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#ifndef __vvLaserSelectionDialog_h
#define __vvLaserSelectionDialog_h

#include <QDialog>

#include "vvConfigure.h"

class QTableWidgetItem;
template<typename T>
class QVector;

class VelodyneHDLPlugin_EXPORT vvLaserSelectionDialog : public QDialog
{
  Q_OBJECT
public:

  vvLaserSelectionDialog(QWidget *p=0);
  virtual ~vvLaserSelectionDialog();

  QVector<int> getLaserSelectionMask();
  void setLaserSelectionMask(const QVector<int>& mask);

public slots:
  void onItemChanged(QTableWidgetItem*);
  void onToggleSelected();
  void onEnableDisableAll(int);

private:

  class pqInternal;
  pqInternal* Internal;

  Q_DISABLE_COPY(vvLaserSelectionDialog);
};

#endif
