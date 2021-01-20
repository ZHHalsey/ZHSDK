//
//  ZHAPIManager.h
//  ZHSDK
//
//  Created by dpstorm on 2021/1/13.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZHAPIManager : NSObject

/// 单例
+ (instancetype)share;


/**
 *  @brief 初始化SDK
 *
 *  @param appkey 合作时由sdk方分配
 *  @param appId 合作时由sdk方分配
 *  @param merchantId 合作时由sdk方分配
 */
- (void)initWithAppKey:(nonnull NSString *)appkey
                 AppId:(nonnull NSString *)appId
            MerchantId:(nonnull NSString *)merchantId;



    
@end

NS_ASSUME_NONNULL_END
