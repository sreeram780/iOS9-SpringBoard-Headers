/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OITSUImage.h>

@class UIImage, TSUUIImageAutoreleasePoolGuard;

@interface OITSUUIImage : OITSUImage {

	UIImage* mUIImage;
	TSUUIImageAutoreleasePoolGuard* mGuard;

}
+(id)imageNamed:(id)arg1 ;
+(void)i_performBlockWithUIImageLock:(/*^block*/id)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(double)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGImageRef)CGImage;
-(long long)imageOrientation;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)UIImage;
-(CGImageRef)CGImageForSize:(CGSize)arg1 ;
-(id)initWithUIImage:(id)arg1 ;
-(id)p_initWithUIImage:(id)arg1 needsGuard:(BOOL)arg2 ;
@end

