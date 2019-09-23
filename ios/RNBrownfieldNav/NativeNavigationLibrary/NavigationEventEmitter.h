//
//  NavigationEventEmitter.h
//  PaperlessPost
//
//  Created by Sal Randazzo on 2/13/18.
//  Copyright © 2018 PaperlessPost. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>

typedef NS_ENUM(NSInteger, ScreenChangeEvent) {
    ScreenChangeEventViewWillAppear,
    ScreenChangeEventViewDidAppear,
    ScreenChangeEventViewWillDisappear,
    ScreenChangeEventViewDidDisappear
};

/**
 * Emits events related to Navigation. 
 * This is a single instance as per how RN creates modules/emitters
 * The globalNavigationEmitter ref is stored upon init.
 * */
@interface NavigationEventEmitter: RCTEventEmitter <RCTBridgeModule>

+ (NavigationEventEmitter * _Nullable)globalNavigationEmitter;

- (void)publishEvent:(nonnull NSDictionary *)event;

- (void)publishScreenChangeEvent:(ScreenChangeEvent)event rootTag:(nonnull NSNumber *)rootTag;

@end
