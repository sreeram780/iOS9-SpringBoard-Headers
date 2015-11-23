/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:01 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class NSMutableArray, NSArray;

@interface UIKeyboardCandidateBarLayout : UICollectionViewLayout {

	CGSize _contentSize;
	NSMutableArray* _allAttributes;
	NSArray* _edgeDummyCellAttributes;

}

@property (nonatomic,retain) NSMutableArray * allAttributes;                 //@synthesize allAttributes=_allAttributes - In the implementation block
@property (nonatomic,retain) NSArray * edgeDummyCellAttributes;              //@synthesize edgeDummyCellAttributes=_edgeDummyCellAttributes - In the implementation block
+(id)layout;
+(id)dummyCellCollectionViewKind;
+(Class)layoutAttributesClass;
-(void)dealloc;
-(id)init;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareLayout;
-(NSMutableArray *)allAttributes;
-(NSArray *)edgeDummyCellAttributes;
-(void)setEdgeDummyCellAttributes:(NSArray *)arg1 ;
-(void)setAllAttributes:(NSMutableArray *)arg1 ;
@end

