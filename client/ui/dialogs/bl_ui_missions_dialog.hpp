class BL_UI_MissionsDialog {
	idd = -1;
	onLoad = "uiNamespace setVariable ['BL_UI_MissionsDialog', _this select 0]";
	onUnLoad = "uiNamespace setVariable ['BL_UI_MissionsDialog', nil]";

	movingEnable = true;
	enableSimulation = true;

	class ControlsBackground {
		class Background {
			idc = -1;

			type = BL_UI_STATIC;
			style = BL_UI_STYLE_LEFT;
			moving = false;

			text = "";
			font = BL_UI_TEXT_FONT;
			sizeEx = 0.0;

			colorBackground[] = BL_UI_COLOR_BACKGROUND;
			colorText[] = BL_UI_COLOR_TEXT;

			x = 0.0;
			y = 0.0;

			w = 1.0;
			h = 1.0;
		};

		class TitleBar {
			idc = -1;

			type = BL_UI_STATIC;
			style = BL_UI_STYLE_CENTER;
			moving = true;

			text = "Missions";
			font = BL_UI_TEXT_FONT;
			sizeEx = 0.05;

			colorBackground[] = BL_UI_COLOR_BAR_BACKGROUND;
			colorText[] = BL_UI_COLOR_TEXT;

			x = 0.0;
			y = -0.07;

			w = 1.0;
			h = 0.07;
		};

		class ButtonBar {
			idc = -1;

			type = BL_UI_STATIC;
			style = BL_UI_STYLE_LEFT;
			moving = false;

			text = "";
			font = BL_UI_TEXT_FONT;
			sizeEx = 0.0;

			colorBackground[] = BL_UI_COLOR_BAR_BACKGROUND;
			colorText[] = BL_UI_COLOR_TEXT;

			x = 0.0;
			y = 1.0;

			w = 1.0;
			h = 0.07;
		};
	};

	class Objects {};

	class Controls {
		class MissionDescription {
			idc = -1;

			type = BL_UI_STATIC;
			style = BL_UI_STYLE_LEFT + BL_UI_STYLE_MULTI;
			moving = false;

			text = "";
			font = BL_UI_TEXT_FONT;
			sizeEx = BL_UI_TEXT_BODY_SIZE;
			lineSpacing = 1.0;

			colorBackground[] = BL_UI_COLOR_TRANSPARENT;
			colorText[] = BL_UI_COLOR_TEXT;

			x = 0.0;
			y = 0.5;

			w = 1.0;
			h = 0.5;
		};

		class CloseButton {
			idc = BL_UI_BUTTON_IDC_CANCEL;
			action = "closeDialog 0";

			type = BL_UI_BUTTON;
			style = BL_UI_STYLE_CENTER;
			default = false;

			font = BL_UI_TEXT_FONT;
			sizeEx = BL_UI_TEXT_BUTTON_SIZE;
			text = "Close";

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

			x = 0.01;
			y = 1.01;
			w = 0.15;
			h = 0.05;
		};
	};
};
