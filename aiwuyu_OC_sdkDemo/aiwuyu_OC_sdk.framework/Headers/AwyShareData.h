//
//  AwyShareData.h
//  aiwuyu_OC_sdk
//
//  Created by QC on 2019/5/22.
//  Copyright © 2019 awy. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


@interface AwyShareData : NSObject

@property (nonatomic , copy)NSString * titleStr;
@property (nonatomic , copy)NSString * content;
@property (nonatomic , copy)NSString * shareUrl;
@property (nonatomic , copy)NSString * imageUrl;

- (instancetype)initWith:(NSString *)titleStr content:(NSString *)content shareUrl:(NSString *)shareUrl imageUrl:(NSString *)imageUrl;

@end

NS_ASSUME_NONNULL_END
