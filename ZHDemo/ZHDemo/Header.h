//
//  Header.h
//  RenheJinfu
//
//  Created by ZH on 2018/8/8.
//  Copyright © 2018年 张豪. All rights reserved.
//

#ifndef Header_h
#define Header_h





// 适配
#define SCREEN_HEIGHT           [UIScreen mainScreen].bounds.size.height
#define SCREEN_WIDTH            [UIScreen mainScreen].bounds.size.width
// iOS13以前获取statusBar的高度写法
//#define STATUS_HEIGHT           [[UIApplication sharedApplication] statusBarFrame].size.height
// iOS13以后获取statusBar的高度写法
#define STATUS_HEIGHT           [UIApplication sharedApplication].windows.firstObject.windowScene.statusBarManager.statusBarFrame.size.height
#define NAV_HEIGHT              self.navigationController.navigationBar.frame.size.height
#define TABBAR_HEIGHT           self.tabBarController.tabBar.frame.size.height
#define ZHView_x(view)          view.frame.origin.x
#define ZHView_y(view)          view.frame.origin.y
#define ZHView_height(view)     view.bounds.size.height
#define ZHView_width(view)      view.bounds.size.width
#define ZHView_right(view)      view.frame.origin.x+view.bounds.size.width
#define ZHView_bottom(view)     view.frame.origin.y+view.bounds.size.height

#define ZHUserDefaults          [NSUserDefaults standardUserDefaults]

#define ZHImage(a)              [UIImage imageNamed:a]

#define ZHPush(vc)              [self.navigationController pushViewController:(vc) animated:YES]
#define ZHPop()                 [self.navigationController popViewControllerAnimated:YES]
#define ZHPopTo(vc)             [self.navigationController popToViewController:(vc) animated:YES]
#define ZHPopToRoot()           [self.navigationController popToRootViewControllerAnimated:YES]

#define ZHColor(r, g, b, alp)   [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:(alp)/1.0]


#define baseColor               ZHColor(248, 248, 248, 1)
#define baseOrangeColor         ZHColor(255, 117, 51, 1)
#define baseBrownColor          ZHColor(224, 206, 179, 1)
#define baseGoldColor           ZHColor(229, 197, 149, 1)
#define cellGrayColor           ZHColor(245, 245, 245, 1)


#define IsNULLString(string)    ((![string isKindOfClass:[NSString class]]) || [string isEqualToString:@""] || (string == nil) || [string isEqualToString:@""] || [string isKindOfClass:[NSNull class]] || [[string stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]] length]==0 || [string isEqualToString:@"(null)"] || [string isEqualToString:@"<null>"])

// 获取app名称
#define APP_NAME [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleDisplayName"]
// 获取程序版本号(1.0)
#define APP_VERSION [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]
// 获取build版本(1.01)
#define APP_BUILD [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleVersion"]

// 自定义打印, 防止打印不全
#ifdef DEBUG
// 带类名方法名
//# define ZHLog(FORMAT, ...) printf("[%s-%s][第%d行]%s %s\n", __DATE__, __TIME__, __LINE__, __PRETTY_FUNCTION__, [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String]);
// 不带类名方法名
# define ZHLog(FORMAT, ...) printf("[%s-%s][第%d行]%s\n", __DATE__, __TIME__, __LINE__, [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String]);
//#define ZHLog(fmt, ...)

#else
#define ZHLog(fmt, ...)
#endif

// 宏定义代码块, 只需要每一行换行的时候加反斜线
/**
 * 服务器请求到的版本号 : [requestData[@"error"][@"versions"] intValue]
 * 这个项目设置的版本号 : [[ZHAccountManager getMyVersion] intValue]
 */
#define mustUpdata if ([requestData[@"error"][@"versions"] intValue] <= [[ZHAccountManager getMyVersion] intValue]) {\
}else{\
    [ZHAlertView showOneBtnAlertViewWithMessage:@"您需要去苹果应用商店更新此app才能进行正常使用" enterClick:^(NSString *zhString) {\
        \
    } andController:self];\
}








#define RenHe_HTML_URL          @"http://m.renhejinfu.com"    // 人和页面html地址

// API接口
//#define API_BASE_HOST @"http://115.28.171.161:8097"     // 正式站
//#define PIC_BASE_URL  @"https://www.renhejinfu.com"     // 正式图片url

#define API_BASE_HOST @"http://118.190.132.71:8081"     // 测试站
#define PIC_BASE_URL  @"http://118.190.132.71:8091"     // 测试图片url

//#define API_BASE_HOST @"http://192.168.1.130:8080"      // 本地地址(2019.3.12)


#define Home_API_Str                   API_BASE_HOST@"/RHJF1001"            // 首页
#define Register_API_Str               API_BASE_HOST@"/RHJF1101"            // 注册接口
#define SendCode_API_Str               API_BASE_HOST@"/RHJF1102"            // 发送短信验证码
#define UserIsYesOrNo_API_Str          API_BASE_HOST@"/RHJF1103"            // 判断用户名和手机是否注册过
#define CodeIsYesOrNo_API_Str          API_BASE_HOST@"/RHJF1104"            // 判断验证码是否正确
#define Login_API_Str                  API_BASE_HOST@"/RHJF1201"            // 登录接口
#define PhoneNumIsYesOrNo_API_Str      API_BASE_HOST@"/RHJF1202"            // 判断手机号是否存在
#define getBackPassword_API_Str        API_BASE_HOST@"/RHJF1203"            // 找回密码接口

#define BiaoList_API_Str               API_BASE_HOST@"/RHJF2001"            // 项目列表页
#define BiaoLendRecord_API_Str         API_BASE_HOST@"/RHJF2002"            // 详情页出借记录
#define BiaoRepayPlan_API_Str          API_BASE_HOST@"/RHJF2003"            // 详情页还款列表
#define BiaoDetails_API_Str            API_BASE_HOST@"/RHJF2101"            // 项目详情页

#define MySelfHome_API_Str             API_BASE_HOST@"/RHJF4001"            // 我的页面
#define TradingRecord_API_Str          API_BASE_HOST@"/RHJF4002"            // 交易记录
#define ManagerBankCard_API_Str        API_BASE_HOST@"/RHJF4003"            // 银行卡管理
#define loanRecord_API_Str             API_BASE_HOST@"/RHJF4005"            // 出借人出借记录
#define RiskTest_API_Str               API_BASE_HOST@"/RHJF4006"            // 风险评测
#define ReceivedMoneyPlan_API_Str      API_BASE_HOST@"/RHJF4007"            // 回款明细
#define InviteFriends_API_Str          API_BASE_HOST@"/RHJF4008"            // 邀请好友
#define InviteDetails_API_Str          API_BASE_HOST@"/RHJF4009"            // 邀请明细
#define MyRewards_API_Str              API_BASE_HOST@"/RHJF4010"            // 我的奖励
#define ChangeLoginPwd_API_Str         API_BASE_HOST@"/RHJF4011"            // 修改登录密码
#define AuthorizeIsYesOrNo_API_Str     API_BASE_HOST@"/RHJF4012"            // 用户是否授权

#define BankOperation_HTML_Str         API_BASE_HOST@"/app/submit.html"     // 和银行对接的html网页
#define BankManagerResults_API_Str     API_BASE_HOST@"/RHJF5101"            // 银行处理结果(带参数访问这个接口)
#define RemoveAuthorize_API_Str        API_BASE_HOST@"/RHJF5102"            // 解除授权
#define UseRedGift_API_Str             API_BASE_HOST@"/RHJF5103"            // 红包使用接口














#endif /* Header_h */
