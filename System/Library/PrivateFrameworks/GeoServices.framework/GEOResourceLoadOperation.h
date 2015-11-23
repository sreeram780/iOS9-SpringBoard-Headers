/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:21 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSData;


@protocol GEOResourceLoadOperation <NSObject>
@property (nonatomic,readonly) NSData * data; 
@required
-(void)cancel;
-(NSData *)data;
-(id)initWithResource:(id)arg1 existingPartialData:(id)arg2 auditToken:(id)arg3 baseURLString:(id)arg4;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 callbackQueue:(id)arg2;

@end

