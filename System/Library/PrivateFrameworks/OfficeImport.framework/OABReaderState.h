/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:00 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OADColorPalette;
#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableDictionary, NSMutableArray, ESDContainer;

@interface OABReaderState : NSObject {

	Class mClient;
	NSMutableDictionary* mShapeIdMap;
	NSMutableDictionary* mEshContentIdMap;
	id<OADColorPalette> mColorPalette;
	NSMutableArray* mGroupStack;
	ESDContainer* mBstoreContainerHolder;

}

@property (nonatomic,retain) ESDContainer * bstoreContainerHolder; 
-(void)dealloc;
-(id)init;
-(BOOL)isInsideGroup;
-(id)peekGroup;
-(id)initWithClient:(Class)arg1 ;
-(Class)client;
-(id)drawableForShapeId:(int)arg1 ;
-(void)setDrawable:(id)arg1 forShapeId:(unsigned)arg2 ;
-(void)resetForNewDrawing;
-(void)pushGroup:(id)arg1 ;
-(id)popGroup;
-(id)colorPalette;
-(id)groupStackReference;
-(BOOL)useXmlBlobs;
-(EshContentRef)eshContentForId:(int)arg1 ;
-(void)setEshContent:(EshContentRef)arg1 forId:(int)arg2 ;
-(void)setColorPalette:(id)arg1 ;
-(int)groupDepth;
-(id)xmlDrawingState;
-(ESDContainer *)bstoreContainerHolder;
-(void)setBstoreContainerHolder:(ESDContainer *)arg1 ;
@end

