/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:01 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUICatalog.h>

@interface CUIMutableCatalog : CUICatalog {

	unsigned _checkRespondsTo : 1;
	unsigned _respondsToCheck : 1;

}
-(void)dealloc;
-(id)init;
-(id)initWithName:(id)arg1 fromBundle:(id)arg2 error:(id*)arg3 ;
-(id)initWithName:(id)arg1 ;
-(void)removeImageNamed:(id)arg1 scale:(double)arg2 idiom:(long long)arg3 subtype:(long long)arg4 ;
-(void)removeImageNamed:(id)arg1 withDescription:(id)arg2 ;
-(void)insertCGImage:(CGImageRef)arg1 withName:(id)arg2 andDescription:(id)arg3 ;
-(unsigned long long)_storageRefForRendition:(id)arg1 representsODRContent:(BOOL*)arg2 ;
-(id)_baseKeyForName:(id)arg1 ;
-(void)insertCGImage:(CGImageRef)arg1 name:(id)arg2 scale:(double)arg3 idiom:(long long)arg4 subtype:(long long)arg5 ;
@end
