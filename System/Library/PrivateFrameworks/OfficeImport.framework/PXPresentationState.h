/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:09 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OCXReadState.h>

@protocol TCCancelDelegate;
@class NSMutableDictionary, OAXDrawingState, OAVReadState, OAXTableStyleCache, PDPresentation, CXNamespace;

@interface PXPresentationState : OCXReadState {

	NSMutableDictionary* mModelObjects;
	OAXDrawingState* mOfficeArtState;
	OAVReadState* mOAVState;
	OAXTableStyleCache* mTableStyleCache;
	NSMutableDictionary* mSlideURLToIndexMap;
	PDPresentation* mTgtPresentation;
	id<TCCancelDelegate> mCancel;
	CXNamespace* mPXPresentationMLNamespace;
	NSMutableDictionary* mCommentAuthorIdToIndexMap;
	CXNamespace* _PXPresentationMLNamespace;

}

@property (nonatomic,retain) id<TCCancelDelegate> cancelDelegate; 
@property (nonatomic,readonly) NSMutableDictionary * commentAuthorIdToIndexMap; 
@property (nonatomic,retain) CXNamespace * PXPresentationMLNamespace;                        //@synthesize PXPresentationMLNamespace=_PXPresentationMLNamespace - In the implementation block
+(void)setPptChartGraphicPropertyDefaultBlock:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isCancelled;
-(void)setupNSForXMLFormat:(int)arg1 ;
-(id)tableStyleCache;
-(id)oavState;
-(id)officeArtState;
-(void)setCancelDelegate:(id<TCCancelDelegate>)arg1 ;
-(id<TCCancelDelegate>)cancelDelegate;
-(CXNamespace *)PXPresentationMLNamespace;
-(id)tgtPresentation;
-(NSMutableDictionary *)commentAuthorIdToIndexMap;
-(void)setModelObject:(id)arg1 forLocation:(id)arg2 ;
-(long long)slideIndexForSlideURL:(id)arg1 ;
-(void)setTgtPresentation:(id)arg1 ;
-(void)setSlideIndex:(long long)arg1 forSlideURL:(id)arg2 ;
-(void)setPXPresentationMLNamespace:(CXNamespace *)arg1 ;
-(id)modelObjectForLocation:(id)arg1 ;
-(void)resetOfficeArtState;
@end

