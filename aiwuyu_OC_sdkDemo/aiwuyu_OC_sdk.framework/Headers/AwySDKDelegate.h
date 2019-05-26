//
//  AwySDKDelegate.h
//  aiwuyu_OC_sdk
//
//  Created by 于洪礼 on 2019/5/22.
//  Copyright © 2019 awy. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol AwySDKDelegate <NSObject>
@optional
- (void)requestShareWithShareData:(AwyShareData * _Nonnull)shareData;
- (BOOL)isAppAuth;
- (void)requestAuthWithNav:(UINavigationController * _Nonnull)nav;
- (void)requestUnionAuthInfoWithAuthInfo:(void (^ _Nullable)(NSString * _Nonnull))authInfo;

@end

NS_ASSUME_NONNULL_END
