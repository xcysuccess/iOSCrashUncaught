//
//  ExceptionModel.h
//  UncaughtExceptionDemo
//
//  Created by  tomxiang on 15/8/29.
//  Copyright (c) 2015年  tomxiang. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString * const UncaughtExceptionHandlerSignalExceptionName;
extern NSString * const UncaughtExceptionHandlerSignalKey;
extern NSString * const UncaughtExceptionHandlerAddressesKey;

extern const volatile int32_t UncaughtExceptionCount;
extern const int32_t UncaughtExceptionMaximum;

extern const NSInteger UncaughtExceptionHandlerSkipAddressCount;
extern const NSInteger UncaughtExceptionHandlerReportAddressCount;

@interface ExceptionModel : NSObject

@end
