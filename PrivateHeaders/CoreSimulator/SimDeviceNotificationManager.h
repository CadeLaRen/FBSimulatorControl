//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec 21 2015 14:04:07).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSimulator/SimDeviceNotifier-Protocol.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface SimDeviceNotificationManager : NSObject <SimDeviceNotifier>
{
    NSObject<OS_dispatch_queue> *_handlersQueue;
    NSMutableDictionary *_handlers;
    unsigned long long _next_regID;
    NSObject<OS_dispatch_queue> *_sendQueue;
}

@property(retain) NSObject<OS_dispatch_queue> *sendQueue; // @synthesize sendQueue=_sendQueue;
@property unsigned long long next_regID; // @synthesize next_regID=_next_regID;
@property(retain) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
@property(retain) NSObject<OS_dispatch_queue> *handlersQueue; // @synthesize handlersQueue=_handlersQueue;
- (void)sendNotification:(id)arg1;
- (BOOL)unregisterNotificationHandler:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)registerNotificationHandlerOnQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (unsigned long long)registerNotificationHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end

