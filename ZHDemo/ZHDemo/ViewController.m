//
//  ViewController.m
//  ZHDemo
//
//  Created by dpstorm on 2021/1/8.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.title = @"vc";
    self.view.backgroundColor = [UIColor grayColor];
    NSArray *btnTitle = @[@"登录", @"支付", @"push到图片页", @"push到web页面"];
    for (int i = 0; i < btnTitle.count; i++) {
        UIButton *btn = [UIButton buttonWithType:0];
        btn.frame = CGRectMake(30, STATUS_HEIGHT + NAV_HEIGHT + 40 + i * 50, SCREEN_WIDTH - 60, 40); // 高40
        btn.tag = 100 + i;
        btn.backgroundColor = [UIColor brownColor];
        [btn addTarget:self action:@selector(btnClick:) forControlEvents:UIControlEventTouchUpInside];
        [btn setTitle:btnTitle[i] forState:UIControlStateNormal];
        [self.view addSubview:btn];
    }
}
- (void)btnClick:(UIButton *)btn{
    if (btn.tag == 100) {
        ZHLog(@"点击了登录");
    }
    if (btn.tag == 101) {
        ZHLog(@"点击了支付");
    }
    if (btn.tag == 102) {
        ZHLog(@"点击了push到图片页");
    }
    if (btn.tag == 103) {
        ZHLog(@"点击了push到web页");
    }
}

@end
