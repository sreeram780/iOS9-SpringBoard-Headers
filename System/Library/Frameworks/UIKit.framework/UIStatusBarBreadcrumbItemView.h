/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:06 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIStatusBarSystemNavigationItemView.h>

@class UISystemNavigationAction, NSString;

@interface UIStatusBarBreadcrumbItemView : UIStatusBarSystemNavigationItemView {

	UISystemNavigationAction* _systemNavigationAction;
	NSString* _destinationText;

}

@property (nonatomic,retain) UISystemNavigationAction * systemNavigationAction;              //@synthesize systemNavigationAction=_systemNavigationAction - In the implementation block
@property (nonatomic,retain) NSString * destinationText;                                     //@synthesize destinationText=_destinationText - In the implementation block
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(void)setSystemNavigationAction:(UISystemNavigationAction *)arg1 ;
-(UISystemNavigationAction *)systemNavigationAction;
-(NSString *)destinationText;
-(void)setDestinationText:(NSString *)arg1 ;
-(id)shortenedTitleWithCompressionLevel:(int)arg1 ;
-(void)userDidActivateButton:(id)arg1 ;
-(long long)labelLineBreakMode;
@end

