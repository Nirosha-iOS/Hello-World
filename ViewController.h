#import <UIKit/UIKit.h>
#import "DetailViewController.h"

@interface ViewController : UIViewController<NSFetchedResultsControllerDelegate>
@property (nonatomic, strong) IBOutlet UITableView *tableView;
@property (nonatomic,strong) NSManagedObjectContext* managedObjectContext;
@property (nonatomic, retain) NSFetchedResultsController *fetchedResultsController;
@end
