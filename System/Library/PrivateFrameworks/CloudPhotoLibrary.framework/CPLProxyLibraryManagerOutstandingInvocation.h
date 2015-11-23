/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:48 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSError, CPLResource;

@interface CPLProxyLibraryManagerOutstandingInvocation : NSObject {

	BOOL _didStart;
	BOOL _didFinish;
	float _progress;
	NSError* _finalError;
	CPLResource* _finalResource;

}

@property (assign,nonatomic) BOOL didStart;                            //@synthesize didStart=_didStart - In the implementation block
@property (assign,nonatomic) float progress;                           //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL didFinish;                           //@synthesize didFinish=_didFinish - In the implementation block
@property (nonatomic,retain) NSError * finalError;                     //@synthesize finalError=_finalError - In the implementation block
@property (nonatomic,retain) CPLResource * finalResource;              //@synthesize finalResource=_finalResource - In the implementation block
-(id)description;
-(void)setProgress:(float)arg1 ;
-(float)progress;
-(BOOL)didStart;
-(BOOL)didFinish;
-(CPLResource *)finalResource;
-(NSError *)finalError;
-(void)setDidStart:(BOOL)arg1 ;
-(void)setDidFinish:(BOOL)arg1 ;
-(void)setFinalError:(NSError *)arg1 ;
-(void)setFinalResource:(CPLResource *)arg1 ;
@end

