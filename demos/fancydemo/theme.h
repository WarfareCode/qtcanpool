/***************************************************************************
 **
 **  Copyright (C) 2018-2020 MaMinJie <canpool@163.com>
 **  Contact: https://github.com/canpool
 **           https://gitee.com/icanpool
 **
 **  GNU Lesser General Public License Usage
 **  Alternatively, this file may be used under the terms of the GNU Lesser
 **  General Public License version 3 as published by the Free Software
 **  Foundation and appearing in the file LICENSE.LGPL3 included in the
 **  packaging of this file. Please review the following information to
 **  ensure the GNU Lesser General Public License version 3 requirements
 **  will be met: https://www.gnu.org/licenses/lgpl-3.0.html.
 **
 **  GNU General Public License Usage
 **  Alternatively, this file may be used under the terms of the GNU
 **  General Public License version 2.0 or (at your option) the GNU General
 **  Public license version 3 or any later version approved by the KDE Free
 **  Qt Foundation. The licenses are as published by the Free Software
 **  Foundation and appearing in the file LICENSE.GPL2 and LICENSE.GPL3
 **  included in the packaging of this file. Please review the following
 **  information to ensure the GNU General Public License requirements will
 **  be met: https://www.gnu.org/licenses/gpl-2.0.html and
 **  https://www.gnu.org/licenses/gpl-3.0.html.
 **
****************************************************************************/
#ifndef THEME_H
#define THEME_H

#include <QColor>

#define TABLE_USE_ALTERNATE_COLOR   1

// theme
// classic
#define CLASSIC_ODD_COLOR           QColor(233,231,227)
#define CLASSIC_EVEN_COLOR          QColor(255,255,255)
#define CLASSIC_COLOR               QColor(0,0,0)
#define CLASSIC_CHECK_COLOR         QColor(128,0,255)
#define CLASSIC_MODIFIED_COLOR      QColor(0,0,0)

// flatdark
#define FLATDARK_ODD_COLOR          QColor(46,47,48)
#define FLATDARK_EVEN_COLOR         QColor(64,66,68)
#define FLATDARK_COLOR              QColor(200,200,200)
#define FLATDARK_CHECK_COLOR        QColor(255,106,173)
#define FLATDARK_MODIFIED_COLOR     QColor(0,200,0)

// fancyBar
#define FANCYBAR_HOVER_COLOR        QColor(255,255,255,50)
#define FANCYBAR_PRESS_COLOR        QColor(0, 0, 0, 50)
#define FANCYBAR_TEXT_COLOR         QColor(255,255,255)
#define FANCYBAR_BACKGROUND_COLOR   QColor(0, 100, 200, 100)
// fancyTab
#define FANCYTAB_HOVER_COLOR          QColor(180,180,180)
#define FANCYTAB_PRESS_COLOR          QColor(0, 0, 0, 100)
#define FANCYTAB_TEXT_COLOR           QColor(255,255,255)
#define FANCYTAB_SELECTED_TEXT_COLOR  QColor(255,255,255)
#define FANCYTAB_BACKGROUND_COLOR     QColor(0,0,0,20)
// tinyTab
#define TINYTAB_HOVER_COLOR           QColor(255, 255, 255, 50)
#define TINYTAB_PRESS_COLOR           QColor(0, 0, 0, 100)
#define TINYTAB_TEXT_COLOR            QColor(255,255,255)
#define TINYTAB_SELECTED_TEXT_COLOR   QColor(255,255,255)
#define TINYTAB_BACKGROUND_COLOR      QColor(0, 100, 200, 100)
#define TINYTAB_NORMAL_COLOR          QColor(0, 100, 200, 100)
#define TINYTAB_SLIDE_COLOR           QColor(250, 0, 0)

class Theme
{
public:
    static QColor g_color;
    static QColor g_oddColor;   // ji
    static QColor g_evenColor;  // ou
    static QColor g_checkColor;
    static QColor g_modifiedColor;

    static void setClassicTheme();
    static void setFlatdarkTheme();

    static void init();
    static QString themeFileName();
    static QString themeName(const QString &fileName);
    static void setTheme(const QString &fileName);
    static void loadTheme(const QString &fileName);

    // fancyBar
    static QColor g_fancyBarHoverColor;
    static QColor g_fancyBarPressColor;
    static QColor g_fancyBarTextColor;
    static QColor g_fancyBarBackgroundColor;
    // fancyTab
    static QColor g_fancyTabHoverColor;
    static QColor g_fancyTabPressColor;
    static QColor g_fancyTabTextColor;
    static QColor g_fancyTabSelectedTextColor;
    static QColor g_fancyTabBackgroundColor;
    // TinyTab
    static QColor g_tinyTabHoverColor;
    static QColor g_tinyTabPressColor;
    static QColor g_tinyTabTextColor;
    static QColor g_tinyTabSelectedTextColor;
    static QColor g_tinyTabBackgroundColor;
    static QColor g_tinyTabNormalColor;
    static QColor g_tinyTabSlideColor;
};

#endif // THEME_H
