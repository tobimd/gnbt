#ifndef __CONSTANTS_H__
#define __CONSTANTS_H__

namespace gnbt
{
    namespace fonts
    {
        struct FontAsset
        {
            char const *black{};
            char const *blackItalic{};
            char const *blackBold{};
            char const *blackBoldItalic{};
            char const *extraBold{};
            char const *extraBoldItalic{};
            char const *bold{};
            char const *boldItalic{};
            char const *semiBold{};
            char const *semiBoldItalic{};
            char const *medium{};
            char const *mediumItalic{};
            char const *regular{};
            char const *regularItalic{};
            char const *italic{};
            char const *light{};
            char const *lightItalic{};
            char const *extraLight{};
            char const *extraLightItalic{};
            char const *thin{};
        };

        const FontAsset arvo = {
            .bold = "assets/fonts/Arvo/Arvo-Bold.ttf",
            .boldItalic = "assets/fonts/Arvo/Arvo-BoldItalic.ttf",
            .regular = "assets/fonts/Arvo/Arvo-Regular.ttf",
            .italic = "assets/fonts/Arvo/Arvo-Italic.ttf",
        };

        const FontAsset robotoSlab = {
            .black = "assets/fonts/RobotoSlab/RobotoSlab-Black.ttf",
            .extraBold = "assets/fonts/RobotoSlab/RobotoSlab-ExtraBold.ttf",
            .bold = "assets/fonts/RobotoSlab/RobotoSlab-Bold.ttf",
            .semiBold = "assets/fonts/RobotoSlab/RobotoSlab-SemiBold.ttf",
            .medium = "assets/fonts/RobotoSlab/RobotoSlab-Medium.ttf",
            .regular = "assets/fonts/RobotoSlab/RobotoSlab-Regular.ttf",
            .light = "assets/fonts/RobotoSlab/RobotoSlab-Light.ttf",
            .extraLight = "assets/fonts/RobotoSlab/RobotoSlab-ExtraLight.ttf",
            .thin = "assets/fonts/RobotoSlab/RobotoSlab-Thin.ttf",
        };

        const FontAsset sourceCodePro = {
            .black = "assets/fonts/SourceCodePro/SourceCodePro-Black.ttf",
            .blackItalic = "assets/fonts/SourceCodePro/SourceCodePro-BlackItalic.ttf",
            .extraBold = "assets/fonts/SourceCodePro/SourceCodePro-ExtraBold.ttf",
            .extraBoldItalic = "assets/fonts/SourceCodePro/SourceCodePro-ExtraBoldItalic.ttf",
            .bold = "assets/fonts/SourceCodePro/SourceCodePro-Bold.ttf",
            .boldItalic = "assets/fonts/SourceCodePro/SourceCodePro-BoldItalic.ttf",
            .semiBold = "assets/fonts/SourceCodePro/SourceCodePro-SemiBold.ttf",
            .semiBoldItalic = "assets/fonts/SourceCodePro/SourceCodePro-SemiBoldItalic.ttf",
            .medium = "assets/fonts/SourceCodePro/SourceCodePro-Medium.ttf",
            .mediumItalic = "assets/fonts/SourceCodePro/SourceCodePro-MediumItalic.ttf",
            .regular = "assets/fonts/SourceCodePro/SourceCodePro-Regular.ttf",
            .italic = "assets/fonts/SourceCodePro/SourceCodePro-Italic.ttf",
            .light = "assets/fonts/SourceCodePro/SourceCodePro-Light.ttf",
            .lightItalic = "assets/fonts/SourceCodePro/SourceCodePro-LightItalic.ttf",
            .extraLight = "assets/fonts/SourceCodePro/SourceCodePro-ExtraLight.ttf",
            .extraLightItalic = "assets/fonts/SourceCodePro/SourceCodePro-ExtraLightItalic.ttf",
        };
    } // namespace font

    char const *windowTitle = "gNBT - Minecraft NBT tool";

} // namespace ggnbt

#endif // __CONSTANTS_H__