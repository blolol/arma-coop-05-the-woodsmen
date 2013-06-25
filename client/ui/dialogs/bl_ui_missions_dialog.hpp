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
		class RightColumn {
			idc = -1;

			type = BL_UI_CONTROLS_GROUP;
			style = BL_UI_STYLE_MULTI;
			shadow = 0;

			x = 0.5;
			y = 0.0;

			w = 0.5;
			h = 1.0;

			class ScrollBar {
				color[] = BL_UI_COLOR_SCROLLBAR;
				colorActive[] = BL_UI_COLOR_SCROLLBAR;
				colorDisabled[] = BL_UI_COLOR_SCROLLBAR_DISABLED;

				thumb = "#(argb,8,8,3)color(1,1,1,1)";
				arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
				arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
				border = "#(argb,8,8,3)color(1,1,1,1)";
			};

			class HScrollBar {
				height = 0.028;

				color[] = BL_UI_COLOR_SCROLLBAR;
				colorActive[] = BL_UI_COLOR_SCROLLBAR;
				colorDisabled[] = BL_UI_COLOR_SCROLLBAR_DISABLED;
				shadow = 0;
			};

			class VScrollBar {
				width = 0.021;

				color[] = BL_UI_COLOR_SCROLLBAR;
				colorActive[] = BL_UI_COLOR_SCROLLBAR;
				colorDisabled[] = BL_UI_COLOR_SCROLLBAR_DISABLED;
				shadow = 0;

				autoScrollSpeed = -1;
				autoScrollDelay = 0;
				autoScrollRewind = 0;
			};

			class Controls {
				class MissionDescription {
					idc = -1;

					type = BL_UI_STATIC;
					style = BL_UI_STYLE_LEFT + BL_UI_STYLE_MULTI;
					moving = false;

					text = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam dictum a nibh in commodo. Donec elit ante, hendrerit at diam at, facilisis hendrerit enim. Proin quis leo eget quam suscipit eleifend. Ut tempor laoreet ligula, nec convallis orci malesuada sed. Pellentesque cursus eros sit amet metus. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam dictum a nibh in commodo. Donec elit ante, hendrerit at diam at, facilisis hendrerit enim. Proin quis leo eget quam suscipit eleifend. Ut tempor laoreet ligula, nec convallis orci malesuada sed. Pellentesque cursus eros sit amet metus. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam dictum a nibh in commodo. Donec elit ante, hendrerit at diam at, facilisis hendrerit enim. Proin quis leo eget quam suscipit eleifend. Ut tempor laoreet ligula, nec convallis orci malesuada sed. Pellentesque cursus eros sit amet metus. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam dictum a nibh in commodo. Donec elit ante, hendrerit at diam at, facilisis hendrerit enim. Proin quis leo eget quam suscipit eleifend. Ut tempor laoreet ligula, nec convallis orci malesuada sed. Pellentesque cursus eros sit amet metus.";
					font = BL_UI_TEXT_FONT;
					sizeEx = BL_UI_TEXT_BODY_SIZE;
					lineSpacing = 1.0;

					colorBackground[] = BL_UI_COLOR_TRANSPARENT;
					colorText[] = BL_UI_COLOR_TEXT;

					x = 0.5;
					y = 0.0;

					w = 0.4;
					h = 3.0;
				};
			};
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
