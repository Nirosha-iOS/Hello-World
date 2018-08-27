//
//  DetailViewController.h
//  BookAuthorDetails
//
//  Created by Kishani Nirosha on 14/08/18.
//  Copyright © 2018 Kishani Nirosha. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BookInfo.h"
#import "BookDetails.h"
#import "Tag.h"
@interface DetailViewController : UIViewController
@property (nonatomic, strong) BookInfo *bankInfo;
@property (nonatomic, strong) IBOutlet UITextField *nameField;
@property (nonatomic, strong) IBOutlet UITextField *cityField;
@property (nonatomic, strong) IBOutlet UITextField *zipField;
@property (nonatomic, strong) IBOutlet UITextField *stateField;
@property (nonatomic, strong) IBOutlet UILabel *tagsLabel;
@property (nonatomic, strong) IBOutlet UILabel *dateLabel;
@property (nonatomic, strong) IBOutlet UIDatePicker *datePicker;
//- (id) initWithBankInfo:(BookInfo *) info;
@end
