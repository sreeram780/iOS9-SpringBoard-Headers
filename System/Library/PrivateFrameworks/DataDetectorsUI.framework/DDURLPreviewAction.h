/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:06 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <DataDetectorsUI/DDPreviewAction.h>
#import <libobjc.A.dylib/SFSafariViewControllerDelegate.h>

@class NSString;

@interface DDURLPreviewAction : DDPreviewAction <SFSafariViewControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)handlesUrl:(id)arg1 result:(DDResultRef)arg2 ;
+(id)validatedURLWithURL:(id)arg1 result:(DDResultRef)arg2 ;
-(void)safariViewControllerDidFinish:(id)arg1 ;
-(id)createViewController;
-(id)commitURL;
-(BOOL)requiresEmbeddingNavigationController;
-(void)setPreviewMode:(BOOL)arg1 ;
@end

