//
//  ViewController.h
//  BookAuthorDetails
//
//  Created by Kishani Nirosha on 14/08/18.
//  Copyright © 2018 Kishani Nirosha. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DetailViewController.h"

@interface ViewController : UIViewController<NSFetchedResultsControllerDelegate>
@property (nonatomic, strong) IBOutlet UITableView *tableView;
@property (nonatomic,strong) NSManagedObjectContext* managedObjectContext;
@property (nonatomic, retain) NSFetchedResultsController *fetchedResultsController;
@end

