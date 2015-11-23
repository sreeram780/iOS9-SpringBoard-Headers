/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:19 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActivityViewController.h>

@class NSMutableDictionary, NSArray;

@interface SUActivityViewController : UIActivityViewController {

	NSMutableDictionary* _customTitles;
	NSArray* _suActivityItems;
	long long _transitionSafetyCount;

}
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_performActivity:(id)arg1 ;
-(void)_prepareActivity:(id)arg1 ;
-(id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2 ;
-(id)_titleForActivity:(id)arg1 ;
-(void)setTitle:(id)arg1 forActivityType:(id)arg2 ;
@end

