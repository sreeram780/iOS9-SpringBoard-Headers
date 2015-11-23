/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:31 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libextension.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libextension.dylib/libextension.dylib-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol _NSItemProviderLoading;
@class NSDictionary, NSMutableDictionary, NSArray;

@interface NSItemProvider : NSObject <NSSecureCoding, NSCopying> {

	/*^block*/id __previewImageHandler;
	NSDictionary* _userInfo;
	id<_NSItemProviderLoading> __loadOperator;
	NSMutableDictionary* __loadHandlers;

}

@property (nonatomic,copy) id previewImageHandler; 
@property (nonatomic,copy,readonly) NSArray * registeredTypeIdentifiers; 
@property (nonatomic,copy) NSDictionary * userInfo;                                   //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) id<_NSItemProviderLoading> _loadOperator;                //@synthesize _loadOperator=__loadOperator - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _loadHandlers;                     //@synthesize _loadHandlers=__loadHandlers - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)loadPreviewImageWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setPreviewImageHandler:(id)arg1 ;
-(id)previewImageHandler;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(id)initWithItem:(id)arg1 typeIdentifier:(id)arg2 ;
-(void)registerItemForTypeIdentifier:(id)arg1 loadHandler:(/*^block*/id)arg2 ;
-(BOOL)hasItemConformingToTypeIdentifier:(id)arg1 ;
-(void)loadItemForTypeIdentifier:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(NSMutableDictionary *)_loadHandlers;
-(id<_NSItemProviderLoading>)_loadOperator;
-(void)set_loadOperator:(id<_NSItemProviderLoading>)arg1 ;
-(NSArray *)registeredTypeIdentifiers;
-(void)_loadItemOfClass:(Class)arg1 forTypeIdentifier:(id)arg2 options:(id)arg3 coerceForCoding:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_loadItemOfClass:(Class)arg1 withLoadHandler:(/*^block*/id)arg2 options:(id)arg3 coerceForCoding:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_loadPreviewImageOfClass:(Class)arg1 options:(id)arg2 coerceForCoding:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)set_loadHandlers:(NSMutableDictionary *)arg1 ;
@end

