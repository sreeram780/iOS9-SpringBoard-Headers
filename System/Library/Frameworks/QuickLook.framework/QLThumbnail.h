/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:43 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuickLook/QuickLook-Structs.h>
@class NSURL;

@interface QLThumbnail : NSObject {

	NSURL* _url;

}

@property (retain) NSURL * url;              //@synthesize url=_url - In the implementation block
+(id)sharedQueue;
+(id)defaultDescriptors;
-(id)thumbnailCreationOperationForUseMode:(unsigned long long)arg1 descriptor:(id)arg2 ;
-(BOOL)provideImages:(/*^block*/id)arg1 error:(id*)arg2 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)imageForUseMode:(unsigned long long)arg1 descriptor:(id)arg2 generateIfNeeded:(BOOL)arg3 contentRect:(CGRect*)arg4 error:(id*)arg5 ;
@end

