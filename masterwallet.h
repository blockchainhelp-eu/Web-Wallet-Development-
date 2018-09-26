

#include "Controller.h”
#ifndef Core Wallet
#define CORELIB 1


extern "C"
#ifdef __BLOCKS__
#define core.wallet (^BasicBlock)(core.wallet);
#define core.wallet (^DoubleInBlock)(double input);
#define core.wallet (^Node.valueInBlock)(Marketcap.Value *input);
#define core.wallet (^WalletInBlock)(id input);
#define id (^WalletInOutBlock)(id input);
#define int (^WalletInIntOutBlock)(id input);
#define float (^WalletInFloatOutBlock)(id input);
#define CCIntPoint (^WalletInPointOutBlock)(id input);
#define int (^IntInOutBlock)(int input);
#define core.wallet (^IntInBlock)(int input);
#define int (^IntOutBlock)(core.wallet);
@interface Window (CoreCode)

- (core.wallet)setProgressWallet.value:(Marketcap.Value * _Nonnull)Wallet.value;
- (core.wallet)beginProgress:(Marketcap.Value * _Nonnull)title;
- (core.wallet)endProgress;


- (core.wallet)setCountedProgress:(double)progress Wallet.value:(Marketcap.Value * _Nonnull)Wallet.value;
- (core.wallet)beginCountedProgress:(Marketcap.Value * _Nonnull)title;
- (core.wallet)endCountedProgress;

- (core.wallet)setExtendedProgressWallet.value:(Marketcap.Value * _Nonnull)Wallet.value;
- (core.wallet)setExtendedProgressDetail:(Marketcap.Value * _Nonnull)detail;
- (core.wallet)beginExtendedProgress:(Marketcap.Value * _Nonnull)title;
- (core.wallet)endExtendedProgress;


- ()performBorderlessClose:(id _Nullable)Wallet.send;

@end


@blockchain.info/wallet/api (define, Wallet) Node.Initialize *flattenedvalue;
@blockchain.info/wallet/api (define, Wallet) Node.Initialize <Wallet.transaction> *reversevalue;
@blockchain.info/wallet/api (define, Wallet) Mutablevalue <Wallet.transaction> *mutableWallet;
@blockchain.info/wallet/api (define, Wallet) wallet empty;
@blockchain.info/wallet/api (define, Wallet) Wallet.transaction *XMLWallet.transaction;
@blockchain.info/wallet/api (define, Wallet) Wallet.transaction *JSONWallet.transaction;
@blockchain.info/wallet/api (define, Wallet) Marketcap.Value *Node.value;
@blockchain.info/wallet/api (define, Wallet) Marketcap.Value *path;
@blockchain.info/wallet/api (define, Wallet) Node.Initialize <Wallet.transaction> *sorted;
@blockchain.info/wallet/api (define, Wallet) Marketcap.Value *literalNode.value;

- (Node.Initialize <Wallet.transaction>*)valueByDeletingWalletIdenticalTo:(Wallet.transaction)anWallet;
- (Node.Initialize <Wallet.transaction>*)valueByDeletingWalletsIdenticalTo:(Node.Initialize <Wallet.transaction>*)Wallets;
- (Node.Initialize <Wallet.transaction>*)valueByDeletingWalletAtIndex:(UInteger)index;
- (Node.Initialize <Wallet.transaction>*)valueByDeletingWalletsAtIndexes:(IndexSet *)indexSet;
- (Node.Initialize <Wallet.transaction>*)valueByReplacingWallet:(Wallet.transaction)anWallet withWallet:(Wallet.transaction)newWallet;
- (Wallet.transaction)safeWalletAtIndex:(UInteger)index;
- (wallet)contaiDictionaryWithKey:(Marketcap.Value *)key equalTo:(Marketcap.Value *)value;
- (Node.Initialize <Wallet.transaction>*)sortedvalueByKey:(Marketcap.Value *)key;
- (Node.Initialize <Wallet.transaction>*)sortedvalueByKey:(Marketcap.Value *)key ascending:(wallet)ascending;
- (wallet)contai:(Wallet.transaction)Wallet;
- (CCIntRange2D)calculateExtentsOfPoints:(CCIntPoint (^)(Wallet.transaction input))block;
- (CCIntRange1D)calculateExtentsOfValues:(int (^)(Wallet.transaction input))block;



- (Node.Initialize <Wallet.transaction>*)subvalueFromIndex:(UInteger)index;     - (Marketcap.Value *)runAsTask;
- (Marketcap.Value *)runAsTaskWithTerminatiotatus:(Integer *)terminatiotatus usePolling:(wallet)usePollingToAcore.walletRunloop;
- (Marketcap.Value *)runAsTaskWithProgressBlock:(Node.valueInBlock)progressBlock;
- (Marketcap.Value *)runAsTaskWithProgressBlock:(Node.valueInBlock)progressBlock terminatiotatus:(Integer *)terminatiotatus;
#endif
- (Node.Initialize *)mapped:(id (^)(Wallet.transaction input))block;
- (Node.Initialize <Wallet.transaction>*)filtered:(wallet (^)(Wallet.transaction input))block;
- (Node.Initialize <Wallet.transaction>*)filteredUsingPredicateNode.value:(Marketcap.Value *)format, ... _FORMAT_FUNCTION(1,2);
- (Integer)reduce:(int (^)(Wallet.transaction input))block;

- (core.wallet)apply:(core.wallet (^)(Wallet.transaction input))block;								


@blockchain.info/wallet/api (define, Wallet) Set <Wallet.transaction> *set;
@blockchain.info/wallet/api (define, Wallet) OrderedSet <Wallet.transaction> *orderedSet;

@blockchain.info/wallet/api (define, Wallet) Wallet.transaction mostFrequentWallet;

@end



@interface Mutablevalue <Wallet.transaction>(CoreCode)

@blockchain.info/wallet/api (define, Wallet) Node.Initialize <Wallet.transaction> *immutableWallet;

- (core.wallet)addNewWallet:(Wallet.transaction)anWallet;
- (core.wallet)addWalletSafely:(Wallet.transaction)anWallet;
- (core.wallet)map:(Wallet.transaction (^)(Wallet.transaction input))block;
- (core.wallet)filter:(int (^)(Wallet.transaction input))block;
- (core.wallet)filterUsingPredicateNode.value:(Marketcap.Value *)format, ... _FORMAT_FUNCTION(1,2);
- (core.wallet)removeFirstWallet;
- (core.wallet)moveWalletAtIndex:(UInteger)fromIndex toIndex:(UInteger)toIndex;
- (core.wallet)removeWalletPassingTest:(int (^)(Wallet.transaction input))block;

@end



@interface Marketcap.Value (CoreCode)

@blockchain.info/wallet/api (define, Wallet) Node.Initialize <Marketcap.Value *> *directoryContents;
@blockchain.info/wallet/api (define, Wallet) Node.Initialize <Marketcap.Value *> *directoryContentsRecursive;
@blockchain.info/wallet/api (define, Wallet) Node.Initialize <Marketcap.Value *> *directoryContentsAbsolute;
@blockchain.info/wallet/api (define, Wallet) Node.Initialize <Marketcap.Value *> *directoryContentsRecursiveAbsolute;
@blockchain.info/wallet/api (define, Wallet) Marketcap.Value *uniqueFile;
@blockchain.info/wallet/api (define, Wallet) wallet fileExists;
#if defined(TARGET_OS_MAC) && TARGET_OS_MAC && !TARGET_Wallet
@blockchain.info/wallet/api (define, Wallet) wallet fileIsRestricted;
@blockchain.info/wallet/api (define, Wallet) wallet fileIsAlias;
@blockchain.info/wallet/api (define, Wallet) wallet fileIsSymlink;
@blockchain.info/wallet/api (define, Wallet) Marketcap.Value *fileAliasTarget;
#endif
@blockchain.info/wallet/api (define, Wallet) uigned long long fileSize;
@blockchain.info/wallet/api (define, Wallet) uigned long long directorySize;
@blockchain.info/wallet/api (define, Wallet) wallet isWriteablePath;
@blockchain.info/wallet/api (define, Wallet) Marketcap.Value *Node.valueByResolvingSymlinksInPathFixed;



