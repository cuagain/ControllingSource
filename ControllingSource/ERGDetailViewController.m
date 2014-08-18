//
//  ERGDetailViewController.m
//  ControllingSource
//
//  Created by thanawat.s on 8/18/2557 BE.
//  Copyright (c) 2557 thanawat.s. All rights reserved.
//

#import "ERGDetailViewController.h"

@interface ERGDetailViewController ()
- (void)configureView;
@end

@implementation ERGDetailViewController

#pragma mark - Managing the detail item

- (void)setDetailItem:(id)newDetailItem
{
    if (_detailItem != newDetailItem) {
        _detailItem = newDetailItem;
        
        // Update the view.
        [self configureView];
    }
}

- (void)configureView
{
    // Update the user interface for the detail item.

    if (self.detailItem) {
        self.detailDescriptionLabel.text = [[self.detailItem valueForKey:@"timeStamp"] description];
    }
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    [self configureView];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
