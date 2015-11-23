/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:48 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CPLEngineSyncTaskDelegate, NSCoding;
@class CPLEngineLibrary, NSString;

@interface CPLEngineSyncTask : NSObject {

	BOOL _foreground;
	BOOL _paused;
	BOOL _cancelled;
	id<CPLEngineSyncTaskDelegate> _delegate;
	CPLEngineLibrary* _engineLibrary;
	id<NSCoding> _transportUserIdentifier;

}

@property (retain) id<CPLEngineSyncTaskDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CPLEngineLibrary * engineLibrary;                //@synthesize engineLibrary=_engineLibrary - In the implementation block
@property (nonatomic,retain) id<NSCoding> transportUserIdentifier;              //@synthesize transportUserIdentifier=_transportUserIdentifier - In the implementation block
@property (assign,nonatomic) BOOL foreground;                                   //@synthesize foreground=_foreground - In the implementation block
@property (nonatomic,readonly) NSString * taskIdentifier; 
@property (getter=isPaused) BOOL paused;                                        //@synthesize paused=_paused - In the implementation block
@property (getter=isCancelled) BOOL cancelled;                                  //@synthesize cancelled=_cancelled - In the implementation block
+(id)taskWithEngineLibrary:(id)arg1 ;
-(void)launch;
-(void)_setCancelled:(BOOL)arg1 ;
-(BOOL)isPaused;
-(void)_setPaused:(BOOL)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<CPLEngineSyncTaskDelegate>)arg1 ;
-(id)description;
-(id<CPLEngineSyncTaskDelegate>)delegate;
-(BOOL)isCancelled;
-(void)resume;
-(void)pause;
-(CPLEngineLibrary *)engineLibrary;
-(id)initWithEngineLibrary:(id)arg1 ;
-(void)taskDidFinishWithError:(id)arg1 ;
-(unsigned long long)diskPressureState;
-(void)taskDidProgress:(float)arg1 userInfo:(id)arg2 ;
-(id<NSCoding>)transportUserIdentifier;
-(void)setTransportUserIdentifier:(id<NSCoding>)arg1 ;
-(BOOL)foreground;
-(void)setForeground:(BOOL)arg1 ;
-(NSString *)taskIdentifier;
@end

