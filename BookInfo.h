//
//  BookInfo.h
//  BookAuthorDetails
//
//  Created by Kishani Nirosha on 14/08/18.
//  Copyright © 2018 Kishani Nirosha. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class BookDetails;

@interface BookInfo : NSManagedObject

@property (nonatomic, retain) NSString * city;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * state;
@property (nonatomic, retain) BookDetails *details;

@end

