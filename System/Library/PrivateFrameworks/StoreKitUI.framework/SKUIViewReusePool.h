/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:54 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIView, NSMutableDictionary, NSMutableArray;

@interface SKUIViewReusePool : NSObject {

	UIView* _parentView;
	NSMutableDictionary* _reuseClasses;
	NSMutableArray* _viewPool;

}
-(id)initWithParentView:(id)arg1 ;
-(void)recycleReusableViews:(id)arg1 ;
-(void)hideUnusedViews;
-(void)registerClass:(Class)arg1 forViewWithReuseIdentifier:(id)arg2 ;
-(id)dequeueReusableViewWithReuseIdentifier:(id)arg1 ;
@end

