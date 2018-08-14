//
//  BookDetails.h
//  BookAuthorDetails
//
//  Created by Kishani Nirosha on 14/08/18.
//  Copyright © 2018 Kishani Nirosha. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
@class BookInfo,Tag;

@interface BookDetails : NSManagedObject

@property (nonatomic,retain) NSDate *closeDate;
@property (nonatomic,retain) NSDate *updateDate;
@property (nonatomic,retain) NSString *zip;

@property (nonatomic,retain) BookInfo *info;
@property (nonatomic,retain) NSSet *tags;
@end

@interface BookDetails (CoreDataGeneratedAccessors)
- (void)addTagsObject:(Tag *)value;
- (void)removeTagsObject:(Tag *)value;
- (void)addTags:(NSSet *)values;
- (void)removeTags:(NSSet *)values;

@end
