// THIS FILE WAS GENERATED AUTOMATICALLY. DO NOT EDIT.

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                       hello_imgui.h                                                                          //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                       hello_imgui/hello_imgui_assets.h included by hello_imgui.h                             //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <string>

namespace HelloImGui
{
/**
@@md#AssetsStructure

Assets located beside the application CMakeLists are embedded automatically.

For example, you can have the following project structure:
````
my_app/
├── CMakeLists.txt        # Your app's CMakeLists
├── assets/               # Its assets: for mobile devices and emscripten
│   └── fonts/            # they are embedded automatically by hello_imgui_add_app.cmake
│       └── my_font.ttf
├── my_app.main.cpp       # Its source code
````

Then you can load the asset "fonts/my_font.ttf", on all platforms.
@@md
*/


/**
@@md#LoadAssetFileData

* `AssetFileData LoadAssetFileData(const char *assetPath)` will load an entire asset file into memory.
 This works on all platforms, including android.
 ````cpp
    struct AssetFileData
    {
        void * data = nullptr;
        size_t dataSize = 0;
    };
 ````
* `FreeAssetFileData(AssetFileData * assetFileData)` will free the memory.

  Note about ImGui: "ImGui::GetIO().Fonts->AddFontFromMemoryTTF" takes ownership of the data
  and will free the memory for you.

@@md
**/
struct AssetFileData
{
    void * data = nullptr;
    size_t dataSize = 0;
};

AssetFileData LoadAssetFileData(const char *assetPath);
void FreeAssetFileData(AssetFileData * assetFileData);



/**
@@md#assetFileFullPath
  `std::string assetFileFullPath(const std::string& assetRelativeFilename)` will return the path to assets.

 This works under all platforms __except Android__.
 For compatibility with Android and other platforms, prefer to use `LoadAssetFileData` whenever possible.

* Under iOS it will give a path in the app bundle (/private/XXX/....)
* Under emscripten, it will be stored in the virtual filesystem at "/"
* Under Android, assetFileFullPath is *not* implemented, and will throw an error:
  assets can be compressed under android, and you cannot use standard file operations!
  Use LoadAssetFileData instead
@@md
*/
std::string assetFileFullPath(const std::string& assetRelativeFilename);


extern std::string gAssetsSubfolderFolderName;  // "assets" by default

// Advanced: forces the assets folder location
// (when using this, automatic assets installation on mobile platforms may not work)
void overrideAssetsFolder(const char* folder);

} // namespace HelloImGui

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                       hello_imgui.h continued                                                                //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                       hello_imgui/hello_imgui_error.h included by hello_imgui.h                              //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdexcept>
#include <iostream>

#define HIMG_THROW(msg) \
    { \
        std::cerr << "throw runtime_error: " << msg << "\t\t at " << __FILE__ << ":" << __LINE__ << "\n"; \
        throw std::runtime_error(msg); \
    }

#define HIMG_THROW_STRING(...) \
    HIMG_THROW((__VA_ARGS__));

#ifdef __EMSCRIPTEN__
// Log utilities for emscripten, where the best debug tool is printf


#define HIMG_LOG(...) \
{\
    std::cout << "HIMG_LOG: " << __VA_ARGS__ << "\t\t at " << __FILE__ << ":" << __LINE__ << "\n"; \
}

#define HIMG_LOG_VALUE(...) \
{\
    std::cout << "HIMG_LOG_VALUE: " << #__VA_ARGS__ << "=" << (__VA_ARGS__) << "\t\t at " << __FILE__ << ":" << __LINE__ << "\n"; \
}

#define HIMG_LOG_POINTER(value) \
{\
    std::cout << "HIMG_LOG_POINTEr: " << #value << "=" << (size_t)(void *)value << "\t\t at " << __FILE__ << ":" << __LINE__ << "\n"; \
}

#else
#define HIMG_LOG(...) {}
#define HIMG_LOG_VALUE(...) {}
#define HIMG_LOG_POINTER(value) {}
#endif

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                       hello_imgui.h continued                                                                //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                       hello_imgui/icons_font_awesome.h included by hello_imgui.h                             //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Generated by https://github.com/juliettef/IconFontCppHeaders script
// GenerateIconFontCppHeaders.py for language C89 from
// https://raw.githubusercontent.com/FortAwesome/Font-Awesome/master/metadata/icons.yml
// for use with
// https://github.com/FortAwesome/Font-Awesome/blob/master/webfonts/fa-solid-900.ttf,
// https://github.com/FortAwesome/Font-Awesome/blob/master/webfonts/fa-regular-400.ttf,

#define FONT_ICON_FILE_NAME_FAR "fa-regular-400.ttf"
#define FONT_ICON_FILE_NAME_FAS "fa-solid-900.ttf"

