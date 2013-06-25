class BL_UI_MissionsDialog {
	idd = -1;
	onLoad = "uiNamespace setVariable ['BL_UI_MissionsDialog', _this select 0]";
	onUnLoad = "uiNamespace setVariable ['BL_UI_MissionsDialog', nil]";

	movingEnable = true;
	enableSimulation = true;

	class Controls {
		class MissionList {
			idc = 1;

			type = BL_UI_LISTBOX;
			style = BL_UI_STYLE_LISTBOX_TEXTURES;

			font = BL_UI_TEXT_FONT;
			sizeEx = BL_UI_TEXT_BODY_SIZE;

			color[] = { 1, 1, 1, 1 };
			colorBackground[] = BL_UI_COLOR_TRANSPARENT;
			colorScrollbar[] = BL_UI_COLOR_SCROLLBAR;
			colorSelect[] = BL_UI_COLOR_LISTBOX_SELECTED_TEXT;
			colorSelect2[] = BL_UI_COLOR_LISTBOX_SELECTED_TEXT;
			colorSelectBackground[] = BL_UI_COLOR_LISTBOX_SELECTED_BACKGROUND;
			colorSelectBackground2[] = BL_UI_COLOR_LISTBOX_SELECTED_BACKGROUND;
			colorText[] = BL_UI_COLOR_TEXT;
			period = 1;
			shadow = 2;

			autoScrollSpeed = -1;
			autoScrollDelay = 0;
			autoScrollRewind = 0;

			arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
			arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";

			drawSideArrows = false;
			idcLeft = 2;
			idcRight = 3;

			maxHistoryDelay = 1;

			columns[] = { -0.1 };

			rowHeight = 0;

			soundSelect[] = BL_UI_SOUND_NONE;

			x = 0.01;
			y = 0.01;

			w = 0.98;
			h = 0.5;

			class ScrollBar {
				arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
				arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
				border = "#(argb,8,8,3)color(1,1,1,1)";
				color[] = { 1, 1, 1, 0.6 };
				colorActive[] = { 1, 1, 1, 1, };
				colorDisabled[] = { 1, 1, 1, 0.3 };
				thumb = "#(argb,8,8,3)color(1,1,1,1)";
			};
		};

		class MissionName {
			idc = 4;

			type = BL_UI_STATIC;
			style = BL_UI_STYLE_LEFT;
			moving = false;

			text = "Mission name";
			font = BL_UI_TEXT_FONT;
			sizeEx = BL_UI_TEXT_HEADER_SIZE;

			colorBackground[] = BL_UI_COLOR_TRANSPARENT;
			colorText[] = BL_UI_COLOR_TEXT_HEADER;

			x = 0.01;
			y = 0.5;

			w = 0.99;
			h = 0.075;
		};

		class MissionDescription {
			idc = 5;

			type = BL_UI_STATIC;
			style = BL_UI_STYLE_LEFT + BL_UI_STYLE_MULTI;
			moving = false;

			text = "This is the mission description!";
			font = BL_UI_TEXT_FONT;
			sizeEx = BL_UI_TEXT_BODY_SIZE;
			lineSpacing = 1.0;

			colorBackground[] = BL_UI_COLOR_TRANSPARENT;
			colorText[] = BL_UI_COLOR_TEXT;

			x = 0.01;
			y = 0.575;

			w = 0.99;
			h = 0.4;
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

		class Divider {
			idc = -1;

			type = BL_UI_STATIC;
			style = BL_UI_LINE;

			text = "";
			font = BL_UI_TEXT_FONT;
			sizeEx = 0.0;

			colorBackground[] = BL_UI_COLOR_BAR_BACKGROUND;
			colorText[] = BL_UI_COLOR_BAR_BACKGROUND;

			x = 0.0;
			y = 0.49;

			w = 1.0;
			h = 0.01;
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
};
