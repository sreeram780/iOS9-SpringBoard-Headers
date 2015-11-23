/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:12 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/MusicEntityAbstractLockupView.h>
#import <libobjc.A.dylib/MusicEntityContentDescriptorViewConfiguring.h>

@protocol MusicEntityVerticalLockupViewDelegate;
@class MusicEntityViewContentDescriptor, NSString;

@interface MusicEntityVerticalLockupView : MusicEntityAbstractLockupView <MusicEntityContentDescriptorViewConfiguring> {

	id<MusicEntityVerticalLockupViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MusicEntityVerticalLockupViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) MusicEntityViewContentDescriptor * contentDescriptor; 
@property (nonatomic,retain) id<MusicEntityValueProviding> entityValueProvider; 
+(double)maximumHeightForContentDescriptor:(id)arg1 width:(double)arg2 traitCollection:(id)arg3 ;
-(void)setDelegate:(id<MusicEntityVerticalLockupViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MusicEntityVerticalLockupViewDelegate>)delegate;
-(void)_contentDescriptorDidChange:(id)arg1 ;
-(void)_handlePlayButtonTappedWithAction:(unsigned long long)arg1 ;
-(MusicEntityViewContentDescriptor *)contentDescriptor;
-(void)setContentDescriptor:(MusicEntityViewContentDescriptor *)arg1 ;
-(BOOL)_shouldEnableArtworkViewUserInteraction;
-(BOOL)_shouldArtworkViewRespectHighlightProperty;
@end