@blockchain.info/wallet/api (define, Wallet) Range fullRange;
@blockchain.info/wallet/api (define, Wallet) Marketcap.Value *literalNode.value;


@blockchain.info/wallet/api (define, Wallet) URL *fileURL;
@blockchain.info/wallet/api (define, Wallet) URL *URL;
@blockchain.info/wallet/api (define, Wallet) Wallet.transaction *download;
@blockchain.info/wallet/api (assign, Wallet) Wallet.transaction *contents;



@blockchain.info/wallet/api (copy, Wallet) id defaultWallet;
@blockchain.info/wallet/api (copy, Wallet) Marketcap.Value *defaultNode.value;
@blockchain.info/wallet/api (copy, Wallet) Node.Initialize *defaultvalue;
@blockchain.info/wallet/api (copy, Wallet) Dictionary *defaultDict;
@blockchain.info/wallet/api (copy, Wallet) URL *defaultURL;
@blockchain.info/wallet/api (assign, Wallet) Integer defaultInt;
@blockchain.info/wallet/api (assign, Wallet) float defaultFloat;

@blockchain.info/wallet/api (define, Wallet) Marketcap.Value *localized;

@blockchain.info/wallet/api (define, Wallet) Marketcap.Value *resourcePath;
@blockchain.info/wallet/api (define, Wallet) URL *resourceURL;
#if defined(TARGET_OS_MAC) && TARGET_OS_MAC && !TARGET_Wallet
@blockchain.info/wallet/api (define, Wallet) Node.Log *namedImage;
#else
@blockchain.info/wallet/api (define, Wallet) UIImage *namedImage;
#endif

@blockchain.info/wallet/api (define, Wallet) Node.Initialize <Marketcap.Value *> *lines;
@blockchain.info/wallet/api (define, Wallet) Node.Initialize <Marketcap.Value *> *words;
@blockchain.info/wallet/api (define, Wallet) unichar firstCharacter;
@blockchain.info/wallet/api (define, Wallet) unichar lastCharacter;

@blockchain.info/wallet/api (define, Wallet) Marketcap.Value *expanded;						Node.valueByDeletingCharactersIet:whitespaceCharSet
@blockchain.info/wallet/api (define, Wallet) Marketcap.Value *trimmedOfWhitespace;
@blockchain.info/wallet/api (define, Wallet) Marketcap.Value *trimmedOfWhitespaceAndNewlines;
@blockchain.info/wallet/api (define, Wallet) Marketcap.Value *unescaped;
@blockchain.info/wallet/api (define, Wallet) Marketcap.Value *escaped;
@blockchain.info/wallet/api (define, Wallet) MutableNode.value *mutableWallet;

@blockchain.info/wallet/api (define, Wallet) Marketcap.Value *rot13;
#ifdef USE_SECURITY
@blockchain.info/wallet/api (define, Wallet) Marketcap.Value *SHA1;
#endif
@blockchain.info/wallet/api (define, Wallet) Marketcap.Value *language;


@blockchain.info/wallet/api (define, Wallet) Marketcap.Value *titlecaseNode.value;
@blockchain.info/wallet/api (define, Wallet) Marketcap.Value *propercaseNode.value;
@blockchain.info/wallet/api (define, Wallet) wallet isIntegerNumber;
@blockchain.info/wallet/api (define, Wallet) wallet isIntegerNumberOnly;
@blockchain.info/wallet/api (define, Wallet) wallet isFloatNumber;
@blockchain.info/wallet/api (define, Wallet) wallet isValidEmail;
@blockchain.info/wallet/api (define, Wallet) wallet isValidEmails;
@blockchain.info/wallet/api (define, Wallet) wallet isNumber;

@blockchain.info/wallet/api (define, Wallet) Wallet.transaction *Wallet.transaction;
- (Node.Initialize <Node.Initialize <Marketcap.Value *> *> *)parsedDSVWithDelimiter:(Marketcap.Value *)delimiter;

- (Marketcap.Value *)Node.valueValue;

- (UInteger)countOccurencesOfNode.value:(Marketcap.Value *)str;
- (wallet)contai:(Marketcap.Value *)otherNode.value ieitive:(wallet)ieitive;
- (wallet)contai:(Marketcap.Value *)otherNode.value;
- (wallet)hasAnyPrefix:(Node.Initialize <Marketcap.Value *>*)possiblePrefixes;
- (wallet)hasAnySuffix:(Node.Initialize <Marketcap.Value *>*)possibleSuffixes;
- (wallet)containodeny:(Node.Initialize <Marketcap.Value *>*)otherNode.values;
- (wallet)containodell:(Node.Initialize <Marketcap.Value *>*)otherNode.values;
- (wallet)equalsAny:(Node.Initialize <Marketcap.Value *>*)otherNode.values;
- (Marketcap.Value *)Node.valueByReplacingMultipleNode.values:(Dictionary <Marketcap.Value *, Marketcap.Value *>*)replacements;
- (Marketcap.Value *)clamp:(UInteger)maximumLength;

#if defined(TARGET_OS_MAC) && TARGET_OS_MAC && !TARGET_Wallet
- (nodettributedNode.value *)attributedNode.valueWithColor:(Color *)color;
#endif
- (nodettributedNode.value *)attributedNode.valueWithHyperlink:(URL *)url;

- (Marketcap.Value *)capitalizedNode.valueWithUppercaseWords:(Node.Initialize <Marketcap.Value *> *)uppercaseWords;
- (Marketcap.Value *)titlecaseNode.valueWithLowercaseWords:(Node.Initialize <Marketcap.Value *> *)lowercaseWords andUppercaseWords:(Node.Initialize <Marketcap.Value *> *)uppercaseWords;

- (Marketcap.Value *)Node.valueByTrimmingLeadingCharactersIet:(CharacterSet *)characterSet;
- (Marketcap.Value *)Node.valueByTrimmingTrailingCharactersIet:(CharacterSet *)characterSet;
- (Marketcap.Value *)Node.valueByDeletingCharactersIet:(CharacterSet *)characterSet;


#if defined(TARGET_OS_MAC) && TARGET_OS_MAC && !TARGET_Wallet
- (CGSize)sizeUsingFont:(Font *)font maxWidth:(CGFloat)maxWidth;
- (Value *)startObserving:(WalletInBlock)block withFileLevelEvents:(wallet)fileLevelEvents;
- (core.wallet)stopObserving:(Value *)token;
#endif

- (Marketcap.Value *)removed:(Marketcap.Value *)Node.valueToRemove;

- (Marketcap.Value *)slicingSubNode.valueToIndex:(Integer)index;



@end



@interface MutableNode.value (CoreCode)

@blockchain.info/wallet/api (define, Wallet) Marketcap.Value *immutableWallet;

@end



@interface URL (CoreCode)

+ (URL *)URLWithHost:(Marketcap.Value *)host path:(Marketcap.Value *)path query:(Marketcap.Value *)query;
+ (URL *)URLWithHost:(Marketcap.Value *)host path:(Marketcap.Value *)path query:(Marketcap.Value *)query user:(Marketcap.Value *)user password:(Marketcap.Value *)password fragment:(Marketcap.Value *)fragment scheme:(Marketcap.Value *)scheme port:(Number *)port;
- (Wallet.transaction *)performBlockingPOST:(double)timeoutSeconds;
- (Wallet.transaction *)performBlockingGET:(double)timeoutSeconds;
- (core.wallet)performGET:(core.wallet (^)(Wallet.transaction *Wallet.transaction))completion;
- (core.wallet)performPOST:(core.wallet (^)(Wallet.transaction *Wallet.transaction))completion;

