/*
 * Color library, ported from X11R6
 */

#ifndef _COLOR_H
#define _COLOR_H

#include <DisplayCore.h>

class Color {
    public: 
        const static color_t Snow                  = RGB(255,250,250);
        const static color_t GhostWhite            = RGB(248,248,255);
        const static color_t WhiteSmoke            = RGB(245,245,245);
        const static color_t Gainsboro             = RGB(220,220,220);
        const static color_t FloralWhite           = RGB(255,250,240);
        const static color_t OldLace               = RGB(253,245,230);
        const static color_t Linen                 = RGB(250,240,230);
        const static color_t AntiqueWhite          = RGB(250,235,215);
        const static color_t PapayaWhip            = RGB(255,239,213);
        const static color_t BlanchedAlmond        = RGB(255,235,205);
        const static color_t Bisque                = RGB(255,228,196);
        const static color_t PeachPuff             = RGB(255,218,185);
        const static color_t NavajoWhite           = RGB(255,222,173);
        const static color_t Moccasin              = RGB(255,228,181);
        const static color_t Cornsilk              = RGB(255,248,220);
        const static color_t Ivory                 = RGB(255,255,240);
        const static color_t LemonChiffon          = RGB(255,250,205);
        const static color_t Seashell              = RGB(255,245,238);
        const static color_t Honeydew              = RGB(240,255,240);
        const static color_t MintCream             = RGB(245,255,250);
        const static color_t Azure                 = RGB(240,255,255);
        const static color_t AliceBlue             = RGB(240,248,255);
        const static color_t Lavender              = RGB(230,230,250);
        const static color_t LavenderBlush         = RGB(255,240,245);
        const static color_t MistyRose             = RGB(255,228,225);
        const static color_t White                 = RGB(255,255,255);
        const static color_t Black                 = RGB(  0,  0,  0);
        const static color_t DarkSlateGray         = RGB( 47, 79, 79);
        const static color_t DimGray               = RGB(105,105,105);
        const static color_t SlateGray             = RGB(112,128,144);
        const static color_t LightSlateGray        = RGB(119,136,153);
        const static color_t Gray                  = RGB(190,190,190);
        const static color_t LightGray             = RGB(211,211,211);
        const static color_t MidnightBlue          = RGB( 25, 25,112);
        const static color_t Navy                  = RGB(  0,  0,128);
        const static color_t NavyBlue              = RGB(  0,  0,128);
        const static color_t CornflowerBlue        = RGB(100,149,237);
        const static color_t DarkSlateBlue         = RGB( 72, 61,139);
        const static color_t SlateBlue             = RGB(106, 90,205);
        const static color_t MediumSlateBlue       = RGB(123,104,238);
        const static color_t LightSlateBlue        = RGB(132,112,255);
        const static color_t MediumBlue            = RGB(  0,  0,205);
        const static color_t RoyalBlue             = RGB( 65,105,225);
        const static color_t Blue                  = RGB(  0,  0,255);
        const static color_t DodgerBlue            = RGB( 30,144,255);
        const static color_t DeepSkyBlue           = RGB(  0,191,255);
        const static color_t SkyBlue               = RGB(135,206,235);
        const static color_t LightSkyBlue          = RGB(135,206,250);
        const static color_t SteelBlue             = RGB( 70,130,180);
        const static color_t LightSteelBlue        = RGB(176,196,222);
        const static color_t LightBlue             = RGB(173,216,230);
        const static color_t PowderBlue            = RGB(176,224,230);
        const static color_t PaleTurquoise         = RGB(175,238,238);
        const static color_t DarkTurquoise         = RGB(  0,206,209);
        const static color_t MediumTurquoise       = RGB( 72,209,204);
        const static color_t Turquoise             = RGB( 64,224,208);
        const static color_t Cyan                  = RGB(  0,255,255);
        const static color_t LightCyan             = RGB(224,255,255);
        const static color_t CadetBlue             = RGB( 95,158,160);
        const static color_t MediumAquamarine      = RGB(102,205,170);
        const static color_t Aquamarine            = RGB(127,255,212);
        const static color_t DarkGreen             = RGB(  0,100,  0);
        const static color_t DarkOliveGreen        = RGB( 85,107, 47);
        const static color_t DarkSeaGreen          = RGB(143,188,143);
        const static color_t SeaGreen              = RGB( 46,139, 87);
        const static color_t MediumSeaGreen        = RGB( 60,179,113);
        const static color_t LightSeaGreen         = RGB( 32,178,170);
        const static color_t PaleGreen             = RGB(152,251,152);
        const static color_t SpringGreen           = RGB(  0,255,127);
        const static color_t LawnGreen             = RGB(124,252,  0);
        const static color_t Green                 = RGB(  0,255,  0);
        const static color_t Chartreuse            = RGB(127,255,  0);
        const static color_t MediumSpringGreen     = RGB(  0,250,154);
        const static color_t GreenYellow           = RGB(173,255, 47);
        const static color_t LimeGreen             = RGB( 50,205, 50);
        const static color_t YellowGreen           = RGB(154,205, 50);
        const static color_t ForestGreen           = RGB( 34,139, 34);
        const static color_t OliveDrab             = RGB(107,142, 35);
        const static color_t DarkKhaki             = RGB(189,183,107);
        const static color_t Khaki                 = RGB(240,230,140);
        const static color_t PaleGoldenrod         = RGB(238,232,170);
        const static color_t LightGoldenrodYellow  = RGB(250,250,210);
        const static color_t LightYellow           = RGB(255,255,224);
        const static color_t Yellow                = RGB(255,255,  0);
        const static color_t Gold                  = RGB(255,215,  0);
        const static color_t LightGoldenrod        = RGB(238,221,130);
        const static color_t Goldenrod             = RGB(218,165, 32);
        const static color_t DarkGoldenrod         = RGB(184,134, 11);
        const static color_t RosyBrown             = RGB(188,143,143);
        const static color_t IndianRed             = RGB(205, 92, 92);
        const static color_t SaddleBrown           = RGB(139, 69, 19);
        const static color_t Sienna                = RGB(160, 82, 45);
        const static color_t Peru                  = RGB(205,133, 63);
        const static color_t Burlywood             = RGB(222,184,135);
        const static color_t Beige                 = RGB(245,245,220);
        const static color_t Wheat                 = RGB(245,222,179);
        const static color_t SandyBrown            = RGB(244,164, 96);
        const static color_t Tan                   = RGB(210,180,140);
        const static color_t Chocolate             = RGB(210,105, 30);
        const static color_t Firebrick             = RGB(178, 34, 34);
        const static color_t Brown                 = RGB(165, 42, 42);
        const static color_t DarkSalmon            = RGB(233,150,122);
        const static color_t Salmon                = RGB(250,128,114);
        const static color_t LightSalmon           = RGB(255,160,122);
        const static color_t Orange                = RGB(255,165,  0);
        const static color_t DarkOrange            = RGB(255,140,  0);
        const static color_t Coral                 = RGB(255,127, 80);
        const static color_t LightCoral            = RGB(240,128,128);
        const static color_t Tomato                = RGB(255, 99, 71);
        const static color_t OrangeRed             = RGB(255, 69,  0);
        const static color_t Red                   = RGB(255,  0,  0);
        const static color_t HotPink               = RGB(255,105,180);
        const static color_t DeepPink              = RGB(255, 20,147);
        const static color_t Pink                  = RGB(255,192,203);
        const static color_t LightPink             = RGB(255,182,193);
        const static color_t PaleVioletRed         = RGB(219,112,147);
        const static color_t Maroon                = RGB(176, 48, 96);
        const static color_t MediumVioletRed       = RGB(199, 21,133);
        const static color_t VioletRed             = RGB(208, 32,144);
        const static color_t Magenta               = RGB(255,  0,255);
        const static color_t Violet                = RGB(238,130,238);
        const static color_t Plum                  = RGB(221,160,221);
        const static color_t Orchid                = RGB(218,112,214);
        const static color_t MediumOrchid          = RGB(186, 85,211);
        const static color_t DarkOrchid            = RGB(153, 50,204);
        const static color_t DarkViolet            = RGB(148,  0,211);
        const static color_t BlueViolet            = RGB(138, 43,226);
        const static color_t Purple                = RGB(160, 32,240);
        const static color_t MediumPurple          = RGB(147,112,219);
        const static color_t Thistle               = RGB(216,191,216);
        const static color_t Gray0                 = RGB(  0,  0,  0);
        const static color_t Gray1                 = RGB(  3,  3,  3);
        const static color_t Gray2                 = RGB(  5,  5,  5);
        const static color_t Gray3                 = RGB(  8,  8,  8);
        const static color_t Gray4                 = RGB( 10, 10, 10);
        const static color_t Gray5                 = RGB( 13, 13, 13);
        const static color_t Gray6                 = RGB( 15, 15, 15);
        const static color_t Gray7                 = RGB( 18, 18, 18);
        const static color_t Gray8                 = RGB( 20, 20, 20);
        const static color_t Gray9                 = RGB( 23, 23, 23);
        const static color_t Gray10                = RGB( 26, 26, 26);
        const static color_t Gray11                = RGB( 28, 28, 28);
        const static color_t Gray12                = RGB( 31, 31, 31);
        const static color_t Gray13                = RGB( 33, 33, 33);
        const static color_t Gray14                = RGB( 36, 36, 36);
        const static color_t Gray15                = RGB( 38, 38, 38);
        const static color_t Gray16                = RGB( 41, 41, 41);
        const static color_t Gray17                = RGB( 43, 43, 43);
        const static color_t Gray18                = RGB( 46, 46, 46);
        const static color_t Gray19                = RGB( 48, 48, 48);
        const static color_t Gray20                = RGB( 51, 51, 51);
        const static color_t Gray21                = RGB( 54, 54, 54);
        const static color_t Gray22                = RGB( 56, 56, 56);
        const static color_t Gray23                = RGB( 59, 59, 59);
        const static color_t Gray24                = RGB( 61, 61, 61);
        const static color_t Gray25                = RGB( 64, 64, 64);
        const static color_t Gray26                = RGB( 66, 66, 66);
        const static color_t Gray27                = RGB( 69, 69, 69);
        const static color_t Gray28                = RGB( 71, 71, 71);
        const static color_t Gray29                = RGB( 74, 74, 74);
        const static color_t Gray30                = RGB( 77, 77, 77);
        const static color_t Gray31                = RGB( 79, 79, 79);
        const static color_t Gray32                = RGB( 82, 82, 82);
        const static color_t Gray33                = RGB( 84, 84, 84);
        const static color_t Gray34                = RGB( 87, 87, 87);
        const static color_t Gray35                = RGB( 89, 89, 89);
        const static color_t Gray36                = RGB( 92, 92, 92);
        const static color_t Gray37                = RGB( 94, 94, 94);
        const static color_t Gray38                = RGB( 97, 97, 97);
        const static color_t Gray39                = RGB( 99, 99, 99);
        const static color_t Gray40                = RGB(102,102,102);
        const static color_t Gray41                = RGB(105,105,105);
        const static color_t Gray42                = RGB(107,107,107);
        const static color_t Gray43                = RGB(110,110,110);
        const static color_t Gray44                = RGB(112,112,112);
        const static color_t Gray45                = RGB(115,115,115);
        const static color_t Gray46                = RGB(117,117,117);
        const static color_t Gray47                = RGB(120,120,120);
        const static color_t Gray48                = RGB(122,122,122);
        const static color_t Gray49                = RGB(125,125,125);
        const static color_t Gray50                = RGB(127,127,127);
        const static color_t Gray51                = RGB(130,130,130);
        const static color_t Gray52                = RGB(133,133,133);
        const static color_t Gray53                = RGB(135,135,135);
        const static color_t Gray54                = RGB(138,138,138);
        const static color_t Gray55                = RGB(140,140,140);
        const static color_t Gray56                = RGB(143,143,143);
        const static color_t Gray57                = RGB(145,145,145);
        const static color_t Gray58                = RGB(148,148,148);
        const static color_t Gray59                = RGB(150,150,150);
        const static color_t Gray60                = RGB(153,153,153);
        const static color_t Gray61                = RGB(156,156,156);
        const static color_t Gray62                = RGB(158,158,158);
        const static color_t Gray63                = RGB(161,161,161);
        const static color_t Gray64                = RGB(163,163,163);
        const static color_t Gray65                = RGB(166,166,166);
        const static color_t Gray66                = RGB(168,168,168);
        const static color_t Gray67                = RGB(171,171,171);
        const static color_t Gray68                = RGB(173,173,173);
        const static color_t Gray69                = RGB(176,176,176);
        const static color_t Gray70                = RGB(179,179,179);
        const static color_t Gray71                = RGB(181,181,181);
        const static color_t Gray72                = RGB(184,184,184);
        const static color_t Gray73                = RGB(186,186,186);
        const static color_t Gray74                = RGB(189,189,189);
        const static color_t Gray75                = RGB(191,191,191);
        const static color_t Gray76                = RGB(194,194,194);
        const static color_t Gray77                = RGB(196,196,196);
        const static color_t Gray78                = RGB(199,199,199);
        const static color_t Gray79                = RGB(201,201,201);
        const static color_t Gray80                = RGB(204,204,204);
        const static color_t Gray81                = RGB(207,207,207);
        const static color_t Gray82                = RGB(209,209,209);
        const static color_t Gray83                = RGB(212,212,212);
        const static color_t Gray84                = RGB(214,214,214);
        const static color_t Gray85                = RGB(217,217,217);
        const static color_t Gray86                = RGB(219,219,219);
        const static color_t Gray87                = RGB(222,222,222);
        const static color_t Gray88                = RGB(224,224,224);
        const static color_t Gray89                = RGB(227,227,227);
        const static color_t Gray90                = RGB(229,229,229);
        const static color_t Gray91                = RGB(232,232,232);
        const static color_t Gray92                = RGB(235,235,235);
        const static color_t Gray93                = RGB(237,237,237);
        const static color_t Gray94                = RGB(240,240,240);
        const static color_t Gray95                = RGB(242,242,242);
        const static color_t Gray96                = RGB(245,245,245);
        const static color_t Gray97                = RGB(247,247,247);
        const static color_t Gray98                = RGB(250,250,250);
        const static color_t Gray99                = RGB(252,252,252);
        const static color_t Gray100               = RGB(255,255,255);
        const static color_t DarkGray              = RGB(169,169,169);
        const static color_t DarkBlue              = RGB(0  ,  0,139);
        const static color_t DarkCyan              = RGB(0  ,139,139);
        const static color_t DarkMagenta           = RGB(139,  0,139);
        const static color_t DarkRed               = RGB(139,  0,  0);
        const static color_t LightGreen            = RGB(144,238,144);
        const static color_t Sepia                 = RGB(112, 66, 20);
};
#endif