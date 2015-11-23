/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:24 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GameControllerDaemon, OS_dispatch_queue;
#import <GameController/GameController-Structs.h>
@class NSXPCConnection, NSMutableDictionary, NSTimer, NSObject, NSThread, NSMutableArray;

@interface _GCControllerManager : NSObject {

	NSXPCConnection* _connection;
	id<GameControllerDaemon> _remote;
	IOHIDManagerRef _hidManager;
	NSMutableDictionary* _controllersByUDID;
	IONotificationPortRef _usbNotify;
	unsigned _usbAddedIterator;
	unsigned _usbRemovedIterator;
	/*^block*/id _logger;
	BOOL _idleTimerNeedsReset;
	NSTimer* _idleWatchTimer;
	BOOL _shouldKeepRunning;
	/*^block*/id _requestConnectedHostsCallback;
	NSObject*<OS_dispatch_queue> _controllersQueue;
	NSThread* _hidInputThread;
	CFRunLoopRef _hidInputThreadRunLoop;
	CFRunLoopSourceRef _hidThreadRunLoopSource;
	NSMutableArray* _hidThreadExecutionBlocks;

}

@property (assign,nonatomic) IOHIDManagerRef hidManager;                                          //@synthesize hidManager=_hidManager - In the implementation block
@property (nonatomic,copy) id logger;                                                             //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                        //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) id<GameControllerDaemon> remote;                                     //@synthesize remote=_remote - In the implementation block
@property (assign,nonatomic) BOOL idleTimerNeedsReset;                                            //@synthesize idleTimerNeedsReset=_idleTimerNeedsReset - In the implementation block
@property (nonatomic,retain,readonly) NSThread * hidInputThread;                                  //@synthesize hidInputThread=_hidInputThread - In the implementation block
@property (nonatomic,readonly) CFRunLoopRef hidInputThreadRunLoop;                                //@synthesize hidInputThreadRunLoop=_hidInputThreadRunLoop - In the implementation block
@property (nonatomic,readonly) CFRunLoopSourceRef hidThreadRunLoopSource;                         //@synthesize hidThreadRunLoopSource=_hidThreadRunLoopSource - In the implementation block
@property (nonatomic,readonly) NSMutableArray * hidThreadExecutionBlocks;                         //@synthesize hidThreadExecutionBlocks=_hidThreadExecutionBlocks - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> controllersQueue;              //@synthesize controllersQueue=_controllersQueue - In the implementation block
-(id)logger;
-(void)setLogger:(id)arg1 ;
-(void)launchHIDInputThread;
-(NSMutableArray *)hidThreadExecutionBlocks;
-(void)threadHIDInputOnMain:(id)arg1 ;
-(id)controllers;
-(void)async_HIDBlock:(/*^block*/id)arg1 ;
-(void)updateIdleTimer:(id)arg1 ;
-(void)addController:(id)arg1 ;
-(void)removeController:(id)arg1 ;
-(void)controllerWithUDID:(unsigned long long)arg1 setData:(id)arg2 ;
-(void)controllerWithUDID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3 ;
-(void)controllerWithUDID:(unsigned long long)arg1 setArrayValue:(SCD_Struct_GC4)arg2 forElement:(int)arg3 ;
-(void)replyConnectedHosts:(id)arg1 ;
-(void)startIdleWatchTimer;
-(void)threadHIDInputOffMain:(id)arg1 ;
-(void)requestConnectedHostsWithHandler:(/*^block*/id)arg1 ;
-(BOOL)isExistingController:(id)arg1 ;
-(IOHIDManagerRef)hidManager;
-(void)setHidManager:(IOHIDManagerRef)arg1 ;
-(BOOL)idleTimerNeedsReset;
-(void)setIdleTimerNeedsReset:(BOOL)arg1 ;
-(NSThread *)hidInputThread;
-(CFRunLoopRef)hidInputThreadRunLoop;
-(CFRunLoopSourceRef)hidThreadRunLoopSource;
-(NSObject*<OS_dispatch_queue>)controllersQueue;
-(void)CBApplicationWillResignActive;
-(void)CBApplicationDidBecomeActive;
-(void)dealloc;
-(id)init;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)open;
-(id<GameControllerDaemon>)remote;
-(void)setRemote:(id<GameControllerDaemon>)arg1 ;
@end

