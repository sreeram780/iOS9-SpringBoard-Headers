/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:51 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/WebCore.axbundle/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface AXWebThreadPreparer : NSObject {

	BOOL _preparedThisRunLoop;
	BOOL _preparedAnswer;

}

@property (assign,nonatomic) BOOL preparedThisRunLoop;              //@synthesize preparedThisRunLoop=_preparedThisRunLoop - In the implementation block
@property (assign,nonatomic) BOOL preparedAnswer;                   //@synthesize preparedAnswer=_preparedAnswer - In the implementation block
+(id)sharedPreparer;
-(BOOL)preparedThisRunLoop;
-(void)setPreparedThisRunLoop:(BOOL)arg1 ;
-(BOOL)preparedAnswer;
-(void)setPreparedAnswer:(BOOL)arg1 ;
-(id)init;
@end

