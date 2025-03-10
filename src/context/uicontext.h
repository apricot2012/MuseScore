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
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
//=============================================================================
#ifndef MU_CONTEXT_UICONTEXT_H
#define MU_CONTEXT_UICONTEXT_H

#include "ui/uitypes.h"

namespace mu::context {
//! NOTE Determines where to be, what the user is doing

// common ui (re declared for convenience)
static constexpr ui::UiContext UiCtxUnknown = ui::UiCtxUnknown;
static constexpr ui::UiContext UiCtxAny = ui::UiCtxAny;

// pages
static constexpr ui::UiContext UiCtxNotationOpened = "UiCtxNotationOpened";
static constexpr ui::UiContext UiCtxHomeOpened = "UiCtxHomeOpened";

// common
static constexpr ui::UiContext UiCtxPlaying= "UiCtxPlaying";

// notation detail
static constexpr ui::UiContext UiCtxNotationHasSelection = "UiCtxNotationHasSelection";
static constexpr ui::UiContext UiCtxNotationTextEditing = "UiCtxNotationTextEditing";
}

#endif // MU_CONTEXT_UICONTEXT_H
