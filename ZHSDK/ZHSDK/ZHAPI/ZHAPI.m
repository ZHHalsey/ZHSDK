//
//  ZHAPI.m
//  ZHSDK
//
//  Created by dpstorm on 2021/1/13.
//



#import "ZHAPI.h"
#import "ZHAPIManager.h"

@implementation ZHAPI

+ (void)testLog{
    NSLog(@"测试sdk打印能否实时显示在demo中asdd水电费水电费发s");
}

+ (void)initWithAppKey:(nonnull NSString *)appkey
                 AppId:(nonnull NSString *)appId
            MerchantId:(nonnull NSString *)merchantId{
    [[ZHAPIManager share] initWithAppKey:appkey AppId:appId MerchantId:merchantId];
}
+ (void)showLoginView{
    
}

+ (void)logout{
    
}



@end
