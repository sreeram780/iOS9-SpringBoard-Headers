/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:14 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/CLNotifierServiceClientProtocol.h>

@class NSString;

@interface CLNotifierClientAdapter : NSObject <CLNotifierServiceClientProtocol> {

	CLNotifierClientBase* _client;
	BOOL _valid;

}

@property (assign,nonatomic) BOOL valid;                            //@synthesize valid=_valid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)becameFatallyBlocked:(id)arg1 ;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2 ;
-(void)onNotification:(int)arg1 withData:(id)arg2 ;
-(id)init;
-(NSString *)debugDescription;
-(void)invalidate;
-(BOOL)valid;
-(void)setValid:(BOOL)arg1 ;
-(id)initWithClient:(CLNotifierClientBase*)arg1 ;
@end
