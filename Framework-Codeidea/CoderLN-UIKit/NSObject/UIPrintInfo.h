/*
 * UIPrintInfo.h
 *
 * UIKit (c) 2010-2017
 *
 * 不知名刘先生
 * Public - CoderLN / https://githubidea.github.io / https://github.com/CoderLN
 * Welcome your star|fork, Our sharing can be combined; Convenient to review and help others.
 *
 * 🏃🏻‍♂️ ◕ 尊重熬夜整理的作者，该模块将系统化学习，后续替换、补充文章内容 ~
 */

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKitDefines.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, UIPrintInfoOutputType) {
    UIPrintInfoOutputGeneral,           // B&W or color, normal quality output for mixed text, graphics, and images
    UIPrintInfoOutputPhoto,             // B&W or color, best quality output for images
    UIPrintInfoOutputGrayscale,         // B&W content only
    UIPrintInfoOutputPhotoGrayscale NS_ENUM_AVAILABLE_IOS(7_0),    // B&W only, best quality output for images
} __TVOS_PROHIBITED;

typedef NS_ENUM(NSInteger, UIPrintInfoOrientation) {
    UIPrintInfoOrientationPortrait,
    UIPrintInfoOrientationLandscape,
} __TVOS_PROHIBITED;

typedef NS_ENUM(NSInteger, UIPrintInfoDuplex) {
    UIPrintInfoDuplexNone,
    UIPrintInfoDuplexLongEdge,       // flip back page along long edge (same orientation in portrait, flipped for landscape)
    UIPrintInfoDuplexShortEdge,      // flip back page along short edge (flipped orientation for portrait, same in landscape)
} __TVOS_PROHIBITED;

NS_CLASS_AVAILABLE_IOS(4_2) __TVOS_PROHIBITED @interface UIPrintInfo : NSObject <NSCopying, NSCoding>

- (nullable instancetype)initWithCoder:(NSCoder *)aDecoder NS_DESIGNATED_INITIALIZER;

+ (UIPrintInfo *)printInfo;
+ (UIPrintInfo *)printInfoWithDictionary:(nullable NSDictionary *)dictionary;

@property(nullable,nonatomic,copy)     NSString                *printerID;         // default is nil. set after user selects printer
@property(nonatomic,copy)     NSString                *jobName;           // default is application name
@property(nonatomic)          UIPrintInfoOutputType    outputType;        // default is UIPrintInfoOutputGeneral
@property(nonatomic)          UIPrintInfoOrientation   orientation;       // default is UIPrintInfoOrientationPortrait
@property(nonatomic)          UIPrintInfoDuplex        duplex;            // default is based on document type (none for photo, long edge for other)
@property(nonatomic,readonly)   NSDictionary *dictionaryRepresentation;

@end

NS_ASSUME_NONNULL_END_START_COPYRIGHT__JIANSHU_BAIKAISHUILN__WechatPublic_Codeidea__END