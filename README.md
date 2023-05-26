# iOS Color picker

<b>Preview: </b>
<img src="https://media.discordapp.net/attachments/685901946582073456/1111649380928323594/ezgif.com-gif-maker.gif" alt="this slowpoke moves"  width="250" />

### Example:

<b> Setup: </b>
```
ColorPicker *picker = [[ColorPicker alloc]initWithFrame:CGRectMake(0, 0, 300, 220)];
picker.center = window.center;
picker.backgroundColor = [UIColor colorWithRed:0.09f green:0.1f blue:0.11f alpha:0.9f];
picker.rgbPicker = true; //Display three buttons to select red, green and blue colors.
picker.hsbPicker = true; //Display three buttons to select hue, saturation and brightness.
picker.alphaPicker = true; //Display a button to select the transparency of a color. Only works with rgbPicker or hsbPicker
[picker setSelectedColor:[UIColor colorWithRed:0.12f green:0.34f blue:0.56f alpha:0.78f]]; //set selected colors
[window addSubview:picker];
```

<b> Appply: </b>
```
UIView *view = ...
UILabel *label = ...

[picker colorWasUpdate: ^(void) {
    view.backgroundColor = [picker getSelectedColor];
	label.textColor = [picker getSelectedColor];
}];
```

<b> Addinhg to the project: </b>
```
$(TWEAK_NAME)_LDFLAGS += ColorPicker.a
```

### Credits:

* [ontrey228 tg](https://t.me/leon_tap)
* [ontrey228 ds](https://discord.gg/leontap)