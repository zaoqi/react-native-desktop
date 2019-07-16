/**
 * Copyright (c) 2017-present, Status Research and Development GmbH.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#ifndef GESTUREHANDLER_H
#define GESTUREHANDLER_H

#include "moduleinterface.h"

#include <QVariantMap>

class GestureHandlerModulePrivate;
class GestureHandlerModule : public QObject, public ModuleInterface {
    Q_OBJECT
    Q_INTERFACES(ModuleInterface)

    Q_DECLARE_PRIVATE(GestureHandlerModule)

public:
    GestureHandlerModule(QObject* parent = 0);
    ~GestureHandlerModule();

    void setBridge(Bridge* bridge) override;

    QString moduleName() override;
    QList<ModuleMethod*> methodsToExport() override;
    QVariantMap constantsToExport() override;

private:
    QScopedPointer<GestureHandlerModulePrivate> d_ptr;
};

#endif // GESTUREHANDLER_H
