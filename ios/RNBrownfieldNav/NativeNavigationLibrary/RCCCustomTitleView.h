//
//  RCCTitleView.h
//  ReactNativeNavigation
//
//  Created by Ran Greenberg on 26/04/2017.
//  Copyright © 2017 artal. All rights reserved.
//

// This class is taken from Wix ReactNativeNavigation
// It serves as a wrapper around custom RCTRootViews 

#import <UIKit/UIKit.h>
#import <React/RCTRootView.h>
#import <React/RCTRootViewDelegate.h>

@interface RCCCustomTitleView : UIView <RCTRootViewDelegate>

- (instancetype)initWithFrame:(CGRect)frame subView:(RCTRootView*)subView alignment:(NSString*)alignment;
- (void)viewWillTransitionToSize:(CGSize)size withTransitionCoordinator:(id<UIViewControllerTransitionCoordinator>)coordinator;

@end
