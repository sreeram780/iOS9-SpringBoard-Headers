/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:39 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class NSString;

@interface SearchUITestNavigationController : UINavigationController <UINavigationControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableViewController;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)initWithResults:(id)arg1 style:(unsigned long long)arg2 ;
-(void)didSelectRowAtIndexPath:(id)arg1 ;
-(void)selectRowAtIndexPath:(id)arg1 ;
-(void)showTableView;
@end

