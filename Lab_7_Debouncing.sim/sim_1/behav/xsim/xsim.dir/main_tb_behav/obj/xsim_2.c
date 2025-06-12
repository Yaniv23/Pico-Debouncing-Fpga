/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
typedef void (*funcp)(char *, char *);
extern int main(int, char**);
extern void execute_1401(char*, char *);
extern void execute_1402(char*, char *);
extern void execute_1397(char*, char *);
extern void execute_1398(char*, char *);
extern void execute_1399(char*, char *);
extern void execute_1400(char*, char *);
extern void execute_45(char*, char *);
extern void execute_239(char*, char *);
extern void execute_240(char*, char *);
extern void execute_315(char*, char *);
extern void execute_1246(char*, char *);
extern void execute_1247(char*, char *);
extern void execute_1248(char*, char *);
extern void execute_1249(char*, char *);
extern void execute_61(char*, char *);
extern void execute_62(char*, char *);
extern void execute_63(char*, char *);
extern void execute_327(char*, char *);
extern void execute_242(char*, char *);
extern void execute_254(char*, char *);
extern void execute_338(char*, char *);
extern void execute_362(char*, char *);
extern void execute_602(char*, char *);
extern void execute_702(char*, char *);
extern void execute_720(char*, char *);
extern void execute_794(char*, char *);
extern void execute_828(char*, char *);
extern void execute_817(char*, char *);
extern void execute_837(char*, char *);
extern void execute_838(char*, char *);
extern void execute_839(char*, char *);
extern void execute_840(char*, char *);
extern void execute_841(char*, char *);
extern void execute_842(char*, char *);
extern void execute_843(char*, char *);
extern void execute_844(char*, char *);
extern void execute_845(char*, char *);
extern void execute_846(char*, char *);
extern void execute_847(char*, char *);
extern void execute_848(char*, char *);
extern void execute_849(char*, char *);
extern void execute_850(char*, char *);
extern void execute_851(char*, char *);
extern void execute_852(char*, char *);
extern void execute_58(char*, char *);
extern void execute_78(char*, char *);
extern void execute_93(char*, char *);
extern void execute_97(char*, char *);
extern void execute_112(char*, char *);
extern void execute_126(char*, char *);
extern void execute_131(char*, char *);
extern void execute_136(char*, char *);
extern void execute_140(char*, char *);
extern void execute_145(char*, char *);
extern void execute_150(char*, char *);
extern void execute_160(char*, char *);
extern void execute_170(char*, char *);
extern void execute_175(char*, char *);
extern void execute_180(char*, char *);
extern void execute_195(char*, char *);
extern void execute_210(char*, char *);
extern void execute_224(char*, char *);
extern void execute_228(char*, char *);
extern void execute_252(char*, char *);
extern void execute_258(char*, char *);
extern void execute_264(char*, char *);
extern void execute_274(char*, char *);
extern void execute_285(char*, char *);
extern void execute_295(char*, char *);
extern void execute_302(char*, char *);
extern void execute_308(char*, char *);
extern void execute_658(char*, char *);
extern void execute_659(char*, char *);
extern void execute_660(char*, char *);
extern void execute_661(char*, char *);
extern void execute_662(char*, char *);
extern void execute_663(char*, char *);
extern void execute_664(char*, char *);
extern void execute_665(char*, char *);
extern void execute_666(char*, char *);
extern void execute_667(char*, char *);
extern void execute_668(char*, char *);
extern void execute_669(char*, char *);
extern void execute_670(char*, char *);
extern void execute_671(char*, char *);
extern void execute_672(char*, char *);
extern void execute_673(char*, char *);
extern void execute_1256(char*, char *);
extern void execute_1257(char*, char *);
extern void execute_1258(char*, char *);
extern void execute_1259(char*, char *);
extern void execute_1261(char*, char *);
extern void execute_1262(char*, char *);
extern void execute_1263(char*, char *);
extern void execute_1264(char*, char *);
extern void execute_1265(char*, char *);
extern void execute_1266(char*, char *);
extern void execute_1272(char*, char *);
extern void execute_1273(char*, char *);
extern void execute_1274(char*, char *);
extern void execute_1275(char*, char *);
extern void execute_1276(char*, char *);
extern void execute_1277(char*, char *);
extern void execute_1281(char*, char *);
extern void execute_1282(char*, char *);
extern void execute_1283(char*, char *);
extern void execute_1284(char*, char *);
extern void execute_1285(char*, char *);
extern void execute_1286(char*, char *);
extern void execute_1287(char*, char *);
extern void execute_1288(char*, char *);
extern void execute_1289(char*, char *);
extern void execute_1290(char*, char *);
extern void execute_1291(char*, char *);
extern void execute_1292(char*, char *);
extern void execute_1293(char*, char *);
extern void execute_1294(char*, char *);
extern void execute_1295(char*, char *);
extern void execute_1296(char*, char *);
extern void execute_1297(char*, char *);
extern void execute_1298(char*, char *);
extern void execute_1382(char*, char *);
extern void execute_1346(char*, char *);
extern void execute_1347(char*, char *);
extern void execute_1348(char*, char *);
extern void execute_1349(char*, char *);
extern void execute_1350(char*, char *);
extern void execute_1351(char*, char *);
extern void execute_1352(char*, char *);
extern void execute_1353(char*, char *);
extern void execute_1354(char*, char *);
extern void execute_1355(char*, char *);
extern void execute_1356(char*, char *);
extern void execute_1357(char*, char *);
extern void execute_1358(char*, char *);
extern void execute_1359(char*, char *);
extern void execute_1360(char*, char *);
extern void execute_1361(char*, char *);
extern void execute_1362(char*, char *);
extern void execute_1363(char*, char *);
extern void execute_1364(char*, char *);
extern void execute_1365(char*, char *);
extern void execute_1366(char*, char *);
extern void execute_1367(char*, char *);
extern void execute_1368(char*, char *);
extern void execute_1369(char*, char *);
extern void execute_1370(char*, char *);
extern void execute_1371(char*, char *);
extern void execute_1372(char*, char *);
extern void execute_1373(char*, char *);
extern void execute_1374(char*, char *);
extern void execute_1375(char*, char *);
extern void execute_1376(char*, char *);
extern void execute_1377(char*, char *);
extern void execute_1378(char*, char *);
extern void execute_1379(char*, char *);
extern void execute_1380(char*, char *);
extern void execute_1393(char*, char *);
extern void execute_1394(char*, char *);
extern void execute_1396(char*, char *);
extern void transaction_0(char*, char*, unsigned, unsigned, unsigned);
extern void vhdl_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
extern void transaction_51(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_91(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_104(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_111(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_136(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_138(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_141(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_143(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_456(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_465(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_474(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_483(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_492(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_501(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_510(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_519(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_528(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_537(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_546(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_554(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_562(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_570(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_578(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_586(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_594(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_602(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_611(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_620(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_629(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_636(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_645(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_652(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_661(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_669(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_680(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_687(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_697(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_705(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_715(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_722(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_732(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_740(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_750(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_757(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_767(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_775(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_785(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_792(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_802(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_810(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_820(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_827(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_837(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_845(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_855(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_862(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_871(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_880(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_889(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_898(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_907(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_921(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_936(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_952(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_961(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_970(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_979(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_988(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1000(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1008(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1018(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1028(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1043(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1051(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1060(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1072(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1080(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1090(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1100(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1108(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1117(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1129(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1137(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1147(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1157(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1172(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1180(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1189(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1201(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1209(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1219(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1229(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1237(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1246(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1256(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1271(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1336(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1339(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1342(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1343(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1345(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1346(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1347(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1348(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1349(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1350(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1377(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1378(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1379(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1380(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1398(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1405(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1407(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1414(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1430(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1431(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1432(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1433(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1434(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1435(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1436(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1437(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1450(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1451(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1452(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1453(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1456(char*, char*, unsigned, unsigned, unsigned);
funcp funcTab[289] = {(funcp)execute_1401, (funcp)execute_1402, (funcp)execute_1397, (funcp)execute_1398, (funcp)execute_1399, (funcp)execute_1400, (funcp)execute_45, (funcp)execute_239, (funcp)execute_240, (funcp)execute_315, (funcp)execute_1246, (funcp)execute_1247, (funcp)execute_1248, (funcp)execute_1249, (funcp)execute_61, (funcp)execute_62, (funcp)execute_63, (funcp)execute_327, (funcp)execute_242, (funcp)execute_254, (funcp)execute_338, (funcp)execute_362, (funcp)execute_602, (funcp)execute_702, (funcp)execute_720, (funcp)execute_794, (funcp)execute_828, (funcp)execute_817, (funcp)execute_837, (funcp)execute_838, (funcp)execute_839, (funcp)execute_840, (funcp)execute_841, (funcp)execute_842, (funcp)execute_843, (funcp)execute_844, (funcp)execute_845, (funcp)execute_846, (funcp)execute_847, (funcp)execute_848, (funcp)execute_849, (funcp)execute_850, (funcp)execute_851, (funcp)execute_852, (funcp)execute_58, (funcp)execute_78, (funcp)execute_93, (funcp)execute_97, (funcp)execute_112, (funcp)execute_126, (funcp)execute_131, (funcp)execute_136, (funcp)execute_140, (funcp)execute_145, (funcp)execute_150, (funcp)execute_160, (funcp)execute_170, (funcp)execute_175, (funcp)execute_180, (funcp)execute_195, (funcp)execute_210, (funcp)execute_224, (funcp)execute_228, (funcp)execute_252, (funcp)execute_258, (funcp)execute_264, (funcp)execute_274, (funcp)execute_285, (funcp)execute_295, (funcp)execute_302, (funcp)execute_308, (funcp)execute_658, (funcp)execute_659, (funcp)execute_660, (funcp)execute_661, (funcp)execute_662, (funcp)execute_663, (funcp)execute_664, (funcp)execute_665, (funcp)execute_666, (funcp)execute_667, (funcp)execute_668, (funcp)execute_669, (funcp)execute_670, (funcp)execute_671, (funcp)execute_672, (funcp)execute_673, (funcp)execute_1256, (funcp)execute_1257, (funcp)execute_1258, (funcp)execute_1259, (funcp)execute_1261, (funcp)execute_1262, (funcp)execute_1263, (funcp)execute_1264, (funcp)execute_1265, (funcp)execute_1266, (funcp)execute_1272, (funcp)execute_1273, (funcp)execute_1274, (funcp)execute_1275, (funcp)execute_1276, (funcp)execute_1277, (funcp)execute_1281, (funcp)execute_1282, (funcp)execute_1283, (funcp)execute_1284, (funcp)execute_1285, (funcp)execute_1286, (funcp)execute_1287, (funcp)execute_1288, (funcp)execute_1289, (funcp)execute_1290, (funcp)execute_1291, (funcp)execute_1292, (funcp)execute_1293, (funcp)execute_1294, (funcp)execute_1295, (funcp)execute_1296, (funcp)execute_1297, (funcp)execute_1298, (funcp)execute_1382, (funcp)execute_1346, (funcp)execute_1347, (funcp)execute_1348, (funcp)execute_1349, (funcp)execute_1350, (funcp)execute_1351, (funcp)execute_1352, (funcp)execute_1353, (funcp)execute_1354, (funcp)execute_1355, (funcp)execute_1356, (funcp)execute_1357, (funcp)execute_1358, (funcp)execute_1359, (funcp)execute_1360, (funcp)execute_1361, (funcp)execute_1362, (funcp)execute_1363, (funcp)execute_1364, (funcp)execute_1365, (funcp)execute_1366, (funcp)execute_1367, (funcp)execute_1368, (funcp)execute_1369, (funcp)execute_1370, (funcp)execute_1371, (funcp)execute_1372, (funcp)execute_1373, (funcp)execute_1374, (funcp)execute_1375, (funcp)execute_1376, (funcp)execute_1377, (funcp)execute_1378, (funcp)execute_1379, (funcp)execute_1380, (funcp)execute_1393, (funcp)execute_1394, (funcp)execute_1396, (funcp)transaction_0, (funcp)vhdl_transfunc_eventcallback, (funcp)transaction_51, (funcp)transaction_91, (funcp)transaction_104, (funcp)transaction_111, (funcp)transaction_136, (funcp)transaction_138, (funcp)transaction_141, (funcp)transaction_143, (funcp)transaction_456, (funcp)transaction_465, (funcp)transaction_474, (funcp)transaction_483, (funcp)transaction_492, (funcp)transaction_501, (funcp)transaction_510, (funcp)transaction_519, (funcp)transaction_528, (funcp)transaction_537, (funcp)transaction_546, (funcp)transaction_554, (funcp)transaction_562, (funcp)transaction_570, (funcp)transaction_578, (funcp)transaction_586, (funcp)transaction_594, (funcp)transaction_602, (funcp)transaction_611, (funcp)transaction_620, (funcp)transaction_629, (funcp)transaction_636, (funcp)transaction_645, (funcp)transaction_652, (funcp)transaction_661, (funcp)transaction_669, (funcp)transaction_680, (funcp)transaction_687, (funcp)transaction_697, (funcp)transaction_705, (funcp)transaction_715, (funcp)transaction_722, (funcp)transaction_732, (funcp)transaction_740, (funcp)transaction_750, (funcp)transaction_757, (funcp)transaction_767, (funcp)transaction_775, (funcp)transaction_785, (funcp)transaction_792, (funcp)transaction_802, (funcp)transaction_810, (funcp)transaction_820, (funcp)transaction_827, (funcp)transaction_837, (funcp)transaction_845, (funcp)transaction_855, (funcp)transaction_862, (funcp)transaction_871, (funcp)transaction_880, (funcp)transaction_889, (funcp)transaction_898, (funcp)transaction_907, (funcp)transaction_921, (funcp)transaction_936, (funcp)transaction_952, (funcp)transaction_961, (funcp)transaction_970, (funcp)transaction_979, (funcp)transaction_988, (funcp)transaction_1000, (funcp)transaction_1008, (funcp)transaction_1018, (funcp)transaction_1028, (funcp)transaction_1043, (funcp)transaction_1051, (funcp)transaction_1060, (funcp)transaction_1072, (funcp)transaction_1080, (funcp)transaction_1090, (funcp)transaction_1100, (funcp)transaction_1108, (funcp)transaction_1117, (funcp)transaction_1129, (funcp)transaction_1137, (funcp)transaction_1147, (funcp)transaction_1157, (funcp)transaction_1172, (funcp)transaction_1180, (funcp)transaction_1189, (funcp)transaction_1201, (funcp)transaction_1209, (funcp)transaction_1219, (funcp)transaction_1229, (funcp)transaction_1237, (funcp)transaction_1246, (funcp)transaction_1256, (funcp)transaction_1271, (funcp)transaction_1336, (funcp)transaction_1339, (funcp)transaction_1342, (funcp)transaction_1343, (funcp)transaction_1345, (funcp)transaction_1346, (funcp)transaction_1347, (funcp)transaction_1348, (funcp)transaction_1349, (funcp)transaction_1350, (funcp)transaction_1377, (funcp)transaction_1378, (funcp)transaction_1379, (funcp)transaction_1380, (funcp)transaction_1398, (funcp)transaction_1405, (funcp)transaction_1407, (funcp)transaction_1414, (funcp)transaction_1430, (funcp)transaction_1431, (funcp)transaction_1432, (funcp)transaction_1433, (funcp)transaction_1434, (funcp)transaction_1435, (funcp)transaction_1436, (funcp)transaction_1437, (funcp)transaction_1450, (funcp)transaction_1451, (funcp)transaction_1452, (funcp)transaction_1453, (funcp)transaction_1456};
const int NumRelocateId= 289;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/main_tb_behav/xsim.reloc",  (void **)funcTab, 289);
	iki_vhdl_file_variable_register(dp + 312528);
	iki_vhdl_file_variable_register(dp + 312584);


	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/main_tb_behav/xsim.reloc");
}

	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net

void simulate(char *dp)
{
		iki_schedule_processes_at_time_zero(dp, "xsim.dir/main_tb_behav/xsim.reloc");

	iki_execute_processes();

	// Schedule resolution functions for the multiply driven Verilog nets that have strength
	// Schedule transaction functions for the singly driven Verilog nets that have strength

}
#include "iki_bridge.h"
void relocate(char *);

void sensitize(char *);

void simulate(char *);

extern SYSTEMCLIB_IMP_DLLSPEC void local_register_implicit_channel(int, char*);
extern void implicit_HDL_SCinstatiate();

extern SYSTEMCLIB_IMP_DLLSPEC int xsim_argc_copy ;
extern SYSTEMCLIB_IMP_DLLSPEC char** xsim_argv_copy ;

int main(int argc, char **argv)
{
    iki_heap_initialize("ms", "isimmm", 0, 2147483648) ;
    iki_set_sv_type_file_path_name("xsim.dir/main_tb_behav/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/main_tb_behav/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/main_tb_behav/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