#define ICON_MIN_FA 0xf000
#define ICON_MAX_FA 0xf897
#define ICON_FA_CLOUD_SHOWERS_HEAVY "\xEF\x9D\x80"
#define ICON_FA_CHEVRON_CIRCLE_RIGHT "\xEF\x84\xB8"
#define ICON_FA_DHARMACHAKRA "\xEF\x99\x95"
#define ICON_FA_BROADCAST_TOWER "\xEF\x94\x99"
#define ICON_FA_EXTERNAL_LINK_SQUARE_ALT "\xEF\x8D\xA0"
#define ICON_FA_SMOKING "\xEF\x92\x8D"
#define ICON_FA_PENCIL_ALT "\xEF\x8C\x83"
#define ICON_FA_CHESS_BISHOP "\xEF\x90\xBA"
#define ICON_FA_ICONS "\xEF\xA1\xAD"
#define ICON_FA_TV "\xEF\x89\xAC"
#define ICON_FA_CROP_ALT "\xEF\x95\xA5"
#define ICON_FA_LIST "\xEF\x80\xBA"
#define ICON_FA_BATTERY_QUARTER "\xEF\x89\x83"
#define ICON_FA_TH "\xEF\x80\x8A"
#define ICON_FA_RECYCLE "\xEF\x86\xB8"
#define ICON_FA_SMILE "\xEF\x84\x98"
#define ICON_FA_FAX "\xEF\x86\xAC"
#define ICON_FA_DRAFTING_COMPASS "\xEF\x95\xA8"
#define ICON_FA_USER_INJURED "\xEF\x9C\xA8"
#define ICON_FA_SCREWDRIVER "\xEF\x95\x8A"
#define ICON_FA_CROSSHAIRS "\xEF\x81\x9B"
#define ICON_FA_HAND_PEACE "\xEF\x89\x9B"
#define ICON_FA_FAN "\xEF\xA1\xA3"
#define ICON_FA_GOPURAM "\xEF\x99\xA4"
#define ICON_FA_CARET_UP "\xEF\x83\x98"
#define ICON_FA_SCHOOL "\xEF\x95\x89"
#define ICON_FA_FILE_PDF "\xEF\x87\x81"
#define ICON_FA_USERS_COG "\xEF\x94\x89"
#define ICON_FA_BALANCE_SCALE "\xEF\x89\x8E"
#define ICON_FA_UPLOAD "\xEF\x82\x93"
#define ICON_FA_LAPTOP_MEDICAL "\xEF\xA0\x92"
#define ICON_FA_VENUS "\xEF\x88\xA1"
#define ICON_FA_HEADING "\xEF\x87\x9C"
#define ICON_FA_ARROW_DOWN "\xEF\x81\xA3"
#define ICON_FA_BICYCLE "\xEF\x88\x86"
#define ICON_FA_TIRED "\xEF\x97\x88"
#define ICON_FA_COMMENT_MEDICAL "\xEF\x9F\xB5"
#define ICON_FA_BACON "\xEF\x9F\xA5"
#define ICON_FA_SYNC "\xEF\x80\xA1"
#define ICON_FA_PAPER_PLANE "\xEF\x87\x98"
#define ICON_FA_VOLLEYBALL_BALL "\xEF\x91\x9F"
#define ICON_FA_RIBBON "\xEF\x93\x96"
#define ICON_FA_SQUARE_ROOT_ALT "\xEF\x9A\x98"
#define ICON_FA_SUN "\xEF\x86\x85"
#define ICON_FA_FILE_POWERPOINT "\xEF\x87\x84"
#define ICON_FA_MICROCHIP "\xEF\x8B\x9B"
#define ICON_FA_TRASH_RESTORE_ALT "\xEF\xA0\xAA"
#define ICON_FA_GRADUATION_CAP "\xEF\x86\x9D"
#define ICON_FA_INFO_CIRCLE "\xEF\x81\x9A"
#define ICON_FA_TAGS "\xEF\x80\xAC"
#define ICON_FA_HAND_PAPER "\xEF\x89\x96"
#define ICON_FA_EQUALS "\xEF\x94\xAC"
#define ICON_FA_DIRECTIONS "\xEF\x97\xAB"
#define ICON_FA_FILE_INVOICE "\xEF\x95\xB0"
#define ICON_FA_SEARCH "\xEF\x80\x82"
#define ICON_FA_BIBLE "\xEF\x99\x87"
#define ICON_FA_WEIGHT_HANGING "\xEF\x97\x8D"
#define ICON_FA_CALENDAR_TIMES "\xEF\x89\xB3"
#define ICON_FA_GREATER_THAN_EQUAL "\xEF\x94\xB2"
#define ICON_FA_SLIDERS_H "\xEF\x87\x9E"
#define ICON_FA_EYE_SLASH "\xEF\x81\xB0"
#define ICON_FA_BIRTHDAY_CAKE "\xEF\x87\xBD"
#define ICON_FA_FEATHER_ALT "\xEF\x95\xAB"
#define ICON_FA_DNA "\xEF\x91\xB1"
#define ICON_FA_BASEBALL_BALL "\xEF\x90\xB3"
#define ICON_FA_HOSPITAL "\xEF\x83\xB8"
#define ICON_FA_COINS "\xEF\x94\x9E"
#define ICON_FA_TEMPERATURE_HIGH "\xEF\x9D\xA9"
#define ICON_FA_FONT_AWESOME_LOGO_FULL "\xEF\x93\xA6"
#define ICON_FA_PASSPORT "\xEF\x96\xAB"
#define ICON_FA_SHOPPING_CART "\xEF\x81\xBA"
#define ICON_FA_AWARD "\xEF\x95\x99"
#define ICON_FA_WINDOW_RESTORE "\xEF\x8B\x92"
#define ICON_FA_PHONE "\xEF\x82\x95"
#define ICON_FA_FLAG "\xEF\x80\xA4"
#define ICON_FA_FILE_INVOICE_DOLLAR "\xEF\x95\xB1"
#define ICON_FA_DICE_D6 "\xEF\x9B\x91"
#define ICON_FA_OUTDENT "\xEF\x80\xBB"
#define ICON_FA_LONG_ARROW_ALT_RIGHT "\xEF\x8C\x8B"
#define ICON_FA_PIZZA_SLICE "\xEF\xA0\x98"
#define ICON_FA_ADDRESS_CARD "\xEF\x8A\xBB"
#define ICON_FA_PARAGRAPH "\xEF\x87\x9D"
#define ICON_FA_MALE "\xEF\x86\x83"
#define ICON_FA_HISTORY "\xEF\x87\x9A"
#define ICON_FA_USER_TIE "\xEF\x94\x88"
#define ICON_FA_SEARCH_PLUS "\xEF\x80\x8E"
#define ICON_FA_LIFE_RING "\xEF\x87\x8D"
#define ICON_FA_STEP_FORWARD "\xEF\x81\x91"
#define ICON_FA_MOUSE_POINTER "\xEF\x89\x85"
#define ICON_FA_ALIGN_JUSTIFY "\xEF\x80\xB9"
#define ICON_FA_TOILET_PAPER "\xEF\x9C\x9E"
#define ICON_FA_BATTERY_THREE_QUARTERS "\xEF\x89\x81"
#define ICON_FA_OBJECT_UNGROUP "\xEF\x89\x88"
#define ICON_FA_BRIEFCASE "\xEF\x82\xB1"
#define ICON_FA_OIL_CAN "\xEF\x98\x93"
#define ICON_FA_THERMOMETER_FULL "\xEF\x8B\x87"
#define ICON_FA_SNOWBOARDING "\xEF\x9F\x8E"
#define ICON_FA_UNLINK "\xEF\x84\xA7"
#define ICON_FA_WINDOW_MAXIMIZE "\xEF\x8B\x90"
#define ICON_FA_YEN_SIGN "\xEF\x85\x97"
#define ICON_FA_SHARE_ALT_SQUARE "\xEF\x87\xA1"
#define ICON_FA_STEP_BACKWARD "\xEF\x81\x88"
#define ICON_FA_DRAGON "\xEF\x9B\x95"
#define ICON_FA_MICROPHONE_SLASH "\xEF\x84\xB1"
#define ICON_FA_USER_PLUS "\xEF\x88\xB4"
#define ICON_FA_WRENCH "\xEF\x82\xAD"
#define ICON_FA_AMBULANCE "\xEF\x83\xB9"
#define ICON_FA_ETHERNET "\xEF\x9E\x96"
#define ICON_FA_EGG "\xEF\x9F\xBB"
#define ICON_FA_WIND "\xEF\x9C\xAE"
#define ICON_FA_UNIVERSAL_ACCESS "\xEF\x8A\x9A"
#define ICON_FA_BURN "\xEF\x91\xAA"
#define ICON_FA_RADIATION "\xEF\x9E\xB9"
#define ICON_FA_DICE_ONE "\xEF\x94\xA5"
#define ICON_FA_KEYBOARD "\xEF\x84\x9C"
#define ICON_FA_CHECK_DOUBLE "\xEF\x95\xA0"
#define ICON_FA_HEADPHONES_ALT "\xEF\x96\x8F"
#define ICON_FA_BATTERY_HALF "\xEF\x89\x82"
#define ICON_FA_PROJECT_DIAGRAM "\xEF\x95\x82"
#define ICON_FA_PRAY "\xEF\x9A\x83"
#define ICON_FA_PHONE_ALT "\xEF\xA1\xB9"
#define ICON_FA_BABY_CARRIAGE "\xEF\x9D\xBD"
#define ICON_FA_TH_LIST "\xEF\x80\x8B"
#define ICON_FA_GRIN_TEARS "\xEF\x96\x88"
#define ICON_FA_SORT_AMOUNT_UP "\xEF\x85\xA1"
#define ICON_FA_COFFEE "\xEF\x83\xB4"
#define ICON_FA_TABLET_ALT "\xEF\x8F\xBA"
#define ICON_FA_GRIN_BEAM_SWEAT "\xEF\x96\x83"
#define ICON_FA_HAND_POINT_RIGHT "\xEF\x82\xA4"
#define ICON_FA_GRIN_STARS "\xEF\x96\x87"
#define ICON_FA_CHARGING_STATION "\xEF\x97\xA7"
#define ICON_FA_VOTE_YEA "\xEF\x9D\xB2"
#define ICON_FA_VOLUME_OFF "\xEF\x80\xA6"
#define ICON_FA_SAD_TEAR "\xEF\x96\xB4"
#define ICON_FA_CARET_RIGHT "\xEF\x83\x9A"
#define ICON_FA_BONG "\xEF\x95\x9C"
#define ICON_FA_BONE "\xEF\x97\x97"
#define ICON_FA_WEIGHT "\xEF\x92\x96"
#define ICON_FA_CARET_SQUARE_RIGHT "\xEF\x85\x92"
#define ICON_FA_FISH "\xEF\x95\xB8"
#define ICON_FA_SPIDER "\xEF\x9C\x97"
#define ICON_FA_QRCODE "\xEF\x80\xA9"
#define ICON_FA_SPINNER "\xEF\x84\x90"
#define ICON_FA_ELLIPSIS_H "\xEF\x85\x81"
#define ICON_FA_RUPEE_SIGN "\xEF\x85\x96"
#define ICON_FA_ASSISTIVE_LISTENING_SYSTEMS "\xEF\x8A\xA2"
#define ICON_FA_SMS "\xEF\x9F\x8D"
#define ICON_FA_POUND_SIGN "\xEF\x85\x94"
#define ICON_FA_HAND_POINT_DOWN "\xEF\x82\xA7"
#define ICON_FA_ADJUST "\xEF\x81\x82"
#define ICON_FA_PRINT "\xEF\x80\xAF"
#define ICON_FA_SURPRISE "\xEF\x97\x82"
#define ICON_FA_SORT_NUMERIC_UP "\xEF\x85\xA3"
#define ICON_FA_VIDEO_SLASH "\xEF\x93\xA2"
#define ICON_FA_SUBWAY "\xEF\x88\xB9"
#define ICON_FA_SORT_AMOUNT_DOWN "\xEF\x85\xA0"
#define ICON_FA_WINE_BOTTLE "\xEF\x9C\xAF"
#define ICON_FA_BOOK_READER "\xEF\x97\x9A"
#define ICON_FA_COOKIE "\xEF\x95\xA3"
#define ICON_FA_MONEY_BILL "\xEF\x83\x96"
#define ICON_FA_CHEVRON_DOWN "\xEF\x81\xB8"
#define ICON_FA_CAR_SIDE "\xEF\x97\xA4"
#define ICON_FA_FILTER "\xEF\x82\xB0"
#define ICON_FA_FOLDER_OPEN "\xEF\x81\xBC"
#define ICON_FA_SIGNATURE "\xEF\x96\xB7"
#define ICON_FA_HEARTBEAT "\xEF\x88\x9E"
#define ICON_FA_THUMBTACK "\xEF\x82\x8D"
#define ICON_FA_USER "\xEF\x80\x87"
#define ICON_FA_LAUGH_WINK "\xEF\x96\x9C"
#define ICON_FA_BREAD_SLICE "\xEF\x9F\xAC"
#define ICON_FA_TEXT_HEIGHT "\xEF\x80\xB4"
#define ICON_FA_VOLUME_MUTE "\xEF\x9A\xA9"
#define ICON_FA_GRIN_TONGUE "\xEF\x96\x89"
#define ICON_FA_CAMPGROUND "\xEF\x9A\xBB"
#define ICON_FA_MERCURY "\xEF\x88\xA3"
#define ICON_FA_USER_ASTRONAUT "\xEF\x93\xBB"
#define ICON_FA_HORSE "\xEF\x9B\xB0"
#define ICON_FA_SORT_DOWN "\xEF\x83\x9D"
#define ICON_FA_PERCENTAGE "\xEF\x95\x81"
#define ICON_FA_AIR_FRESHENER "\xEF\x97\x90"
#define ICON_FA_STORE "\xEF\x95\x8E"
#define ICON_FA_COMMENT_DOTS "\xEF\x92\xAD"
#define ICON_FA_SMILE_WINK "\xEF\x93\x9A"
#define ICON_FA_HOTEL "\xEF\x96\x94"
#define ICON_FA_PEPPER_HOT "\xEF\xA0\x96"
#define ICON_FA_CUBES "\xEF\x86\xB3"
#define ICON_FA_DUMPSTER_FIRE "\xEF\x9E\x94"
#define ICON_FA_CLOUD_SUN_RAIN "\xEF\x9D\x83"
#define ICON_FA_GLOBE_ASIA "\xEF\x95\xBE"
#define ICON_FA_VIAL "\xEF\x92\x92"
#define ICON_FA_STROOPWAFEL "\xEF\x95\x91"
#define ICON_FA_CALENDAR_MINUS "\xEF\x89\xB2"
#define ICON_FA_TREE "\xEF\x86\xBB"
#define ICON_FA_SHOWER "\xEF\x8B\x8C"
#define ICON_FA_DRUM_STEELPAN "\xEF\x95\xAA"
#define ICON_FA_FILE_UPLOAD "\xEF\x95\xB4"
#define ICON_FA_MEDKIT "\xEF\x83\xBA"
#define ICON_FA_MINUS "\xEF\x81\xA8"
#define ICON_FA_SHEKEL_SIGN "\xEF\x88\x8B"
#define ICON_FA_USER_NINJA "\xEF\x94\x84"
#define ICON_FA_KAABA "\xEF\x99\xAB"
#define ICON_FA_BELL_SLASH "\xEF\x87\xB6"
#define ICON_FA_SPELL_CHECK "\xEF\xA2\x91"
#define ICON_FA_MAIL_BULK "\xEF\x99\xB4"
#define ICON_FA_MOUNTAIN "\xEF\x9B\xBC"
#define ICON_FA_COUCH "\xEF\x92\xB8"
#define ICON_FA_CHESS "\xEF\x90\xB9"
#define ICON_FA_FILE_EXPORT "\xEF\x95\xAE"
#define ICON_FA_SIGN_LANGUAGE "\xEF\x8A\xA7"
#define ICON_FA_SNOWFLAKE "\xEF\x8B\x9C"
#define ICON_FA_PLAY "\xEF\x81\x8B"
#define ICON_FA_HEADSET "\xEF\x96\x90"
#define ICON_FA_CHART_BAR "\xEF\x82\x80"
#define ICON_FA_WAVE_SQUARE "\xEF\xA0\xBE"
#define ICON_FA_CHART_AREA "\xEF\x87\xBE"
#define ICON_FA_EURO_SIGN "\xEF\x85\x93"
#define ICON_FA_CHESS_KING "\xEF\x90\xBF"
#define ICON_FA_MOBILE "\xEF\x84\x8B"
#define ICON_FA_CLOCK "\xEF\x80\x97"
#define ICON_FA_BOX_OPEN "\xEF\x92\x9E"
#define ICON_FA_DOG "\xEF\x9B\x93"
#define ICON_FA_FUTBOL "\xEF\x87\xA3"
#define ICON_FA_LIRA_SIGN "\xEF\x86\x95"
#define ICON_FA_LIGHTBULB "\xEF\x83\xAB"
#define ICON_FA_BOMB "\xEF\x87\xA2"
#define ICON_FA_MITTEN "\xEF\x9E\xB5"
#define ICON_FA_TRUCK_MONSTER "\xEF\x98\xBB"
#define ICON_FA_RANDOM "\xEF\x81\xB4"
#define ICON_FA_CHESS_ROOK "\xEF\x91\x87"
#define ICON_FA_FIRE_EXTINGUISHER "\xEF\x84\xB4"
#define ICON_FA_ARROWS_ALT_V "\xEF\x8C\xB8"
#define ICON_FA_ICICLES "\xEF\x9E\xAD"
#define ICON_FA_FONT "\xEF\x80\xB1"
#define ICON_FA_CAMERA_RETRO "\xEF\x82\x83"
#define ICON_FA_BLENDER "\xEF\x94\x97"
#define ICON_FA_THUMBS_DOWN "\xEF\x85\xA5"
#define ICON_FA_ROCKET "\xEF\x84\xB5"
#define ICON_FA_COPYRIGHT "\xEF\x87\xB9"
#define ICON_FA_TRAM "\xEF\x9F\x9A"
#define ICON_FA_JEDI "\xEF\x99\xA9"
#define ICON_FA_HOCKEY_PUCK "\xEF\x91\x93"
#define ICON_FA_STOP_CIRCLE "\xEF\x8A\x8D"
#define ICON_FA_BEZIER_CURVE "\xEF\x95\x9B"
#define ICON_FA_FOLDER "\xEF\x81\xBB"
#define ICON_FA_CALENDAR_CHECK "\xEF\x89\xB4"
#define ICON_FA_YIN_YANG "\xEF\x9A\xAD"
#define ICON_FA_COLUMNS "\xEF\x83\x9B"
#define ICON_FA_GLASS_CHEERS "\xEF\x9E\x9F"
#define ICON_FA_GRIN_WINK "\xEF\x96\x8C"
#define ICON_FA_STOP "\xEF\x81\x8D"
#define ICON_FA_MONEY_CHECK_ALT "\xEF\x94\xBD"
#define ICON_FA_COMPASS "\xEF\x85\x8E"
#define ICON_FA_TOOLBOX "\xEF\x95\x92"
#define ICON_FA_LIST_OL "\xEF\x83\x8B"
#define ICON_FA_WINE_GLASS "\xEF\x93\xA3"
#define ICON_FA_HORSE_HEAD "\xEF\x9E\xAB"
#define ICON_FA_USER_ALT_SLASH "\xEF\x93\xBA"
#define ICON_FA_USER_TAG "\xEF\x94\x87"
#define ICON_FA_MICROSCOPE "\xEF\x98\x90"
#define ICON_FA_BRUSH "\xEF\x95\x9D"
#define ICON_FA_BAN "\xEF\x81\x9E"
#define ICON_FA_BARS "\xEF\x83\x89"
#define ICON_FA_CAR_CRASH "\xEF\x97\xA1"
#define ICON_FA_ARROW_ALT_CIRCLE_DOWN "\xEF\x8D\x98"
#define ICON_FA_MONEY_BILL_ALT "\xEF\x8F\x91"
#define ICON_FA_JOURNAL_WHILLS "\xEF\x99\xAA"
#define ICON_FA_CHALKBOARD_TEACHER "\xEF\x94\x9C"
#define ICON_FA_PORTRAIT "\xEF\x8F\xA0"
#define ICON_FA_BALANCE_SCALE_LEFT "\xEF\x94\x95"
#define ICON_FA_HAMMER "\xEF\x9B\xA3"
#define ICON_FA_RETWEET "\xEF\x81\xB9"
#define ICON_FA_HOURGLASS "\xEF\x89\x94"
#define ICON_FA_BORDER_NONE "\xEF\xA1\x90"
#define ICON_FA_FILE_ALT "\xEF\x85\x9C"
#define ICON_FA_SUBSCRIPT "\xEF\x84\xAC"
#define ICON_FA_DONATE "\xEF\x92\xB9"
#define ICON_FA_GLASS_MARTINI_ALT "\xEF\x95\xBB"
#define ICON_FA_CODE_BRANCH "\xEF\x84\xA6"
#define ICON_FA_MEH "\xEF\x84\x9A"
#define ICON_FA_LIST_ALT "\xEF\x80\xA2"
#define ICON_FA_USER_COG "\xEF\x93\xBE"
#define ICON_FA_PRESCRIPTION "\xEF\x96\xB1"
#define ICON_FA_TABLET "\xEF\x84\x8A"
#define ICON_FA_LAUGH_SQUINT "\xEF\x96\x9B"
#define ICON_FA_CREDIT_CARD "\xEF\x82\x9D"
#define ICON_FA_ARCHWAY "\xEF\x95\x97"
#define ICON_FA_HARD_HAT "\xEF\xA0\x87"
#define ICON_FA_TRAFFIC_LIGHT "\xEF\x98\xB7"
#define ICON_FA_COG "\xEF\x80\x93"
#define ICON_FA_HANUKIAH "\xEF\x9B\xA6"
#define ICON_FA_SHUTTLE_VAN "\xEF\x96\xB6"
#define ICON_FA_MONEY_CHECK "\xEF\x94\xBC"
#define ICON_FA_BELL "\xEF\x83\xB3"
#define ICON_FA_CALENDAR_DAY "\xEF\x9E\x83"
#define ICON_FA_TINT_SLASH "\xEF\x97\x87"
#define ICON_FA_PLANE_DEPARTURE "\xEF\x96\xB0"
#define ICON_FA_USER_CHECK "\xEF\x93\xBC"
#define ICON_FA_CHURCH "\xEF\x94\x9D"
#define ICON_FA_SEARCH_MINUS "\xEF\x80\x90"
#define ICON_FA_SHIPPING_FAST "\xEF\x92\x8B"
#define ICON_FA_TINT "\xEF\x81\x83"
#define ICON_FA_ALIGN_RIGHT "\xEF\x80\xB8"
#define ICON_FA_QUOTE_RIGHT "\xEF\x84\x8E"
#define ICON_FA_BEER "\xEF\x83\xBC"
#define ICON_FA_GRIN_ALT "\xEF\x96\x81"
#define ICON_FA_SORT_NUMERIC_DOWN "\xEF\x85\xA2"
#define ICON_FA_FIRE "\xEF\x81\xAD"
#define ICON_FA_FAST_FORWARD "\xEF\x81\x90"
#define ICON_FA_MAP_MARKED_ALT "\xEF\x96\xA0"
#define ICON_FA_CHILD "\xEF\x86\xAE"
#define ICON_FA_KISS_BEAM "\xEF\x96\x97"
#define ICON_FA_TRUCK_LOADING "\xEF\x93\x9E"
#define ICON_FA_EXPAND_ARROWS_ALT "\xEF\x8C\x9E"
#define ICON_FA_CARET_SQUARE_DOWN "\xEF\x85\x90"
#define ICON_FA_CRUTCH "\xEF\x9F\xB7"
#define ICON_FA_OBJECT_GROUP "\xEF\x89\x87"
#define ICON_FA_BIKING "\xEF\xA1\x8A"
#define ICON_FA_ANCHOR "\xEF\x84\xBD"
#define ICON_FA_HAND_POINT_LEFT "\xEF\x82\xA5"
#define ICON_FA_USER_TIMES "\xEF\x88\xB5"
#define ICON_FA_CALCULATOR "\xEF\x87\xAC"
#define ICON_FA_DIZZY "\xEF\x95\xA7"
#define ICON_FA_KISS_WINK_HEART "\xEF\x96\x98"
#define ICON_FA_FILE_MEDICAL "\xEF\x91\xB7"
#define ICON_FA_SWIMMING_POOL "\xEF\x97\x85"
#define ICON_FA_VR_CARDBOARD "\xEF\x9C\xA9"
#define ICON_FA_USER_FRIENDS "\xEF\x94\x80"
#define ICON_FA_FAST_BACKWARD "\xEF\x81\x89"
#define ICON_FA_SATELLITE "\xEF\x9E\xBF"
#define ICON_FA_MINUS_CIRCLE "\xEF\x81\x96"
#define ICON_FA_CHESS_PAWN "\xEF\x91\x83"
#define ICON_FA_DATABASE "\xEF\x87\x80"
#define ICON_FA_LANDMARK "\xEF\x99\xAF"
#define ICON_FA_SWATCHBOOK "\xEF\x97\x83"
#define ICON_FA_HOTDOG "\xEF\xA0\x8F"
#define ICON_FA_SNOWMAN "\xEF\x9F\x90"
#define ICON_FA_LAPTOP "\xEF\x84\x89"
#define ICON_FA_TORAH "\xEF\x9A\xA0"
#define ICON_FA_FROWN_OPEN "\xEF\x95\xBA"
#define ICON_FA_REDO_ALT "\xEF\x8B\xB9"
#define ICON_FA_AD "\xEF\x99\x81"
#define ICON_FA_USER_CIRCLE "\xEF\x8A\xBD"
#define ICON_FA_DIVIDE "\xEF\x94\xA9"
#define ICON_FA_HANDSHAKE "\xEF\x8A\xB5"
#define ICON_FA_CUT "\xEF\x83\x84"
#define ICON_FA_GAMEPAD "\xEF\x84\x9B"
#define ICON_FA_STREET_VIEW "\xEF\x88\x9D"
#define ICON_FA_GREATER_THAN "\xEF\x94\xB1"
#define ICON_FA_PASTAFARIANISM "\xEF\x99\xBB"
#define ICON_FA_MINUS_SQUARE "\xEF\x85\x86"
#define ICON_FA_SAVE "\xEF\x83\x87"
#define ICON_FA_COMMENT_DOLLAR "\xEF\x99\x91"
#define ICON_FA_TRASH_ALT "\xEF\x8B\xAD"
#define ICON_FA_PUZZLE_PIECE "\xEF\x84\xAE"
#define ICON_FA_SORT_ALPHA_UP_ALT "\xEF\xA2\x82"
#define ICON_FA_MENORAH "\xEF\x99\xB6"
#define ICON_FA_CLOUD_SUN "\xEF\x9B\x84"
#define ICON_FA_USER_EDIT "\xEF\x93\xBF"
#define ICON_FA_THEATER_MASKS "\xEF\x98\xB0"
#define ICON_FA_FILE_MEDICAL_ALT "\xEF\x91\xB8"
#define ICON_FA_BOXES "\xEF\x91\xA8"
#define ICON_FA_THERMOMETER_EMPTY "\xEF\x8B\x8B"
#define ICON_FA_EXCLAMATION_TRIANGLE "\xEF\x81\xB1"
#define ICON_FA_GIFT "\xEF\x81\xAB"
#define ICON_FA_COGS "\xEF\x82\x85"
#define ICON_FA_SIGNAL "\xEF\x80\x92"
#define ICON_FA_SHAPES "\xEF\x98\x9F"
#define ICON_FA_CLOUD_RAIN "\xEF\x9C\xBD"
#define ICON_FA_LESS_THAN_EQUAL "\xEF\x94\xB7"
#define ICON_FA_CHEVRON_CIRCLE_LEFT "\xEF\x84\xB7"
#define ICON_FA_MORTAR_PESTLE "\xEF\x96\xA7"
#define ICON_FA_DUMBBELL "\xEF\x91\x8B"
#define ICON_FA_SITEMAP "\xEF\x83\xA8"
#define ICON_FA_BUS_ALT "\xEF\x95\x9E"
#define ICON_FA_FILE_CODE "\xEF\x87\x89"
#define ICON_FA_BATTERY_FULL "\xEF\x89\x80"
#define ICON_FA_CROWN "\xEF\x94\xA1"
#define ICON_FA_EXCHANGE_ALT "\xEF\x8D\xA2"
#define ICON_FA_TRANSGENDER_ALT "\xEF\x88\xA5"
#define ICON_FA_STAR_OF_DAVID "\xEF\x9A\x9A"
#define ICON_FA_CASH_REGISTER "\xEF\x9E\x88"
#define ICON_FA_TOOLS "\xEF\x9F\x99"
#define ICON_FA_EXCLAMATION_CIRCLE "\xEF\x81\xAA"
#define ICON_FA_COMMENTS "\xEF\x82\x86"
#define ICON_FA_BRIEFCASE_MEDICAL "\xEF\x91\xA9"
#define ICON_FA_COMMENTS_DOLLAR "\xEF\x99\x93"
#define ICON_FA_BACKSPACE "\xEF\x95\x9A"
#define ICON_FA_SLASH "\xEF\x9C\x95"
#define ICON_FA_HOT_TUB "\xEF\x96\x93"
#define ICON_FA_SUITCASE_ROLLING "\xEF\x97\x81"
#define ICON_FA_BOLD "\xEF\x80\xB2"
#define ICON_FA_HANDS_HELPING "\xEF\x93\x84"
#define ICON_FA_SLEIGH "\xEF\x9F\x8C"
#define ICON_FA_BOLT "\xEF\x83\xA7"
#define ICON_FA_THERMOMETER_QUARTER "\xEF\x8B\x8A"
#define ICON_FA_TROPHY "\xEF\x82\x91"
#define ICON_FA_USER_ALT "\xEF\x90\x86"
#define ICON_FA_BRAILLE "\xEF\x8A\xA1"
#define ICON_FA_PLUS "\xEF\x81\xA7"
#define ICON_FA_LIST_UL "\xEF\x83\x8A"
#define ICON_FA_SMOKING_BAN "\xEF\x95\x8D"
#define ICON_FA_BOOK "\xEF\x80\xAD"
#define ICON_FA_VOLUME_DOWN "\xEF\x80\xA7"
#define ICON_FA_QUESTION_CIRCLE "\xEF\x81\x99"
#define ICON_FA_CARROT "\xEF\x9E\x87"
#define ICON_FA_BATH "\xEF\x8B\x8D"
#define ICON_FA_GAVEL "\xEF\x83\xA3"
#define ICON_FA_CANDY_CANE "\xEF\x9E\x86"
#define ICON_FA_NETWORK_WIRED "\xEF\x9B\xBF"
#define ICON_FA_CARET_SQUARE_LEFT "\xEF\x86\x91"
#define ICON_FA_PLANE_ARRIVAL "\xEF\x96\xAF"
#define ICON_FA_SHARE_SQUARE "\xEF\x85\x8D"
#define ICON_FA_MEDAL "\xEF\x96\xA2"
#define ICON_FA_THERMOMETER_HALF "\xEF\x8B\x89"
#define ICON_FA_QUESTION "\xEF\x84\xA8"
#define ICON_FA_CAR_BATTERY "\xEF\x97\x9F"
#define ICON_FA_DOOR_CLOSED "\xEF\x94\xAA"
#define ICON_FA_USER_MINUS "\xEF\x94\x83"
#define ICON_FA_MUSIC "\xEF\x80\x81"
#define ICON_FA_HOUSE_DAMAGE "\xEF\x9B\xB1"
#define ICON_FA_CHEVRON_RIGHT "\xEF\x81\x94"
#define ICON_FA_GRIP_HORIZONTAL "\xEF\x96\x8D"
#define ICON_FA_DICE_FOUR "\xEF\x94\xA4"
#define ICON_FA_DEAF "\xEF\x8A\xA4"
#define ICON_FA_MEH_BLANK "\xEF\x96\xA4"
#define ICON_FA_WINDOW_CLOSE "\xEF\x90\x90"
#define ICON_FA_LINK "\xEF\x83\x81"
#define ICON_FA_ATOM "\xEF\x97\x92"
#define ICON_FA_LESS_THAN "\xEF\x94\xB6"
#define ICON_FA_OTTER "\xEF\x9C\x80"
#define ICON_FA_DICE_TWO "\xEF\x94\xA8"
#define ICON_FA_SORT_ALPHA_DOWN_ALT "\xEF\xA2\x81"
#define ICON_FA_EJECT "\xEF\x81\x92"
#define ICON_FA_SKULL "\xEF\x95\x8C"
#define ICON_FA_GRIP_LINES "\xEF\x9E\xA4"
#define ICON_FA_SORT_AMOUNT_DOWN_ALT "\xEF\xA2\x84"
#define ICON_FA_HOSPITAL_SYMBOL "\xEF\x91\xBE"
#define ICON_FA_X_RAY "\xEF\x92\x97"
#define ICON_FA_ARROW_UP "\xEF\x81\xA2"
#define ICON_FA_MONEY_BILL_WAVE "\xEF\x94\xBA"
#define ICON_FA_DOT_CIRCLE "\xEF\x86\x92"
#define ICON_FA_IMAGES "\xEF\x8C\x82"
#define ICON_FA_STAR_HALF "\xEF\x82\x89"
#define ICON_FA_SPLOTCH "\xEF\x96\xBC"
#define ICON_FA_STAR_HALF_ALT "\xEF\x97\x80"
#define ICON_FA_SHIP "\xEF\x88\x9A"
#define ICON_FA_BOOK_DEAD "\xEF\x9A\xB7"
#define ICON_FA_CHECK "\xEF\x80\x8C"
#define ICON_FA_RAINBOW "\xEF\x9D\x9B"
#define ICON_FA_POWER_OFF "\xEF\x80\x91"
#define ICON_FA_LEMON "\xEF\x82\x94"
#define ICON_FA_GLOBE_AMERICAS "\xEF\x95\xBD"
#define ICON_FA_PEACE "\xEF\x99\xBC"
#define ICON_FA_THERMOMETER_THREE_QUARTERS "\xEF\x8B\x88"
#define ICON_FA_WAREHOUSE "\xEF\x92\x94"
#define ICON_FA_TRANSGENDER "\xEF\x88\xA4"
#define ICON_FA_PLUS_SQUARE "\xEF\x83\xBE"
#define ICON_FA_BULLSEYE "\xEF\x85\x80"
#define ICON_FA_COOKIE_BITE "\xEF\x95\xA4"
#define ICON_FA_USERS "\xEF\x83\x80"
#define ICON_FA_DRUMSTICK_BITE "\xEF\x9B\x97"
#define ICON_FA_ASTERISK "\xEF\x81\xA9"
#define ICON_FA_PLUS_CIRCLE "\xEF\x81\x95"
#define ICON_FA_CART_ARROW_DOWN "\xEF\x88\x98"
#define ICON_FA_LEAF "\xEF\x81\xAC"
#define ICON_FA_FLUSHED "\xEF\x95\xB9"
#define ICON_FA_STORE_ALT "\xEF\x95\x8F"
#define ICON_FA_PEOPLE_CARRY "\xEF\x93\x8E"
#define ICON_FA_CHESS_BOARD "\xEF\x90\xBC"
#define ICON_FA_LONG_ARROW_ALT_DOWN "\xEF\x8C\x89"
#define ICON_FA_SAD_CRY "\xEF\x96\xB3"
#define ICON_FA_DIGITAL_TACHOGRAPH "\xEF\x95\xA6"
#define ICON_FA_ANGLE_DOUBLE_DOWN "\xEF\x84\x83"
#define ICON_FA_FILE_EXCEL "\xEF\x87\x83"
#define ICON_FA_TEETH "\xEF\x98\xAE"
#define ICON_FA_HAND_SCISSORS "\xEF\x89\x97"
#define ICON_FA_STETHOSCOPE "\xEF\x83\xB1"
#define ICON_FA_BACKWARD "\xEF\x81\x8A"
#define ICON_FA_SCROLL "\xEF\x9C\x8E"
#define ICON_FA_IGLOO "\xEF\x9E\xAE"
#define ICON_FA_NOTES_MEDICAL "\xEF\x92\x81"
#define ICON_FA_CODE "\xEF\x84\xA1"
#define ICON_FA_SORT_NUMERIC_UP_ALT "\xEF\xA2\x87"
#define ICON_FA_NOT_EQUAL "\xEF\x94\xBE"
#define ICON_FA_SKIING "\xEF\x9F\x89"
#define ICON_FA_CHAIR "\xEF\x9B\x80"
#define ICON_FA_HAND_LIZARD "\xEF\x89\x98"
#define ICON_FA_QUIDDITCH "\xEF\x91\x98"
#define ICON_FA_ANGLE_DOUBLE_LEFT "\xEF\x84\x80"
#define ICON_FA_MOSQUE "\xEF\x99\xB8"
#define ICON_FA_PEN "\xEF\x8C\x84"
#define ICON_FA_HRYVNIA "\xEF\x9B\xB2"
#define ICON_FA_ANGLE_LEFT "\xEF\x84\x84"
#define ICON_FA_ATLAS "\xEF\x95\x98"
#define ICON_FA_PIGGY_BANK "\xEF\x93\x93"
#define ICON_FA_DOLLY_FLATBED "\xEF\x91\xB4"
#define ICON_FA_ARROWS_ALT_H "\xEF\x8C\xB7"
#define ICON_FA_PEN_ALT "\xEF\x8C\x85"
#define ICON_FA_PRAYING_HANDS "\xEF\x9A\x84"
#define ICON_FA_VOLUME_UP "\xEF\x80\xA8"
#define ICON_FA_CLIPBOARD_LIST "\xEF\x91\xAD"
#define ICON_FA_BORDER_ALL "\xEF\xA1\x8C"
#define ICON_FA_MAGIC "\xEF\x83\x90"
#define ICON_FA_FOLDER_MINUS "\xEF\x99\x9D"
#define ICON_FA_DEMOCRAT "\xEF\x9D\x87"
#define ICON_FA_MAGNET "\xEF\x81\xB6"
#define ICON_FA_VIHARA "\xEF\x9A\xA7"
#define ICON_FA_GRIMACE "\xEF\x95\xBF"
#define ICON_FA_CHECK_CIRCLE "\xEF\x81\x98"
#define ICON_FA_SEARCH_DOLLAR "\xEF\x9A\x88"
#define ICON_FA_LONG_ARROW_ALT_LEFT "\xEF\x8C\x8A"
#define ICON_FA_FILE_PRESCRIPTION "\xEF\x95\xB2"
#define ICON_FA_CROW "\xEF\x94\xA0"
#define ICON_FA_EYE_DROPPER "\xEF\x87\xBB"
#define ICON_FA_CROP "\xEF\x84\xA5"
#define ICON_FA_SIGN "\xEF\x93\x99"
#define ICON_FA_ARROW_CIRCLE_DOWN "\xEF\x82\xAB"
#define ICON_FA_VIDEO "\xEF\x80\xBD"
#define ICON_FA_DOWNLOAD "\xEF\x80\x99"
#define ICON_FA_CARET_DOWN "\xEF\x83\x97"
#define ICON_FA_CHEVRON_LEFT "\xEF\x81\x93"
#define ICON_FA_GLOBE_AFRICA "\xEF\x95\xBC"
#define ICON_FA_HAMSA "\xEF\x99\xA5"
#define ICON_FA_CART_PLUS "\xEF\x88\x97"
#define ICON_FA_CLIPBOARD "\xEF\x8C\xA8"
#define ICON_FA_SHOE_PRINTS "\xEF\x95\x8B"
#define ICON_FA_PHONE_SLASH "\xEF\x8F\x9D"
#define ICON_FA_REPLY "\xEF\x8F\xA5"
#define ICON_FA_HOURGLASS_HALF "\xEF\x89\x92"
#define ICON_FA_LONG_ARROW_ALT_UP "\xEF\x8C\x8C"
#define ICON_FA_CHESS_KNIGHT "\xEF\x91\x81"
#define ICON_FA_BARCODE "\xEF\x80\xAA"
#define ICON_FA_DRAW_POLYGON "\xEF\x97\xAE"
#define ICON_FA_WATER "\xEF\x9D\xB3"
#define ICON_FA_WINE_GLASS_ALT "\xEF\x97\x8E"
#define ICON_FA_PHONE_VOLUME "\xEF\x8A\xA0"
#define ICON_FA_GLASS_WHISKEY "\xEF\x9E\xA0"
#define ICON_FA_BOX "\xEF\x91\xA6"
#define ICON_FA_DIAGNOSES "\xEF\x91\xB0"
#define ICON_FA_FILE_IMAGE "\xEF\x87\x85"
#define ICON_FA_VENUS_MARS "\xEF\x88\xA8"
#define ICON_FA_TASKS "\xEF\x82\xAE"
#define ICON_FA_HIKING "\xEF\x9B\xAC"
#define ICON_FA_VECTOR_SQUARE "\xEF\x97\x8B"
#define ICON_FA_QUOTE_LEFT "\xEF\x84\x8D"
#define ICON_FA_MOBILE_ALT "\xEF\x8F\x8D"
#define ICON_FA_USER_SHIELD "\xEF\x94\x85"
#define ICON_FA_BLOG "\xEF\x9E\x81"
#define ICON_FA_MARKER "\xEF\x96\xA1"
#define ICON_FA_HAMBURGER "\xEF\xA0\x85"
#define ICON_FA_REDO "\xEF\x80\x9E"
#define ICON_FA_CLOUD "\xEF\x83\x82"
#define ICON_FA_HAND_HOLDING_USD "\xEF\x93\x80"
#define ICON_FA_CERTIFICATE "\xEF\x82\xA3"
#define ICON_FA_ANGRY "\xEF\x95\x96"
#define ICON_FA_FROG "\xEF\x94\xAE"
#define ICON_FA_CAMERA "\xEF\x80\xB0"
#define ICON_FA_DICE_THREE "\xEF\x94\xA7"
#define ICON_FA_MEMORY "\xEF\x94\xB8"
#define ICON_FA_PEN_SQUARE "\xEF\x85\x8B"
#define ICON_FA_SORT "\xEF\x83\x9C"
#define ICON_FA_PLUG "\xEF\x87\xA6"
#define ICON_FA_SHARE "\xEF\x81\xA4"
#define ICON_FA_ENVELOPE "\xEF\x83\xA0"
#define ICON_FA_LAYER_GROUP "\xEF\x97\xBD"
#define ICON_FA_TRAIN "\xEF\x88\xB8"
#define ICON_FA_BULLHORN "\xEF\x82\xA1"
#define ICON_FA_BABY "\xEF\x9D\xBC"
#define ICON_FA_CONCIERGE_BELL "\xEF\x95\xA2"
#define ICON_FA_CIRCLE "\xEF\x84\x91"
#define ICON_FA_I_CURSOR "\xEF\x89\x86"
#define ICON_FA_CAR "\xEF\x86\xB9"
#define ICON_FA_CAT "\xEF\x9A\xBE"
#define ICON_FA_WALLET "\xEF\x95\x95"
#define ICON_FA_BOOK_MEDICAL "\xEF\x9F\xA6"
#define ICON_FA_H_SQUARE "\xEF\x83\xBD"
#define ICON_FA_HEART "\xEF\x80\x84"
#define ICON_FA_LOCK_OPEN "\xEF\x8F\x81"
#define ICON_FA_STREAM "\xEF\x95\x90"
#define ICON_FA_LOCK "\xEF\x80\xA3"
#define ICON_FA_PARACHUTE_BOX "\xEF\x93\x8D"
#define ICON_FA_TAG "\xEF\x80\xAB"
#define ICON_FA_SMILE_BEAM "\xEF\x96\xB8"
#define ICON_FA_USER_NURSE "\xEF\xA0\xAF"
#define ICON_FA_MICROPHONE_ALT "\xEF\x8F\x89"
#define ICON_FA_SPA "\xEF\x96\xBB"
#define ICON_FA_CHEVRON_CIRCLE_DOWN "\xEF\x84\xBA"
#define ICON_FA_FOLDER_PLUS "\xEF\x99\x9E"
#define ICON_FA_TICKET_ALT "\xEF\x8F\xBF"
#define ICON_FA_BOOK_OPEN "\xEF\x94\x98"
#define ICON_FA_MAP "\xEF\x89\xB9"
#define ICON_FA_COCKTAIL "\xEF\x95\xA1"
#define ICON_FA_CLONE "\xEF\x89\x8D"
#define ICON_FA_ID_CARD_ALT "\xEF\x91\xBF"
#define ICON_FA_CHECK_SQUARE "\xEF\x85\x8A"
#define ICON_FA_CHART_LINE "\xEF\x88\x81"
#define ICON_FA_POO_STORM "\xEF\x9D\x9A"
#define ICON_FA_DOVE "\xEF\x92\xBA"
#define ICON_FA_MARS_STROKE "\xEF\x88\xA9"
#define ICON_FA_ENVELOPE_OPEN "\xEF\x8A\xB6"
#define ICON_FA_WHEELCHAIR "\xEF\x86\x93"
#define ICON_FA_ROBOT "\xEF\x95\x84"
#define ICON_FA_UNDO_ALT "\xEF\x8B\xAA"
#define ICON_FA_CLOUD_MEATBALL "\xEF\x9C\xBB"
#define ICON_FA_TRUCK "\xEF\x83\x91"
#define ICON_FA_FLASK "\xEF\x83\x83"
#define ICON_FA_WON_SIGN "\xEF\x85\x99"
#define ICON_FA_SUPERSCRIPT "\xEF\x84\xAB"
#define ICON_FA_TTY "\xEF\x87\xA4"
#define ICON_FA_USER_MD "\xEF\x83\xB0"
#define ICON_FA_BRAIN "\xEF\x97\x9C"
#define ICON_FA_TABLETS "\xEF\x92\x90"
#define ICON_FA_MOTORCYCLE "\xEF\x88\x9C"
#define ICON_FA_PHONE_SQUARE_ALT "\xEF\xA1\xBB"
#define ICON_FA_ANGLE_UP "\xEF\x84\x86"
#define ICON_FA_BROOM "\xEF\x94\x9A"
#define ICON_FA_DICE_D20 "\xEF\x9B\x8F"
#define ICON_FA_LEVEL_DOWN_ALT "\xEF\x8E\xBE"
#define ICON_FA_PAPERCLIP "\xEF\x83\x86"
#define ICON_FA_USER_CLOCK "\xEF\x93\xBD"
#define ICON_FA_MUG_HOT "\xEF\x9E\xB6"
#define ICON_FA_SORT_ALPHA_UP "\xEF\x85\x9E"
#define ICON_FA_AUDIO_DESCRIPTION "\xEF\x8A\x9E"
#define ICON_FA_FILE_CSV "\xEF\x9B\x9D"
#define ICON_FA_FILE_DOWNLOAD "\xEF\x95\xAD"
#define ICON_FA_SYNC_ALT "\xEF\x8B\xB1"
#define ICON_FA_ANGLE_DOUBLE_UP "\xEF\x84\x82"
#define ICON_FA_HANDS "\xEF\x93\x82"
#define ICON_FA_REPUBLICAN "\xEF\x9D\x9E"
#define ICON_FA_UNIVERSITY "\xEF\x86\x9C"
#define ICON_FA_KHANDA "\xEF\x99\xAD"
#define ICON_FA_GLASSES "\xEF\x94\xB0"
#define ICON_FA_SQUARE "\xEF\x83\x88"
#define ICON_FA_GRIN_SQUINT "\xEF\x96\x85"
#define ICON_FA_CLOSED_CAPTIONING "\xEF\x88\x8A"
#define ICON_FA_RECEIPT "\xEF\x95\x83"
#define ICON_FA_STRIKETHROUGH "\xEF\x83\x8C"
#define ICON_FA_UNLOCK "\xEF\x82\x9C"
#define ICON_FA_ARROW_LEFT "\xEF\x81\xA0"
#define ICON_FA_DICE_SIX "\xEF\x94\xA6"
#define ICON_FA_GRIP_VERTICAL "\xEF\x96\x8E"
#define ICON_FA_PILLS "\xEF\x92\x84"
#define ICON_FA_EXCLAMATION "\xEF\x84\xAA"
#define ICON_FA_PERSON_BOOTH "\xEF\x9D\x96"
#define ICON_FA_CALENDAR_PLUS "\xEF\x89\xB1"
#define ICON_FA_SMOG "\xEF\x9D\x9F"
#define ICON_FA_LOCATION_ARROW "\xEF\x84\xA4"
#define ICON_FA_UMBRELLA "\xEF\x83\xA9"
#define ICON_FA_QURAN "\xEF\x9A\x87"
#define ICON_FA_UNDO "\xEF\x83\xA2"
#define ICON_FA_DUMPSTER "\xEF\x9E\x93"
#define ICON_FA_FUNNEL_DOLLAR "\xEF\x99\xA2"
#define ICON_FA_INDENT "\xEF\x80\xBC"
#define ICON_FA_LANGUAGE "\xEF\x86\xAB"
#define ICON_FA_ARROW_ALT_CIRCLE_UP "\xEF\x8D\x9B"
#define ICON_FA_ROUTE "\xEF\x93\x97"
#define ICON_FA_HEADPHONES "\xEF\x80\xA5"
#define ICON_FA_TIMES "\xEF\x80\x8D"
#define ICON_FA_CLINIC_MEDICAL "\xEF\x9F\xB2"
#define ICON_FA_PLANE "\xEF\x81\xB2"
#define ICON_FA_TORII_GATE "\xEF\x9A\xA1"
#define ICON_FA_LEVEL_UP_ALT "\xEF\x8E\xBF"
#define ICON_FA_BLIND "\xEF\x8A\x9D"
#define ICON_FA_CHEESE "\xEF\x9F\xAF"
#define ICON_FA_PHONE_SQUARE "\xEF\x82\x98"
#define ICON_FA_SHOPPING_BASKET "\xEF\x8A\x91"
#define ICON_FA_ICE_CREAM "\xEF\xA0\x90"
#define ICON_FA_RING "\xEF\x9C\x8B"
#define ICON_FA_CITY "\xEF\x99\x8F"
#define ICON_FA_TEXT_WIDTH "\xEF\x80\xB5"
#define ICON_FA_RSS_SQUARE "\xEF\x85\x83"
#define ICON_FA_PAINT_BRUSH "\xEF\x87\xBC"
#define ICON_FA_BOOKMARK "\xEF\x80\xAE"
#define ICON_FA_PHOTO_VIDEO "\xEF\xA1\xBC"
#define ICON_FA_SIM_CARD "\xEF\x9F\x84"
#define ICON_FA_CLOUD_UPLOAD_ALT "\xEF\x8E\x82"
#define ICON_FA_COMPACT_DISC "\xEF\x94\x9F"
#define ICON_FA_SORT_UP "\xEF\x83\x9E"
#define ICON_FA_SIGN_OUT_ALT "\xEF\x8B\xB5"
#define ICON_FA_SIGN_IN_ALT "\xEF\x8B\xB6"
#define ICON_FA_FORWARD "\xEF\x81\x8E"
#define ICON_FA_SHARE_ALT "\xEF\x87\xA0"
#define ICON_FA_COPY "\xEF\x83\x85"
#define ICON_FA_RSS "\xEF\x82\x9E"
#define ICON_FA_PEN_FANCY "\xEF\x96\xAC"
#define ICON_FA_BIOHAZARD "\xEF\x9E\x80"
#define ICON_FA_BED "\xEF\x88\xB6"
#define ICON_FA_INFO "\xEF\x84\xA9"
#define ICON_FA_TOGGLE_OFF "\xEF\x88\x84"
#define ICON_FA_MAP_MARKER_ALT "\xEF\x8F\x85"
#define ICON_FA_TRACTOR "\xEF\x9C\xA2"
#define ICON_FA_CLOUD_DOWNLOAD_ALT "\xEF\x8E\x81"
#define ICON_FA_ID_BADGE "\xEF\x8B\x81"
#define ICON_FA_SORT_NUMERIC_DOWN_ALT "\xEF\xA2\x86"
#define ICON_FA_RULER_HORIZONTAL "\xEF\x95\x87"
#define ICON_FA_PAINT_ROLLER "\xEF\x96\xAA"
#define ICON_FA_HAT_WIZARD "\xEF\x9B\xA8"
#define ICON_FA_MAP_SIGNS "\xEF\x89\xB7"
#define ICON_FA_MICROPHONE "\xEF\x84\xB0"
#define ICON_FA_FOOTBALL_BALL "\xEF\x91\x8E"
#define ICON_FA_ALLERGIES "\xEF\x91\xA1"
#define ICON_FA_ID_CARD "\xEF\x8B\x82"
#define ICON_FA_USER_LOCK "\xEF\x94\x82"
#define ICON_FA_PLAY_CIRCLE "\xEF\x85\x84"
#define ICON_FA_REMOVE_FORMAT "\xEF\xA1\xBD"
#define ICON_FA_THERMOMETER "\xEF\x92\x91"
#define ICON_FA_REGISTERED "\xEF\x89\x9D"
#define ICON_FA_DOLLAR_SIGN "\xEF\x85\x95"
#define ICON_FA_DUNGEON "\xEF\x9B\x99"
#define ICON_FA_COMPRESS "\xEF\x81\xA6"
#define ICON_FA_SEARCH_LOCATION "\xEF\x9A\x89"
#define ICON_FA_UTENSILS "\xEF\x8B\xA7"
#define ICON_FA_BLENDER_PHONE "\xEF\x9A\xB6"
#define ICON_FA_ANGLE_RIGHT "\xEF\x84\x85"
#define ICON_FA_CHESS_QUEEN "\xEF\x91\x85"
#define ICON_FA_PAGER "\xEF\xA0\x95"
#define ICON_FA_SORT_AMOUNT_UP_ALT "\xEF\xA2\x85"
#define ICON_FA_CLIPBOARD_CHECK "\xEF\x91\xAC"
#define ICON_FA_HOURGLASS_END "\xEF\x89\x93"
#define ICON_FA_TOOTH "\xEF\x97\x89"
#define ICON_FA_BUSINESS_TIME "\xEF\x99\x8A"
#define ICON_FA_PLACE_OF_WORSHIP "\xEF\x99\xBF"
#define ICON_FA_GRIN_TONGUE_SQUINT "\xEF\x96\x8A"
#define ICON_FA_MEH_ROLLING_EYES "\xEF\x96\xA5"
#define ICON_FA_WALKING "\xEF\x95\x94"
#define ICON_FA_EDIT "\xEF\x81\x84"
#define ICON_FA_CARET_LEFT "\xEF\x83\x99"
#define ICON_FA_PAUSE "\xEF\x81\x8C"
#define ICON_FA_DICE "\xEF\x94\xA2"
#define ICON_FA_RUBLE_SIGN "\xEF\x85\x98"
#define ICON_FA_TERMINAL "\xEF\x84\xA0"
#define ICON_FA_RULER_VERTICAL "\xEF\x95\x88"
#define ICON_FA_HAND_POINTER "\xEF\x89\x9A"
#define ICON_FA_TAPE "\xEF\x93\x9B"
#define ICON_FA_SHOPPING_BAG "\xEF\x8A\x90"
#define ICON_FA_SKIING_NORDIC "\xEF\x9F\x8A"
#define ICON_FA_FIST_RAISED "\xEF\x9B\x9E"
#define ICON_FA_CUBE "\xEF\x86\xB2"
#define ICON_FA_CAPSULES "\xEF\x91\xAB"
#define ICON_FA_KIWI_BIRD "\xEF\x94\xB5"
#define ICON_FA_CHEVRON_CIRCLE_UP "\xEF\x84\xB9"
#define ICON_FA_MARS_STROKE_V "\xEF\x88\xAA"
#define ICON_FA_FILE_ARCHIVE "\xEF\x87\x86"
#define ICON_FA_JOINT "\xEF\x96\x95"
#define ICON_FA_MARS_STROKE_H "\xEF\x88\xAB"
#define ICON_FA_ADDRESS_BOOK "\xEF\x8A\xB9"
#define ICON_FA_PROCEDURES "\xEF\x92\x87"
#define ICON_FA_GEM "\xEF\x8E\xA5"
#define ICON_FA_RULER_COMBINED "\xEF\x95\x86"
#define ICON_FA_ALIGN_LEFT "\xEF\x80\xB6"
#define ICON_FA_STAR_AND_CRESCENT "\xEF\x9A\x99"
#define ICON_FA_FIGHTER_JET "\xEF\x83\xBB"
#define ICON_FA_SPACE_SHUTTLE "\xEF\x86\x97"
#define ICON_FA_MAP_PIN "\xEF\x89\xB6"
#define ICON_FA_GLOBE "\xEF\x82\xAC"
#define ICON_FA_ALIGN_CENTER "\xEF\x80\xB7"
#define ICON_FA_SORT_ALPHA_DOWN "\xEF\x85\x9D"
#define ICON_FA_PARKING "\xEF\x95\x80"
#define ICON_FA_CALENDAR "\xEF\x84\xB3"
#define ICON_FA_PALETTE "\xEF\x94\xBF"
#define ICON_FA_GLASS_MARTINI "\xEF\x80\x80"
#define ICON_FA_TIMES_CIRCLE "\xEF\x81\x97"
#define ICON_FA_EYE "\xEF\x81\xAE"
#define ICON_FA_MONUMENT "\xEF\x96\xA6"
#define ICON_FA_TRASH_RESTORE "\xEF\xA0\xA9"
#define ICON_FA_GUITAR "\xEF\x9E\xA6"
#define ICON_FA_GRIN_BEAM "\xEF\x96\x82"
#define ICON_FA_KEY "\xEF\x82\x84"
#define ICON_FA_FIRST_AID "\xEF\x91\xB9"
#define ICON_FA_UMBRELLA_BEACH "\xEF\x97\x8A"
#define ICON_FA_DRUM "\xEF\x95\xA9"
#define ICON_FA_FILE_CONTRACT "\xEF\x95\xAC"
#define ICON_FA_VOICEMAIL "\xEF\xA2\x97"
#define ICON_FA_RESTROOM "\xEF\x9E\xBD"
#define ICON_FA_UNLOCK_ALT "\xEF\x84\xBE"
#define ICON_FA_MICROPHONE_ALT_SLASH "\xEF\x94\xB9"
#define ICON_FA_USER_SECRET "\xEF\x88\x9B"
#define ICON_FA_ARROW_RIGHT "\xEF\x81\xA1"
#define ICON_FA_FILE_VIDEO "\xEF\x87\x88"
#define ICON_FA_ARROW_ALT_CIRCLE_RIGHT "\xEF\x8D\x9A"
#define ICON_FA_CALENDAR_WEEK "\xEF\x9E\x84"
#define ICON_FA_USER_GRADUATE "\xEF\x94\x81"
#define ICON_FA_HAND_MIDDLE_FINGER "\xEF\xA0\x86"
#define ICON_FA_POO "\xEF\x8B\xBE"
#define ICON_FA_LAUGH "\xEF\x96\x99"
#define ICON_FA_TABLE "\xEF\x83\x8E"
#define ICON_FA_POLL "\xEF\x9A\x81"
#define ICON_FA_CAR_ALT "\xEF\x97\x9E"
#define ICON_FA_THUMBS_UP "\xEF\x85\xA4"
#define ICON_FA_SWIMMER "\xEF\x97\x84"
#define ICON_FA_TRADEMARK "\xEF\x89\x9C"
#define ICON_FA_CLOUD_MOON_RAIN "\xEF\x9C\xBC"
#define ICON_FA_VIALS "\xEF\x92\x93"
#define ICON_FA_ERASER "\xEF\x84\xAD"
#define ICON_FA_MARS "\xEF\x88\xA2"
#define ICON_FA_HELICOPTER "\xEF\x94\xB3"
#define ICON_FA_FEATHER "\xEF\x94\xAD"
#define ICON_FA_SQUARE_FULL "\xEF\x91\x9C"
#define ICON_FA_DOLLY "\xEF\x91\xB2"
#define ICON_FA_HAND_HOLDING "\xEF\x92\xBD"
#define ICON_FA_HOURGLASS_START "\xEF\x89\x91"
#define ICON_FA_GRIN_HEARTS "\xEF\x96\x84"
#define ICON_FA_VENUS_DOUBLE "\xEF\x88\xA6"
#define ICON_FA_HASHTAG "\xEF\x8A\x92"
#define ICON_FA_FINGERPRINT "\xEF\x95\xB7"
#define ICON_FA_SEEDLING "\xEF\x93\x98"
#define ICON_FA_HAYKAL "\xEF\x99\xA6"
#define ICON_FA_TSHIRT "\xEF\x95\x93"
#define ICON_FA_PENCIL_RULER "\xEF\x96\xAE"
#define ICON_FA_HDD "\xEF\x82\xA0"
#define ICON_FA_NEWSPAPER "\xEF\x87\xAA"
#define ICON_FA_HOSPITAL_ALT "\xEF\x91\xBD"
#define ICON_FA_USER_SLASH "\xEF\x94\x86"
#define ICON_FA_FILE_WORD "\xEF\x87\x82"
#define ICON_FA_ENVELOPE_SQUARE "\xEF\x86\x99"
#define ICON_FA_GENDERLESS "\xEF\x88\xAD"
#define ICON_FA_DICE_FIVE "\xEF\x94\xA3"
#define ICON_FA_SYNAGOGUE "\xEF\x9A\x9B"
#define ICON_FA_PAW "\xEF\x86\xB0"
#define ICON_FA_HAND_HOLDING_HEART "\xEF\x92\xBE"
#define ICON_FA_CROSS "\xEF\x99\x94"
#define ICON_FA_ARCHIVE "\xEF\x86\x87"
#define ICON_FA_SOLAR_PANEL "\xEF\x96\xBA"
#define ICON_FA_INFINITY "\xEF\x94\xB4"
#define ICON_FA_ANKH "\xEF\x99\x84"
#define ICON_FA_MAP_MARKER "\xEF\x81\x81"
#define ICON_FA_CALENDAR_ALT "\xEF\x81\xB3"
#define ICON_FA_AMERICAN_SIGN_LANGUAGE_INTERPRETING "\xEF\x8A\xA3"
#define ICON_FA_BINOCULARS "\xEF\x87\xA5"
#define ICON_FA_STICKY_NOTE "\xEF\x89\x89"
#define ICON_FA_RUNNING "\xEF\x9C\x8C"
#define ICON_FA_PEN_NIB "\xEF\x96\xAD"
#define ICON_FA_MAP_MARKED "\xEF\x96\x9F"
#define ICON_FA_EXPAND "\xEF\x81\xA5"
#define ICON_FA_TRUCK_PICKUP "\xEF\x98\xBC"
#define ICON_FA_HOLLY_BERRY "\xEF\x9E\xAA"
#define ICON_FA_PRESCRIPTION_BOTTLE "\xEF\x92\x85"
#define ICON_FA_LAPTOP_CODE "\xEF\x97\xBC"
#define ICON_FA_GOLF_BALL "\xEF\x91\x90"
#define ICON_FA_SKULL_CROSSBONES "\xEF\x9C\x94"
#define ICON_FA_TAXI "\xEF\x86\xBA"
#define ICON_FA_COMMENT "\xEF\x81\xB5"
#define ICON_FA_KISS "\xEF\x96\x96"
#define ICON_FA_HIPPO "\xEF\x9B\xAD"
#define ICON_FA_ARROWS_ALT "\xEF\x82\xB2"
#define ICON_FA_UNDERLINE "\xEF\x83\x8D"
#define ICON_FA_ARROW_CIRCLE_UP "\xEF\x82\xAA"
#define ICON_FA_BASKETBALL_BALL "\xEF\x90\xB4"
#define ICON_FA_DESKTOP "\xEF\x84\x88"
#define ICON_FA_PALLET "\xEF\x92\x82"
#define ICON_FA_TOGGLE_ON "\xEF\x88\x85"
#define ICON_FA_STOPWATCH "\xEF\x8B\xB2"
#define ICON_FA_ARROW_ALT_CIRCLE_LEFT "\xEF\x8D\x99"
#define ICON_FA_GAS_PUMP "\xEF\x94\xAF"
#define ICON_FA_EXTERNAL_LINK_ALT "\xEF\x8D\x9D"
#define ICON_FA_FROWN "\xEF\x84\x99"
#define ICON_FA_RULER "\xEF\x95\x85"
#define ICON_FA_FLAG_USA "\xEF\x9D\x8D"
#define ICON_FA_GRIN "\xEF\x96\x80"
#define ICON_FA_ARROW_CIRCLE_LEFT "\xEF\x82\xA8"
#define ICON_FA_HIGHLIGHTER "\xEF\x96\x91"
#define ICON_FA_POLL_H "\xEF\x9A\x82"
#define ICON_FA_SERVER "\xEF\x88\xB3"
#define ICON_FA_BATTERY_EMPTY "\xEF\x89\x84"
#define ICON_FA_SPRAY_CAN "\xEF\x96\xBD"
#define ICON_FA_BOWLING_BALL "\xEF\x90\xB6"
#define ICON_FA_GRIP_LINES_VERTICAL "\xEF\x9E\xA5"
#define ICON_FA_GLOBE_EUROPE "\xEF\x9E\xA2"
#define ICON_FA_WINDOW_MINIMIZE "\xEF\x8B\x91"
#define ICON_FA_MARS_DOUBLE "\xEF\x88\xA7"
#define ICON_FA_PAUSE_CIRCLE "\xEF\x8A\x8B"
#define ICON_FA_HOME "\xEF\x80\x95"
#define ICON_FA_COMMENT_ALT "\xEF\x89\xBA"
#define ICON_FA_UTENSIL_SPOON "\xEF\x8B\xA5"
#define ICON_FA_APPLE_ALT "\xEF\x97\x91"
#define ICON_FA_MOON "\xEF\x86\x86"
#define ICON_FA_CANNABIS "\xEF\x95\x9F"
#define ICON_FA_LAUGH_BEAM "\xEF\x96\x9A"
#define ICON_FA_TEETH_OPEN "\xEF\x98\xAF"
#define ICON_FA_CHART_PIE "\xEF\x88\x80"
#define ICON_FA_SOCKS "\xEF\x9A\x96"
#define ICON_FA_SD_CARD "\xEF\x9F\x82"
#define ICON_FA_ARROW_CIRCLE_RIGHT "\xEF\x82\xA9"
#define ICON_FA_PASTE "\xEF\x83\xAA"
#define ICON_FA_OM "\xEF\x99\xB9"
#define ICON_FA_LUGGAGE_CART "\xEF\x96\x9D"
#define ICON_FA_INDUSTRY "\xEF\x89\xB5"
#define ICON_FA_STAMP "\xEF\x96\xBF"
#define ICON_FA_RADIATION_ALT "\xEF\x9E\xBA"
#define ICON_FA_COMPRESS_ARROWS_ALT "\xEF\x9E\x8C"
#define ICON_FA_ROAD "\xEF\x80\x98"
#define ICON_FA_IMAGE "\xEF\x80\xBE"
#define ICON_FA_BALANCE_SCALE_RIGHT "\xEF\x94\x96"
#define ICON_FA_ANGLE_DOUBLE_RIGHT "\xEF\x84\x81"
#define ICON_FA_CLOUD_MOON "\xEF\x9B\x83"
#define ICON_FA_DOOR_OPEN "\xEF\x94\xAB"
#define ICON_FA_GRIN_TONGUE_WINK "\xEF\x96\x8B"
#define ICON_FA_REPLY_ALL "\xEF\x84\xA2"
#define ICON_FA_TEMPERATURE_LOW "\xEF\x9D\xAB"
#define ICON_FA_INBOX "\xEF\x80\x9C"
#define ICON_FA_FEMALE "\xEF\x86\x82"
#define ICON_FA_SYRINGE "\xEF\x92\x8E"
#define ICON_FA_CIRCLE_NOTCH "\xEF\x87\x8E"
#define ICON_FA_ELLIPSIS_V "\xEF\x85\x82"
#define ICON_FA_SNOWPLOW "\xEF\x9F\x92"
#define ICON_FA_TABLE_TENNIS "\xEF\x91\x9D"
#define ICON_FA_LOW_VISION "\xEF\x8A\xA8"
#define ICON_FA_FILE_IMPORT "\xEF\x95\xAF"
#define ICON_FA_ITALIC "\xEF\x80\xB3"
#define ICON_FA_FILE_SIGNATURE "\xEF\x95\xB3"
#define ICON_FA_CHALKBOARD "\xEF\x94\x9B"
#define ICON_FA_GHOST "\xEF\x9B\xA2"
#define ICON_FA_TACHOMETER_ALT "\xEF\x8F\xBD"
#define ICON_FA_BUS "\xEF\x88\x87"
#define ICON_FA_ANGLE_DOWN "\xEF\x84\x87"
#define ICON_FA_HAND_ROCK "\xEF\x89\x95"
#define ICON_FA_BORDER_STYLE "\xEF\xA1\x93"
#define ICON_FA_STAR_OF_LIFE "\xEF\x98\xA1"
#define ICON_FA_PODCAST "\xEF\x8B\x8E"
#define ICON_FA_TRUCK_MOVING "\xEF\x93\x9F"
#define ICON_FA_BUG "\xEF\x86\x88"
#define ICON_FA_SHIELD_ALT "\xEF\x8F\xAD"
#define ICON_FA_FILL_DRIP "\xEF\x95\xB6"
#define ICON_FA_COMMENT_SLASH "\xEF\x92\xB3"
#define ICON_FA_SUITCASE "\xEF\x83\xB2"
#define ICON_FA_SKATING "\xEF\x9F\x85"
#define ICON_FA_TOILET "\xEF\x9F\x98"
#define ICON_FA_ENVELOPE_OPEN_TEXT "\xEF\x99\x98"
#define ICON_FA_HEART_BROKEN "\xEF\x9E\xA9"
#define ICON_FA_CARET_SQUARE_UP "\xEF\x85\x91"
#define ICON_FA_TH_LARGE "\xEF\x80\x89"
#define ICON_FA_AT "\xEF\x87\xBA"
#define ICON_FA_FILE "\xEF\x85\x9B"
#define ICON_FA_TENGE "\xEF\x9F\x97"
#define ICON_FA_FLAG_CHECKERED "\xEF\x84\x9E"
#define ICON_FA_FILM "\xEF\x80\x88"
#define ICON_FA_FILL "\xEF\x95\xB5"
#define ICON_FA_GRIN_SQUINT_TEARS "\xEF\x96\x86"
#define ICON_FA_PERCENT "\xEF\x8A\x95"
#define ICON_FA_METEOR "\xEF\x9D\x93"
#define ICON_FA_TRASH "\xEF\x87\xB8"
#define ICON_FA_FILE_AUDIO "\xEF\x87\x87"
#define ICON_FA_SATELLITE_DISH "\xEF\x9F\x80"
#define ICON_FA_POOP "\xEF\x98\x99"
#define ICON_FA_STAR "\xEF\x80\x85"
#define ICON_FA_GIFTS "\xEF\x9E\x9C"
#define ICON_FA_FIRE_ALT "\xEF\x9F\xA4"
#define ICON_FA_BUILDING "\xEF\x86\xAD"
#define ICON_FA_PRESCRIPTION_BOTTLE_ALT "\xEF\x92\x86"
#define ICON_FA_MONEY_BILL_WAVE_ALT "\xEF\x94\xBB"
#define ICON_FA_NEUTER "\xEF\x88\xAC"
#define ICON_FA_BAND_AID "\xEF\x91\xA2"
#define ICON_FA_WIFI "\xEF\x87\xAB"
#define ICON_FA_MASK "\xEF\x9B\xBA"
#define ICON_FA_CHEVRON_UP "\xEF\x81\xB7"
#define ICON_FA_HAND_SPOCK "\xEF\x89\x99"
#define ICON_FA_HAND_POINT_UP "\xEF\x82\xA6"
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                       hello_imgui.h continued                                                                //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                       hello_imgui/image_gl.h included by hello_imgui.h                                       //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifdef HELLOIMGUI_HAS_OPENGL
#include "imgui.h"
#include <memory>

