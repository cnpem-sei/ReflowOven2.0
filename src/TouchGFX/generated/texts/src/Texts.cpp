/* DO NOT EDIT THIS FILE */
/* This file is autogenerated by the text-database code generator */

#include <stdarg.h>
#include <touchgfx/TextProvider.hpp>
#include <touchgfx/Texts.hpp>
#include <touchgfx/TypedText.hpp>
#include <touchgfx/Unicode.hpp>
#include <touchgfx/hal/HAL.hpp>
#include <touchgfx/lcd/LCD.hpp>
#include <texts/TypedTextDatabase.hpp>

uint16_t touchgfx::Font::getStringWidth(const touchgfx::Unicode::UnicodeChar* text, ...) const
{
    va_list pArg;
    va_start(pArg, text);
    uint16_t width = getStringWidthRTL(TEXT_DIRECTION_LTR, text, pArg);
    va_end(pArg);
    return width;
}

uint16_t touchgfx::Font::getStringWidth(touchgfx::TextDirection textDirection, const touchgfx::Unicode::UnicodeChar* text, ...) const
{
    va_list pArg;
    va_start(pArg, text);
    uint16_t width = getStringWidthRTL(textDirection, text, pArg);
    va_end(pArg);
    return width;
}

touchgfx::Unicode::UnicodeChar touchgfx::TextProvider::getNextLigature(TextDirection direction)
{
    nextCharacters.replaceAt0(unicodeConverter(direction));
    if (fontGsubTable && nextCharacters.peekChar())
    {
        substituteGlyphs();
        if (nextCharacters.peekChar(1) == 0x093F) // Hindi I-matra
        {
            nextCharacters.replaceAt1(nextCharacters.peekChar());
            nextCharacters.replaceAt0(0x093F);
        }
    }
    return getNextChar();
}

void touchgfx::TextProvider::initializeInternal()
{
    fillInputBuffer();
    unicodeConverterInit();
}

void touchgfx::LCD::drawString(touchgfx::Rect widgetArea, const touchgfx::Rect& invalidatedArea, const touchgfx::LCD::StringVisuals& stringVisuals, const touchgfx::Unicode::UnicodeChar* format, ...)
{
    va_list pArg;
    va_start(pArg, format);
    drawStringRTL(widgetArea, invalidatedArea, stringVisuals, format, pArg);
    va_end(pArg);
}

//Default typed text database
extern const touchgfx::TypedText::TypedTextData* const typedTextDatabaseArray[];

