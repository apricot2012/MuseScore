//=============================================================================
//  MuseScore
//  Music Composition & Notation
//
//  Copyright (C) 2021 MuseScore BVBA and others
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License version 2.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
//=============================================================================

#ifndef MU_UI_WINDOWSPLATFORMTHEME_H
#define MU_UI_WINDOWSPLATFORMTHEME_H

#include "internal/iplatformtheme.h"

namespace mu::ui {
class WindowsPlatformTheme : public IPlatformTheme
{
public:
    WindowsPlatformTheme();

    void startListening() override;
    void stopListening() override;

    bool isFollowSystemThemeAvailable() const override;

    ThemeCode themeCode() const override;
    async::Channel<ThemeCode> themeCodeChanged() const override;

    void applyPlatformStyleOnAppForTheme(ThemeCode themeCode) override;
    void applyPlatformStyleOnWindowForTheme(QWidget* window, ThemeCode themeCode) override;

private:
    int m_buildNumber = 0;

    async::Channel<ThemeCode> m_channel;
    std::atomic<bool> m_isListening = false;
    std::thread m_listenThread;

    void th_listen();

    bool isSystemDarkMode() const;
    bool isSystemHighContrast() const;
};
}

#endif // MU_UI_WINDOWSPLATFORMTHEME_H
