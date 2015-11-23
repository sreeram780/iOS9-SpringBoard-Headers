/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:39 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUITableViewCell.h>

@protocol SearchUIResultPrivate;
@class UIView, NSLayoutConstraint, NSArray, SearchUITextAreaView, UIImageView;

@interface SearchUISingleResultTableViewCell : SearchUITableViewCell {

	id<SearchUIResultPrivate> _result;
	UIView* _container;
	NSLayoutConstraint* _containerLeadingInset;
	NSLayoutConstraint* _containerTrailingInset;
	NSLayoutConstraint* _centerAuxiliaryViewConstraint;
	UIView* _thumbnailView;
	UIView* _thumbnailContainer;
	NSArray* _thumbnailViewMaxSizeConstraints;
	NSLayoutConstraint* _thumbnailViewAspectConstraint;
	SearchUITextAreaView* _textAreaView;
	UIView* _textContainer;
	NSLayoutConstraint* _textAreaPinLeadingConstraint;
	NSLayoutConstraint* _textAreaPinTrailingConstraint;
	UIView* _accessoryContainer;
	UIView* _actionButton;
	UIImageView* _accessoryThumbnailView;
	unsigned long long _style;

}

@property (retain) id<SearchUIResultPrivate> result;                                //@synthesize result=_result - In the implementation block
@property (retain) UIView * container;                                              //@synthesize container=_container - In the implementation block
@property (retain) NSLayoutConstraint * containerLeadingInset;                      //@synthesize containerLeadingInset=_containerLeadingInset - In the implementation block
@property (retain) NSLayoutConstraint * containerTrailingInset;                     //@synthesize containerTrailingInset=_containerTrailingInset - In the implementation block
@property (retain) NSLayoutConstraint * centerAuxiliaryViewConstraint;              //@synthesize centerAuxiliaryViewConstraint=_centerAuxiliaryViewConstraint - In the implementation block
@property (retain) UIView * thumbnailView;                                          //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (retain) UIView * thumbnailContainer;                                     //@synthesize thumbnailContainer=_thumbnailContainer - In the implementation block
@property (retain) NSArray * thumbnailViewMaxSizeConstraints;                       //@synthesize thumbnailViewMaxSizeConstraints=_thumbnailViewMaxSizeConstraints - In the implementation block
@property (retain) NSLayoutConstraint * thumbnailViewAspectConstraint;              //@synthesize thumbnailViewAspectConstraint=_thumbnailViewAspectConstraint - In the implementation block
@property (retain) SearchUITextAreaView * textAreaView;                             //@synthesize textAreaView=_textAreaView - In the implementation block
@property (retain) UIView * textContainer;                                          //@synthesize textContainer=_textContainer - In the implementation block
@property (retain) NSLayoutConstraint * textAreaPinLeadingConstraint;               //@synthesize textAreaPinLeadingConstraint=_textAreaPinLeadingConstraint - In the implementation block
@property (retain) NSLayoutConstraint * textAreaPinTrailingConstraint;              //@synthesize textAreaPinTrailingConstraint=_textAreaPinTrailingConstraint - In the implementation block
@property (retain) UIView * accessoryContainer;                                     //@synthesize accessoryContainer=_accessoryContainer - In the implementation block
@property (retain) UIView * actionButton;                                           //@synthesize actionButton=_actionButton - In the implementation block
@property (retain) UIImageView * accessoryThumbnailView;                            //@synthesize accessoryThumbnailView=_accessoryThumbnailView - In the implementation block
@property (assign) unsigned long long style;                                        //@synthesize style=_style - In the implementation block
+(id)reuseCharacteristicsIDForResult:(id)arg1 ;
-(UIView *)actionButton;
-(void)traitCollectionDidChange:(id)arg1 ;
-(unsigned long long)style;
-(UIView *)container;
-(void)setContainer:(UIView *)arg1 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(UIView *)textContainer;
-(void)setTextContainer:(UIView *)arg1 ;
-(void)setThumbnailView:(UIView *)arg1 ;
-(UIView *)thumbnailView;
-(id<SearchUIResultPrivate>)result;
-(void)defaultAction;
-(void)setActionButton:(UIView *)arg1 ;
-(id)initWithResult:(id)arg1 style:(unsigned long long)arg2 ;
-(void)setContainerLeadingInset:(NSLayoutConstraint *)arg1 ;
-(void)setContainerTrailingInset:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)containerLeadingInset;
-(NSLayoutConstraint *)containerTrailingInset;
-(void)setThumbnailContainer:(UIView *)arg1 ;
-(void)setAccessoryContainer:(UIView *)arg1 ;
-(CGSize)maxThumbnailSize;
-(id)viewForThumbnail;
-(UIView *)thumbnailContainer;
-(void)setCenterAuxiliaryViewConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTextAreaPinLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTextAreaPinTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(SearchUITextAreaView *)textAreaView;
-(void)setTextAreaView:(SearchUITextAreaView *)arg1 ;
-(void)updateThumbnailViewForResult:(id)arg1 ;
-(UIView *)accessoryContainer;
-(id)viewForActionButton:(id)arg1 style:(unsigned long long)arg2 result:(id)arg3 ;
-(NSLayoutConstraint *)textAreaPinTrailingConstraint;
-(NSLayoutConstraint *)centerAuxiliaryViewConstraint;
-(NSLayoutConstraint *)thumbnailViewAspectConstraint;
-(void)setThumbnailViewAspectConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)textAreaPinLeadingConstraint;
-(NSArray *)thumbnailViewMaxSizeConstraints;
-(void)setThumbnailViewMaxSizeConstraints:(NSArray *)arg1 ;
-(UIImageView *)accessoryThumbnailView;
-(void)setAccessoryThumbnailView:(UIImageView *)arg1 ;
-(void)updateWithResult:(id)arg1 ;
-(void)clearPurgeableMemory;
-(void)setResult:(id<SearchUIResultPrivate>)arg1 ;
@end