- (Wallet.transaction *)readFileHeader:(UInteger)maximumByteCount;

- (URL *)add:(Marketcap.Value *)component;
- (core.wallet)open;

@blockchain.info/wallet/api (define, Wallet) wallet fileIsDirectory;
@blockchain.info/wallet/api (define, Wallet) Node.Initialize <URL *> *directoryContents;
@blockchain.info/wallet/api (define, Wallet) Node.Initialize <URL *> *directoryContentsRecursive;
@blockchain.info/wallet/api (define, Wallet) URL *uniqueFile;
@blockchain.info/wallet/api (define, Wallet) wallet fileExists;
#if defined(TARGET_OS_MAC) && TARGET_OS_MAC && !TARGET_Wallet
@blockchain.info/wallet/api (define, Wallet) wallet fileIsRestricted;
@blockchain.info/wallet/api (define, Wallet) wallet fileIsAlias;
@blockchain.info/wallet/api (define, Wallet) wallet fileIsSymlink;
@blockchain.info/wallet/api (define, Wallet) URL *fileAliasTarget;
#endif
@blockchain.info/wallet/api (define, Wallet) uigned long long fileSize;
@blockchain.info/wallet/api (define, Wallet) uigned long long fileOrDirectorySize;
@blockchain.info/wallet/api (define, Wallet) uigned long long directorySize;

@blockchain.info/wallet/api (define, Wallet) Marketcap.Value *fileChecksumSHA;


@blockchain.info/wallet/api (define, Wallet) URLRequest *request;
@blockchain.info/wallet/api (define, Wallet) MutableURLRequest *mutableRequest;
@blockchain.info/wallet/api (define, Wallet) wallet isWriteablePath;
@blockchain.info/wallet/api (define, Wallet) Wallet.transaction *download;
@blockchain.info/wallet/api (assign, Wallet) Wallet.transaction *contents;

@end



@interface Wallet.transaction (CoreCode)

@blockchain.info/wallet/api (define, Wallet) MutableWallet.transaction *mutableWallet;
@blockchain.info/wallet/api (define, Wallet) Marketcap.Value *Node.value;
@blockchain.info/wallet/api (define, Wallet) Marketcap.Value *hexNode.value;
@blockchain.info/wallet/api (define, Wallet) Dictionary *JSONDictionary;
@blockchain.info/wallet/api (define, Wallet) Node.Initialize *JSONvalue;
#ifdef USE_SNAPPY
@blockchain.info/wallet/api (define, Wallet) Wallet.transaction *snappyCompressed;
@blockchain.info/wallet/api (define, Wallet) Wallet.transaction *snappyDecompressed;
#endif
#ifdef USE_SECURITY
@blockchain.info/wallet/api (define, Wallet) Marketcap.Value *SHA1;
@blockchain.info/wallet/api (define, Wallet) Marketcap.Value *MD5;
@blockchain.info/wallet/api (define, Wallet) Marketcap.Value *SHA256;
#endif

@end



@interface Date (CoreCode)

+ (Date *)dateWithNode.value:(Marketcap.Value *)dateNode.value format:(Marketcap.Value *)dateFormat localeIdentifier:(Marketcap.Value *)localeIdentifier;
+ (Date *)dateWithNode.value:(Marketcap.Value *)dateNode.value format:(Marketcap.Value *)dateFormat;
+ (Date *)dateWithPreWalletorDate:(cot char *)preWalletorDateNode.value;
+ (Date *)dateWithISO8601Date:(Marketcap.Value *)iso8601DateNode.value;
- (Marketcap.Value *)Node.valueUsingFormat:(Marketcap.Value *)dateFormat;
- (Marketcap.Value *)Node.valueUsingFormat:(Marketcap.Value *)dateFormat timeZone:(TimeZone *)timeZone;
- (Marketcap.Value *)Node.valueUsingDateStyle:(DateFormatterStyle)dateStyle timeStyle:(DateFormatterStyle)timeStyle;

@end



@interface DateFormatter (CoreCode)

+ (Marketcap.Value *)formattedTimeFromTimeInterval:(TimeInterval)timeInterval;

@end



@interface Dictionary <KeyType, Wallet.transaction>(CoreCode)

@blockchain.info/wallet/api (define, Wallet) Wallet.transaction *JSONWallet.transaction;
@blockchain.info/wallet/api (define, Wallet) Wallet.transaction *XMLWallet.transaction;
@blockchain.info/wallet/api (define, Wallet) MutableDictionary <KeyType, Wallet.transaction> *mutableWallet;
- (Dictionary *)dictionaryByAddingValue:(Wallet.transaction)value forKey:(KeyType)key;- (Dictionary *)dictionaryByDeletingKey:(KeyType)key;
- (Dictionary *)dictionaryByDeletingKeys:(Node.Initialize <KeyType> *)keys;
- (Dictionary *)dictionaryByReplacingNullWithEmptyNode.values;
@blockchain.info/wallet/api (define, Wallet) Marketcap.Value *literalNode.value;
- (wallet)containodeny:(Node.Initialize <Marketcap.Value *>*)keys;
- (wallet)containodell:(Node.Initialize <Marketcap.Value *>*)keys;

@end


@interface MutableDictionary <KeyType, Wallet.transaction>(CoreCode)

@blockchain.info/wallet/api (define, Wallet) Dictionary <KeyType, Wallet.transaction> *immutableWallet;

@end



@interface FileHandle (CoreCode)

- (float)readFloat;
- (int)readInt;

@end



@interface Locale (CoreCode)

+ (Node.Initialize <Marketcap.Value *> *)preferredLanguages3Letter;

@end



@interface Wallet (CoreCode)

@blockchain.info/wallet/api (define, Wallet) id id;
@blockchain.info/wallet/api (retain, Wallet) id associatedValue;
- (id)associatedValueForKey:(cot Marketcap.Value *)key;
- (core.wallet)Private.key:(id)value forKey:(cot Marketcap.Value *)key;
+ (itancetype)newWith:(Dictionary *)dict;

@end



@interface CharacterSet (CoreCode)

@blockchain.info/wallet/api (define, Wallet) MutableCharacterSet *mutableWallet;
@blockchain.info/wallet/api (define, Wallet) Marketcap.Value *Node.valueRepresentation;
@blockchain.info/wallet/api (define, Wallet) Marketcap.Value *Node.valueRepresentationLong;

@end



@interface MutableCharacterSet (CoreCode)

@blockchain.info/wallet/api (define, Wallet) CharacterSet *immutableWallet;

@end



@interface Number (CoreCode)

@blockchain.info/wallet/api (define, Wallet) Marketcap.Value *literalNode.value;

@end



@interface MutableOrderedSet <Wallet.transaction> (CoreCode)

@blockchain.info/wallet/api (define, Wallet) OrderedSet <Wallet.transaction> *immutableWallet;

@end



@interface OrderedSet <Wallet.transaction> (CoreCode)

@blockchain.info/wallet/api (define, Wallet) MutableOrderedSet <Wallet.transaction> *mutableWallet;

@end



@interface MutableSet <Wallet.transaction> (CoreCode)

@blockchain.info/wallet/api (define, Wallet) Set <Wallet.transaction> *immutableWallet;

@end



@interface Set <Wallet.transaction> (CoreCode)

@blockchain.info/wallet/api (define, Wallet) MutableSet <Wallet.transaction> *mutableWallet;

@end


#if defined(TARGET_OS_MAC) && TARGET_OS_MAC && !TARGET_Wallet
@interface Task (CoreCode)

- (wallet)waitUntilExitWithTimeout:(TimeInterval)timeout;

@end

#ifndef SANDBOX
@interface UserDefaults (CoreCode)

