//
//  YTKJsCommandHandler.h
//  YTKJsBridge
//
//  Created by lihaichun on 2018/12/21.
//  Copyright © 2018年 fenbi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "YTKJsCommand.h"

NS_ASSUME_NONNULL_BEGIN

@protocol YTKJsCommandHandler <NSObject>

@property (nonatomic, weak, nullable) UIWebView *webView;

- (void)handleJsCommand:(YTKJsCommand *)command inWebView:(UIWebView *)webView;

@end

NS_ASSUME_NONNULL_END