/**
@@md#HelloImGui::ImageGl

Image loading utilities, based on stb_image. They work *only with OpenGL backends*.

* `ImageGl::ImageGlPtr FactorImage(const char *assetPath)`: will load an image from an asset
 and return a unique_ptr<ImageGl>, which you can display with the Draw() or DrawButton() methods.
*  `ImageGl::Draw(...)` and `ImageGl::DrawButton(...)` will draw the image. They have the same
 behavior as ImGui::Image (except that the size can be inferred from the loaded image size)

_Note: Since ImageGl is not copiable, it has a private constructor; and you should use it via ImageGlPtr_
````cpp
using ImageGlPtr = std::unique_ptr<ImageGl>;
````
@@md
*/
namespace HelloImGui
{
struct ImageGl;
using ImageGlPtr = std::unique_ptr<ImageGl>;

struct ImageGl
{
private:
    ImageGl(const char *assetPath);
public:
    static ImageGlPtr FactorImage(const char *assetPath);
    ~ImageGl();

    void Draw(const ImVec2& size = ImVec2(0, 0), const ImVec2& uv0 = ImVec2(0, 0), const ImVec2& uv1 = ImVec2(1,1), const ImVec4& tint_col = ImVec4(1,1,1,1), const ImVec4& border_col = ImVec4(0,0,0,0));
    bool DrawButton(const ImVec2& size = ImVec2(0, 0), const ImVec2& uv0 = ImVec2(0, 0),  const ImVec2& uv1 = ImVec2(1,1), int frame_padding = -1, const ImVec4& bg_col = ImVec4(0,0,0,0), const ImVec4& tint_col = ImVec4(1,1,1,1));    // <0 frame_padding uses default frame padding settings. 0 for no padding

