/* DO NOT EDIT THIS FILE */
/* This file is autogenerated by the text-database code generator */

#ifndef TOUCHGFX_APPLICATIONFONTPROVIDER_HPP
#define TOUCHGFX_APPLICATIONFONTPROVIDER_HPP

#include <touchgfx/FontManager.hpp>

namespace touchgfx
{
class FlashDataReader;
}

struct Typography
{
    static const touchgfx::FontId DEFAULT = 0;
    static const touchgfx::FontId LARGE = 1;
    static const touchgfx::FontId SMALL = 2;
    static const touchgfx::FontId TEMP = 3;
    static const touchgfx::FontId STATUS = 4;
    static const touchgfx::FontId VALORES = 5;
    static const touchgfx::FontId TELA_INICIAL = 6;
    static const touchgfx::FontId BOTAO_INICIAR = 7;
};

struct TypographyFontIndex
{
    static const touchgfx::FontId DEFAULT = 0;       // ariblk_15_4bpp
    static const touchgfx::FontId LARGE = 1;         // calibrib_36_4bpp
    static const touchgfx::FontId SMALL = 2;         // arialbd_11_4bpp
    static const touchgfx::FontId TEMP = 3;          // arialbd_14_4bpp
    static const touchgfx::FontId STATUS = 4;        // verdana_14_4bpp
    static const touchgfx::FontId VALORES = 5;       // ariblk_20_4bpp
    static const touchgfx::FontId TELA_INICIAL = 6;  // arial_20_4bpp
    static const touchgfx::FontId BOTAO_INICIAR = 7; // arialbd_15_4bpp
    static const uint16_t NUMBER_OF_FONTS = 8;
};

class ApplicationFontProvider : public touchgfx::FontProvider
{
public:
    virtual touchgfx::Font* getFont(touchgfx::FontId typography);

    static void setFlashReader(touchgfx::FlashDataReader* /* flashReader */)
    {
    }
    static touchgfx::FlashDataReader* getFlashReader()
    {
        return 0;
    }
};

#endif // TOUCHGFX_APPLICATIONFONTPROVIDER_HPP
