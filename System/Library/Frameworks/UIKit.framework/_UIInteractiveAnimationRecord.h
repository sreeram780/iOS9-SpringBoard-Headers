/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:50 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIInteractionProgressObserver.h>

@class NSUUID, NSMapTable, NSString;

@interface _UIInteractiveAnimationRecord : NSObject <UIInteractionProgressObserver> {

	BOOL _completed;
	NSUUID* _UUID;
	NSMapTable* _pausedTimes;

}

@property (nonatomic,readonly) NSUUID * UUID;                                //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) NSMapTable * pausedTimes;                     //@synthesize pausedTimes=_pausedTimes - In the implementation block
@property (assign,getter=isCompleted,nonatomic) BOOL completed;              //@synthesize completed=_completed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)saveRecord:(id)arg1 ;
+(void)discardRecord:(id)arg1 ;
-(id)init;
-(NSUUID *)UUID;
-(void)setCompleted:(BOOL)arg1 ;
-(void)interactionProgressDidUpdate:(id)arg1 ;
-(void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2 ;
-(id)initWithUUID:(id)arg1 ;
-(NSMapTable *)pausedTimes;
-(BOOL)isCompleted;
@end