    ImVec2 imageSize;
    ImTextureID imTextureId;
};


}
#endif // #ifdef HELLOIMGUI_HAS_OPENGL

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                       hello_imgui.h continued                                                                //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                       hello_imgui/image_from_asset.h included by hello_imgui.h                               //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/**
@@md#HelloImGui::ImageFromAsset

* `HelloImGui::ImageFromAsset(const char *assetPath, size, ...)`: will display a static image from the assets.
* `bool HelloImGui::ImageButtonFromAsset(const char *assetPath, size, ...)`: will display a button using an image from the assets.
* `ImTextureID HelloImGui::ImTextureIdFromAsset(const char *assetPath)`: will return a texture ID for an image loaded from the assets.

Images are loaded when first displayed, and then cached (they will be freed just before the application exits).

For example, given this files structure:
````
├── CMakeLists.txt
├── assets/
│   └── my_image.jpg
└── my_app.main.cpp
````

then, you can display "my_image.jpg", using:

````cpp
HelloImGui::ImageFromAsset("my_image.jpg");
````

*Note: HelloImGui::ImageFromAsset only works with OpenGL backends. It will throw an exception on other backends*
@@md
*/

namespace HelloImGui
{
    void ImageFromAsset(const char *assetPath, const ImVec2& size = ImVec2(0, 0), const ImVec2& uv0 = ImVec2(0, 0), const ImVec2& uv1 = ImVec2(1,1), const ImVec4& tint_col = ImVec4(1,1,1,1), const ImVec4& border_col = ImVec4(0,0,0,0));
    bool ImageButtonFromAsset(const char *assetPath, const ImVec2& size = ImVec2(0, 0), const ImVec2& uv0 = ImVec2(0, 0),  const ImVec2& uv1 = ImVec2(1,1), int frame_padding = -1, const ImVec4& bg_col = ImVec4(0,0,0,0), const ImVec4& tint_col = ImVec4(1,1,1,1));
    ImTextureID ImTextureIdFromAsset(const char *assetPath);

