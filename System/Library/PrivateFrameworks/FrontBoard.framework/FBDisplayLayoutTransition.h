/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:11 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface FBDisplayLayoutTransition : NSObject {

	NSString* _name;
	NSString* _transitionReason;
	unsigned long long _displayType;
	long long _interfaceOrientation;

}

@property (nonatomic,readonly) unsigned long long displayType;              //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * transitionReason;                     //@synthesize transitionReason=_transitionReason - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;                //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
+(BOOL)isTransitioningForDisplayType:(unsigned long long)arg1 ;
+(void)flushLayoutForDisplayType:(unsigned long long)arg1 ;
-(void)endTransition;
-(void)beginTransition;
-(void)dealloc;
-(id)description;
-(long long)interfaceOrientation;
-(NSString *)name;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(unsigned long long)displayType;
-(id)initWithDisplayType:(unsigned long long)arg1 name:(id)arg2 ;
-(void)setTransitionReason:(NSString *)arg1 ;
-(NSString *)transitionReason;
@end

