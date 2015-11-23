/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:05 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface EDPageSetup : NSObject {

	int mOrientation;
	int mPageOrder;
	BOOL mCustomFirstPageNumber;
	unsigned long long mFirstPageNumber;
	unsigned long long mFitToHeight;
	unsigned long long mFitToWidth;
	unsigned long long mScale;
	float mLeftMargin;
	float mRightMargin;
	float mTopMargin;
	float mBottomMargin;
	float mHeaderMargin;
	float mFooterMargin;

}
+(id)pageSetup;
-(id)init;
-(id)description;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
-(void)setScale:(unsigned long long)arg1 ;
-(unsigned long long)scale;
-(float)topMargin;
-(void)setRightMargin:(float)arg1 ;
-(void)setOrder:(int)arg1 ;
-(int)order;
-(float)rightMargin;
-(float)leftMargin;
-(float)headerMargin;
-(float)bottomMargin;
-(void)setTopMargin:(float)arg1 ;
-(void)setLeftMargin:(float)arg1 ;
-(void)setBottomMargin:(float)arg1 ;
-(void)setFirstPageNumber:(unsigned long long)arg1 ;
-(void)setCustomFirstPageNumber:(BOOL)arg1 ;
-(void)setFitToHeight:(unsigned long long)arg1 ;
-(void)setFitToWidth:(unsigned long long)arg1 ;
-(void)setHeaderMargin:(float)arg1 ;
-(void)setFooterMargin:(float)arg1 ;
-(BOOL)customFirstPageNumber;
-(unsigned long long)firstPageNumber;
-(unsigned long long)fitToHeight;
-(unsigned long long)fitToWidth;
-(float)footerMargin;
@end