    namespace internal
    {
        void Free_ImageFromAssetMap();
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                       hello_imgui.h continued                                                                //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                       hello_imgui/runner_params.h included by hello_imgui.h                                  //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                       hello_imgui/app_window_params.h included by hello_imgui/runner_params.h                //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace HelloImGui
{
/**
@@md#AppWindowParams
__AppWindowParams__ is a struct that defines the application window display params.

Members:
* `windowTitle`: _string, default=""_. Title of the application window
* `windowSize`: _ImVec2, default (800,600)_. Size of the window.
* `maximized`: _bool, default=false_. If this boolean flag is true, the application window
   will occupy the full space of the primary screen
* `fullScreen`: _bool, default=false_. If this boolean flag is true, the application window
   will be full screen, with no decorations.
    _Note: on a mobile device, the application will always be full screen._
* `windowPosition`: _ImVec2, default=(-11000, -1)_. Position of the window if x >= -1000,
   else let the OS decide
@@md
**/
struct AppWindowParams
{
    AppWindowParams(std::string windowTitle_ = "",
                            ImVec2 windowSize_ = {800.f, 600.f},
                            bool maximized_ = false,
                            bool fullScreen_ = false,
                            ImVec2 windowPosition_ = {-11000.f, -1.f})
        : windowTitle(windowTitle_),
          windowSize(windowSize_),
          maximized(maximized_),
          fullScreen(fullScreen_),
          windowPosition(windowPosition_)
    {
    }

    std::string windowTitle = "";
    ImVec2 windowSize = {800.f, 600.f};
    bool maximized = false;
    bool fullScreen = false;
    ImVec2 windowPosition = {-11000.f, -1.f};
};

}  // namespace HelloImGui
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                       hello_imgui/runner_params.h continued                                                  //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                       hello_imgui/imgui_window_params.h included by hello_imgui/runner_params.h              //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <functional>

namespace HelloImGui
{
/**
@@md#DefaultImGuiWindowType
 __DefaultImGuiWindowType__ is an enum class that defines whether or not a full screen background window is provided.

 Values:
  * _ProvideFullScreenWindow_: a full window is provided in the background
  * _ProvideFullScreenDockSpace_: a full screen dockspace is provided in the background
  * _NoDefaultWindow_: No default window is provided (except for ImGui's default "debug" window)
@@md
 */
enum class DefaultImGuiWindowType
{
    ProvideFullScreenWindow,
    ProvideFullScreenDockSpace,
    NoDefaultWindow
};

/**
@@md#ImGuiWindowParams
__ImGuiWindowParams__ is a struct that defines the ImGui inner windows params
These settings affect the imgui inner windows inside the application window.
In order to change the application window settings, change the _AppWindowsParams_

 Members:

  * `defaultImGuiWindowType`: _DefaultImGuiWindowType, default=ProvideFullScreenWindow_.
      By default, a full window is provided in the background. You can still
      add windows on top of it, since the Z-order of this background window is always behind

  * `backgroundColor`: _ImVec4, default=ImVec4(0.45f, 0.55f, 0.60f, 1.00f)_.
      This is the "clearColor", only visible is defaultImGuiWindowType is NoDefaultWindow.

  * `showMenuBar`: _bool, default=false_.
    Show Menu bar on top of imgui main window
    You can customize the menu via `RunnerCallbacks.ShowMenus()`

  * `showMenu_App`: _bool, default=true_.
    If menu bar is shown, include or not the default app menu (with Quit button)

  * `showMenu_View`: _bool, default=true_.
    If menu bar is shown, include or not the default _View_ menu, that enables to change the layout and
    set the docked windows and status bar visibility)

  * `showStatusBar`: _bool, default=false_.
    Flag that enable to show a Status bar at the bottom. You can customize the status bar
    via RunnerCallbacks.ShowStatus()

  * `showStatus_Fps`: _bool, default=true_. If set, display the FPS in the status bar.

  * `configWindowsMoveFromTitleBarOnly`: _bool, default=true_.
    Make windows only movable from the title bar
@@md
 */
struct ImGuiWindowParams
{
    DefaultImGuiWindowType defaultImGuiWindowType = DefaultImGuiWindowType::ProvideFullScreenWindow;

