/*
 * Copyright (C) 2016 Canonical, Ltd.
 *
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License version 3, as published by
 * the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranties of MERCHANTABILITY,
 * SATISFACTORY QUALITY, or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef QQUICKSCREENWINDOW_H
#define QQUICKSCREENWINDOW_H

#include <QQuickWindow>

namespace qtmir {

/*
 * QQuickScreenWindow - wrapper of QQuickWindow to enable QML to specify destination screen.
**/
class QQuickScreenWindow : public QQuickWindow
{
    Q_OBJECT
    Q_PROPERTY(QScreen *screen READ screen WRITE setScreen NOTIFY screenChanged)

public:
    explicit QQuickScreenWindow(QQuickWindow *parent = 0);

Q_SIGNALS:
    void screenChanged(QScreen* screen);

};

} //namespace qtmir

#endif // QQUICKSCREENWINDOW_H
