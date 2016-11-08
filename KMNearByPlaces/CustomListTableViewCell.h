//
//  CustomListTableViewCell.h
//  KMNearByPlaces
//
//  Created by Student P_07 on 08/11/16.
//  Copyright © 2016 Karishma Mahajan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CustomListTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *nameLabel;

@property (weak, nonatomic) IBOutlet UILabel *addressLabel;
@property (weak, nonatomic) IBOutlet UILabel *placeLabel;

@end
