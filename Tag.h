//
//  Tag.h
//  BookAuthorDetails
//
//  Created by Kishani Nirosha on 14/08/18.
//  Copyright © 2018 Kishani Nirosha. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
@class BookDetails;

@interface Tag : NSManagedObject
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSSet *detail;
@end

@interface Tag (CoreDataGeneratedAccessors)

- (void)addDetailObject:(BookDetails *)value;
- (void)removeDetailObject:(BookDetails *)value;
- (void)addDetail:(NSSet *)values;
- (void)removeDetail:(NSSet *)values;

@end
