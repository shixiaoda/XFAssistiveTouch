//
//  XFAssistiveTouch.h
//  XFAssistiveTouchExample
//
//  Created by 徐亚非 on 2016/9/26.
//  Copyright © 2016年 XuYafei. All rights reserved.
//

#import "XFATNavigationController.h"

NS_ASSUME_NONNULL_BEGIN

@protocol XFXFAssistiveTouchDelegate <NSObject>

- (NSInteger)numberOfItemsInViewController:(XFATViewController *)viewController;
- (XFATItemView *)viewController:(XFATViewController *)viewController itemViewAtPosition:(XFATPosition *)position;
- (void)viewController:(XFATViewController *)viewController didSelectedAtPosition:(XFATPosition *)position;

@optional
- (void)navigationController:(XFATNavigationController *)navigationController actionBeginAtPoint:(CGPoint)point;
- (void)navigationController:(XFATNavigationController *)navigationController actionEndAtPoint:(CGPoint)point;
- (void)navigationController:(XFATNavigationController *)navigationController actionDidAtPoint:(CGPoint)point;
@end

@interface XFAssistiveTouch : NSObject

+ (instancetype)sharedInstance;
- (void)showAssistiveTouch;

@property (nonatomic, strong) UIWindow *assistiveWindow;
@property (nonatomic, strong) XFATNavigationController *navigationController;
@property (nonatomic, weak) id<XFXFAssistiveTouchDelegate> delegate;
@property (nonatomic, strong) XFATItemView *contentItem;
@property (nonatomic, assign) CGFloat endKeyboardOffsetY;

- (void)pushViewController:(UIViewController *)viewController atViewController:(UIViewController *)targetViewcontroller;
- (void)pushViewController:(UIViewController *)viewController;
- (void)setAssistiveWindowPoint:(XFAssistiveTouch *)XFAssistiveTouch;
@end

NS_ASSUME_NONNULL_END
