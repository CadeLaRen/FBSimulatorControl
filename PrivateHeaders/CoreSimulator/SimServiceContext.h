//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec 21 2015 14:04:07).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, SimProfilesPathMonitor;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface SimServiceContext : NSObject
{
    NSMutableArray *_supportedDeviceTypes;
    NSMutableDictionary *_supportedDeviceTypesByIdentifier;
    NSMutableDictionary *_supportedDeviceTypesByAlias;
    NSMutableArray *_supportedRuntimes;
    NSMutableDictionary *_supportedRuntimesByIdentifier;
    NSMutableDictionary *_supportedRuntimesByAlias;
    BOOL _initialized;
    int _serviceBootstrapCount;
    long long _connectionType;
    NSObject<OS_xpc_object> *_serviceConnection;
    NSObject<OS_dispatch_queue> *_serviceConnectionQueue;
    NSDate *_lastConnectionTime;
    SimProfilesPathMonitor *_profileMonitor;
    NSObject<OS_dispatch_queue> *_profileQueue;
}

+ (void)setSharedContextConnectionType:(long long)arg1;
+ (id)simContextWithConnectionType:(long long)arg1;
+ (id)sharedServiceContext;
@property int serviceBootstrapCount; // @synthesize serviceBootstrapCount=_serviceBootstrapCount;
@property BOOL initialized; // @synthesize initialized=_initialized;
@property(retain) NSObject<OS_dispatch_queue> *profileQueue; // @synthesize profileQueue=_profileQueue;
@property(retain) SimProfilesPathMonitor *profileMonitor; // @synthesize profileMonitor=_profileMonitor;
@property(retain) NSDate *lastConnectionTime; // @synthesize lastConnectionTime=_lastConnectionTime;
@property(retain) NSObject<OS_dispatch_queue> *serviceConnectionQueue; // @synthesize serviceConnectionQueue=_serviceConnectionQueue;
@property(retain) NSObject<OS_xpc_object> *serviceConnection; // @synthesize serviceConnection=_serviceConnection;
@property long long connectionType; // @synthesize connectionType=_connectionType;
- (void).cxx_destruct;
- (void)handleXPCEvent:(id)arg1;
- (void)handleReconnectionBookkeeping;
- (void)_supportedRuntimesScanPath:(id)arg1;
- (void)_supportedDeviceTypesScanPath:(id)arg1;
- (void)supportedRuntimesAddProfilesAtPath:(id)arg1;
- (void)supportedDeviceTypesAddProfilesAtPath:(id)arg1;
- (void)serviceAddProfilesAtPath:(id)arg1;
- (void)addProfilesAtPath:(id)arg1;
@property(readonly) NSDictionary *supportedRuntimesByAlias;
@property(readonly) NSDictionary *supportedRuntimesByIdentifier;
@property(readonly) NSArray *supportedRuntimes;
@property(readonly) NSDictionary *supportedDeviceTypesByAlias;
@property(readonly) NSDictionary *supportedDeviceTypesByIdentifier;
@property(readonly) NSArray *supportedDeviceTypes;
- (void)dealloc;
- (void)connect;
- (void)reloadServiceIfMovedOrAbortIfWeAreInvalid;
- (void)removeOtherCoreSimulatorServiceJobs;
- (id)initWithConnectionType:(long long)arg1;
- (id)init;

@end

