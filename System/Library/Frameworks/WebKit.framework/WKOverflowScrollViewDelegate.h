/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:08 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UIScrollViewDelegate.h>

@class NSString;

@interface WKOverflowScrollViewDelegate : NSObject <UIScrollViewDelegate> {

	ScrollingTreeOverflowScrollingNodeIOS* _scrollingTreeNode;
	BOOL _inUserInteraction;

}

@property (assign,getter=_isInUserInteraction,nonatomic) BOOL inUserInteraction;              //@synthesize inUserInteraction=_inUserInteraction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)initWithScrollingTreeNode:(ScrollingTreeOverflowScrollingNodeIOS*)arg1 ;
-(BOOL)_isInUserInteraction;
-(void)setInUserInteraction:(BOOL)arg1 ;
@end

