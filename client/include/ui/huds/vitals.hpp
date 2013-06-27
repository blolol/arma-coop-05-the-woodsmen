class BLOL_UI_VitalsHud {
	idd = -1;

	onLoad = "uiNamespace setVariable ['BLOL_UI_VitalsHud', _this select 0];";
	onUnLoad = "uiNamespace setVariable ['BLOL_UI_VitalsHud', nil];";

	duration = 999999;
	fadeIn = 0;
	fadeOut = 0;

	class Controls {};

	class ControlsBackground {
		class MoneyText {
			idc = 1;

			type = BLOL_UI_STATIC;
			style = BLOL_UI_STYLE_RIGHT;

			text = "$0";
			font = BLOL_UI_TEXT_FONT;
			sizeEx = BLOL_UI_TEXT_BODY_SIZE;

			colorBackground[] = BLOL_UI_COLOR_TRANSPARENT;
			colorText[] = BLOL_UI_COLOR_TEXT;

			w = 0.16;
			h = BLOL_UI_TEXT_BODY_SIZE;

			x = safeZoneX + (safeZoneW * (1 - (0.18 / SafeZoneW)));
			y = safeZoneY + (safeZoneH * (1 - ((BLOL_UI_TEXT_BODY_SIZE + 0.02) / SafeZoneH)));
		};
	};

	class Objects {};
};
