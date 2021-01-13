//
//  ZHHeader.h
//  ZHSDK
//
//  Created by dpstorm on 2021/1/13.
//

#ifndef ZHHeader_h
#define ZHHeader_h




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















#endif /* ZHHeader_h */
