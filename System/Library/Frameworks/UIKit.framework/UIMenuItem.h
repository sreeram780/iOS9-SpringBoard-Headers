/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:58 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface UIMenuItem : NSObject {

	BOOL _dontDismiss;
	NSString* _title;
	SEL _action;

}

@property (nonatomic,copy) NSString * title;                //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) SEL action;                    //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) BOOL dontDismiss;              //@synthesize dontDismiss=_dontDismiss - In the implementation block
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(SEL)action;
-(NSString *)title;
-(void)setAction:(SEL)arg1 ;
-(id)initWithTitle:(id)arg1 action:(SEL)arg2 ;
-(void)setDontDismiss:(BOOL)arg1 ;
-(BOOL)dontDismiss;
@end