    ImVec4 backgroundColor = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);

    bool showMenuBar = false;
    bool showMenu_App = true;
    bool showMenu_View = true;

    bool showStatusBar = false;
    bool showStatus_Fps = true;

    bool configWindowsMoveFromTitleBarOnly = true;
};

}  // namespace HelloImGui
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                       hello_imgui/runner_params.h continued                                                  //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                       hello_imgui/runner_callbacks.h included by hello_imgui/runner_params.h                 //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                       hello_imgui/imgui_default_settings.h included by hello_imgui/runner_callbacks.h        //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
namespace HelloImGui
{
ImFont* LoadFontTTF(const std::string & fontFilename, float fontSize, bool useFullGlyphRange = false, ImFontConfig config = ImFontConfig());
ImFont* LoadFontTTF_WithFontAwesomeIcons(const std::string & fontFilename, float fontSize, bool useFullGlyphRange = false, ImFontConfig configFont = ImFontConfig(), ImFontConfig configIcons = ImFontConfig());
ImFont* MergeFontAwesomeToLastFont(float fontSize, ImFontConfig config = ImFontConfig());

namespace ImGuiDefaultSettings
{
void LoadDefaultFont_WithFontAwesomeIcons();
void SetupDefaultImGuiConfig();
void SetupDefaultImGuiStyle();
}  // namespace ImGuiDefaultSettings
}  // namespace HelloImGui

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                       hello_imgui/runner_callbacks.h continued                                               //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace HelloImGui
{
/**
@@md#VoidFunction_AnyEventCallback
**VoidFunctionPointer** can hold any void(void) function.
````cpp
using VoidFunction = std::function<void(void)>
````

**AnyEventCallback** can hold any bool(void *) function.
  It is designed to handle callbacks for a specific backend.
````cpp
using AnyEventCallback = std::function<bool(void * backendEvent)>
````

@@md
**/
using VoidFunction = std::function<void(void)>;
using AnyEventCallback = std::function<bool(void * backendEvent)>;

/**
@@md#MobileCallbacks
**MobileCallbacks** is a struct that contains callbacks that are called by the application
 when running under "Android, iOS and WinRT".
 These events are specific to mobile and embedded devices that have different requirements
 than your usual desktop application. These events must be handled quickly,
 since often the OS needs an immediate response and will terminate your process shortly
 after sending the event if you do not handle them apprpriately.

 Note: on mobile devices, it is not possible to "Quit" an application, it can only be put on Pause.

 * `OnDestroy`: _VoidFunction, default=empty_. The application is being terminated by the OS.
 * `OnLowMemory`: _VoidFunction, default=empty_. The application is low on memory, free memory if possible.
 * `OnPause`: _VoidFunction, default=empty_. The application is about to enter the background.
 * `OnResume`: _VoidFunction, default=empty_. The application is has come to foreground and is now interactive.

 Note: 'OnPause' and 'OnResume' are called twice consecutively under iOS (before and after entering background
 or foreground).
 @@md
 */
struct MobileCallbacks
{
    VoidFunction OnDestroy = {};
    VoidFunction OnLowMemory = {};
    VoidFunction OnPause = {};
    VoidFunction OnResume = {};
};

/**
 @@md#RunnerCallbacks
 **RunnerCallbacks** is a struct that contains the callbacks that are called by the application

 _Members_

* `ShowGui`: *VoidFunction, default=empty*.
  Fill it with a function that will add your widgets.

* `ShowMenus`: *VoidFunction, default=empty*.
    A function that will render your menus. Fill it with a function that will add ImGui menus by calling:
    _ImGui::BeginMenu(...) / ImGui::MenuItem(...) / ImGui::EndMenu()_

    _Notes:_
    * you do not need to call _ImGui::BeginMenuBar_ and _ImGui::EndMenuBar_
    * Some default menus can be provided: see _ImGuiWindowParams_ options
      (_showMenuBar, showMenu_App_QuitAbout, showMenu_View_)

* `ShowStatus`: *VoidFunction, default=empty*.
  A function that will add items to the status bar. Use small items (ImGui::Text for example),
  since the height of the status is 30. Also, remember to call ImGui::SameLine() between items.

* `PostInit`: *VoidFunction, default=empty*.
    You can here add a function that will be called once after OpenGL and ImGui are inited

* `BeforeExit`: *VoidFunction, default=empty*.
    You can here add a function that will be called once before exiting (when OpenGL and ImGui are
    still inited)

* `AnyBackendEventCallback`: *AnyBackendCallback, default=empty*.
  Callbacks for events from a specific backend. _Only implemented for SDL, where the event
  will be of type 'SDL_Event *'_
  This callback should return true if the event was handled and shall not be processed further.

* `LoadAdditionalFonts`: *VoidFunction, default=_LoadDefaultFont_WithFontAwesome*.
   A function that is called when fonts are ready to be loaded.
   By default, _LoadDefaultFont_WithFontAwesome_ is called but you can copy-customize it.

* `SetupImGuiConfig`: *VoidFunction, default=_ImGuiDefaultSettings::SetupDefaultImGuiConfig*.
    If needed, change ImGui config via SetupImGuiConfig (enable docking, gamepad, etc)

* `SetupImGuiStyle`: *VoidFunction, default=_ImGuiDefaultSettings::SetupDefaultImGuiConfig*.
    If needed, setup your own style by providing your own SetupImGuiStyle callback


* `mobileCallbacks`: *_MobileCallbacks_*. Callbacks that are called by the application
    when running under "Android, iOS and WinRT".
Notes:
  * 'mobileCallbacks' is present only if the target device is a mobile device (iOS, Android).
     Use `#ifdef HELLOIMGUI_MOBILEDEVICE` to detect this.
  * These events are currently handled only with SDL backend.
@@md
 */
struct RunnerCallbacks
{
    VoidFunction ShowGui = {};
    VoidFunction ShowMenus = {};
    VoidFunction ShowStatus = {};
    VoidFunction PostInit = {};
    VoidFunction BeforeExit = {};

    AnyEventCallback AnyBackendEventCallback = {};

    VoidFunction LoadAdditionalFonts = ImGuiDefaultSettings::LoadDefaultFont_WithFontAwesomeIcons;
    VoidFunction SetupImGuiConfig = ImGuiDefaultSettings::SetupDefaultImGuiConfig;
    VoidFunction SetupImGuiStyle = ImGuiDefaultSettings::SetupDefaultImGuiStyle;

#ifdef HELLOIMGUI_MOBILEDEVICE
    MobileCallbacks mobileCallbacks;
#endif
};

}  // namespace HelloImGui

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                       hello_imgui/runner_params.h continued                                                  //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                       hello_imgui/docking_params.h included by hello_imgui/runner_params.h                   //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <vector>
#include <utility>
#include <stdio.h>

namespace HelloImGui
{
/**
@@md#DockingIntro

HelloImGui facilitates the use of dockable windows (based on ImGui [docking branch](https://github.com/ocornut/imgui/tree/docking)).

You can easily specify the default layout of the dockable windows, as well as their GUI code.
HelloImGui will then provide a "View" menu with options in order to show/hide the dockable windows, and to restore the default layout

![demo docking](../../docs/images/docking.gif)

Source for this example: [src/hello_imgui_demos/hello_imgui_demodocking](../../src/hello_imgui_demos/hello_imgui_demodocking)

This is done via the `DockingParams` struct: its member `dockingSplits` specifies the layout,
and its member `dockableWindows` specifies the list of dockable windows, along with their default location,
and their code (given by lambdas). See doc below for more details.
@@md


Docking params: Example usage
@@md#DockingExample

````cpp
HelloImGui::RunnerParams runnerParams;
runnerParams.imGuiWindowParams.defaultImGuiWindowType =
    HelloImGui::DefaultImGuiWindowType::ProvideFullScreenDockSpace;

runnerParams.dockingParams.dockingSplits =
{
    // First, add a bottom space whose height is 25% of the app height
    // This will split the preexisting default dockspace "MainDockSpace"
    // in two parts.
    { "MainDockSpace", "BottomSpace", ImGuiDir_Down, 0.25 },
    // Then, add a space to the left which occupies a column
    // whose width is 25% of the app height
    { "MainDockSpace", "LeftSpace", ImGuiDir_Left, 0.25 }
    // We now have three spaces: "MainDockSpace", "BottomSpace", and "LeftSpace"
};
runnerParams.dockingParams.dockableWindows =
{
    // A Window named "Main" will be placed in "MainDockSpace".
    // Its Gui is provided by the VoidFunction "MainGui"
    {"Main", "MainDockSpace", MainGui},
    // A Log  window named "Logs" will be placed in "BottomSpace".
    // Its Gui is provided by the VoidFunction "ShowLogs"
    {"Logs", "BottomSpace", ShowLogs},
    // A Command panel named "Commands" will be placed in "LeftSpace".
    // Its Gui is provided by the VoidFunction "ShowCommandsPanel"
    {"Commands", "LeftSpace", ShowCommandsPanel}
};

runnerParams.imGuiWindowParams.showMenuBar = true;
runnerParams.imGuiWindowParams.showStatusBar = true;

HelloImGui::Run(runnerParams);
````

@@md
*/

/*****************************************************************************/

//A DockSpaceName is a simple string that identifies a zone on the screen where windows can be docked.
using DockSpaceName = std::string;

/**
@@md#DockingSplit
 **DockingSplit** is a struct that defines the way the docking splits should be applied on the screen
 in order to create new Dock Spaces. _DockingParams_ contains a _vector[DockingSplit]_,
 in order to partition the screen at your will.

_Members:_

* `initialDock`: _DockSpaceName (aka string)_

    id of the space that should be split.
    At the start, there is only one Dock Space named "MainDockSpace".
    You should start by partitioning this space, in order to create a new dock space.

* `newDock`: _DockSpaceName (aka string)_. id of the new dock space that will be created
* `direction`: *ImGuiDir_ (enum with ImGuiDir_Down, ImGuiDir_Down, ImGuiDir_Left, ImGuiDir_Right)*.
Direction where this dock space should be created
* `ratio`: _float, default=0.25f_. Ratio of the initialDock size that should be used by the new dock space
@@md
*/
struct DockingSplit
{
    DockingSplit(const DockSpaceName& initialDock_ = {}, const DockSpaceName& newDock_ = {},
                 ImGuiDir_ direction_ = ImGuiDir_Down, float ratio_ = 0.25f)
      : initialDock(initialDock_), newDock(newDock_), direction(direction_), ratio(ratio_) {}

