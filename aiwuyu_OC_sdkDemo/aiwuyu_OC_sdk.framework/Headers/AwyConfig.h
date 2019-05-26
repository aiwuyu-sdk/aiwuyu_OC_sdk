//
//  AwyConfig.h
//  aiwuyu_OC_sdk
//
//  Created by 于洪礼 on 2019/5/21.
//  Copyright © 2019 awy. All rights reserved.
//

#import <UIKit/UIKit.h>

#define USERAGENT [NSString stringWithFormat:@"Mobile/%@ AwySDK/%@",[AwyConfig AwySDK_iPhoneType],[AwyConfig AwySDK_Version]]

#define WEAKSELF __weak typeof(self) weakSelf = self

#define UIColorFromRGBA(s, A)  [UIColor colorWithRed:(((s & 0xFF0000) >> 16))/255.0 green:(((s &0xFF00) >>8))/255.0 blue:((s &0xFF))/255.0 alpha:A]

#define Awy_NavTopHeight [UIApplication sharedApplication].statusBarFrame.size.height+44

#define Awy_TabBarHeight ([UIApplication sharedApplication].statusBarFrame.size.height > 20 ? 34:0)

#define Awy_Screen_Width  [UIScreen mainScreen].bounds.size.width

#define Awy_Screen_Height  [UIScreen mainScreen].bounds.size.height

NS_ASSUME_NONNULL_BEGIN

@interface AwyConfig : NSObject
+ (NSString *)AwySDK_iPhoneType;
+ (NSString *)AwySDK_Version;
+ (UIImage *)awy_image:(NSString *)imageName;
+ (NSString *)dictionaryToStr:(NSDictionary *)dict;
+ (NSDictionary *)stringToDict:(NSString *)jsonStr;
+ (CGSize)textHeightFromTextString:(NSString *)text width:(CGFloat)textWidth font:(UIFont *)font;
+ (UIImage *)resizeImage:(UIImage *)image toSize:(CGSize)size;
+ (NSString *)getUUID;
+ (NSDate *)dateFormat:(NSDate *)date to:(NSString *)str;
+ (BOOL)stringIsEmpty:(NSString *)str;
@end

NS_ASSUME_NONNULL_END
