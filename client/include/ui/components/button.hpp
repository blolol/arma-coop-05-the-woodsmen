class BLOL_UI_Button {
	type = BLOL_UI_BUTTON;
	style = BLOL_UI_STYLE_CENTER;
	default = false;

	font = BLOL_UI_TEXT_FONT;
	sizeEx = BLOL_UI_TEXT_BUTTON_SIZE;
	text = "Lorem";

	colorText[] = BLOL_UI_COLOR_TEXT;
	colorFocused[] = BLOL_UI_COLOR_TEXT;
	colorDisabled[] = BLOL_UI_COLOR_TEXT;
	colorBackground[] = BLOL_UI_COLOR_BUTTON_BACKGROUND;
	colorBackgroundDisabled[] = BLOL_UI_COLOR_BUTTON_BACKGROUND;
	colorBackgroundActive[] = BLOL_UI_COLOR_BUTTON_BACKGROUND;
	colorShadow[] = BLOL_UI_COLOR_BUTTON_SHADOW;
	colorBorder[] = BLOL_UI_COLOR_BUTTON_BORDER;
	borderSize = 0;

	offsetX = 0.003;
	offsetY = 0.003;
	offsetPressedX = 0.002;
	offsetPressedY = 0.002;

	soundEnter[] = BLOL_UI_SOUND_NONE;
	soundPush[] = BLOL_UI_SOUND_NONE;
	soundClick[] = BLOL_UI_SOUND_NONE;
	soundEscape[] = BLOL_UI_SOUND_NONE;

	x = 0.0;
	y = 0.0;
	w = 0.15;
	h = 0.05;
};