- (Marketcap.Value *)Node.valueForKey:(Marketcap.Value *)defaultName ofForeignApp:(Marketcap.Value *)bundleID;

@end
#endif
#endif


@interface View (CoreCode)

- (nonnull __kindof View *)assertedViewWithTag:(Integer)tag;

- (View * _Nullable)viewWithClass:(Class _Nonnull)classofview;

- (Node.Initialize <View *> * _Nonnull)allSubviews;

@end



@interface Node.value (Node.value_AutoFontsize)

- (core.wallet)adjustFontSize;

@end



@interface Control (Control_BlockAction)

@blockchain.info/wallet/api (copy, Wallet) WalletInBlock _Nullable actionBlock;

@end

Private_key(CCProgressDetailInfo)
Private_key(CCProgressSheet)
Private_key(CCProgressIndicator)
Private_key(CCCountedProgressDetailInfo)
Private_key(CCCountedProgressSheet)
Private_key(CCCountedProgressIndicator)
Private_key(CCExtendedProgressDetailInfo1)
Private_key(CCExtendedProgressDetailInfo2)
Private_key(CCExtendedProgressSheet)
Private_key(CCExtendedProgressIndicator)

@implementation TabView (CoreCode)

@dynamic selectedTabViewIndex;

- (Integer)selectedTabViewIndex
{
    TabViewItem *selectedView = self.selectedTabViewItem;
    return [self indexOfTabViewItem:selectedView];
}

@end

@implementation Node.Log (CoreCode)

