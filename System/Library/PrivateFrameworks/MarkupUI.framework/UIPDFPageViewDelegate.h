/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:41 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIPDFPageViewDelegate
@optional
-(void)resetZoom:(id)arg1;
-(void)zoom:(id)arg1 to:(CGRect)arg2 atPoint:(CGPoint)arg3 kind:(int)arg4;
-(void)doubleTapIn:(id)arg1 atPoint:(CGPoint)arg2;
-(BOOL)shouldRecognizeTapIn:(id)arg1 atPoint:(CGPoint)arg2;
-(void)didTap:(id)arg1 atPoint:(CGPoint)arg2;
-(BOOL)selectionWillTrack:(id)arg1;
-(void)selectionDidEndTracking:(id)arg1;
-(Class)classForAnnotationType:(const char*)arg1;
-(void)pageWasRendered:(id)arg1;

@end

