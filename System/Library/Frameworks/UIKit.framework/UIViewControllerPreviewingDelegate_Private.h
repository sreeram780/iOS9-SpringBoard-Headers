/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:56 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIViewControllerPreviewingDelegate_Private <NSObject>
@optional
-(id)committedViewControllerForPreviewViewController:(id)arg1;
-(BOOL)shouldStartPreviewingSimultaneouslyWithGestureRecognizer:(id)arg1;
-(void)performCommitTransitionForPreviewViewController:(id)arg1 completion:(/*^block*/id)arg2;
-(void)willPresentPreviewViewController:(id)arg1 forLocation:(CGPoint)arg2 inSourceView:(id)arg3;
-(void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2;
-(void)animateRevealWithInteractionProgress:(id)arg1 forPreviewingAtLocation:(CGPoint)arg2 inSourceView:(id)arg3 containerView:(id)arg4;
-(id)previewPresentationTransitioningDelegateForPosition:(CGPoint)arg1 inSourceView:(id)arg2;
-(void)animateRevealWithInteractionProgress:(id)arg1 forPreviewingAtPosition:(CGPoint)arg2 inSourceView:(id)arg3;

@end

