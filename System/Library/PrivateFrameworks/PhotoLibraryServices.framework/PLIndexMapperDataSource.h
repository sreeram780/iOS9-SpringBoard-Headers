/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:16 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSIndexSet;


@protocol PLIndexMapperDataSource <NSObject>
@property (nonatomic,copy,readonly) NSIndexSet * filteredIndexes; 
@required
-(NSIndexSet *)filteredIndexes;
-(BOOL)shouldIncludeObjectAtIndex:(unsigned long long)arg1;

@end

