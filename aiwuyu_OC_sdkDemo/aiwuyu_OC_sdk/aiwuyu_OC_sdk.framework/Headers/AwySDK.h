//
//  AwySDK.h
//  aiwuyu_OC_sdk
//
//  Created by 于洪礼 on 2019/5/21.
//  Copyright © 2019 awy. All rights reserved.
//

//#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AwyShareData.h"
#import "AwySDKDelegate.h"

NS_ASSUME_NONNULL_BEGIN


@interface AwySDK : NSObject

@property (nonatomic , strong)id<AwySDKDelegate> delegate;
@property (nonatomic , assign)BOOL isEnvironmentDebug;
@property (nonatomic , assign)BOOL isEnableContentShare;
@property (nonatomic , assign)BOOL isEnableUnionAuth;
@property (nonatomic , assign)BOOL isEnableCallAuthInterface;
@property (nonatomic , assign)BOOL isLog;

+ (NSString *)Awy_SDK_URL;
+ (NSString *)Awy_SDK_AES_KEY;
+ (void)log:(NSString * _Nonnull) str;
+ (instancetype)shared;
+ (void)initializeWithChannelCode:(NSString * _Nonnull)channelCode delegate:(id <AwySDKDelegate> _Nullable)delegate;
+ (void)openUrlWithUrlStr:(NSString * _Nonnull)urlStr;

/*
 EnvironmentDebug:环境，true：prd， false：test
 enableContentShare:是否支持调用分享
 enableUnionAuth:是否支持联合登录
 enableCallAuthInterface:联合登录是否支持调起登录页面
 */
+ (void)setConfigWith:(BOOL)EnvironmentDebug enableContentShare:(BOOL)enableContentShare enableUnionAuth:(BOOL)enableUnionAuth enableCallAuthInterface:(BOOL)enableCallAuthInterface;
+ (void)isShowLog:(BOOL)log;

@end

NS_ASSUME_NONNULL_END
