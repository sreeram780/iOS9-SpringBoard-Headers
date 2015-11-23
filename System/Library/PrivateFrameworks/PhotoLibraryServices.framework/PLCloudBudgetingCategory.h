/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:18 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class PLPhotoLibrary, PLCloudResourceRange, NSString;

@interface PLCloudBudgetingCategory : NSObject {

	PLPhotoLibrary* _photoLibrary;
	unsigned short _category;
	PLCloudResourceRange* _range;
	/*^block*/id predicate;
	unsigned long long budgetShare;

}

@property (nonatomic,readonly) NSString * name; 
@property (assign,nonatomic) unsigned long long budgetShare; 
@property (nonatomic,readonly) unsigned long long totalAssetsCount; 
@property (nonatomic,readonly) unsigned short category; 
@property (nonatomic,copy) id predicate; 
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(unsigned short)category;
-(void)setPredicate:(id)arg1 ;
-(id)predicate;
-(unsigned long long)totalAssetsCount;
-(void)enumerateNodesInRange:(NSRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(NSRange)excludeAssetWithUuid:(id)arg1 ;
-(unsigned long long)totalSizeForQualityClass:(unsigned short)arg1 ;
-(unsigned long long)budgetShare;
-(id)initWithIdentifier:(unsigned short)arg1 photoLibrary:(id)arg2 ;
-(void)setBudgetShare:(unsigned long long)arg1 ;
-(NSRange)includeAsset:(id)arg1 ;
-(id)resourcesForAsset:(id)arg1 inQualityClass:(unsigned short)arg2 ;
-(unsigned long long)totalSizeForQualityClass:(unsigned short)arg1 inRange:(NSRange)arg2 ;
@end

