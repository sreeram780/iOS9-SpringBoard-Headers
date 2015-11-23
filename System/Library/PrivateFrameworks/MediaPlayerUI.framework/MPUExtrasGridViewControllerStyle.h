/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:43 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
@class UIColor, NSString, NSDictionary, MPUExtrasGridHeaderStyle, MPUExtrasGridSectionHeaderStyle, MPUExtrasGridCellStyle;

@interface MPUExtrasGridViewControllerStyle : NSObject {

	BOOL _showsScrollFade;
	BOOL _adjustsContentInsetByBottomNavBar;
	UIColor* _backgroundColor;
	NSString* _detailTextStyle;
	NSDictionary* _detailDefaultFontAttributes;
	UIColor* _detailTextColor;
	MPUExtrasGridHeaderStyle* _headerStyle;
	MPUExtrasGridSectionHeaderStyle* _sectionHeaderStyle;
	MPUExtrasGridCellStyle* _defaultCellStyle;
	MPUExtrasGridCellStyle* _imageCellStyle;
	MPUExtrasGridCellStyle* _videoCellStyle;
	MPUExtrasGridCellStyle* _productCellStyle;
	double _defaultSpacing;
	double _imageSpacing;
	double _videoSpacing;
	double _productSpacing;
	double _cellLineSpacing;
	UIEdgeInsets _collectionViewInsets;
	UIEdgeInsets _detailInsets;
	UIEdgeInsets _defaultCellSectionInsets;
	UIEdgeInsets _imageCellSectionInsets;
	UIEdgeInsets _videoCellSectionInsets;
	UIEdgeInsets _productCellSectionInsets;

}

