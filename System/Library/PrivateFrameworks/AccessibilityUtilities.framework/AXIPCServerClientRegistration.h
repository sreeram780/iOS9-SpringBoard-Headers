/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:16 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface AXIPCServerClientRegistration : NSObject {

	unsigned _port;
	NSString* _identifier;

}

@property (assign,nonatomic) unsigned port;                      //@synthesize port=_port - In the implementation block
@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(void)setPort:(unsigned)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned)port;
@end

