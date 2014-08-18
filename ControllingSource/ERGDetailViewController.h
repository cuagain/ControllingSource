//
//  ERGDetailViewController.h
//  ControllingSource
//
//  Created by thanawat.s on 8/18/2557 BE.
//  Copyright (c) 2557 thanawat.s. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ERGDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
