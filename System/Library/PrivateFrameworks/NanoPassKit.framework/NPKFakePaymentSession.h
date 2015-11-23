/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:53 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoPassKit/NPKQuickPaymentSession.h>
#import <libobjc.A.dylib/PKFieldDetectorObserver.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class PKPass, NSObject, PKFieldDetector, NSString;

@interface NPKFakePaymentSession : NPKQuickPaymentSession <PKFieldDetectorObserver> {

	BOOL _invalidated;
	PKPass* _ourCurrentPass;
	NSObject*<OS_dispatch_queue> _ourCallbackQueue;
	NSObject*<OS_dispatch_queue> _ourInternalQueue;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	PKFieldDetector* _fieldDetector;
	unsigned long long _changeCardToken;

}

@property (nonatomic,retain) PKPass * ourCurrentPass;                                    //@synthesize ourCurrentPass=_ourCurrentPass - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> ourCallbackQueue;              //@synthesize ourCallbackQueue=_ourCallbackQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> ourInternalQueue;              //@synthesize ourInternalQueue=_ourInternalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timeoutTimer;                 //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
@property (nonatomic,retain) PKFieldDetector * fieldDetector;                            //@synthesize fieldDetector=_fieldDetector - In the implementation block
@property (assign,nonatomic) BOOL invalidated;                                           //@synthesize invalidated=_invalidated - In the implementation block
@property (assign,nonatomic) unsigned long long changeCardToken;                         //@synthesize changeCardToken=_changeCardToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
-(BOOL)invalidated;
-(void)setInvalidated:(BOOL)arg1 ;
-(void)setTimeoutTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)timeoutTimer;
-(void)_handleTimeoutTimer;
-(void)_setTimeoutTimer;
-(NSObject*<OS_dispatch_queue>)ourInternalQueue;
-(void)setOurCurrentPass:(PKPass *)arg1 ;
-(NSObject*<OS_dispatch_queue>)ourCallbackQueue;
-(void)_scheduleDidActivateEventForPass:(id)arg1 ;
-(PKPass *)ourCurrentPass;
-(unsigned long long)changeCardToken;
-(void)setChangeCardToken:(unsigned long long)arg1 ;
-(void)setCurrentPass:(id)arg1 ;
-(id)currentPass;
-(void)confirmSession;
-(void)renewSession;
-(void)deactivateSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)setOurCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setOurInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(PKFieldDetector *)fieldDetector;
-(void)setFieldDetector:(PKFieldDetector *)arg1 ;
-(void)fieldDetectorDidEnterField:(id)arg1 withProperties:(id)arg2 ;
-(BOOL)startSession;
@end

