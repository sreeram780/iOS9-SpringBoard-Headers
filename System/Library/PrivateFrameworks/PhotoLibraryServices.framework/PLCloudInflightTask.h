/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:17 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PLCloudInflightTask : NSObject {

	/*^block*/id _progressBlock;
	/*^block*/id _completionHandler;

}

@property (readonly) id progressBlock; 
@property (readonly) id completionHandler; 
-(void)dealloc;
-(id)completionHandler;
-(id)initWithProgressBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)progressBlock;
@end

