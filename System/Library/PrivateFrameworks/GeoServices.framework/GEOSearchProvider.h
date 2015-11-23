/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:19 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface GEOSearchProvider : NSObject {

	/*^block*/id _error;

}

@property (nonatomic,copy) id error;              //@synthesize error=_error - In the implementation block
-(id)error;
-(void)cancel;
-(void)dealloc;
-(void)search:(id)arg1 timeout:(long long)arg2 useBackgroundConnection:(BOOL)arg3 finished:(/*^block*/id)arg4 error:(/*^block*/id)arg5 ;
-(void)setError:(id)arg1 ;
@end