    DockSpaceName initialDock;
    DockSpaceName newDock;
    ImGuiDir_ direction;
    float ratio = 0.25f;
};

/**
@@md#DockableWindow
 **DockableWindow** is a struct that represents a window that can be docked.

_Members:_

* `label`: _string_. Title of the window.
* `dockSpaceName`: _DockSpaceName (aka string)_. Id of the dock space where this window
   should initialy be placed
* `GuiFunction`: _VoidFuntion_. Any function that will render this window's Gui.
* `isVisible`: _bool, default=true_. Flag that indicates whether this window is visible or not.
* `canBeClosed`: _bool, default=true_. Flag that indicates whether the user can close this window.
* `callBeginEnd`: _bool, default=true_. Flag that indicates whether ImGui::Begin and ImGui::End
   calls should be added automatically (with the given "label"). Set to false if you want to call
   ImGui::Begin/End yourself
* `includeInViewMenu`: _bool, default=true_. Flag that indicates whether this window should be mentioned
   in the view menu.
* `imGuiWindowFlags`: _ImGuiWindowFlags, default=0_. Window flags, see enum ImGuiWindowFlags_
* `windowSize`: _ImVec2, default=(0.f, 0.f) (i.e let the app decide)_. Window size (unused if docked)
* `windowSizeCondition`: _ImGuiCond, default=ImGuiCond_FirstUseEver_. When to apply the window size.
* `windowPos`: _ImVec2, default=(0.f, 0.f) (i.e let the app decide)_. Window position (unused if docked)
* `windowPosCondition`: _ImGuiCond, default=ImGuiCond_FirstUseEver_. When to apply the window position.
* `focusWindowAtNextFrame`: _bool, default = false_. If set to true this window will be focused at the next frame.
@@md
**/
struct DockableWindow
{
    DockableWindow(
        const std::string & label_ = "",
        const DockSpaceName & dockSpaceName_ = "",
        const VoidFunction guiFonction_ = {},
        bool isVisible_ = true,
        bool canBeClosed_ = true)
    : label(label_), dockSpaceName(dockSpaceName_),
          GuiFonction(guiFonction_),
      isVisible(isVisible_),
          canBeClosed(canBeClosed_) {}

