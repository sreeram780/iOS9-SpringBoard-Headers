/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:14 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ATMessageLinkListenerDelegate;
@interface ATMessageLinkListener : NSObject {

	id<ATMessageLinkListenerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ATMessageLinkListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<ATMessageLinkListenerDelegate>)arg1 ;
-(id<ATMessageLinkListenerDelegate>)delegate;
-(void)stop;
-(BOOL)start;
@end

