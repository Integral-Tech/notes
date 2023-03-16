#pragma once

#include "3rdParty/qmarkdowntextedit/markdownhighlighter.h"
#include "styleeditorwindow.h"

class CustomMarkdownHighlighter : public MarkdownHighlighter
{
public:
    CustomMarkdownHighlighter(QTextDocument *parent = nullptr,
                              HighlightingOptions highlightingOptions = HighlightingOption::None);
    ~CustomMarkdownHighlighter() override = default;

    void setFontSize(qreal fontSize);
    void setHeaderColors(QColor color);

    void setTheme(Theme theme, QColor textColor, qreal fontSize);
};