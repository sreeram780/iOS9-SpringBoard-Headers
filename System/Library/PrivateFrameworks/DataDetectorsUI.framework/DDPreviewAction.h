/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:06 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <DataDetectorsUI/DDAction.h>

@class UIViewController;

@interface DDPreviewAction : DDAction {

	UIViewController* _viewController;

}
+(id)previewActionForURL:(id)arg1 result:(_DDResult*)arg2 context:(id)arg3 ;
-(id)contact;
-(void)dealloc;
-(id)viewController;
-(id)createViewController;
-(id)commitURL;
-(BOOL)wantsSeamlessCommit;
-(BOOL)requiresEmbeddingNavigationController;
-(id)platterTitle;
-(id)platterSubtitle;
-(void)setPreviewMode:(BOOL)arg1 ;
@end

