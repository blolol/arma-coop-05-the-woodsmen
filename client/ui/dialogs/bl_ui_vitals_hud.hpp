class RscTitles {
	class BL_UI_VitalsHud {
		idd = -1;

		onLoad = "uiNamespace setVariable ['BL_UI_VitalsHud', _this select 0]";
		onUnLoad = "uiNamespace setVariable ['BL_UI_VitalsHud', nil]";

		duration = 999999;
		fadeIn = 0;
		fadeOut = 0;

		class Controls {};

		class ControlsBackground {
			class MoneyText {
				idc = 1;

				type = BL_UI_STATIC;
				style = BL_UI_STYLE_RIGHT;

				text = "$0";
				font = BL_UI_TEXT_FONT;
				sizeEx = BL_UI_TEXT_BODY_SIZE;

				colorBackground[] = BL_UI_COLOR_TRANSPARENT;
				colorText[] = BL_UI_COLOR_TEXT;

				w = 0.16;
				h = BL_UI_TEXT_BODY_SIZE;

				x = safeZoneX + (safeZoneW * (1 - (0.18 / SafeZoneW)));
				y = safeZoneY + (safeZoneH * (1 - ((BL_UI_TEXT_BODY_SIZE + 0.02) / SafeZoneH)));
			};
		};

		class Objects {};
	};
};
