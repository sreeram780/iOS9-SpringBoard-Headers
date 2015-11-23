/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSPort.h>

@interface NSMachPort : NSPort {

	id _delegate;
	unsigned long long _flags;
	unsigned _machPort;
	unsigned long long _reserved;

}

@property (readonly) unsigned machPort; 
+(id)portWithMachPort:(unsigned)arg1 ;
+(BOOL)sendBeforeTime:(double)arg1 streamData:(id)arg2 components:(id)arg3 to:(id)arg4 from:(id)arg5 msgid:(unsigned)arg6 reserved:(unsigned long long)arg7 ;
+(void)resetAllPorts;
+(id)portWithMachPort:(unsigned)arg1 options:(unsigned long long)arg2 ;
+(void)_fixNSMachPortLeak;
+(id)port;
-(unsigned long long)_cfTypeID;
-(id)initWithMachPort:(unsigned)arg1 ;
-(BOOL)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned long long)arg4 ;
-(BOOL)sendBeforeDate:(id)arg1 msgid:(unsigned long long)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned long long)arg5 ;
-(BOOL)sendBeforeTime:(double)arg1 streamData:(void*)arg2 components:(id)arg3 from:(id)arg4 msgid:(unsigned)arg5 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(unsigned)machPort;
-(id)initWithMachPort:(unsigned)arg1 options:(unsigned long long)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isMemberOfClass:(Class)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(id)delegate;
-(void)invalidate;
-(BOOL)isValid;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)finalize;
@end