@property (nonatomic,retain) UIColor * backgroundColor;                                         //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets collectionViewInsets;                                 //@synthesize collectionViewInsets=_collectionViewInsets - In the implementation block
@property (nonatomic,retain) NSString * detailTextStyle;                                        //@synthesize detailTextStyle=_detailTextStyle - In the implementation block
@property (nonatomic,retain) NSDictionary * detailDefaultFontAttributes;                        //@synthesize detailDefaultFontAttributes=_detailDefaultFontAttributes - In the implementation block
@property (nonatomic,retain) UIColor * detailTextColor;                                         //@synthesize detailTextColor=_detailTextColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets detailInsets;                                         //@synthesize detailInsets=_detailInsets - In the implementation block
@property (nonatomic,retain) MPUExtrasGridHeaderStyle * headerStyle;                            //@synthesize headerStyle=_headerStyle - In the implementation block
@property (nonatomic,retain) MPUExtrasGridSectionHeaderStyle * sectionHeaderStyle;              //@synthesize sectionHeaderStyle=_sectionHeaderStyle - In the implementation block
@property (nonatomic,retain) MPUExtrasGridCellStyle * defaultCellStyle;                         //@synthesize defaultCellStyle=_defaultCellStyle - In the implementation block
@property (nonatomic,retain) MPUExtrasGridCellStyle * imageCellStyle;                           //@synthesize imageCellStyle=_imageCellStyle - In the implementation block
@property (nonatomic,retain) MPUExtrasGridCellStyle * videoCellStyle;                           //@synthesize videoCellStyle=_videoCellStyle - In the implementation block
@property (nonatomic,retain) MPUExtrasGridCellStyle * productCellStyle;                         //@synthesize productCellStyle=_productCellStyle - In the implementation block
@property (assign,nonatomic) double defaultSpacing;                                             //@synthesize defaultSpacing=_defaultSpacing - In the implementation block
@property (assign,nonatomic) double imageSpacing;                                               //@synthesize imageSpacing=_imageSpacing - In the implementation block
@property (assign,nonatomic) double videoSpacing;                                               //@synthesize videoSpacing=_videoSpacing - In the implementation block
@property (assign,nonatomic) double productSpacing;                                             //@synthesize productSpacing=_productSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets defaultCellSectionInsets;                             //@synthesize defaultCellSectionInsets=_defaultCellSectionInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets imageCellSectionInsets;                               //@synthesize imageCellSectionInsets=_imageCellSectionInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets videoCellSectionInsets;                               //@synthesize videoCellSectionInsets=_videoCellSectionInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets productCellSectionInsets;                             //@synthesize productCellSectionInsets=_productCellSectionInsets - In the implementation block
@property (assign,nonatomic) double cellLineSpacing;                                            //@synthesize cellLineSpacing=_cellLineSpacing - In the implementation block
@property (assign,nonatomic) BOOL showsScrollFade;                                              //@synthesize showsScrollFade=_showsScrollFade - In the implementation block
@property (assign,nonatomic) BOOL adjustsContentInsetByBottomNavBar;                            //@synthesize adjustsContentInsetByBottomNavBar=_adjustsContentInsetByBottomNavBar - In the implementation block
-(UIColor *)detailTextColor;
-(void)setDetailTextColor:(UIColor *)arg1 ;
-(MPUExtrasGridSectionHeaderStyle *)sectionHeaderStyle;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(MPUExtrasGridHeaderStyle *)headerStyle;
-(void)setHeaderStyle:(MPUExtrasGridHeaderStyle *)arg1 ;
-(NSString *)detailTextStyle;
-(UIEdgeInsets)detailInsets;
-(MPUExtrasGridCellStyle *)imageCellStyle;
-(MPUExtrasGridCellStyle *)videoCellStyle;
-(MPUExtrasGridCellStyle *)productCellStyle;
-(MPUExtrasGridCellStyle *)defaultCellStyle;
-(UIEdgeInsets)defaultCellSectionInsets;
-(UIEdgeInsets)imageCellSectionInsets;
-(UIEdgeInsets)videoCellSectionInsets;
-(UIEdgeInsets)productCellSectionInsets;
-(double)defaultSpacing;
-(double)imageSpacing;
-(double)videoSpacing;
-(double)productSpacing;
-(BOOL)showsScrollFade;
-(BOOL)adjustsContentInsetByBottomNavBar;
-(double)cellLineSpacing;
-(void)setDefaultCellStyle:(MPUExtrasGridCellStyle *)arg1 ;
-(void)setImageCellStyle:(MPUExtrasGridCellStyle *)arg1 ;
-(void)setVideoCellStyle:(MPUExtrasGridCellStyle *)arg1 ;
-(void)setProductCellStyle:(MPUExtrasGridCellStyle *)arg1 ;
-(void)setSectionHeaderStyle:(MPUExtrasGridSectionHeaderStyle *)arg1 ;
-(void)setDefaultSpacing:(double)arg1 ;
-(void)setImageSpacing:(double)arg1 ;
-(void)setVideoSpacing:(double)arg1 ;
-(void)setProductSpacing:(double)arg1 ;
-(void)setDefaultCellSectionInsets:(UIEdgeInsets)arg1 ;
-(void)setImageCellSectionInsets:(UIEdgeInsets)arg1 ;
-(void)setVideoCellSectionInsets:(UIEdgeInsets)arg1 ;
-(void)setProductCellSectionInsets:(UIEdgeInsets)arg1 ;
-(void)setCellLineSpacing:(double)arg1 ;
-(void)setShowsScrollFade:(BOOL)arg1 ;
-(void)setAdjustsContentInsetByBottomNavBar:(BOOL)arg1 ;
-(void)setDetailTextStyle:(NSString *)arg1 ;
-(void)setDetailDefaultFontAttributes:(NSDictionary *)arg1 ;
-(void)setDetailInsets:(UIEdgeInsets)arg1 ;
-(NSDictionary *)detailDefaultFontAttributes;
-(UIEdgeInsets)collectionViewInsets;
-(void)setCollectionViewInsets:(UIEdgeInsets)arg1 ;
@end

