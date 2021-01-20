//
//  ZHAPIManager.m
//  ZHSDK
//
//  Created by dpstorm on 2021/1/13.
//

#import "ZHAPIManager.h"

static ZHAPIManager *_manager;


@implementation ZHAPIManager


+ (instancetype)share{
    static dispatch_once_t oneToken;
       dispatch_once(&oneToken, ^{
           _manager = [[ZHAPIManager alloc]init];
       });
    return _manager;
}

- (void)initWithAppKey:(nonnull NSString *)appkey
                 AppId:(nonnull NSString *)appId
            MerchantId:(nonnull NSString *)merchantId{
    
}

@end
