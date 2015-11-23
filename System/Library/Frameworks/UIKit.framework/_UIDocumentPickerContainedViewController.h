/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:03 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSArray, UIScrollView;


@protocol _UIDocumentPickerContainedViewController <NSObject,UISearchControllerDelegate>
@property (assign,getter=isEditing,nonatomic) BOOL editing; 
@property (nonatomic,retain) NSArray * indexPathsForSelectedItems; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@required
-(UIScrollView *)scrollView;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
-(void)setEditing:(BOOL)arg1;
-(NSArray *)indexPathsForSelectedItems;
-(void)setServiceViewController:(id)arg1;
-(void)setIndexPathsForSelectedItems:(id)arg1;
-(void)setSortView:(id)arg1;
-(void)setPinnedHeaderView:(id)arg1 animated:(BOOL)arg2;
-(void)scrollSortViewToVisible;

@end