    std::string label;

    DockSpaceName dockSpaceName;

    VoidFunction GuiFonction = {};

    bool isVisible = true;
    bool canBeClosed = true;
    bool callBeginEnd = true;
    bool includeInViewMenu = true;
    ImGuiWindowFlags imGuiWindowFlags = 0;

    ImVec2 windowSize = ImVec2(0.f, 0.f);
    ImGuiCond  windowSizeCondition = ImGuiCond_FirstUseEver;

    ImVec2 windowPosition = ImVec2(0.f, 0.f);
    ImGuiCond  windowPositionCondition = ImGuiCond_FirstUseEver;

    bool focusWindowAtNextFrame = false;
};

/**
@@md#DockingParams
 **DockingParams** contains all the settings concerning the docking,
 together _with the Gui functions for the docked windows_.

 _Members:_

* `dockingSplits`: _vector[DockingSplit]_.
  Defines the way docking splits should be applied on the screen in order to create new Dock Spaces
* `dockableWindows`: _vector[DockableWindow]_.
  List of the dockable windows, together with their Gui code
* `resetUserDockLayout`: _bool, default=true_.
  Reset user layout at application startup

 _Helpers:_

 * `DockableWindow * dockableWindowOfName(const std::string & name)`: returns a pointer to a dockable window
 * `void focusDockableWindow(const std::string& name)`: will focus a dockable window

@@md
 */
struct DockingParams
{
    std::vector<DockingSplit> dockingSplits;

    std::vector<DockableWindow> dockableWindows;

    bool resetUserDockLayout = true;

    // wasDockLayoutApplied is an internal variable
    bool wasDockLayoutApplied = false;

    DockableWindow * dockableWindowOfName(const std::string & name);
    void focusDockableWindow(const std::string& windowName);
};
} // namespace HelloImGui

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                       hello_imgui/runner_params.h continued                                                  //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                       hello_imgui/backend_pointers.h included by hello_imgui/runner_params.h                 //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace HelloImGui
{

/**
 @@md#BackendPointers
**BackendPointers** is a struct that contains optional pointers to the backend implementations (for SDL and GLFW).

These pointers will be filled when the application starts, and you can use them to customize
your application behavior using the selected backend.

 Members:
* `glfwWindow`: _void *, default=nullptr_. Pointer to the main GLFW window (of type `GLFWwindow*`).
  Only filled if the backend is GLFW.
* `sdlWindow`: _void *, default=nullptr_. Pointer to the main SDL window (of type `SDL_Window*`).
  Only filled if the backend is SDL (or emscripten + sdl)
* `sdlGlContext`: _void *, default=nullptr_. Pointer to SDL's GlContext (of type `SDL_GLContext`).
  Only filled if the backend is SDL (or emscripten + sdl)
@@md
 */
struct BackendPointers
{
  /* GLFWwindow*    */    void* glfwWindow     = nullptr;

  /* SDL_Window*    */    void* sdlWindow      = nullptr;
  /* SDL_GLContext  */    void* sdlGlContext   = nullptr;
};

}  // namespace HelloImGui

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                       hello_imgui/runner_params.h continued                                                  //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
namespace HelloImGui
{

/**
 @@md#RunnerParams
 **RunnerParams** is a struct that contains all the settings and callbacks needed to run an application.

 Members:
* `callbacks`: _see [runner_callbacks.h](runner_callbacks.h)_.
    callbacks.ShowGui() will render the gui, ShowMenus() will show the menus, etc.
* `appWindowParams`: _see [app_window_params.h](app_window_params.h)_.
    application Window Params (position, size, title)
* `imGuiWindowParams`: _see [imgui_window_params.h](imgui_window_params.h)_.
    imgui window params (use docking, showMenuBar, ProvideFullScreenWindow, etc)
* `dockingParams`: _see [docking_params.h](docking_params.h)_.
    dockable windows content and layout
* `backendPointers`: _see [backend_pointers.h](backend_pointers.h)_.
   A struct that contains optional pointers to the backend implementations. These pointers will be filled
   when the application starts
* `appShallExit`: _bool, default=false_.
   will be set to true by the app when exiting.
   _Note: 'appShallExit' has no effect on Mobile Devices (iOS, Android) and under emscripten, since these apps
   shall not exit._
* `fps`: _int, default = 0` when applicable, set the application refresh rate
   (only used on emscripten for the moment: 0 stands for "let the app or the browser decide")
@@md
 */
struct RunnerParams
{
    RunnerCallbacks callbacks;
    AppWindowParams appWindowParams;
    ImGuiWindowParams imGuiWindowParams;
    DockingParams dockingParams;
    BackendPointers backendPointers;
    bool appShallExit = false;
    int fps = 0;
};

}  // namespace HelloImGui
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                       hello_imgui.h continued                                                                //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/**
@@md#HelloImGui::Run
__HelloImGui::Run()__ will run an application with a single call.

Two signatures are provided:

* `HelloImGui::Run(RunnerParams &)`: full signature, the most customizable version.
   Runs an application whose params and Gui are provided
by runnerParams.

* `HelloImGui::Run(guiFunction, windowSize, windowTitle)`: simple signature
in order to start a simple application with ease.
@@md
*/
namespace HelloImGui
{
    void Run(RunnerParams & runnerParams);

    void Run(VoidFunction guiFonction,
        ImVec2 windowSize = ImVec2(800.f, 600.f),
        std::string windowTitle = ""
        );
}

/**
@@md#SDLMain
Warning for SDL apps under iOS and Android:

SDL uses a dirty hack in order to _replace your main() function by its own main() function_,
which will then call your own main !

Please make sure that the signature of your main() function is *exactly*
    `int main(int argc, char **argv)`
and that your main() function returns an int.
@@md
*/
#if defined(HELLOIMGUI_USE_SDL_OPENGL3)
#include <SDL_main.h>
#endif
