/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:45 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@interface CKDFetchServerEnvironmentOperation : CKDOperation {

	long long _environment;

}

@property (assign,nonatomic) long long environment;              //@synthesize environment=_environment - In the implementation block
-(long long)environment;
-(void)main;
-(void)setEnvironment:(long long)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(unsigned long long)activityStart;
-(BOOL)shouldCheckAppVersion;
-(Class)operationResultClass;
-(void)fillOutOperationResult:(id)arg1 ;
@end