TEXT_LOCATION_FLASH_PRAGMA
KEEP extern const touchgfx::Unicode::UnicodeChar texts_all_languages[] TEXT_LOCATION_FLASH_ATTRIBUTE = {
    0x45, 0x6c, 0x65, 0x74, 0x72, 0xf4, 0x6e, 0x69, 0x63, 0x61, 0x20, 0x65, 0x20, 0x4d, 0x69, 0x63, 0x72, 0x6f, 0x65, 0x6c, 0x65, 0x74, 0x72, 0xf4, 0x6e, 0x69, 0x63, 0x61, 0x20, 0x2d, 0x20, 0x45, 0x4d, 0x49, 0x0, // @0 "Eletr?nica e Microeletr?nica - EMI"
    0x50, 0x41, 0x54, 0x41, 0x4d, 0x41, 0x52, 0x20, 0x44, 0x45, 0x20, 0x52, 0x45, 0x46, 0x55, 0x53, 0xc3, 0x4f, 0x0, // @35 "PATAMAR DE REFUS?O"
    0x46, 0x4f, 0x52, 0x4e, 0x4f, 0x20, 0x44, 0x45, 0x20, 0x52, 0x45, 0x46, 0x55, 0x53, 0xc3, 0x4f, 0x0, // @54 "FORNO DE REFUS?O"
    0x50, 0x52, 0x49, 0x4d, 0x45, 0x49, 0x52, 0x4f, 0x20, 0x50, 0x41, 0x54, 0x41, 0x4d, 0x41, 0x52, 0x0, // @71 "PRIMEIRO PATAMAR"
    0x54, 0x45, 0x4d, 0x50, 0x45, 0x52, 0x41, 0x54, 0x55, 0x52, 0x41, 0x20, 0x28, 0xb0, 0x43, 0x29, 0x0, // @88 "TEMPERATURA (?C)"
    0x54, 0x65, 0x6d, 0x70, 0x65, 0x72, 0x61, 0x74, 0x75, 0x72, 0x61, 0x20, 0x28, 0xb0, 0x43, 0x29, 0x0, // @105 "Temperatura (?C)"
    0x54, 0x45, 0x4d, 0x50, 0x4f, 0x20, 0x28, 0x73, 0x29, 0x0, // @122 "TEMPO (s)"
    0x54, 0x65, 0x6d, 0x70, 0x6f, 0x20, 0x28, 0x73, 0x29, 0x0, // @132 "Tempo (s)"
    0x2, 0x0, // @142 "<>"
    0x50, 0x65, 0x72, 0x66, 0x69, 0x6c, 0x0, // @144 "Perfil"
    0x53, 0x54, 0x41, 0x54, 0x55, 0x53, 0x0, // @151 "STATUS"
    0x30, 0x30, 0x2e, 0x30, 0x30, 0x0, // @158 "00.00"
    0x30, 0x30, 0x30, 0x0 // @164 "000"
};
TEXT_LOCATION_FLASH_PRAGMA
KEEP extern uint32_t const indicesGb[] TEXT_LOCATION_FLASH_ATTRIBUTE;

//array holding dynamically installed languages
struct TranslationHeader
{
    uint32_t offset_to_texts;
    uint32_t offset_to_indices;
    uint32_t offset_to_typedtext;
};
static const TranslationHeader* languagesArray[1] = { 0 };

//Compiled and linked in languages
static const uint32_t* const staticLanguageIndices[] = {
    indicesGb
};

touchgfx::LanguageId touchgfx::Texts::currentLanguage = static_cast<touchgfx::LanguageId>(0);
static const touchgfx::Unicode::UnicodeChar* currentLanguagePtr = 0;
static const uint32_t* currentLanguageIndices = 0;

void touchgfx::Texts::setLanguage(touchgfx::LanguageId id)
{
    const touchgfx::TypedText::TypedTextData* currentLanguageTypedText = 0;
    if (id < 1)
    {
        if (languagesArray[id] != 0)
        {
            // Dynamic translation is added
            const TranslationHeader* translation = languagesArray[id];
            currentLanguagePtr = (const touchgfx::Unicode::UnicodeChar*)(((const uint8_t*)translation) + translation->offset_to_texts);
            currentLanguageIndices = (const uint32_t*)(((const uint8_t*)translation) + translation->offset_to_indices);
            currentLanguageTypedText = (const touchgfx::TypedText::TypedTextData*)(((const uint8_t*)translation) + translation->offset_to_typedtext);
        }
        else
        {
            // Compiled and linked in languages
            currentLanguagePtr = texts_all_languages;
            currentLanguageIndices = staticLanguageIndices[id];
            currentLanguageTypedText = typedTextDatabaseArray[id];
        }
    }

    if (currentLanguageTypedText)
    {
        currentLanguage = id;
        touchgfx::TypedText::registerTypedTextDatabase(currentLanguageTypedText,
                                                       TypedTextDatabase::getFonts(), TypedTextDatabase::getInstanceSize());
    }
}

void touchgfx::Texts::setTranslation(touchgfx::LanguageId id, const void* translation)
{
    languagesArray[id] = (const TranslationHeader*)translation;
}

const touchgfx::Unicode::UnicodeChar* touchgfx::Texts::getText(TypedTextId id) const
{
    return &currentLanguagePtr[currentLanguageIndices[id]];
}
