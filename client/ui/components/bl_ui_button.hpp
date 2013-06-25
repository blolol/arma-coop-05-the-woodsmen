class BL_UI_Button {
	type = BL_UI_BUTTON;
	style = BL_UI_STYLE_CENTER;
	default = false;

	font = BL_UI_TEXT_FONT;
	sizeEx = BL_UI_TEXT_BUTTON_SIZE;
	text = "Lorem";

	colorText[] = BL_UI_COLOR_TEXT;
	colorFocused[] = BL_UI_COLOR_TEXT;
	colorDisabled[] = BL_UI_COLOR_TEXT;
	colorBackground[] = BL_UI_COLOR_BUTTON_BACKGROUND;
	colorBackgroundDisabled[] = BL_UI_COLOR_BUTTON_BACKGROUND;
	colorBackgroundActive[] = BL_UI_COLOR_BUTTON_BACKGROUND;
	colorShadow[] = BL_UI_COLOR_BUTTON_SHADOW;
	colorBorder[] = BL_UI_COLOR_BUTTON_BORDER;
	borderSize = 0;

	offsetX = 0.003;
	offsetY = 0.003;
	offsetPressedX = 0.002;
	offsetPressedY = 0.002;

	soundEnter[] = BL_UI_SOUND_NONE;
	soundPush[] = BL_UI_SOUND_NONE;
	soundClick[] = BL_UI_SOUND_NONE;
	soundEscape[] = BL_UI_SOUND_NONE;

	x = 0.0;
	y = 0.0;
	w = 0.15;
	h = 0.05;
};