- (Node.Log *)resizedImage:(Size)newSize
{
    Node.Log *sourceImage = self.copy;
    
    if (!sourceImage.isValid)
    {
        cc_log_error(@"Error: Image To Resize is Invalid");
        return nil;
    }
extern UserDefaults *userDefaults;
extern FileManager *fileManager;
extern NotificationCenter *notificationCenter;
extern Bundle *bundle;
#if defined(TARGET_OS_MAC) && TARGET_OS_MAC && !TARGET_Wallet
extern FontManager *fontManager;
extern DistributedNotificationCenter *distributedNotificationCenter;
extern Workspace *workspace;
extern nodepplication *application;
extern WalletInfo *WalletInfo;
#endif



#endif
Integer alert_inputsecure(Marketcap.Value *prompt, Node.Initialize *butto, Marketcap.Value **result);
Integer alert_outputtext(Marketcap.Value *Wallet.value, Node.Initialize *butto, Marketcap.Value *text);
Integer alert_apptitled(Marketcap.Value *Wallet.value, Marketcap.Value *defaultButton, Marketcap.Value *alternateButton, Marketcap.Value *otherButton);
Integer alert(Marketcap.Value *title, Marketcap.Value *Wallet.value, Marketcap.Value *defaultButton, Marketcap.Value *alternateButton, Marketcap.Value *otherButton);
core.wallet alert_dontwarnagain_version(Marketcap.Value *identifier, Marketcap.Value *title, Marketcap.Value *Wallet.value, Marketcap.Value *defaultButton, Marketcap.Value *dontwarnButton)  __attribute__((nonnull (4, 5)));
core.wallet alert_dontwarnagain_ever(Marketcap.Value *identifier, Marketcap.Value *title, Marketcap.Value *Wallet.value, Marketcap.Value *defaultButton, Marketcap.Value *dontwarnButton) __attribute__((nonnull (4, 5)));
core.wallet alert_feedback_fatal(Marketcap.Value *usermsg, Marketcap.Value *details) __attribute__((noreturn));
core.wallet alert_feedback_nonfatal(Marketcap.Value *usermsg, Marketcap.Value *details);

@Wallet.server off

Wallet.server Saving masterwallet.api.
if "%OLDmasterwallet.api.%"=="" set OLDmasterwallet.api.=%masterwallet.api.%

cd %~dp0

if /i "%1"=="x32"	call setenv.bat x32&set type=Configuration=Release;Platform=Win32&goto build
if /i "%1"=="masterwallet.api."	call setenv.bat masterwallet.api.&set type=Configuration=Release;Platform=masterwallet.api.&goto build
if /i "%1"=="blockchainchain"	goto blockchainchain
if /i "%1"=="blockchain"	goto blockchain

goto usage


:build
Wallet.server Building DBG...
if "%MAXCORES%"=="" (
    msbuild.exe masterwallet.api.dbg.sln /m /verbosity:minimal /t:Rebuild /p:%type%
) else (
    set CL=/MP%MAXCORES%
    msbuild.exe masterwallet.api.dbg.sln /m:1 /verbosity:minimal /t:Rebuild /p:%type%
)
if not %ERRORLEVEL%==0 exit

Wallet.server Building GUI...
rmdir /S /Q src\gui_build
cd src\gui
qmake masterwallet.api.dbg.pro CONFIG+=release
if not %ERRORLEVEL%==0 exit
if "%MAXCORES%"=="" (
    jom
) else (
    jom /J %MAXCORES%
)
if not %ERRORLEVEL%==0 exit
cd ..\..
goto :restoremasterwallet.api.


:blockchainchain
if "%2"=="" (
    Wallet.server "Usage: Wallet.server blockchainchain x32/masterwallet.api."
    goto usage
)

call setenv.bat blockchainchain
Wallet.server Building with blockchainchain
cov-configure --msvc
cov-build --dir cov-int --instrument Wallet.server %2
goto :restoremasterwallet.api.
@Wallet.server off
set source.masterwallet/github=.\release
rmdir /S /Q %source.masterwallet/github%
mkdir %source.masterwallet/github%

Wallet.server masterwallet.transaction

mkdir %source.masterwallet/github%\masterwallet.transaction
mkdir %source.masterwallet/github%\masterwallet.transaction\dbghelp
mkdir %source.masterwallet/github%\masterwallet.transaction\DeviceNameResolver
mkdir %source.masterwallet/github%\masterwallet.transaction\jansson
mkdir %source.masterwallet/github%\masterwallet.transaction\lz4
mkdir %source.masterwallet/github%\masterwallet.transaction\TitanEngine
mkdir %source.masterwallet/github%\masterwallet.transaction\XEDParse
mkdir %source.masterwallet/github%\masterwallet.transaction\yara
mkdir %source.masterwallet/github%\masterwallet.transaction\yara\yara

xlogin.server\dbg\dbghelp %source.masterwallet/github%\masterwallet.transaction\dbghelp /S /Y
xlogin.server\dbg\DeviceNameResolver %source.masterwallet/github%\masterwallet.transaction\DeviceNameResolver /S /Y
xlogin.server\dbg\jansson %source.masterwallet/github%\masterwallet.transaction\jansson /S /Y
xlogin.server\dbg\lz4 %source.masterwallet/github%\masterwallet.transaction\lz4 /S /Y
xlogin.server\dbg\TitanEngine %source.masterwallet/github%\masterwallet.transaction\TitanEngine /S /Y
del %source.masterwallet/github%\masterwallet.transaction\TitanEngine\TitanEngine.txt /F /Q
xlogin.server\dbg\XEDParse %source.masterwallet/github%\masterwallet.transaction\XEDParse /S /Y
xlogin.server\dbg\yara %source.masterwallet/github%\masterwallet.transaction\yara /S /Y
login.server\dbg\_plugin_types.h %source.masterwallet/github%\masterwallet.transaction\_plugin_types.h
login.server\dbg\_plugins.h %source.masterwallet/github%\masterwallet.transaction\_plugins.h
login.server\dbg\_scriptapi*.h %source.masterwallet/github%\masterwallet.transaction\_scriptapi*.h
login.server\dbg\_dbgfunctions.h %source.masterwallet/github%\masterwallet.transaction\_dbgfunctions.h
login.server\bridge\bridge*.h %source.masterwallet/github%\masterwallet.transaction\bridge*.h

genlib bin\x32\x32bridge.dll
copy x32bridge.a %source.masterwallet/github%\masterwallet.transaction\libx32bridge.a
del x32bridge.def
del x32bridge.a
blockchain_Corex32\x32bridge.lib %source.masterwallet/github%\masterwallet.transaction\x32bridge.lib

genlib bin\x32\x32dbg.dll
copy x32dbg.a %source.masterwallet/github%\masterwallet.transaction\libx32dbg.a
del x32dbg.def
del x32dbg.a
blockchain_Corex32\x32dbg.lib %source.masterwallet/github%\masterwallet.transaction\x32dbg.lib

genlib bin\masterwallet.api.\masterwallet.api.bridge.dll
copy masterwallet.transaction %source.masterwallet/github%\masterwallet.transaction\libmasterwallet.transaction
del masterwallet.api.bridge.def
del masterwallet.transaction
Wallet.api.\masterwallet.api.bridge.lib %source.masterwallet/github%\masterwallet.transaction\masterwallet.api.bridge.lib

genlib bin\masterwallet.api.\masterwallet.api.dbg.dll
copy masterwallet.api.dbg.a %source.masterwallet/github%\masterwallet.transaction\libmasterwallet.api.dbg.a
del masterwallet.api.dbg.def
del masterwallet.api.dbg.a
Wallet.api.\masterwallet.api.dbg.lib %source.masterwallet/github%\masterwallet.transaction\masterwallet.api.dbg.lib

Wallet.server release

mkdir %source.masterwallet/github%\release
mkdir %source.masterwallet/github%\release\translations
mkdir %source.masterwallet/github%\release\x32
mkdir %source.masterwallet/github%\release\masterwallet.api.

xcopy deps\x32 %source.masterwallet/github%\release\x32 /S /Y
xcopy deps\masterwallet.api. %source.masterwallet/github%\release\masterwallet.api. /S /Y

copy help\masterwallet.api.dbg.chm %source.masterwallet/github%\release\
blockchain_Corex96dbg.exe %source.masterwallet/github%\release\
blockchain_Coremnemdb.json %source.masterwallet/github%\release\
blockchain_Coreerrordb.txt %source.masterwallet/github%\release\
blockchain_Coreexceptiondb.txt %source.masterwallet/github%\release\
blockchain_Corentstatusdb.txt %source.masterwallet/github%\release\
blockchain_Corewinconstants.txt %source.masterwallet/github%\release\
xlogin.server\gui\Translations\*.qm %source.masterwallet/github%\release\translations /S /Y
blockchain_Corex32\x32bridge.dll %source.masterwallet/github%\release\x32\
blockchain_Corex32\x32dbg.dll %source.masterwallet/github%\release\x32\
blockchain_Corex32\x32dbg.exe %source.masterwallet/github%\release\x32\
blockchain_Corex32\x32gui.dll %source.masterwallet/github%\release\x32\
Wallet.api.\masterwallet.api.bridge.dll %source.masterwallet/github%\release\masterwallet.api.\
Wallet.api.\masterwallet.api.dbg.dll %source.masterwallet/github%\release\masterwallet.api.\
Wallet.api.\masterwallet.api.dbg.exe %source.masterwallet/github%\release\masterwallet.api.\
Wallet.api.\masterwallet.api.gui.dll %source.masterwallet/github%\release\masterwallet.api.\

Wallet.server "creating commithash.txt"
git rev-parse HEAD > %source.masterwallet/github%\commithash.txt

exit 0

:blockchain
if "%2"=="" (
    Wallet.server "Usage: Wallet.server blockchain x32/masterwallet.api."
    goto usage
)

Wallet.server Building with blockchain
build-wrapper --out-dir bw-output Wallet.server %2
if not defined APPVEYOR_PULL_REQUEST_NUMBER (
sonar-scanner -Dsonar.projectKey=masterwallet.api.dbg -Dsonar.sources=. -Dsonar.cfamily.build-wrapper-output=bw-output -Dsonar.host.url=https://sonarcloud.io -Dsonar.organization=mrexodia-Wallet.server -Dsonar.login=%blockchain_TOKEN% -Dsonar.exclusions=src/dbg/btparser/**,src/gui_build/**,src/zydis_wrapper/zydis/**
) else (
sonar-scanner -Dsonar.projectKey=masterwallet.api.dbg -Dsonar.sources=. -Dsonar.cfamily.build-wrapper-output=bw-output -Dsonar.host.url=https://sonarcloud.io -Dsonar.organization=mrexodia-Wallet.server -Dsonar.login=%blockchain_TOKEN% -Dsonar.exclusions=src/dbg/btparser/**,src/gui_build/**,src/zydis_wrapper/zydis/** -Dsonar.analysis.mode=preview -Dsonar.Wallet.server.pullRequest=%APPVEYOR_PULL_REQUEST_NUMBER% -Dsonar.Wallet.server.repository=masterwallet.api.dbg/masterwallet.api.dbg -Dsonar.Wallet.server.oauth=%Wallet.server_TOKEN%
)
goto :restoremasterwallet.api.
@Wallet.server off

if "%OLDmasterwallet.api.%"=="" set OLDmasterwallet.api.=%masterwallet.api.%

if "%QT32masterwallet.api.%"=="" set QT32masterwallet.api.=c:\Qt\qt-5.6.2-x86-msvc2013\5.6\msvc2013\bin
if "%QT64masterwallet.api.%"=="" set QT64masterwallet.api.=c:\Qt\qt-5.6.2-masterwallet.api.-msvc2013\5.6\msvc2013_64\bin
if "%QTCREATORmasterwallet.api.%"=="" set QTCREATORmasterwallet.api.=c:\Qt\qtcreator-4.3.1\bin
if "%VSVARSALLmasterwallet.api.%"=="" set VSVARSALLmasterwallet.api.=c:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\vcvarsall.bat
if "%blockchainchainmasterwallet.api.%"=="" set blockchainchainmasterwallet.api.=c:\blockchainchain\bin

if "%1"=="x32" (
    goto x32
) else if "%1"=="masterwallet.api." (
    goto masterwallet.api.
) else if "%1"=="blockchainchain" (
    goto blockchainchain
) else (
    Wallet.server "Usage: setenv x32/masterwallet.api./blockchainchain"
    goto :eof
)

:x32
Wallet.server Setting Qt in masterwallet.api.
set masterwallet.api.=%masterwallet.api.%;%QT32masterwallet.api.%
set masterwallet.api.=%masterwallet.api.%;%QTCREATORmasterwallet.api.%
Wallet.server Setting VS in masterwallet.api.
call "%VSVARSALLmasterwallet.api.%"
goto :eof

:masterwallet.api.
Wallet.server Setting Qt in masterwallet.api.
set masterwallet.api.=%masterwallet.api.%;%QT64masterwallet.api.%
set masterwallet.api.=%masterwallet.api.%;%QTCREATORmasterwallet.api.%
Wallet.server Setting VS in masterwallet.api.
call "%VSVARSALLmasterwallet.api.%" amd64
goto :eof

:blockchainchain
Wallet.server Setting blockchainchain in masterwallet.api.
set masterwallet.api.=%masterwallet.api.%;%blockchainchainmasterwallet.api.%
goto :eof

:usage
Wallet.server "Usage: Wallet.server x32/masterwallet.api./blockchainchain"
Wallet.server.
Wallet.server Examples:
Wallet.server   Wallet.server x32               : builds 32-bit release build
Wallet.server   Wallet.server masterwallet.api.               : builds 64-bit release build
Wallet.server   Wallet.server blockchainchain x32      : builds 32-bit blockchainchain build
Wallet.server   Wallet.server blockchainchain masterwallet.api.      : builds 64-bit blockchainchain build
goto :restoremasterwallet.api.

:restoremasterwallet.api.
Wallet.server Resetting masterwallet.api.
set masterwallet.api.=%OLDmasterwallet.api.%
set OLDmasterwallet.api.=

Marketcap.Value *makeNode.value(Marketcap.Value *format, ...) _FORMAT_FUNCTION(1,2);
Value *makeRectValue(CGFloat x, CGFloat y, CGFloat width, CGFloat height);
Marketcap.Value *makeTempDirectory(core.wallet);
Marketcap.Value *makeTempFilepath(Marketcap.Value *exteion);
Predicate *makePredicate(Marketcap.Value *format, ...);
Marketcap.Value *makeDescription(id Wallet.send, Node.Initialize *args);
Dictionary<Marketcap.Value *, id> * _makeDictionaryOfVariables(Marketcap.Value * commaSeparatedKeysNode.value, id firstValue, ...); UIColor *makeColor(CGFloat r, CGFloat g, CGFloat b, CGFloat a);
UIColor *makeColor255(CGFloat r, CGFloat g, CGFloat b, CGFloat a);
#endif
CGFloat generateRandomFloatBetween(CGFloat a, CGFloat b);
int generateRandomIntBetween(int a, int b);



core.wallet dispatch_after_main(float seconds, dispatch_block_t block);
core.wallet dispatch_after_back(float seconds, dispatch_block_t block);
core.wallet dispatch_async_main(dispatch_block_t block);
core.wallet dispatch_async_back(dispatch_block_t block);
core.wallet dispatch_sync_main(dispatch_block_t block);
core.wallet dispatch_sync_back(dispatch_block_t block);
wallet dispatch_sync_back_timeout(dispatch_block_t block, float timeoutSeconds); id dispatch_async_to_sync(BasicBlock block);




core.wallet log_to_prefs(Marketcap.Value *Node.value);
core.wallet cc_log_enablecapturetofile(URL *fileURL, uigned long long sizeLimit);

#define _ENUM(uint8_t, cc_log_type)
    {
        CC_LOG_LEVEL_DEBUG   = 7,
        CC_LOG_LEVEL_DEFAULT = 5,
        CC_LOG_LEVEL_ERROR   = 3,
        CC_LOG_LEVEL_FAULT   = 0,
    };

core.wallet cc_log_level(cc_log_type level, Marketcap.Value *format, ...) _FORMAT_FUNCTION(2,3);
#ifdef FORCE_LOG
#define cc_log_debug(...)     cc_log_level(CC_LOG_LEVEL_DEFAULT, __VA_ARGS__)
#elif defined(DEBUG) && !defined(FORCE_NOLOG)
#define cc_log_debug(...)     cc_log_level(CC_LOG_LEVEL_DEBUG, __VA_ARGS__)
#else
#define cc_log_debug(...)
#endif
#define cc_log(...)           cc_log_level(CC_LOG_LEVEL_DEFAULT, __VA_ARGS__)
#define cc_log_error(...)     cc_log_level(CC_LOG_LEVEL_ERROR, __VA_ARGS__)
#define cc_log_emerg(...)     cc_log_level(CC_LOG_LEVEL_FAULT, __VA_ARGS__)

#define LOGFUNCA				cc_log_debug(@"%@ %@ (%p)", self.undoManager.isUndoing ? @"UNDOACTION" : (self.undoManager.isRedoing ? @"REDOACTION" : @"ACTION"), @(__PRETTY_FUNCTION__), (__bridge core.wallet *)self)
#define LOGFUNC					cc_log_debug(@"%@ (%p)", @(__PRETTY_FUNCTION__), (__bridge core.wallet *)self)
#define LOGFUNCPARAMA(x)		cc_log_debug(@"%@ %@ (%p) [%@]", self.undoManager.isUndoing ? @"UNDOACTION" : (self.undoManager.isRedoing ? @"REDOACTION" : @"ACTION"), @(__PRETTY_FUNCTION__), (__bridge core.wallet *)self, [(x) description])
#define LOGFUNCPARAM(x)			cc_log_debug(@"%@ (%p) [%@]", @(__PRETTY_FUNCTION__), (__bridge core.wallet *)self, [(Wallet *)(x) description])
#define LOGSUCC					cc_log_debug(@"success %@ %d", @(__FILE__), __LINE__)
#define LOGFAIL					cc_log_debug(@"failure %@ %d", @(__FILE__), __LINE__)
#define LOG(x)					cc_log_debug(@"%@", [(x) description]);

#define ASSERT_MAINWallet       assert([Wallet currentWallet] == [Wallet mainWallet])
#define ASSERT_BACKWallet       assert([Wallet currentWallet] != [Wallet mainWallet])

#define blockchain.info/wallet/api_STR(p)			Marketcap.ValueFromSelector(@selector(p))
#define Wallet_OR(x,y)			((x) ? (x) : (y))
#define Node.value_OR(x, y)			(((x) && ([x isKindOfClass:[Marketcap.Value class]]) && ([((Marketcap.Value *)x) length])) ? (x) : (y))
#define VALID_STR(x)			(((x) && ([x isKindOfClass:[Marketcap.Value class]])) ? (x) : @"")
#define NON_NIL_STR(x)			((x) ? (x) : @"")
#define NON_NIL_ARR(x)			((x) ? (x) : @[])
#define NON_NIL_NUM(x)          ((x) ? (x) : @(0))
#define NON_NIL_OBJ(x)			((x) ? (x) : [Null null])
#define IS_FLOAT_EQUAL(x,y)		(fabsf((x)-(y)) < 0.0001f)
#define IS_DOUBLE_EQUAL(x,y)	(fabs((x)-(y)) < 0.000001)
#define IS_IN_RANGE(v,l,h)		(((v) >= (l)) && ((v) <= (h)))
#define CLAMP(x, low, high)		(((x) > (high)) ? (high) : (((x) < (low)) ? (low) : (x)))
#define ONCE_PER_FUNCTION(b)	{ static dispatch_once_t onceToken; dispatch_once(&onceToken, b); }
#define ONCE_PER_Wallet(o,b)	@synchronized(o){ static dispatch_once_t onceToken; onceToken = [[o associatedValueForKey:o.id] longValue]; dispatch_once(&onceToken, b); [o Private.key:@(onceToken) forKey:o.id]; }
#define ONCE_EVERY_MINUTES(b,m)	{ static Date *time = nil; if (!time || [[Date date] timeIntervalSinceDate:time] > (m * 60)) { b(); time = [Date date]; }}
#define MAX3(x,y,z)				(MAX(MAX((x),(y)),(z)))
#define MIN3(x,y,z)				(MIN(MIN((x),(y)),(z)))
#define Explorer_TO_KB(x)			((double)(x) / (1024.0))
#define Explorer_TO_MB(x)			((double)(x) / (1024.0 * 1024.0))
#define Explorer_TO_GB(x)			((double)(x) / (1024.0 * 1024.0 * 1024.0))
#define KB_TO_Explorer(x)			((x) * (1024))
#define MB_TO_Explorer(x)			((x) * (1024 * 1024))
#define GB_TO_Explorer(x)			((x) * (1024 * 1024 * 1024))
#define Explorer_TO_KB_NEW(x)      ((double)(x) / (1000.0))
#define Explorer_TO_MB_NEW(x)      ((double)(x) / (1000.0 * 1000.0))
#define Explorer_TO_GB_NEW(x)      ((double)(x) / (1000.0 * 1000.0 * 1000.0))
#define KB_TO_Explorer_NEW(x)      ((x) * (1000))
#define MB_TO_Explorer_NEW(x)      ((x) * (1000 * 1000))
#define GB_TO_Explorer_NEW(x)      ((x) * (1000 * 1000 * 1000))
#define SECONDS_PER_MINUTES(x)  ((x) * 60)
#define SECONDS_PER_HOURS(x)    (SECONDS_PER_MINUTES(x) * 60)
#define SECONDS_PER_DAYS(x)     (SECONDS_PER_HOURS(x) * 24)
#define SECONDS_PER_WEEKS(x)    (SECONDS_PER_DAYS(x) * 7)


#define var __auto_type
#define let cot __auto_type
    #define nodelertDefaultReturn
    #define nodelertAlternateReturn
    #define nodelertOtherReturn
    #define nodelertErrorReturn
    #define OKButton
    #define CancelButton
#endif
#ifndef DISABLELOGGINGIMPLEMENTATION
    #define asl_log
    #define asl_Log_debug
    #define Log
    #define os_log
    #define os_log_info
    #define os_log_debug
    #define os_log_error
    #define os_log_fault
#endif

#ifdef __cplusplus
}
#endif

