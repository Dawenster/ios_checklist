//
//  itemDetailViewController.h
//  Checklists
//
//  Created by David Wen on 2013-07-04.
//  Copyright (c) 2013 David Wen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DatePickerViewController.h"

@class ItemDetailViewController;
@class ChecklistItem;

@protocol ItemDetailViewControllerDelegate <NSObject>

- (void)itemDetailViewControllerDidCancel:(ItemDetailViewController *)controller;
- (void)itemDetailViewController:(ItemDetailViewController *)controller didFinishAddingItem:(ChecklistItem *)item;
- (void)itemDetailViewController:(ItemDetailViewController *)controller didFinishEditingItem:(ChecklistItem *)item;

@end

@interface ItemDetailViewController : UITableViewController <UITextFieldDelegate, DatePickerViewControllerDelegate>

@property (strong, nonatomic) IBOutlet UIBarButtonItem *doneBarButton;
@property (strong, nonatomic) IBOutlet UITextField *textField;
@property (nonatomic, weak) id <ItemDetailViewControllerDelegate> delegate;
@property (nonatomic, strong) ChecklistItem *itemToEdit;
@property (nonatomic, strong) IBOutlet UISwitch *switchControl;
@property (nonatomic, strong) IBOutlet UILabel *dueDateLabel;

- (IBAction)cancel;
- (IBAction)done;
- (IBAction)switchChanged:(UISwitch *)sender;

@end
