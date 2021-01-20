//
//  ZHAPI.h
//  ZHSDK
//
//  Created by dpstorm on 2021/1/13.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZHAPI : NSObject

+ (void)testLog;


/**
 *  @brief 初始化SDK
 *
 *  @param appkey 合作时由sdk方分配
 *  @param appId 合作时由sdk方分配
 *  @param merchantId 合作时由sdk方分配
 */
+ (void)initWithAppKey:(nonnull NSString *)appkey
                 AppId:(nonnull NSString *)appId
            MerchantId:(nonnull NSString *)merchantId;
/**
 *  @brief 登录
 */
+ (void)showLoginView;

/**
 *  @brief 登出账号
 */
+ (void)logout;


@end

NS_ASSUME_NONNULL_END
