//
//  ColoPicker.h//  ColoPicker
//
//  Created by ONTREY228 on 25/05/23.
//  Copyright © 2023 ONTREY228. All rights reserved.
//


@import UIKit;

@interface ColorPicker : UIView

/* Alpha picker
 *
 * Boolean value indicating whether to add an RGB picker.
 * (Default: NO)
 */

@property (nonatomic) BOOL rgbPicker;

/* Alpha picker
 *
 * Boolean value indicating whether to add an HSB picker.
 * (Default: NO)
 */

@property (nonatomic) BOOL hsbPicker;

/* Alpha picker
 *
 * Boolean value indicating whether to add an alpha picker. Only used with rgbPicker or hsbPicker.
 * (Default: NO)
 */

@property (nonatomic) BOOL alphaPicker;


/** Get selected color
 *
 * Get selected color from pickers.
 */

- (UIColor *)getSelectedColor;

/** Set selected color
 *
 * @param color UIColor set your own color.
 */

- (void)setSelectedColor:(UIColor *)color;

/** Color was update
 *
 * Called when the color changes.
 */

- (void)colorWasUpdate:(void (^)(void))a;

/** Get selected string color
 *
 * Get selected color in color picker converted to string.
 */

- (NSString *)getSelectedStringColor;

/** NSString from UIColor
 *
 * @param color UIColor convert color to string.
 */

+ (NSString *)NSStringFromUIColor:(UIColor *)color;

/** UIColor from NSString
 *
 * @param color UIColor convert string to color.
 */

+ (UIColor *)UIColorFromNSString:(NSString *)string;

@end