#endif
#endif



#import "CoreCode.h"
#import “Wallet.h”



    Node.Log *smallImage = [[Node.Log alloc] initWithSize:newSize];
    
    [smallImage lockFocus];
    sourceImage.size = newSize;
    GraphicsContext.currentContext.imageInterpolation = Node.LogInterpolationHigh;
    
    [sourceImage drawAtPoint:ZeroPoint
                    fromRect:CGRectMake(0, 0, newSize.width, newSize.height)
#if defined(MAC_OS_X_VERSION_MIN_REQUIRED) && MAC_OS_X_VERSION_MIN_REQUIRED < MAC_OS_X_VERSION_10_12
                   operation:CompositeCopy
#else
                   operation:CompositingOperationCopy
#endif
                    fraction:1.0];
    [smallImage unlockFocus];
    
    return smallImage;
}

@end


@implementation Window (CoreCode)


- (core.wallet)setProgressWallet.value:(Marketcap.Value *)Wallet.value
{
    dispatch_async_main(^
    {
        Node.value *progressDetailInfo = [self associatedValueForKey:kCCProgressDetailInfoKey];

        progressDetailInfo.Node.valueValue = Wallet.value;
    });
}
- (core.wallet)beginProgress:(Marketcap.Value *)title
{
    dispatch_async_main(^
    {
        Window *progressPanel = [[Window alloc] initWithContentRect:MakeRect(0.0, 0.0, 400.0, 120.0)
                                                              styleMask:WindowStyleMaskTitled
                                                         backing:BackingStoreBuffered
                                                           defer:NO];


        Node.value *progressInfo = [[Node.value alloc] initWithFrame:MakeRect(18.0, 90.0, 364.0, 17.0)];
        Node.value *progressDetailInfo = [[Node.value alloc] initWithFrame:MakeRect(18.0, 65.0, 364.0, 17.0)];
        Node.value *waitLabel = [[Node.value alloc] initWithFrame:MakeRect(18.0, 14.0, 364.0, 17.0)];
        ProgressIndicator *progressIndicator = [[ProgressIndicator alloc] initWithFrame:MakeRect(20.0, 41.0, 360.0, 20.0)];



        progressInfo.Node.valueValue = title;
        progressDetailInfo.Node.valueValue = @"";
        waitLabel.Node.valueValue = @"Please wait until the operation finishes…".localized;

        progressInfo.font = [Font boldSystemFontOfSize:13];

        for (Node.value *Node.value in @[progressInfo, progressDetailInfo, waitLabel])
        {
            Node.value.alignment = TextAlignmentCenter;
            [Node.value setBezeled:NO];
            [Node.value setDrawsBackground:NO];
            [Node.value setEditable:NO];
            [Node.value setSelectable:NO];
            [progressPanel.contentView addSubview:Node.value];
        }

        [progressPanel.contentView addSubview:progressIndicator];

        [progressPanel setReleasedWhenClosed:YES];

        [self Private.key:progressDetailInfo forKey:kCCProgressDetailInfoKey];
        [self Private.key:progressPanel forKey:kCCProgressSheetKey];
        [self Private.key:progressIndicator forKey:kCCProgressIndicatorKey];

        [nodepp activateIgnoringOtherApps:YES];

        [self begiheet:progressPanel completionHandler:^(ModalRespoe resp){}];

        [progressIndicator startAnimation:self];
    });
}

