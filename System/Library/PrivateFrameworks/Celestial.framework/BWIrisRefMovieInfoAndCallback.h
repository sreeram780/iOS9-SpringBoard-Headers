/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:38 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class BWIrisMovieInfo;

@interface BWIrisRefMovieInfoAndCallback : NSObject {

	BWIrisMovieInfo* _info;
	/*^block*/id _callback;
	BOOL _processed;

}

@property (nonatomic,readonly) BWIrisMovieInfo * info;              //@synthesize info=_info - In the implementation block
@property (nonatomic,readonly) id callback;                         //@synthesize callback=_callback - In the implementation block
@property (assign,nonatomic) BOOL processed;                        //@synthesize processed=_processed - In the implementation block
+(id)movieInfoAndCallbackWithMovieInfo:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)dealloc;
-(BWIrisMovieInfo *)info;
-(id)_initWithMovieInfo:(id)arg1 callback:(/*^block*/id)arg2 ;
-(BOOL)processed;
-(void)setProcessed:(BOOL)arg1 ;
-(id)callback;
@end

