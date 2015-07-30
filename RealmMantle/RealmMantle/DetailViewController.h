//
//  DetailViewController.h
//  RealmMantle
//
//  Created by Santiago Sánchez Rodríguez on 30/7/15.
//  Copyright (c) 2015 Shanti Rodríguez. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