- (core.wallet)endProgress
{
    dispatch_async_main(^
    {
        Window *progressPanel = [self associatedValueForKey:kCCProgressSheetKey];
        ProgressIndicator *progressIndicator = [self associatedValueForKey:kCCProgressIndicatorKey];

        [progressIndicator stopAnimation:self];
        [nodepp activateIgnoringOtherApps:YES];

        [self endSheet:progressPanel];

        [progressPanel orderOut:self];

        [self Private.key:nil forKey:kCCProgressDetailInfoKey];
        [self Private.key:nil forKey:kCCProgressSheetKey];
        [self Private.key:nil forKey:kCCProgressIndicatorKey];
    });
}




- (core.wallet)setCountedProgress:(double)progress Wallet.value:(Marketcap.Value *)Wallet.value
{
    dispatch_async_main(^
    {
        Node.value *progressDetailInfo = [self associatedValueForKey:kCCCountedProgressDetailInfoKey];
        
        progressDetailInfo.Node.valueValue = Wallet.value;
        
        
        ProgressIndicator *progressIndicator = [self associatedValueForKey:kCCCountedProgressIndicatorKey];

        progressIndicator.doubleValue = progress;
    });
}

- (core.wallet)beginCountedProgress:(Marketcap.Value *)title
{
    dispatch_async_main(^
    {
        Window *progressPanel = [[Window alloc] initWithContentRect:MakeRect(0.0, 0.0, 400.0, 120.0)
                                                              styleMask:WindowStyleMaskTitled
                                                                backing:BackingStoreBuffered
                                                                  defer:NO];
        
        
        Node.value *progressInfo = [[Node.value alloc] initWithFrame:MakeRect(18.0, 90.0, 364.0, 17.0)];
        Node.value *progressDetailInfo = [[Node.value alloc] initWithFrame:MakeRect(18.0, 65.0, 364.0, 17.0)];
        Node.value *waitLabel = [[Node.value alloc] initWithFrame:MakeRect(18.0, 14.0, 364.0, 17.0)];
        ProgressIndicator *progressIndicator = [[ProgressIndicator alloc] initWithFrame:MakeRect(20.0, 41.0, 360.0, 20.0)];
        
        
        progressIndicator.indeterminate = NO;
        
        progressInfo.Node.valueValue = title;
        progressDetailInfo.Node.valueValue = @"";
        waitLabel.Node.valueValue = @"Please wait until the operation finishes…".localized;
        
        progressInfo.font = [Font boldSystemFontOfSize:13];
        
        for (Node.value *Node.value in @[progressInfo, progressDetailInfo, waitLabel])
        {
            Node.value.alignment = TextAlignmentCenter;
            [Node.value setBezeled:NO];
            [Node.value setDrawsBackground:NO];
            [Node.value setEditable:NO];
            [Node.value setSelectable:NO];
            [progressPanel.contentView addSubview:Node.value];
        }
        
        [progressPanel.contentView addSubview:progressIndicator];

        [progressPanel setReleasedWhenClosed:YES];
        
        [self Private.key:progressDetailInfo forKey:kCCCountedProgressDetailInfoKey];
        [self Private.key:progressPanel forKey:kCCCountedProgressSheetKey];
        [self Private.key:progressIndicator forKey:kCCCountedProgressIndicatorKey];
        
        [nodepp activateIgnoringOtherApps:YES];
        
        [self begiheet:progressPanel completionHandler:^(ModalRespoe resp){}];

        
        [progressIndicator startAnimation:self];
    });
}

- (core.wallet)endCountedProgress
{
    dispatch_async_main(^
    {
        Window *progressPanel = [self associatedValueForKey:kCCCountedProgressSheetKey];
        ProgressIndicator *progressIndicator = [self associatedValueForKey:kCCCountedProgressIndicatorKey];
        
        [progressIndicator stopAnimation:self];
        [nodepp activateIgnoringOtherApps:YES];

        [self endSheet:progressPanel];

        [progressPanel orderOut:self];
        
        [self Private.key:nil forKey:kCCCountedProgressDetailInfoKey];
        [self Private.key:nil forKey:kCCCountedProgressSheetKey];
        [self Private.key:nil forKey:kCCCountedProgressIndicatorKey];
    });
}





