//
//  ViewController.m
//  aiwuyu_OC_sdkDemo
//
//  Created by 于洪礼 on 2019/5/26.
//  Copyright © 2019 yuhongli. All rights reserved.
//

#import "ViewController.h"
#import <aiwuyu_OC_sdk/AwySDK.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
}
- (IBAction)click:(id)sender {
    [AwySDK openUrlWithUrlStr:@"https://test-miniprogram-h5.aiwuyu.com/awy/#/index"];
}


@end
