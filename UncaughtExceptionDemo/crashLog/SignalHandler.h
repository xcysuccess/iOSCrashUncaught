//
//  SignalHandler.h
//  UncaughtExceptionDemo
//
//  Created by  tomxiang on 15/8/29.
//  Copyright (c) 2015年  tomxiang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SignalHandler : NSObject

+(void)saveCreash:(NSString *)exceptionInfo;

@end

void InstallSignalHandler(void);
