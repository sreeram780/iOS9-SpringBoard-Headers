/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:01 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSString, NSArray;

@interface VMUProcInfo : NSObject {

	unsigned _task;
	BOOL _needTaskPortDealloc;
	NSString* _name;
	NSArray* _arguments;
	NSArray* _envVars;
	NSString* _procTableName;
	NSString* _realAppName;
	NSString* _requestedAppName;
	NSString* _firstArg;
	int _pid;
	int _ppid;
	timeval _startTime;

}
+(id)getProcessIds;
+(BOOL)isProcessRunning:(int)arg1 ;
+(int)processParentId:(int)arg1 ;
-(id)initWithTask:(unsigned)arg1 ;
-(BOOL)terminate;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)name;
-(long long)compare:(id)arg1 ;
-(void)update;
-(BOOL)isRunning;
-(timeval)startTime;
-(unsigned)task;
-(id)initWithPid:(int)arg1 ;
-(void)finalize;
-(int)ppid;
-(id)arguments;
-(int)cpuType;
-(BOOL)isApp;
-(id)realAppName;
-(id)userAppName;
-(id)_infoFromCommandLine:(int)arg1 ;
-(id)procTableName;
-(id)envVars;
-(id)firstArgument;
-(id)requestedAppName;
-(BOOL)isCFM;
-(id)valueForEnvVar:(id)arg1 ;
-(BOOL)isMachO;
-(BOOL)isNative;
-(BOOL)signal:(int)arg1 ;
-(long long)compareByName:(id)arg1 ;
-(long long)compareByUserAppName:(id)arg1 ;
-(int)pid;
@end