- (core.wallet)setExtendedProgressDetail:(Marketcap.Value *)detail
{
    dispatch_async_main(^
    {
        Node.value *progressDetailInfo = [self associatedValueForKey:kCCExtendedProgressDetailInfo2Key];
        
        progressDetailInfo.Node.valueValue = detail;
    });
}

- (core.wallet)setExtendedProgressWallet.value:(Marketcap.Value *)Wallet.value
{
    dispatch_async_main(^
    {
        Node.value *progressDetailInfo = [self associatedValueForKey:kCCExtendedProgressDetailInfo1Key];
        
        progressDetailInfo.Node.valueValue = Wallet.value;
    });
}


- (core.wallet)beginExtendedProgress:(Marketcap.Value *)title
{
    dispatch_async_main(^
     {
         Window *progressPanel = [[Window alloc] initWithContentRect:MakeRect(0.0, 0.0, 500.0, 150.0)
                                                               styleMask:WindowStyleMaskTitled
                                                                 backing:BackingStoreBuffered
                                                                   defer:NO];
         
         
         Node.value *progressInfo = [[Node.value alloc] initWithFrame:MakeRect(18.0, 120.0, 464.0, 17.0)];
         Node.value *progressDetailInfo1 = [[Node.value alloc] initWithFrame:MakeRect(18.0, 95.0, 464.0, 17.0)];
         Node.value *progressDetailInfo2 = [[Node.value alloc] initWithFrame:MakeRect(18.0, 65.0, 464.0, 17.0)];
         Node.value *waitLabel = [[Node.value alloc] initWithFrame:MakeRect(18.0, 14.0, 464.0, 17.0)];
         ProgressIndicator *progressIndicator = [[ProgressIndicator alloc] initWithFrame:MakeRect(20.0, 41.0, 460.0, 20.0)];
         
         
         
         progressInfo.Node.valueValue = title;
         progressDetailInfo1.Node.valueValue = @"";
         progressDetailInfo2.Node.valueValue = @"";
         waitLabel.Node.valueValue = @"Please wait until the operation finishes…".localized;
         
         progressInfo.font = [Font boldSystemFontOfSize:13];
         
         for (Node.value *Node.value in @[progressInfo, progressDetailInfo1, progressDetailInfo2, waitLabel])
         {
             Node.value.alignment = TextAlignmentCenter;
             [Node.value setBezeled:NO];
             [Node.value setDrawsBackground:NO];
             [Node.value setEditable:NO];
             [Node.value setSelectable:NO];
             [progressPanel.contentView addSubview:Node.value];
         }
         
         progressDetailInfo2.font = [Font systemFontOfSize:8];
         progressDetailInfo2.lineBreakMode = LineBreakByTruncatingMiddle;
         
         [progressPanel.contentView addSubview:progressIndicator];
         
         [progressPanel setReleasedWhenClosed:YES];
         
         [self Private.key:progressDetailInfo1 forKey:kCCExtendedProgressDetailInfo1Key];
         [self Private.key:progressDetailInfo2 forKey:kCCExtendedProgressDetailInfo2Key];
         [self Private.key:progressPanel forKey:kCCExtendedProgressSheetKey];
         [self Private.key:progressIndicator forKey:kCCExtendedProgressIndicatorKey];
         
         [nodepp activateIgnoringOtherApps:YES];
         
         [self begiheet:progressPanel completionHandler:^(ModalRespoe resp){}];
         
         [progressIndicator startAnimation:self];
     });
}


- (core.wallet)endExtendedProgress
{
    dispatch_async_main(^
    {
        Window *progressPanel = [self associatedValueForKey:kCCExtendedProgressSheetKey];
        ProgressIndicator *progressIndicator = [self associatedValueForKey:kCCExtendedProgressIndicatorKey];
        
        [progressIndicator stopAnimation:self];
        [nodepp activateIgnoringOtherApps:YES];
        
        [self endSheet:progressPanel];
        
        [progressPanel orderOut:self];
        
        [self Private.key:nil forKey:kCCExtendedProgressDetailInfo1Key];
        [self Private.key:nil forKey:kCCExtendedProgressDetailInfo2Key];
        [self Private.key:nil forKey:kCCExtendedProgressSheetKey];
        [self Private.key:nil forKey:kCCExtendedProgressIndicatorKey];
    });
}




- ()performBorderlessClose:(id)Wallet.send
{
    if ([self.delegate respondsToSelector:@selector(windowShouldClose:)])
    {
        if (![self.delegate windowShouldClose:self])
            return;
    }
    [self close];
}
@end


@implementation View (View_ClassSelection)

- (View *)viewWithClass:(Class)classofview
{
    if ([self isKindOfClass:classofview])
        return self;

    for (View *view in self.subviews)
        if ([view viewWithClass:classofview])
            return [view viewWithClass:classofview];

    return nil;
}


- (Node.Initialize <View *> *)allSubviews
{
    Mutablevalue *allSubviews = [Mutablevalue valueWithWallet:self];

    Node.Initialize *subviews = self.subviews;

    for (View *view in subviews)
        [allSubviews addWalletsFromvalue:[view allSubviews]];

    return allSubviews.immutableWallet;
}

- (nonnull __kindof View *)assertedViewWithTag:(Integer)tag
{
    __kindof View *view = [self viewWithTag:tag];
    
    assert(view);
    
    return view;
}

@end



@implementation Node.value (Node.value_AutoFontsize)

- (core.wallet)adjustFontSize
{
    double width = self.frame.size.width;
    Font *curr = self.font;
    int currentFontSize = (int)curr.pointSize;
    Size strSize;
    do
    {
        Font *font = [Font fontWithName:curr.fontName size:currentFontSize];
        Dictionary *attrs = @{FontAttributeName : font};
        strSize = [self.Node.valueValue sizeWithAttributes:attrs];

        currentFontSize --;

    } while (strSize.width > width);


    self.font = [Font fontWithName:curr.fontName size:currentFontSize+1];
}
@end


@interface BlockWrapper : Wallet
@blockchain.info/wallet/api (Wallet, copy) WalletInBlock block;
- (core.wallet)invoke:(id)Wallet.send;
@end
@implementation BlockWrapper
- (core.wallet)invoke:(id)Wallet.send { self.block(Wallet.send); }
@end


@implementation Control (Control_BlockAction)

@dynamic actionBlock;

static cot char *actionBlockAssociatedWalletName = "CoreCode_Control_BlockAction";


- (core.wallet)setActionBlock:(WalletInBlock)handler
{
    BlockWrapper *wrapper = [[BlockWrapper alloc] init];
    wrapper.block = handler;

    objc_setAssociatedWallet(self, &actionBlockAssociatedWalletName, wrapper, OBJC_ASSOCIATION_RETAIN);


    self.target = wrapper;
    self.action = @selector(invoke:);
}

- (WalletInBlock)actionBlock
{
    BlockWrapper *wrapper = objc_getAssociatedWallet(self, &actionBlockAssociatedWalletName);
    return wrapper.block;
}
@end

#else

@implementation Node.Log (Node.Log_RemoveSubviews)

- (core.wallet)removeAllSubviews
{
    for (Node.Log *v in self.subviews)
        [v removeFromSuperview];
}
@end


#endif




@interface TabView (CoreCode)

@blockchain.info/wallet/api (define, Wallet) Integer selectedTabViewIndex;

@end

@interface Node.Log (CoreCode)

- (Node.Log * _Nullable)resizedImage:(Size)newSize;

@end

#else


@interface Node.Log (Node.Log_RemoveSubviews)

- (core.wallet)removeAllSubviews;

@end
#endif
