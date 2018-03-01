class CfgFunctions {

	class CAF_hg {
		tag = "CAF_hg";
		file = "\CAF_core\functions\headgear";
		
		class functions {
			class toggleGoggles {};
			class toggleScrim {};
			class toggleNet {};
		};
	};
	class CAF_u {
		tag = "CAF_u";
		file = "\CAF_core\functions\uniform";
		
		class functions {
			class sleevesRoll {};
			class sleevesUnRoll {};
		};
	};
};
class CAF_glasses_classes
{
	hasGoggles[] = {
		"H_CAF_CG634_TW_G_D","H_CAF_CG634_NET_TW_G_D","H_CAF_CG634_SCRIM_TW_G_D",
		"H_CAF_CG634_AR_G_D","H_CAF_CG634_NET_AR_G_D","H_CAF_CG634_SCRIM_AR_G_D",
		"H_CAF_CG634_AC_G_D","H_CAF_CG634_NET_AC_G_D","H_CAF_CG634_SCRIM_AC_G_D"
	};

	noGoggles[] = {
		"H_CAF_CG634_TW_G_U","H_CAF_CG634_NET_TW_G_U","H_CAF_CG634_SCRIM_TW_G_U",
		"H_CAF_CG634_AR_G_U","H_CAF_CG634_NET_AR_G_U","H_CAF_CG634_SCRIM_AR_G_U",
		"H_CAF_CG634_AC_G_U","H_CAF_CG634_NET_AC_G_U","H_CAF_CG634_SCRIM_AC_G_U"
	};
};
class CAF_net_classes
{
	hasNet[] = {
		"H_CAF_CG634_NET_TW_G_D","H_CAF_CG634_NET_TW_G_U",
		"H_CAF_CG634_NET_AR_G_D","H_CAF_CG634_NET_AR_G_U",
		"H_CAF_CG634_NET_AC_G_D","H_CAF_CG634_NET_AC_G_U"
	};

	noNet[] = {
		"H_CAF_CG634_TW_G_U","H_CAF_CG634_TW_G_D",
		"H_CAF_CG634_AR_G_U","H_CAF_CG634_AR_G_D",
		"H_CAF_CG634_AC_G_U","H_CAF_CG634_AC_G_D"
	};
};
class CAF_scrim_classes
{
	hasScrim[] = {
		"H_CAF_CG634_SCRIM_TW_G_D","H_CAF_CG634_SCRIM_TW_G_U",
		"H_CAF_CG634_SCRIM_AR_G_D","H_CAF_CG634_SCRIM_AR_G_U",
		"H_CAF_CG634_SCRIM_AC_G_D","H_CAF_CG634_SCRIM_AC_G_U"
	};

	noScrim[] = {
		"H_CAF_CG634_TW_G_U","H_CAF_CG634_NET_TW_G_U","H_CAF_CG634_TW_G_D","H_CAF_CG634_NET_TW_G_D",
		"H_CAF_CG634_AR_G_U","H_CAF_CG634_NET_AR_G_U","H_CAF_CG634_AR_G_D","H_CAF_CG634_NET_AR_G_D",
		"H_CAF_CG634_AC_G_U","H_CAF_CG634_NET_AC_G_U","H_CAF_CG634_AC_G_D","H_CAF_CG634_NET_AC_G_D"
	};
};

class CAF_uniform_classes
{
	isRolled[] = {"U_CAF_uniform2_cadpatTW"};
	unRolled[] = {"U_CAF_uniform1_cadpatTW"};
};
