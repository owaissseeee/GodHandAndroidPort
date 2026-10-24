#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_0026DB00
// Address: 0x26db00 - 0x26e258
void func_0026DB00_0x26db00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0026DB00_0x26db00");
#endif

    switch (ctx->pc) {
        case 0x26db00u: goto label_26db00;
        case 0x26db04u: goto label_26db04;
        case 0x26db08u: goto label_26db08;
        case 0x26db0cu: goto label_26db0c;
        case 0x26db10u: goto label_26db10;
        case 0x26db14u: goto label_26db14;
        case 0x26db18u: goto label_26db18;
        case 0x26db1cu: goto label_26db1c;
        case 0x26db20u: goto label_26db20;
        case 0x26db24u: goto label_26db24;
        case 0x26db28u: goto label_26db28;
        case 0x26db2cu: goto label_26db2c;
        case 0x26db30u: goto label_26db30;
        case 0x26db34u: goto label_26db34;
        case 0x26db38u: goto label_26db38;
        case 0x26db3cu: goto label_26db3c;
        case 0x26db40u: goto label_26db40;
        case 0x26db44u: goto label_26db44;
        case 0x26db48u: goto label_26db48;
        case 0x26db4cu: goto label_26db4c;
        case 0x26db50u: goto label_26db50;
        case 0x26db54u: goto label_26db54;
        case 0x26db58u: goto label_26db58;
        case 0x26db5cu: goto label_26db5c;
        case 0x26db60u: goto label_26db60;
        case 0x26db64u: goto label_26db64;
        case 0x26db68u: goto label_26db68;
        case 0x26db6cu: goto label_26db6c;
        case 0x26db70u: goto label_26db70;
        case 0x26db74u: goto label_26db74;
        case 0x26db78u: goto label_26db78;
        case 0x26db7cu: goto label_26db7c;
        case 0x26db80u: goto label_26db80;
        case 0x26db84u: goto label_26db84;
        case 0x26db88u: goto label_26db88;
        case 0x26db8cu: goto label_26db8c;
        case 0x26db90u: goto label_26db90;
        case 0x26db94u: goto label_26db94;
        case 0x26db98u: goto label_26db98;
        case 0x26db9cu: goto label_26db9c;
        case 0x26dba0u: goto label_26dba0;
        case 0x26dba4u: goto label_26dba4;
        case 0x26dba8u: goto label_26dba8;
        case 0x26dbacu: goto label_26dbac;
        case 0x26dbb0u: goto label_26dbb0;
        case 0x26dbb4u: goto label_26dbb4;
        case 0x26dbb8u: goto label_26dbb8;
        case 0x26dbbcu: goto label_26dbbc;
        case 0x26dbc0u: goto label_26dbc0;
        case 0x26dbc4u: goto label_26dbc4;
        case 0x26dbc8u: goto label_26dbc8;
        case 0x26dbccu: goto label_26dbcc;
        case 0x26dbd0u: goto label_26dbd0;
        case 0x26dbd4u: goto label_26dbd4;
        case 0x26dbd8u: goto label_26dbd8;
        case 0x26dbdcu: goto label_26dbdc;
        case 0x26dbe0u: goto label_26dbe0;
        case 0x26dbe4u: goto label_26dbe4;
        case 0x26dbe8u: goto label_26dbe8;
        case 0x26dbecu: goto label_26dbec;
        case 0x26dbf0u: goto label_26dbf0;
        case 0x26dbf4u: goto label_26dbf4;
        case 0x26dbf8u: goto label_26dbf8;
        case 0x26dbfcu: goto label_26dbfc;
        case 0x26dc00u: goto label_26dc00;
        case 0x26dc04u: goto label_26dc04;
        case 0x26dc08u: goto label_26dc08;
        case 0x26dc0cu: goto label_26dc0c;
        case 0x26dc10u: goto label_26dc10;
        case 0x26dc14u: goto label_26dc14;
        case 0x26dc18u: goto label_26dc18;
        case 0x26dc1cu: goto label_26dc1c;
        case 0x26dc20u: goto label_26dc20;
        case 0x26dc24u: goto label_26dc24;
        case 0x26dc28u: goto label_26dc28;
        case 0x26dc2cu: goto label_26dc2c;
        case 0x26dc30u: goto label_26dc30;
        case 0x26dc34u: goto label_26dc34;
        case 0x26dc38u: goto label_26dc38;
        case 0x26dc3cu: goto label_26dc3c;
        case 0x26dc40u: goto label_26dc40;
        case 0x26dc44u: goto label_26dc44;
        case 0x26dc48u: goto label_26dc48;
        case 0x26dc4cu: goto label_26dc4c;
        case 0x26dc50u: goto label_26dc50;
        case 0x26dc54u: goto label_26dc54;
        case 0x26dc58u: goto label_26dc58;
        case 0x26dc5cu: goto label_26dc5c;
        case 0x26dc60u: goto label_26dc60;
        case 0x26dc64u: goto label_26dc64;
        case 0x26dc68u: goto label_26dc68;
        case 0x26dc6cu: goto label_26dc6c;
        case 0x26dc70u: goto label_26dc70;
        case 0x26dc74u: goto label_26dc74;
        case 0x26dc78u: goto label_26dc78;
        case 0x26dc7cu: goto label_26dc7c;
        case 0x26dc80u: goto label_26dc80;
        case 0x26dc84u: goto label_26dc84;
        case 0x26dc88u: goto label_26dc88;
        case 0x26dc8cu: goto label_26dc8c;
        case 0x26dc90u: goto label_26dc90;
        case 0x26dc94u: goto label_26dc94;
        case 0x26dc98u: goto label_26dc98;
        case 0x26dc9cu: goto label_26dc9c;
        case 0x26dca0u: goto label_26dca0;
        case 0x26dca4u: goto label_26dca4;
        case 0x26dca8u: goto label_26dca8;
        case 0x26dcacu: goto label_26dcac;
        case 0x26dcb0u: goto label_26dcb0;
        case 0x26dcb4u: goto label_26dcb4;
        case 0x26dcb8u: goto label_26dcb8;
        case 0x26dcbcu: goto label_26dcbc;
        case 0x26dcc0u: goto label_26dcc0;
        case 0x26dcc4u: goto label_26dcc4;
        case 0x26dcc8u: goto label_26dcc8;
        case 0x26dcccu: goto label_26dccc;
        case 0x26dcd0u: goto label_26dcd0;
        case 0x26dcd4u: goto label_26dcd4;
        case 0x26dcd8u: goto label_26dcd8;
        case 0x26dcdcu: goto label_26dcdc;
        case 0x26dce0u: goto label_26dce0;
        case 0x26dce4u: goto label_26dce4;
        case 0x26dce8u: goto label_26dce8;
        case 0x26dcecu: goto label_26dcec;
        case 0x26dcf0u: goto label_26dcf0;
        case 0x26dcf4u: goto label_26dcf4;
        case 0x26dcf8u: goto label_26dcf8;
        case 0x26dcfcu: goto label_26dcfc;
        case 0x26dd00u: goto label_26dd00;
        case 0x26dd04u: goto label_26dd04;
        case 0x26dd08u: goto label_26dd08;
        case 0x26dd0cu: goto label_26dd0c;
        case 0x26dd10u: goto label_26dd10;
        case 0x26dd14u: goto label_26dd14;
        case 0x26dd18u: goto label_26dd18;
        case 0x26dd1cu: goto label_26dd1c;
        case 0x26dd20u: goto label_26dd20;
        case 0x26dd24u: goto label_26dd24;
        case 0x26dd28u: goto label_26dd28;
        case 0x26dd2cu: goto label_26dd2c;
        case 0x26dd30u: goto label_26dd30;
        case 0x26dd34u: goto label_26dd34;
        case 0x26dd38u: goto label_26dd38;
        case 0x26dd3cu: goto label_26dd3c;
        case 0x26dd40u: goto label_26dd40;
        case 0x26dd44u: goto label_26dd44;
        case 0x26dd48u: goto label_26dd48;
        case 0x26dd4cu: goto label_26dd4c;
        case 0x26dd50u: goto label_26dd50;
        case 0x26dd54u: goto label_26dd54;
        case 0x26dd58u: goto label_26dd58;
        case 0x26dd5cu: goto label_26dd5c;
        case 0x26dd60u: goto label_26dd60;
        case 0x26dd64u: goto label_26dd64;
        case 0x26dd68u: goto label_26dd68;
        case 0x26dd6cu: goto label_26dd6c;
        case 0x26dd70u: goto label_26dd70;
        case 0x26dd74u: goto label_26dd74;
        case 0x26dd78u: goto label_26dd78;
        case 0x26dd7cu: goto label_26dd7c;
        case 0x26dd80u: goto label_26dd80;
        case 0x26dd84u: goto label_26dd84;
        case 0x26dd88u: goto label_26dd88;
        case 0x26dd8cu: goto label_26dd8c;
        case 0x26dd90u: goto label_26dd90;
        case 0x26dd94u: goto label_26dd94;
        case 0x26dd98u: goto label_26dd98;
        case 0x26dd9cu: goto label_26dd9c;
        case 0x26dda0u: goto label_26dda0;
        case 0x26dda4u: goto label_26dda4;
        case 0x26dda8u: goto label_26dda8;
        case 0x26ddacu: goto label_26ddac;
        case 0x26ddb0u: goto label_26ddb0;
        case 0x26ddb4u: goto label_26ddb4;
        case 0x26ddb8u: goto label_26ddb8;
        case 0x26ddbcu: goto label_26ddbc;
        case 0x26ddc0u: goto label_26ddc0;
        case 0x26ddc4u: goto label_26ddc4;
        case 0x26ddc8u: goto label_26ddc8;
        case 0x26ddccu: goto label_26ddcc;
        case 0x26ddd0u: goto label_26ddd0;
        case 0x26ddd4u: goto label_26ddd4;
        case 0x26ddd8u: goto label_26ddd8;
        case 0x26dddcu: goto label_26dddc;
        case 0x26dde0u: goto label_26dde0;
        case 0x26dde4u: goto label_26dde4;
        case 0x26dde8u: goto label_26dde8;
        case 0x26ddecu: goto label_26ddec;
        case 0x26ddf0u: goto label_26ddf0;
        case 0x26ddf4u: goto label_26ddf4;
        case 0x26ddf8u: goto label_26ddf8;
        case 0x26ddfcu: goto label_26ddfc;
        case 0x26de00u: goto label_26de00;
        case 0x26de04u: goto label_26de04;
        case 0x26de08u: goto label_26de08;
        case 0x26de0cu: goto label_26de0c;
        case 0x26de10u: goto label_26de10;
        case 0x26de14u: goto label_26de14;
        case 0x26de18u: goto label_26de18;
        case 0x26de1cu: goto label_26de1c;
        case 0x26de20u: goto label_26de20;
        case 0x26de24u: goto label_26de24;
        case 0x26de28u: goto label_26de28;
        case 0x26de2cu: goto label_26de2c;
        case 0x26de30u: goto label_26de30;
        case 0x26de34u: goto label_26de34;
        case 0x26de38u: goto label_26de38;
        case 0x26de3cu: goto label_26de3c;
        case 0x26de40u: goto label_26de40;
        case 0x26de44u: goto label_26de44;
        case 0x26de48u: goto label_26de48;
        case 0x26de4cu: goto label_26de4c;
        case 0x26de50u: goto label_26de50;
        case 0x26de54u: goto label_26de54;
        case 0x26de58u: goto label_26de58;
        case 0x26de5cu: goto label_26de5c;
        case 0x26de60u: goto label_26de60;
        case 0x26de64u: goto label_26de64;
        case 0x26de68u: goto label_26de68;
        case 0x26de6cu: goto label_26de6c;
        case 0x26de70u: goto label_26de70;
        case 0x26de74u: goto label_26de74;
        case 0x26de78u: goto label_26de78;
        case 0x26de7cu: goto label_26de7c;
        case 0x26de80u: goto label_26de80;
        case 0x26de84u: goto label_26de84;
        case 0x26de88u: goto label_26de88;
        case 0x26de8cu: goto label_26de8c;
        case 0x26de90u: goto label_26de90;
        case 0x26de94u: goto label_26de94;
        case 0x26de98u: goto label_26de98;
        case 0x26de9cu: goto label_26de9c;
        case 0x26dea0u: goto label_26dea0;
        case 0x26dea4u: goto label_26dea4;
        case 0x26dea8u: goto label_26dea8;
        case 0x26deacu: goto label_26deac;
        case 0x26deb0u: goto label_26deb0;
        case 0x26deb4u: goto label_26deb4;
        case 0x26deb8u: goto label_26deb8;
        case 0x26debcu: goto label_26debc;
        case 0x26dec0u: goto label_26dec0;
        case 0x26dec4u: goto label_26dec4;
        case 0x26dec8u: goto label_26dec8;
        case 0x26deccu: goto label_26decc;
        case 0x26ded0u: goto label_26ded0;
        case 0x26ded4u: goto label_26ded4;
        case 0x26ded8u: goto label_26ded8;
        case 0x26dedcu: goto label_26dedc;
        case 0x26dee0u: goto label_26dee0;
        case 0x26dee4u: goto label_26dee4;
        case 0x26dee8u: goto label_26dee8;
        case 0x26deecu: goto label_26deec;
        case 0x26def0u: goto label_26def0;
        case 0x26def4u: goto label_26def4;
        case 0x26def8u: goto label_26def8;
        case 0x26defcu: goto label_26defc;
        case 0x26df00u: goto label_26df00;
        case 0x26df04u: goto label_26df04;
        case 0x26df08u: goto label_26df08;
        case 0x26df0cu: goto label_26df0c;
        case 0x26df10u: goto label_26df10;
        case 0x26df14u: goto label_26df14;
        case 0x26df18u: goto label_26df18;
        case 0x26df1cu: goto label_26df1c;
        case 0x26df20u: goto label_26df20;
        case 0x26df24u: goto label_26df24;
        case 0x26df28u: goto label_26df28;
        case 0x26df2cu: goto label_26df2c;
        case 0x26df30u: goto label_26df30;
        case 0x26df34u: goto label_26df34;
        case 0x26df38u: goto label_26df38;
        case 0x26df3cu: goto label_26df3c;
        case 0x26df40u: goto label_26df40;
        case 0x26df44u: goto label_26df44;
        case 0x26df48u: goto label_26df48;
        case 0x26df4cu: goto label_26df4c;
        case 0x26df50u: goto label_26df50;
        case 0x26df54u: goto label_26df54;
        case 0x26df58u: goto label_26df58;
        case 0x26df5cu: goto label_26df5c;
        case 0x26df60u: goto label_26df60;
        case 0x26df64u: goto label_26df64;
        case 0x26df68u: goto label_26df68;
        case 0x26df6cu: goto label_26df6c;
        case 0x26df70u: goto label_26df70;
        case 0x26df74u: goto label_26df74;
        case 0x26df78u: goto label_26df78;
        case 0x26df7cu: goto label_26df7c;
        case 0x26df80u: goto label_26df80;
        case 0x26df84u: goto label_26df84;
        case 0x26df88u: goto label_26df88;
        case 0x26df8cu: goto label_26df8c;
        case 0x26df90u: goto label_26df90;
        case 0x26df94u: goto label_26df94;
        case 0x26df98u: goto label_26df98;
        case 0x26df9cu: goto label_26df9c;
        case 0x26dfa0u: goto label_26dfa0;
        case 0x26dfa4u: goto label_26dfa4;
        case 0x26dfa8u: goto label_26dfa8;
        case 0x26dfacu: goto label_26dfac;
        case 0x26dfb0u: goto label_26dfb0;
        case 0x26dfb4u: goto label_26dfb4;
        case 0x26dfb8u: goto label_26dfb8;
        case 0x26dfbcu: goto label_26dfbc;
        case 0x26dfc0u: goto label_26dfc0;
        case 0x26dfc4u: goto label_26dfc4;
        case 0x26dfc8u: goto label_26dfc8;
        case 0x26dfccu: goto label_26dfcc;
        case 0x26dfd0u: goto label_26dfd0;
        case 0x26dfd4u: goto label_26dfd4;
        case 0x26dfd8u: goto label_26dfd8;
        case 0x26dfdcu: goto label_26dfdc;
        case 0x26dfe0u: goto label_26dfe0;
        case 0x26dfe4u: goto label_26dfe4;
        case 0x26dfe8u: goto label_26dfe8;
        case 0x26dfecu: goto label_26dfec;
        case 0x26dff0u: goto label_26dff0;
        case 0x26dff4u: goto label_26dff4;
        case 0x26dff8u: goto label_26dff8;
        case 0x26dffcu: goto label_26dffc;
        case 0x26e000u: goto label_26e000;
        case 0x26e004u: goto label_26e004;
        case 0x26e008u: goto label_26e008;
        case 0x26e00cu: goto label_26e00c;
        case 0x26e010u: goto label_26e010;
        case 0x26e014u: goto label_26e014;
        case 0x26e018u: goto label_26e018;
        case 0x26e01cu: goto label_26e01c;
        case 0x26e020u: goto label_26e020;
        case 0x26e024u: goto label_26e024;
        case 0x26e028u: goto label_26e028;
        case 0x26e02cu: goto label_26e02c;
        case 0x26e030u: goto label_26e030;
        case 0x26e034u: goto label_26e034;
        case 0x26e038u: goto label_26e038;
        case 0x26e03cu: goto label_26e03c;
        case 0x26e040u: goto label_26e040;
        case 0x26e044u: goto label_26e044;
        case 0x26e048u: goto label_26e048;
        case 0x26e04cu: goto label_26e04c;
        case 0x26e050u: goto label_26e050;
        case 0x26e054u: goto label_26e054;
        case 0x26e058u: goto label_26e058;
        case 0x26e05cu: goto label_26e05c;
        case 0x26e060u: goto label_26e060;
        case 0x26e064u: goto label_26e064;
        case 0x26e068u: goto label_26e068;
        case 0x26e06cu: goto label_26e06c;
        case 0x26e070u: goto label_26e070;
        case 0x26e074u: goto label_26e074;
        case 0x26e078u: goto label_26e078;
        case 0x26e07cu: goto label_26e07c;
        case 0x26e080u: goto label_26e080;
        case 0x26e084u: goto label_26e084;
        case 0x26e088u: goto label_26e088;
        case 0x26e08cu: goto label_26e08c;
        case 0x26e090u: goto label_26e090;
        case 0x26e094u: goto label_26e094;
        case 0x26e098u: goto label_26e098;
        case 0x26e09cu: goto label_26e09c;
        case 0x26e0a0u: goto label_26e0a0;
        case 0x26e0a4u: goto label_26e0a4;
        case 0x26e0a8u: goto label_26e0a8;
        case 0x26e0acu: goto label_26e0ac;
        case 0x26e0b0u: goto label_26e0b0;
        case 0x26e0b4u: goto label_26e0b4;
        case 0x26e0b8u: goto label_26e0b8;
        case 0x26e0bcu: goto label_26e0bc;
        case 0x26e0c0u: goto label_26e0c0;
        case 0x26e0c4u: goto label_26e0c4;
        case 0x26e0c8u: goto label_26e0c8;
        case 0x26e0ccu: goto label_26e0cc;
        case 0x26e0d0u: goto label_26e0d0;
        case 0x26e0d4u: goto label_26e0d4;
        case 0x26e0d8u: goto label_26e0d8;
        case 0x26e0dcu: goto label_26e0dc;
        case 0x26e0e0u: goto label_26e0e0;
        case 0x26e0e4u: goto label_26e0e4;
        case 0x26e0e8u: goto label_26e0e8;
        case 0x26e0ecu: goto label_26e0ec;
        case 0x26e0f0u: goto label_26e0f0;
        case 0x26e0f4u: goto label_26e0f4;
        case 0x26e0f8u: goto label_26e0f8;
        case 0x26e0fcu: goto label_26e0fc;
        case 0x26e100u: goto label_26e100;
        case 0x26e104u: goto label_26e104;
        case 0x26e108u: goto label_26e108;
        case 0x26e10cu: goto label_26e10c;
        case 0x26e110u: goto label_26e110;
        case 0x26e114u: goto label_26e114;
        case 0x26e118u: goto label_26e118;
        case 0x26e11cu: goto label_26e11c;
        case 0x26e120u: goto label_26e120;
        case 0x26e124u: goto label_26e124;
        case 0x26e128u: goto label_26e128;
        case 0x26e12cu: goto label_26e12c;
        case 0x26e130u: goto label_26e130;
        case 0x26e134u: goto label_26e134;
        case 0x26e138u: goto label_26e138;
        case 0x26e13cu: goto label_26e13c;
        case 0x26e140u: goto label_26e140;
        case 0x26e144u: goto label_26e144;
        case 0x26e148u: goto label_26e148;
        case 0x26e14cu: goto label_26e14c;
        case 0x26e150u: goto label_26e150;
        case 0x26e154u: goto label_26e154;
        case 0x26e158u: goto label_26e158;
        case 0x26e15cu: goto label_26e15c;
        case 0x26e160u: goto label_26e160;
        case 0x26e164u: goto label_26e164;
        case 0x26e168u: goto label_26e168;
        case 0x26e16cu: goto label_26e16c;
        case 0x26e170u: goto label_26e170;
        case 0x26e174u: goto label_26e174;
        case 0x26e178u: goto label_26e178;
        case 0x26e17cu: goto label_26e17c;
        case 0x26e180u: goto label_26e180;
        case 0x26e184u: goto label_26e184;
        case 0x26e188u: goto label_26e188;
        case 0x26e18cu: goto label_26e18c;
        case 0x26e190u: goto label_26e190;
        case 0x26e194u: goto label_26e194;
        case 0x26e198u: goto label_26e198;
        case 0x26e19cu: goto label_26e19c;
        case 0x26e1a0u: goto label_26e1a0;
        case 0x26e1a4u: goto label_26e1a4;
        case 0x26e1a8u: goto label_26e1a8;
        case 0x26e1acu: goto label_26e1ac;
        case 0x26e1b0u: goto label_26e1b0;
        case 0x26e1b4u: goto label_26e1b4;
        case 0x26e1b8u: goto label_26e1b8;
        case 0x26e1bcu: goto label_26e1bc;
        case 0x26e1c0u: goto label_26e1c0;
        case 0x26e1c4u: goto label_26e1c4;
        case 0x26e1c8u: goto label_26e1c8;
        case 0x26e1ccu: goto label_26e1cc;
        case 0x26e1d0u: goto label_26e1d0;
        case 0x26e1d4u: goto label_26e1d4;
        case 0x26e1d8u: goto label_26e1d8;
        case 0x26e1dcu: goto label_26e1dc;
        case 0x26e1e0u: goto label_26e1e0;
        case 0x26e1e4u: goto label_26e1e4;
        case 0x26e1e8u: goto label_26e1e8;
        case 0x26e1ecu: goto label_26e1ec;
        case 0x26e1f0u: goto label_26e1f0;
        case 0x26e1f4u: goto label_26e1f4;
        case 0x26e1f8u: goto label_26e1f8;
        case 0x26e1fcu: goto label_26e1fc;
        case 0x26e200u: goto label_26e200;
        case 0x26e204u: goto label_26e204;
        case 0x26e208u: goto label_26e208;
        case 0x26e20cu: goto label_26e20c;
        case 0x26e210u: goto label_26e210;
        case 0x26e214u: goto label_26e214;
        case 0x26e218u: goto label_26e218;
        case 0x26e21cu: goto label_26e21c;
        case 0x26e220u: goto label_26e220;
        case 0x26e224u: goto label_26e224;
        case 0x26e228u: goto label_26e228;
        case 0x26e22cu: goto label_26e22c;
        case 0x26e230u: goto label_26e230;
        case 0x26e234u: goto label_26e234;
        case 0x26e238u: goto label_26e238;
        case 0x26e23cu: goto label_26e23c;
        case 0x26e240u: goto label_26e240;
        case 0x26e244u: goto label_26e244;
        case 0x26e248u: goto label_26e248;
        case 0x26e24cu: goto label_26e24c;
        case 0x26e250u: goto label_26e250;
        case 0x26e254u: goto label_26e254;
        default: break;
    }

    ctx->pc = 0x26db00u;

label_26db00:
    // 0x26db00: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x26db00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_26db04:
    // 0x26db04: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x26db04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_26db08:
    // 0x26db08: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x26db08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_26db0c:
    // 0x26db0c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x26db0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_26db10:
    // 0x26db10: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x26db10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_26db14:
    // 0x26db14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26db14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26db18:
    // 0x26db18: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x26db18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_26db1c:
    // 0x26db1c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x26db1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_26db20:
    // 0x26db20: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x26db20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_26db24:
    // 0x26db24: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x26db24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_26db28:
    // 0x26db28: 0xc0b6dac  jal         func_2DB6B0
label_26db2c:
    if (ctx->pc == 0x26DB2Cu) {
        ctx->pc = 0x26DB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DB28u;
        // 0x26db2c: 0xe7b400e0  swc1        $f20, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DB30u;
        goto label_26db30;
    }
    ctx->pc = 0x26DB28u;
    SET_GPR_U32(ctx, 31, 0x26DB30u);
    ctx->pc = 0x26DB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DB28u;
    // 0x26db2c: 0xe7b400e0  swc1        $f20, 0xE0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x26DB28u, 0x26DB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DB30u;
label_26db30:
    // 0x26db30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26db30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26db34:
    // 0x26db34: 0x240403be  addiu       $a0, $zero, 0x3BE
    ctx->pc = 0x26db34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 958));
label_26db38:
    // 0x26db38: 0xc0c3ea6  jal         func_30FA98
label_26db3c:
    if (ctx->pc == 0x26DB3Cu) {
        ctx->pc = 0x26DB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DB38u;
        // 0x26db3c: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DB40u;
        goto label_26db40;
    }
    ctx->pc = 0x26DB38u;
    SET_GPR_U32(ctx, 31, 0x26DB40u);
    ctx->pc = 0x26DB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DB38u;
    // 0x26db3c: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x26DB38u, 0x26DB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DB40u;
label_26db40:
    // 0x26db40: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26db40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26db44:
    // 0x26db44: 0x526001bc  beql        $s3, $zero, . + 4 + (0x1BC << 2)
label_26db48:
    if (ctx->pc == 0x26DB48u) {
        ctx->pc = 0x26DB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DB44u;
        // 0x26db48: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DB4Cu;
        goto label_26db4c;
    }
    ctx->pc = 0x26DB44u;
    {
        const bool branch_taken_0x26db44 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x26db44) {
            ctx->pc = 0x26DB48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DB44u;
            // 0x26db48: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E238u;
            goto label_26e238;
        }
    }
    ctx->pc = 0x26DB4Cu;
label_26db4c:
    // 0x26db4c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x26db4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_26db50:
    // 0x26db50: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x26db50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_26db54:
    // 0x26db54: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x26db54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_26db58:
    // 0x26db58: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x26db58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_26db5c:
    // 0x26db5c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x26db5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_26db60:
    // 0x26db60: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x26db60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_26db64:
    // 0x26db64: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x26db64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_26db68:
    // 0x26db68: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
label_26db6c:
    if (ctx->pc == 0x26DB6Cu) {
        ctx->pc = 0x26DB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DB68u;
        // 0x26db6c: 0xc6340104  lwc1        $f20, 0x104($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DB70u;
        goto label_26db70;
    }
    ctx->pc = 0x26DB68u;
    {
        const bool branch_taken_0x26db68 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x26DB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DB68u;
        // 0x26db6c: 0xc6340104  lwc1        $f20, 0x104($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26db68) {
            ctx->pc = 0x26DB88u;
            goto label_26db88;
        }
    }
    ctx->pc = 0x26DB70u;
label_26db70:
    // 0x26db70: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26db70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26db74:
    // 0x26db74: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x26db74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_26db78:
    // 0x26db78: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26db78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26db7c:
    // 0x26db7c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x26db7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_26db80:
    // 0x26db80: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x26db80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26db84:
    // 0x26db84: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x26db84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_26db88:
    // 0x26db88: 0x2e020007  sltiu       $v0, $s0, 0x7
    ctx->pc = 0x26db88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_26db8c:
    // 0x26db8c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_26db90:
    if (ctx->pc == 0x26DB90u) {
        ctx->pc = 0x26DB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DB8Cu;
        // 0x26db90: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DB94u;
        goto label_26db94;
    }
    ctx->pc = 0x26DB8Cu;
    {
        const bool branch_taken_0x26db8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DB8Cu;
        // 0x26db90: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26db8c) {
            ctx->pc = 0x26DBACu;
            goto label_26dbac;
        }
    }
    ctx->pc = 0x26DB94u;
label_26db94:
    // 0x26db94: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x26db94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_26db98:
    // 0x26db98: 0x24425790  addiu       $v0, $v0, 0x5790
    ctx->pc = 0x26db98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22416));
label_26db9c:
    // 0x26db9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26db9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_26dba0:
    // 0x26dba0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26dba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_26dba4:
    // 0x26dba4: 0x800008  jr          $a0
label_26dba8:
    if (ctx->pc == 0x26DBA8u) {
        ctx->pc = 0x26DBACu;
        goto label_26dbac;
    }
    ctx->pc = 0x26DBA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26DBACu: goto label_26dbac;
            case 0x26DC3Cu: goto label_26dc3c;
            case 0x26DCB8u: goto label_26dcb8;
            case 0x26DD28u: goto label_26dd28;
            case 0x26DEA4u: goto label_26dea4;
            case 0x26DF14u: goto label_26df14;
            case 0x26E044u: goto label_26e044;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26DBA4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26DBACu;
label_26dbac:
    // 0x26dbac: 0x8e24074c  lw          $a0, 0x74C($s1)
    ctx->pc = 0x26dbacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1868)));
label_26dbb0:
    // 0x26dbb0: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
label_26dbb4:
    if (ctx->pc == 0x26DBB4u) {
        ctx->pc = 0x26DBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DBB0u;
        // 0x26dbb4: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DBB8u;
        goto label_26dbb8;
    }
    ctx->pc = 0x26DBB0u;
    {
        const bool branch_taken_0x26dbb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DBB0u;
        // 0x26dbb4: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dbb0) {
            ctx->pc = 0x26DC10u;
            goto label_26dc10;
        }
    }
    ctx->pc = 0x26DBB8u;
label_26dbb8:
    // 0x26dbb8: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x26dbb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
label_26dbbc:
    // 0x26dbbc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26dbbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_26dbc0:
    // 0x26dbc0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_26dbc4:
    if (ctx->pc == 0x26DBC4u) {
        ctx->pc = 0x26DBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DBC0u;
        // 0x26dbc4: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DBC8u;
        goto label_26dbc8;
    }
    ctx->pc = 0x26DBC0u;
    {
        const bool branch_taken_0x26dbc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DBC0u;
        // 0x26dbc4: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dbc0) {
            ctx->pc = 0x26DBD4u;
            goto label_26dbd4;
        }
    }
    ctx->pc = 0x26DBC8u;
label_26dbc8:
    // 0x26dbc8: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x26dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
label_26dbcc:
    // 0x26dbcc: 0x10000002  b           . + 4 + (0x2 << 2)
label_26dbd0:
    if (ctx->pc == 0x26DBD0u) {
        ctx->pc = 0x26DBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DBCCu;
        // 0x26dbd0: 0x8c450038  lw          $a1, 0x38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DBD4u;
        goto label_26dbd4;
    }
    ctx->pc = 0x26DBCCu;
    {
        const bool branch_taken_0x26dbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DBCCu;
        // 0x26dbd0: 0x8c450038  lw          $a1, 0x38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dbcc) {
            ctx->pc = 0x26DBD8u;
            goto label_26dbd8;
        }
    }
    ctx->pc = 0x26DBD4u;
label_26dbd4:
    // 0x26dbd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26dbd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26dbd8:
    // 0x26dbd8: 0x50a0000b  beql        $a1, $zero, . + 4 + (0xB << 2)
label_26dbdc:
    if (ctx->pc == 0x26DBDCu) {
        ctx->pc = 0x26DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DBD8u;
        // 0x26dbdc: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DBE0u;
        goto label_26dbe0;
    }
    ctx->pc = 0x26DBD8u;
    {
        const bool branch_taken_0x26dbd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dbd8) {
            ctx->pc = 0x26DBDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DBD8u;
            // 0x26dbdc: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DC08u;
            goto label_26dc08;
        }
    }
    ctx->pc = 0x26DBE0u;
label_26dbe0:
    // 0x26dbe0: 0x8ca500f0  lw          $a1, 0xF0($a1)
    ctx->pc = 0x26dbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
label_26dbe4:
    // 0x26dbe4: 0x53a50008  beql        $sp, $a1, . + 4 + (0x8 << 2)
label_26dbe8:
    if (ctx->pc == 0x26DBE8u) {
        ctx->pc = 0x26DBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DBE4u;
        // 0x26dbe8: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DBECu;
        goto label_26dbec;
    }
    ctx->pc = 0x26DBE4u;
    {
        const bool branch_taken_0x26dbe4 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 5));
        if (branch_taken_0x26dbe4) {
            ctx->pc = 0x26DBE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DBE4u;
            // 0x26dbe8: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DC08u;
            goto label_26dc08;
        }
    }
    ctx->pc = 0x26DBECu;
label_26dbec:
    // 0x26dbec: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x26dbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26dbf0:
    // 0x26dbf0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x26dbf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_26dbf4:
    // 0x26dbf4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x26dbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26dbf8:
    // 0x26dbf8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x26dbf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_26dbfc:
    // 0x26dbfc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x26dbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26dc00:
    // 0x26dc00: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x26dc00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_26dc04:
    // 0x26dc04: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x26dc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_26dc08:
    // 0x26dc08: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x26dc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26dc0c:
    // 0x26dc0c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x26dc0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_26dc10:
    // 0x26dc10: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x26dc10u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_26dc14:
    // 0x26dc14: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x26dc14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26dc18:
    // 0x26dc18: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x26dc18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_26dc1c:
    // 0x26dc1c: 0x2406011c  addiu       $a2, $zero, 0x11C
    ctx->pc = 0x26dc1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 284));
label_26dc20:
    // 0x26dc20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26dc20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26dc24:
    // 0x26dc24: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x26dc24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26dc28:
    // 0x26dc28: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26dc28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26dc2c:
    // 0x26dc2c: 0xc0b2e5a  jal         func_2CB968
label_26dc30:
    if (ctx->pc == 0x26DC30u) {
        ctx->pc = 0x26DC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC2Cu;
        // 0x26dc30: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DC34u;
        goto label_26dc34;
    }
    ctx->pc = 0x26DC2Cu;
    SET_GPR_U32(ctx, 31, 0x26DC34u);
    ctx->pc = 0x26DC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DC2Cu;
    // 0x26dc30: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x26DC2Cu, 0x26DC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DC34u;
label_26dc34:
    // 0x26dc34: 0x10000092  b           . + 4 + (0x92 << 2)
label_26dc38:
    if (ctx->pc == 0x26DC38u) {
        ctx->pc = 0x26DC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC34u;
        // 0x26dc38: 0x24120023  addiu       $s2, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DC3Cu;
        goto label_26dc3c;
    }
    ctx->pc = 0x26DC34u;
    {
        const bool branch_taken_0x26dc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC34u;
        // 0x26dc38: 0x24120023  addiu       $s2, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dc34) {
            ctx->pc = 0x26DE80u;
            goto label_26de80;
        }
    }
    ctx->pc = 0x26DC3Cu;
label_26dc3c:
    // 0x26dc3c: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x26dc3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_26dc40:
    // 0x26dc40: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x26dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_26dc44:
    // 0x26dc44: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26dc44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_26dc48:
    // 0x26dc48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_26dc4c:
    if (ctx->pc == 0x26DC4Cu) {
        ctx->pc = 0x26DC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC48u;
        // 0x26dc4c: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DC50u;
        goto label_26dc50;
    }
    ctx->pc = 0x26DC48u;
    {
        const bool branch_taken_0x26dc48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC48u;
        // 0x26dc4c: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dc48) {
            ctx->pc = 0x26DC5Cu;
            goto label_26dc5c;
        }
    }
    ctx->pc = 0x26DC50u;
label_26dc50:
    // 0x26dc50: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x26dc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_26dc54:
    // 0x26dc54: 0x10000002  b           . + 4 + (0x2 << 2)
label_26dc58:
    if (ctx->pc == 0x26DC58u) {
        ctx->pc = 0x26DC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC54u;
        // 0x26dc58: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DC5Cu;
        goto label_26dc5c;
    }
    ctx->pc = 0x26DC54u;
    {
        const bool branch_taken_0x26dc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC54u;
        // 0x26dc58: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dc54) {
            ctx->pc = 0x26DC60u;
            goto label_26dc60;
        }
    }
    ctx->pc = 0x26DC5Cu;
label_26dc5c:
    // 0x26dc5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26dc5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26dc60:
    // 0x26dc60: 0x50a0000f  beql        $a1, $zero, . + 4 + (0xF << 2)
label_26dc64:
    if (ctx->pc == 0x26DC64u) {
        ctx->pc = 0x26DC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC60u;
        // 0x26dc64: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DC68u;
        goto label_26dc68;
    }
    ctx->pc = 0x26DC60u;
    {
        const bool branch_taken_0x26dc60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dc60) {
            ctx->pc = 0x26DC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DC60u;
            // 0x26dc64: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DCA0u;
            goto label_26dca0;
        }
    }
    ctx->pc = 0x26DC68u;
label_26dc68:
    // 0x26dc68: 0x8ca500f0  lw          $a1, 0xF0($a1)
    ctx->pc = 0x26dc68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
label_26dc6c:
    // 0x26dc6c: 0x53a50008  beql        $sp, $a1, . + 4 + (0x8 << 2)
label_26dc70:
    if (ctx->pc == 0x26DC70u) {
        ctx->pc = 0x26DC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC6Cu;
        // 0x26dc70: 0xc62c16f4  lwc1        $f12, 0x16F4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DC74u;
        goto label_26dc74;
    }
    ctx->pc = 0x26DC6Cu;
    {
        const bool branch_taken_0x26dc6c = (GPR_U64(ctx, 29) == GPR_U64(ctx, 5));
        if (branch_taken_0x26dc6c) {
            ctx->pc = 0x26DC70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DC6Cu;
            // 0x26dc70: 0xc62c16f4  lwc1        $f12, 0x16F4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DC90u;
            goto label_26dc90;
        }
    }
    ctx->pc = 0x26DC74u;
label_26dc74:
    // 0x26dc74: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x26dc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26dc78:
    // 0x26dc78: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x26dc78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_26dc7c:
    // 0x26dc7c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x26dc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26dc80:
    // 0x26dc80: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x26dc80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_26dc84:
    // 0x26dc84: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x26dc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26dc88:
    // 0x26dc88: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x26dc88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_26dc8c:
    // 0x26dc8c: 0xc62c16f4  lwc1        $f12, 0x16F4($s1)
    ctx->pc = 0x26dc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26dc90:
    // 0x26dc90: 0xc07df52  jal         func_1F7D48
label_26dc94:
    if (ctx->pc == 0x26DC94u) {
        ctx->pc = 0x26DC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC90u;
        // 0x26dc94: 0x460ca300  add.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DC98u;
        goto label_26dc98;
    }
    ctx->pc = 0x26DC90u;
    SET_GPR_U32(ctx, 31, 0x26DC98u);
    ctx->pc = 0x26DC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DC90u;
    // 0x26dc94: 0x460ca300  add.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x26DC90u, 0x26DC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DC98u;
label_26dc98:
    // 0x26dc98: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x26dc98u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_26dc9c:
    // 0x26dc9c: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x26dc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_26dca0:
    // 0x26dca0: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x26dca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_26dca4:
    // 0x26dca4: 0x24120021  addiu       $s2, $zero, 0x21
    ctx->pc = 0x26dca4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_26dca8:
    // 0x26dca8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x26dca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26dcac:
    // 0x26dcac: 0x74900b  movn        $s2, $v1, $s4
    ctx->pc = 0x26dcacu;
    if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_26dcb0:
    // 0x26dcb0: 0x1000013f  b           . + 4 + (0x13F << 2)
label_26dcb4:
    if (ctx->pc == 0x26DCB4u) {
        ctx->pc = 0x26DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DCB0u;
        // 0x26dcb4: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DCB8u;
        goto label_26dcb8;
    }
    ctx->pc = 0x26DCB0u;
    {
        const bool branch_taken_0x26dcb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DCB0u;
        // 0x26dcb4: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dcb0) {
            ctx->pc = 0x26E1B0u;
            goto label_26e1b0;
        }
    }
    ctx->pc = 0x26DCB8u;
label_26dcb8:
    // 0x26dcb8: 0x8e24074c  lw          $a0, 0x74C($s1)
    ctx->pc = 0x26dcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1868)));
label_26dcbc:
    // 0x26dcbc: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
label_26dcc0:
    if (ctx->pc == 0x26DCC0u) {
        ctx->pc = 0x26DCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DCBCu;
        // 0x26dcc0: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DCC4u;
        goto label_26dcc4;
    }
    ctx->pc = 0x26DCBCu;
    {
        const bool branch_taken_0x26dcbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DCBCu;
        // 0x26dcc0: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dcbc) {
            ctx->pc = 0x26DD1Cu;
            goto label_26dd1c;
        }
    }
    ctx->pc = 0x26DCC4u;
label_26dcc4:
    // 0x26dcc4: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x26dcc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
label_26dcc8:
    // 0x26dcc8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26dcc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_26dccc:
    // 0x26dccc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_26dcd0:
    if (ctx->pc == 0x26DCD0u) {
        ctx->pc = 0x26DCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DCCCu;
        // 0x26dcd0: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DCD4u;
        goto label_26dcd4;
    }
    ctx->pc = 0x26DCCCu;
    {
        const bool branch_taken_0x26dccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DCCCu;
        // 0x26dcd0: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dccc) {
            ctx->pc = 0x26DCE0u;
            goto label_26dce0;
        }
    }
    ctx->pc = 0x26DCD4u;
label_26dcd4:
    // 0x26dcd4: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x26dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
label_26dcd8:
    // 0x26dcd8: 0x10000002  b           . + 4 + (0x2 << 2)
label_26dcdc:
    if (ctx->pc == 0x26DCDCu) {
        ctx->pc = 0x26DCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DCD8u;
        // 0x26dcdc: 0x8c450038  lw          $a1, 0x38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DCE0u;
        goto label_26dce0;
    }
    ctx->pc = 0x26DCD8u;
    {
        const bool branch_taken_0x26dcd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DCD8u;
        // 0x26dcdc: 0x8c450038  lw          $a1, 0x38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dcd8) {
            ctx->pc = 0x26DCE4u;
            goto label_26dce4;
        }
    }
    ctx->pc = 0x26DCE0u;
label_26dce0:
    // 0x26dce0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26dce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26dce4:
    // 0x26dce4: 0x50a0000b  beql        $a1, $zero, . + 4 + (0xB << 2)
label_26dce8:
    if (ctx->pc == 0x26DCE8u) {
        ctx->pc = 0x26DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DCE4u;
        // 0x26dce8: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DCECu;
        goto label_26dcec;
    }
    ctx->pc = 0x26DCE4u;
    {
        const bool branch_taken_0x26dce4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dce4) {
            ctx->pc = 0x26DCE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DCE4u;
            // 0x26dce8: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DD14u;
            goto label_26dd14;
        }
    }
    ctx->pc = 0x26DCECu;
label_26dcec:
    // 0x26dcec: 0x8ca500f0  lw          $a1, 0xF0($a1)
    ctx->pc = 0x26dcecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
label_26dcf0:
    // 0x26dcf0: 0x53a50008  beql        $sp, $a1, . + 4 + (0x8 << 2)
label_26dcf4:
    if (ctx->pc == 0x26DCF4u) {
        ctx->pc = 0x26DCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DCF0u;
        // 0x26dcf4: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DCF8u;
        goto label_26dcf8;
    }
    ctx->pc = 0x26DCF0u;
    {
        const bool branch_taken_0x26dcf0 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 5));
        if (branch_taken_0x26dcf0) {
            ctx->pc = 0x26DCF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DCF0u;
            // 0x26dcf4: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DD14u;
            goto label_26dd14;
        }
    }
    ctx->pc = 0x26DCF8u;
label_26dcf8:
    // 0x26dcf8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x26dcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26dcfc:
    // 0x26dcfc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x26dcfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_26dd00:
    // 0x26dd00: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x26dd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26dd04:
    // 0x26dd04: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x26dd04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_26dd08:
    // 0x26dd08: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x26dd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26dd0c:
    // 0x26dd0c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x26dd0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_26dd10:
    // 0x26dd10: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x26dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_26dd14:
    // 0x26dd14: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x26dd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26dd18:
    // 0x26dd18: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x26dd18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_26dd1c:
    // 0x26dd1c: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x26dd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_26dd20:
    // 0x26dd20: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_26dd24:
    if (ctx->pc == 0x26DD24u) {
        ctx->pc = 0x26DD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DD20u;
        // 0x26dd24: 0x24120024  addiu       $s2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DD28u;
        goto label_26dd28;
    }
    ctx->pc = 0x26DD20u;
    {
        const bool branch_taken_0x26dd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DD20u;
        // 0x26dd24: 0x24120024  addiu       $s2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dd20) {
            ctx->pc = 0x26E038u;
            goto label_26e038;
        }
    }
    ctx->pc = 0x26DD28u;
label_26dd28:
    // 0x26dd28: 0x12800023  beqz        $s4, . + 4 + (0x23 << 2)
label_26dd2c:
    if (ctx->pc == 0x26DD2Cu) {
        ctx->pc = 0x26DD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DD28u;
        // 0x26dd2c: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DD30u;
        goto label_26dd30;
    }
    ctx->pc = 0x26DD28u;
    {
        const bool branch_taken_0x26dd28 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DD28u;
        // 0x26dd2c: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dd28) {
            ctx->pc = 0x26DDB8u;
            goto label_26ddb8;
        }
    }
    ctx->pc = 0x26DD30u;
label_26dd30:
    // 0x26dd30: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x26dd30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_26dd34:
    // 0x26dd34: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26dd34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_26dd38:
    // 0x26dd38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_26dd3c:
    if (ctx->pc == 0x26DD3Cu) {
        ctx->pc = 0x26DD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DD38u;
        // 0x26dd3c: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DD40u;
        goto label_26dd40;
    }
    ctx->pc = 0x26DD38u;
    {
        const bool branch_taken_0x26dd38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DD38u;
        // 0x26dd3c: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dd38) {
            ctx->pc = 0x26DD4Cu;
            goto label_26dd4c;
        }
    }
    ctx->pc = 0x26DD40u;
label_26dd40:
    // 0x26dd40: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x26dd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_26dd44:
    // 0x26dd44: 0x10000002  b           . + 4 + (0x2 << 2)
label_26dd48:
    if (ctx->pc == 0x26DD48u) {
        ctx->pc = 0x26DD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DD44u;
        // 0x26dd48: 0x8c450070  lw          $a1, 0x70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DD4Cu;
        goto label_26dd4c;
    }
    ctx->pc = 0x26DD44u;
    {
        const bool branch_taken_0x26dd44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DD44u;
        // 0x26dd48: 0x8c450070  lw          $a1, 0x70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dd44) {
            ctx->pc = 0x26DD50u;
            goto label_26dd50;
        }
    }
    ctx->pc = 0x26DD4Cu;
label_26dd4c:
    // 0x26dd4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26dd4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26dd50:
    // 0x26dd50: 0x10a0003e  beqz        $a1, . + 4 + (0x3E << 2)
label_26dd54:
    if (ctx->pc == 0x26DD54u) {
        ctx->pc = 0x26DD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DD50u;
        // 0x26dd54: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DD58u;
        goto label_26dd58;
    }
    ctx->pc = 0x26DD50u;
    {
        const bool branch_taken_0x26dd50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DD50u;
        // 0x26dd54: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dd50) {
            ctx->pc = 0x26DE4Cu;
            goto label_26de4c;
        }
    }
    ctx->pc = 0x26DD58u;
label_26dd58:
    // 0x26dd58: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x26dd58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_26dd5c:
    // 0x26dd5c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26dd5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_26dd60:
    // 0x26dd60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26dd60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26dd64:
    // 0x26dd64: 0x3c01becc  lui         $at, 0xBECC
    ctx->pc = 0x26dd64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48844 << 16));
label_26dd68:
    // 0x26dd68: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26dd68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26dd6c:
    // 0x26dd6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26dd6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26dd70:
    // 0x26dd70: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x26dd70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_26dd74:
    // 0x26dd74: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x26dd74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_26dd78:
    // 0x26dd78: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x26dd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_26dd7c:
    // 0x26dd7c: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x26dd7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_26dd80:
    // 0x26dd80: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x26dd80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_26dd84:
    // 0x26dd84: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x26dd84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26dd88:
    // 0x26dd88: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x26dd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_26dd8c:
    // 0x26dd8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26dd8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26dd90:
    // 0x26dd90: 0xc0c28ac  jal         func_30A2B0
label_26dd94:
    if (ctx->pc == 0x26DD94u) {
        ctx->pc = 0x26DD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DD90u;
        // 0x26dd94: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DD98u;
        goto label_26dd98;
    }
    ctx->pc = 0x26DD90u;
    SET_GPR_U32(ctx, 31, 0x26DD98u);
    ctx->pc = 0x26DD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DD90u;
    // 0x26dd94: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x26DD90u, 0x26DD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DD98u;
label_26dd98:
    // 0x26dd98: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x26dd98u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_26dd9c:
    // 0x26dd9c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x26dd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_26dda0:
    // 0x26dda0: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x26dda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26dda4:
    // 0x26dda4: 0x13a20029  beq         $sp, $v0, . + 4 + (0x29 << 2)
label_26dda8:
    if (ctx->pc == 0x26DDA8u) {
        ctx->pc = 0x26DDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DDA4u;
        // 0x26dda8: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DDACu;
        goto label_26ddac;
    }
    ctx->pc = 0x26DDA4u;
    {
        const bool branch_taken_0x26dda4 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x26DDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DDA4u;
        // 0x26dda8: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dda4) {
            ctx->pc = 0x26DE4Cu;
            goto label_26de4c;
        }
    }
    ctx->pc = 0x26DDACu;
label_26ddac:
    // 0x26ddac: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x26ddacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26ddb0:
    // 0x26ddb0: 0x10000023  b           . + 4 + (0x23 << 2)
label_26ddb4:
    if (ctx->pc == 0x26DDB4u) {
        ctx->pc = 0x26DDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DDB0u;
        // 0x26ddb4: 0xc7a20048  lwc1        $f2, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DDB8u;
        goto label_26ddb8;
    }
    ctx->pc = 0x26DDB0u;
    {
        const bool branch_taken_0x26ddb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DDB0u;
        // 0x26ddb4: 0xc7a20048  lwc1        $f2, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ddb0) {
            ctx->pc = 0x26DE40u;
            goto label_26de40;
        }
    }
    ctx->pc = 0x26DDB8u;
label_26ddb8:
    // 0x26ddb8: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x26ddb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_26ddbc:
    // 0x26ddbc: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x26ddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_26ddc0:
    // 0x26ddc0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26ddc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_26ddc4:
    // 0x26ddc4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_26ddc8:
    if (ctx->pc == 0x26DDC8u) {
        ctx->pc = 0x26DDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DDC4u;
        // 0x26ddc8: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DDCCu;
        goto label_26ddcc;
    }
    ctx->pc = 0x26DDC4u;
    {
        const bool branch_taken_0x26ddc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DDC4u;
        // 0x26ddc8: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ddc4) {
            ctx->pc = 0x26DDD8u;
            goto label_26ddd8;
        }
    }
    ctx->pc = 0x26DDCCu;
label_26ddcc:
    // 0x26ddcc: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x26ddccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_26ddd0:
    // 0x26ddd0: 0x10000002  b           . + 4 + (0x2 << 2)
label_26ddd4:
    if (ctx->pc == 0x26DDD4u) {
        ctx->pc = 0x26DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DDD0u;
        // 0x26ddd4: 0x8c450058  lw          $a1, 0x58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DDD8u;
        goto label_26ddd8;
    }
    ctx->pc = 0x26DDD0u;
    {
        const bool branch_taken_0x26ddd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DDD0u;
        // 0x26ddd4: 0x8c450058  lw          $a1, 0x58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ddd0) {
            ctx->pc = 0x26DDDCu;
            goto label_26dddc;
        }
    }
    ctx->pc = 0x26DDD8u;
label_26ddd8:
    // 0x26ddd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26ddd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26dddc:
    // 0x26dddc: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
label_26dde0:
    if (ctx->pc == 0x26DDE0u) {
        ctx->pc = 0x26DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DDDCu;
        // 0x26dde0: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DDE4u;
        goto label_26dde4;
    }
    ctx->pc = 0x26DDDCu;
    {
        const bool branch_taken_0x26dddc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DDDCu;
        // 0x26dde0: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dddc) {
            ctx->pc = 0x26DE4Cu;
            goto label_26de4c;
        }
    }
    ctx->pc = 0x26DDE4u;
label_26dde4:
    // 0x26dde4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x26dde4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_26dde8:
    // 0x26dde8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26dde8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_26ddec:
    // 0x26ddec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26ddecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26ddf0:
    // 0x26ddf0: 0x3c01becc  lui         $at, 0xBECC
    ctx->pc = 0x26ddf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48844 << 16));
label_26ddf4:
    // 0x26ddf4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26ddf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26ddf8:
    // 0x26ddf8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26ddf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26ddfc:
    // 0x26ddfc: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x26ddfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26de00:
    // 0x26de00: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x26de00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_26de04:
    // 0x26de04: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x26de04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_26de08:
    // 0x26de08: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x26de08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_26de0c:
    // 0x26de0c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x26de0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_26de10:
    // 0x26de10: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x26de10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26de14:
    // 0x26de14: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x26de14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_26de18:
    // 0x26de18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26de18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26de1c:
    // 0x26de1c: 0xc0c28ac  jal         func_30A2B0
label_26de20:
    if (ctx->pc == 0x26DE20u) {
        ctx->pc = 0x26DE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE1Cu;
        // 0x26de20: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DE24u;
        goto label_26de24;
    }
    ctx->pc = 0x26DE1Cu;
    SET_GPR_U32(ctx, 31, 0x26DE24u);
    ctx->pc = 0x26DE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DE1Cu;
    // 0x26de20: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x26DE1Cu, 0x26DE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DE24u;
label_26de24:
    // 0x26de24: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x26de24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_26de28:
    // 0x26de28: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x26de28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_26de2c:
    // 0x26de2c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x26de2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_26de30:
    // 0x26de30: 0x13a20006  beq         $sp, $v0, . + 4 + (0x6 << 2)
label_26de34:
    if (ctx->pc == 0x26DE34u) {
        ctx->pc = 0x26DE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE30u;
        // 0x26de34: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DE38u;
        goto label_26de38;
    }
    ctx->pc = 0x26DE30u;
    {
        const bool branch_taken_0x26de30 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x26DE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE30u;
        // 0x26de34: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de30) {
            ctx->pc = 0x26DE4Cu;
            goto label_26de4c;
        }
    }
    ctx->pc = 0x26DE38u;
label_26de38:
    // 0x26de38: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x26de38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26de3c:
    // 0x26de3c: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x26de3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26de40:
    // 0x26de40: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x26de40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_26de44:
    // 0x26de44: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x26de44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_26de48:
    // 0x26de48: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x26de48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_26de4c:
    // 0x26de4c: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x26de4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_26de50:
    // 0x26de50: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x26de50u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_26de54:
    // 0x26de54: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x26de54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_26de58:
    // 0x26de58: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x26de58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26de5c:
    // 0x26de5c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x26de5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26de60:
    // 0x26de60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26de60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26de64:
    // 0x26de64: 0x2406011c  addiu       $a2, $zero, 0x11C
    ctx->pc = 0x26de64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 284));
label_26de68:
    // 0x26de68: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x26de68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26de6c:
    // 0x26de6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26de6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26de70:
    // 0x26de70: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26de70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26de74:
    // 0x26de74: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x26de74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_26de78:
    // 0x26de78: 0xc0b2e5a  jal         func_2CB968
label_26de7c:
    if (ctx->pc == 0x26DE7Cu) {
        ctx->pc = 0x26DE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE78u;
        // 0x26de7c: 0x24120025  addiu       $s2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DE80u;
        goto label_26de80;
    }
    ctx->pc = 0x26DE78u;
    SET_GPR_U32(ctx, 31, 0x26DE80u);
    ctx->pc = 0x26DE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DE78u;
    // 0x26de7c: 0x24120025  addiu       $s2, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x26DE78u, 0x26DE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DE80u;
label_26de80:
    // 0x26de80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26de80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26de84:
    // 0x26de84: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x26de84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26de88:
    // 0x26de88: 0x24060123  addiu       $a2, $zero, 0x123
    ctx->pc = 0x26de88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
label_26de8c:
    // 0x26de8c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x26de8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26de90:
    // 0x26de90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26de90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26de94:
    // 0x26de94: 0xc0b2e5a  jal         func_2CB968
label_26de98:
    if (ctx->pc == 0x26DE98u) {
        ctx->pc = 0x26DE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE94u;
        // 0x26de98: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DE9Cu;
        goto label_26de9c;
    }
    ctx->pc = 0x26DE94u;
    SET_GPR_U32(ctx, 31, 0x26DE9Cu);
    ctx->pc = 0x26DE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DE94u;
    // 0x26de98: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x26DE94u, 0x26DE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DE9Cu;
label_26de9c:
    // 0x26de9c: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_26dea0:
    if (ctx->pc == 0x26DEA0u) {
        ctx->pc = 0x26DEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE9Cu;
        // 0x26dea0: 0x8e630214  lw          $v1, 0x214($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DEA4u;
        goto label_26dea4;
    }
    ctx->pc = 0x26DE9Cu;
    {
        const bool branch_taken_0x26de9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE9Cu;
        // 0x26dea0: 0x8e630214  lw          $v1, 0x214($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de9c) {
            ctx->pc = 0x26E1B4u;
            goto label_26e1b4;
        }
    }
    ctx->pc = 0x26DEA4u;
label_26dea4:
    // 0x26dea4: 0x8e24074c  lw          $a0, 0x74C($s1)
    ctx->pc = 0x26dea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1868)));
label_26dea8:
    // 0x26dea8: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
label_26deac:
    if (ctx->pc == 0x26DEACu) {
        ctx->pc = 0x26DEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DEA8u;
        // 0x26deac: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DEB0u;
        goto label_26deb0;
    }
    ctx->pc = 0x26DEA8u;
    {
        const bool branch_taken_0x26dea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DEA8u;
        // 0x26deac: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dea8) {
            ctx->pc = 0x26DF08u;
            goto label_26df08;
        }
    }
    ctx->pc = 0x26DEB0u;
label_26deb0:
    // 0x26deb0: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x26deb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
label_26deb4:
    // 0x26deb4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26deb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_26deb8:
    // 0x26deb8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_26debc:
    if (ctx->pc == 0x26DEBCu) {
        ctx->pc = 0x26DEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DEB8u;
        // 0x26debc: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DEC0u;
        goto label_26dec0;
    }
    ctx->pc = 0x26DEB8u;
    {
        const bool branch_taken_0x26deb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DEB8u;
        // 0x26debc: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26deb8) {
            ctx->pc = 0x26DECCu;
            goto label_26decc;
        }
    }
    ctx->pc = 0x26DEC0u;
label_26dec0:
    // 0x26dec0: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x26dec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
label_26dec4:
    // 0x26dec4: 0x10000002  b           . + 4 + (0x2 << 2)
label_26dec8:
    if (ctx->pc == 0x26DEC8u) {
        ctx->pc = 0x26DEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DEC4u;
        // 0x26dec8: 0x8c450020  lw          $a1, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DECCu;
        goto label_26decc;
    }
    ctx->pc = 0x26DEC4u;
    {
        const bool branch_taken_0x26dec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DEC4u;
        // 0x26dec8: 0x8c450020  lw          $a1, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dec4) {
            ctx->pc = 0x26DED0u;
            goto label_26ded0;
        }
    }
    ctx->pc = 0x26DECCu;
label_26decc:
    // 0x26decc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26deccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26ded0:
    // 0x26ded0: 0x50a0000b  beql        $a1, $zero, . + 4 + (0xB << 2)
label_26ded4:
    if (ctx->pc == 0x26DED4u) {
        ctx->pc = 0x26DED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DED0u;
        // 0x26ded4: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DED8u;
        goto label_26ded8;
    }
    ctx->pc = 0x26DED0u;
    {
        const bool branch_taken_0x26ded0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ded0) {
            ctx->pc = 0x26DED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DED0u;
            // 0x26ded4: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DF00u;
            goto label_26df00;
        }
    }
    ctx->pc = 0x26DED8u;
label_26ded8:
    // 0x26ded8: 0x8ca500f0  lw          $a1, 0xF0($a1)
    ctx->pc = 0x26ded8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
label_26dedc:
    // 0x26dedc: 0x53a50008  beql        $sp, $a1, . + 4 + (0x8 << 2)
label_26dee0:
    if (ctx->pc == 0x26DEE0u) {
        ctx->pc = 0x26DEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DEDCu;
        // 0x26dee0: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DEE4u;
        goto label_26dee4;
    }
    ctx->pc = 0x26DEDCu;
    {
        const bool branch_taken_0x26dedc = (GPR_U64(ctx, 29) == GPR_U64(ctx, 5));
        if (branch_taken_0x26dedc) {
            ctx->pc = 0x26DEE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DEDCu;
            // 0x26dee0: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DF00u;
            goto label_26df00;
        }
    }
    ctx->pc = 0x26DEE4u;
label_26dee4:
    // 0x26dee4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x26dee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26dee8:
    // 0x26dee8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x26dee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_26deec:
    // 0x26deec: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x26deecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26def0:
    // 0x26def0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x26def0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_26def4:
    // 0x26def4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x26def4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26def8:
    // 0x26def8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x26def8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_26defc:
    // 0x26defc: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x26defcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_26df00:
    // 0x26df00: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x26df00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26df04:
    // 0x26df04: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x26df04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_26df08:
    // 0x26df08: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x26df08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_26df0c:
    // 0x26df0c: 0x1000004a  b           . + 4 + (0x4A << 2)
label_26df10:
    if (ctx->pc == 0x26DF10u) {
        ctx->pc = 0x26DF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF0Cu;
        // 0x26df10: 0x24120026  addiu       $s2, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DF14u;
        goto label_26df14;
    }
    ctx->pc = 0x26DF0Cu;
    {
        const bool branch_taken_0x26df0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF0Cu;
        // 0x26df10: 0x24120026  addiu       $s2, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df0c) {
            ctx->pc = 0x26E038u;
            goto label_26e038;
        }
    }
    ctx->pc = 0x26DF14u;
label_26df14:
    // 0x26df14: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x26df14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_26df18:
    // 0x26df18: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x26df18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_26df1c:
    // 0x26df1c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26df1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_26df20:
    // 0x26df20: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_26df24:
    if (ctx->pc == 0x26DF24u) {
        ctx->pc = 0x26DF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF20u;
        // 0x26df24: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DF28u;
        goto label_26df28;
    }
    ctx->pc = 0x26DF20u;
    {
        const bool branch_taken_0x26df20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF20u;
        // 0x26df24: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df20) {
            ctx->pc = 0x26DF34u;
            goto label_26df34;
        }
    }
    ctx->pc = 0x26DF28u;
label_26df28:
    // 0x26df28: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x26df28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_26df2c:
    // 0x26df2c: 0x10000002  b           . + 4 + (0x2 << 2)
label_26df30:
    if (ctx->pc == 0x26DF30u) {
        ctx->pc = 0x26DF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF2Cu;
        // 0x26df30: 0x8c450024  lw          $a1, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DF34u;
        goto label_26df34;
    }
    ctx->pc = 0x26DF2Cu;
    {
        const bool branch_taken_0x26df2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF2Cu;
        // 0x26df30: 0x8c450024  lw          $a1, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df2c) {
            ctx->pc = 0x26DF38u;
            goto label_26df38;
        }
    }
    ctx->pc = 0x26DF34u;
label_26df34:
    // 0x26df34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26df34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26df38:
    // 0x26df38: 0x50a0000b  beql        $a1, $zero, . + 4 + (0xB << 2)
label_26df3c:
    if (ctx->pc == 0x26DF3Cu) {
        ctx->pc = 0x26DF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF38u;
        // 0x26df3c: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DF40u;
        goto label_26df40;
    }
    ctx->pc = 0x26DF38u;
    {
        const bool branch_taken_0x26df38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x26df38) {
            ctx->pc = 0x26DF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DF38u;
            // 0x26df3c: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DF68u;
            goto label_26df68;
        }
    }
    ctx->pc = 0x26DF40u;
label_26df40:
    // 0x26df40: 0x8ca500f0  lw          $a1, 0xF0($a1)
    ctx->pc = 0x26df40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
label_26df44:
    // 0x26df44: 0x53a50008  beql        $sp, $a1, . + 4 + (0x8 << 2)
label_26df48:
    if (ctx->pc == 0x26DF48u) {
        ctx->pc = 0x26DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF44u;
        // 0x26df48: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DF4Cu;
        goto label_26df4c;
    }
    ctx->pc = 0x26DF44u;
    {
        const bool branch_taken_0x26df44 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 5));
        if (branch_taken_0x26df44) {
            ctx->pc = 0x26DF48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DF44u;
            // 0x26df48: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DF68u;
            goto label_26df68;
        }
    }
    ctx->pc = 0x26DF4Cu;
label_26df4c:
    // 0x26df4c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x26df4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26df50:
    // 0x26df50: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x26df50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_26df54:
    // 0x26df54: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x26df54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26df58:
    // 0x26df58: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x26df58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_26df5c:
    // 0x26df5c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x26df5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26df60:
    // 0x26df60: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x26df60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_26df64:
    // 0x26df64: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x26df64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_26df68:
    // 0x26df68: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x26df68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_26df6c:
    // 0x26df6c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26df6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_26df70:
    // 0x26df70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_26df74:
    if (ctx->pc == 0x26DF74u) {
        ctx->pc = 0x26DF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF70u;
        // 0x26df74: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DF78u;
        goto label_26df78;
    }
    ctx->pc = 0x26DF70u;
    {
        const bool branch_taken_0x26df70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF70u;
        // 0x26df74: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df70) {
            ctx->pc = 0x26DF84u;
            goto label_26df84;
        }
    }
    ctx->pc = 0x26DF78u;
label_26df78:
    // 0x26df78: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x26df78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_26df7c:
    // 0x26df7c: 0x10000002  b           . + 4 + (0x2 << 2)
label_26df80:
    if (ctx->pc == 0x26DF80u) {
        ctx->pc = 0x26DF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF7Cu;
        // 0x26df80: 0x8c450038  lw          $a1, 0x38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DF84u;
        goto label_26df84;
    }
    ctx->pc = 0x26DF7Cu;
    {
        const bool branch_taken_0x26df7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF7Cu;
        // 0x26df80: 0x8c450038  lw          $a1, 0x38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df7c) {
            ctx->pc = 0x26DF88u;
            goto label_26df88;
        }
    }
    ctx->pc = 0x26DF84u;
label_26df84:
    // 0x26df84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26df84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26df88:
    // 0x26df88: 0x50a0002a  beql        $a1, $zero, . + 4 + (0x2A << 2)
label_26df8c:
    if (ctx->pc == 0x26DF8Cu) {
        ctx->pc = 0x26DF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF88u;
        // 0x26df8c: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DF90u;
        goto label_26df90;
    }
    ctx->pc = 0x26DF88u;
    {
        const bool branch_taken_0x26df88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x26df88) {
            ctx->pc = 0x26DF8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DF88u;
            // 0x26df8c: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E034u;
            goto label_26e034;
        }
    }
    ctx->pc = 0x26DF90u;
label_26df90:
    // 0x26df90: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26df90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_26df94:
    // 0x26df94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26df94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26df98:
    // 0x26df98: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x26df98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_26df9c:
    // 0x26df9c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x26df9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_26dfa0:
    // 0x26dfa0: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x26dfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_26dfa4:
    // 0x26dfa4: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x26dfa4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_26dfa8:
    // 0x26dfa8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x26dfa8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_26dfac:
    // 0x26dfac: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x26dfacu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_26dfb0:
    // 0x26dfb0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x26dfb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_26dfb4:
    // 0x26dfb4: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x26dfb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_26dfb8:
    // 0x26dfb8: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x26dfb8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_26dfbc:
    // 0x26dfbc: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x26dfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_26dfc0:
    // 0x26dfc0: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x26dfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_26dfc4:
    // 0x26dfc4: 0x8ca200f0  lw          $v0, 0xF0($a1)
    ctx->pc = 0x26dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
label_26dfc8:
    // 0x26dfc8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x26dfc8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26dfcc:
    // 0x26dfcc: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x26dfccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_26dfd0:
    // 0x26dfd0: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x26dfd0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_26dfd4:
    // 0x26dfd4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x26dfd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_26dfd8:
    // 0x26dfd8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x26dfd8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_26dfdc:
    // 0x26dfdc: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x26dfdcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_26dfe0:
    // 0x26dfe0: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x26dfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_26dfe4:
    // 0x26dfe4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x26dfe4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_26dfe8:
    // 0x26dfe8: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x26dfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_26dfec:
    // 0x26dfec: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x26dfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26dff0:
    // 0x26dff0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x26dff0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26dff4:
    // 0x26dff4: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x26dff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_26dff8:
    // 0x26dff8: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x26dff8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_26dffc:
    // 0x26dffc: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x26dffcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_26e000:
    // 0x26e000: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x26e000u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_26e004:
    // 0x26e004: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x26e004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_26e008:
    // 0x26e008: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x26e008u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_26e00c:
    // 0x26e00c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x26e00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_26e010:
    // 0x26e010: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x26e010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_26e014:
    // 0x26e014: 0x13a20006  beq         $sp, $v0, . + 4 + (0x6 << 2)
label_26e018:
    if (ctx->pc == 0x26E018u) {
        ctx->pc = 0x26E018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E014u;
        // 0x26e018: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E01Cu;
        goto label_26e01c;
    }
    ctx->pc = 0x26E014u;
    {
        const bool branch_taken_0x26e014 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E014u;
        // 0x26e018: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e014) {
            ctx->pc = 0x26E030u;
            goto label_26e030;
        }
    }
    ctx->pc = 0x26E01Cu;
label_26e01c:
    // 0x26e01c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x26e01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26e020:
    // 0x26e020: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x26e020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26e024:
    // 0x26e024: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x26e024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_26e028:
    // 0x26e028: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x26e028u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_26e02c:
    // 0x26e02c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x26e02cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_26e030:
    // 0x26e030: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x26e030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_26e034:
    // 0x26e034: 0x24120027  addiu       $s2, $zero, 0x27
    ctx->pc = 0x26e034u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_26e038:
    // 0x26e038: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x26e038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26e03c:
    // 0x26e03c: 0x1000005c  b           . + 4 + (0x5C << 2)
label_26e040:
    if (ctx->pc == 0x26E040u) {
        ctx->pc = 0x26E040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E03Cu;
        // 0x26e040: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E044u;
        goto label_26e044;
    }
    ctx->pc = 0x26E03Cu;
    {
        const bool branch_taken_0x26e03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E03Cu;
        // 0x26e040: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e03c) {
            ctx->pc = 0x26E1B0u;
            goto label_26e1b0;
        }
    }
    ctx->pc = 0x26E044u;
label_26e044:
    // 0x26e044: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x26e044u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_26e048:
    // 0x26e048: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x26e048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_26e04c:
    // 0x26e04c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26e04cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_26e050:
    // 0x26e050: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_26e054:
    if (ctx->pc == 0x26E054u) {
        ctx->pc = 0x26E054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E050u;
        // 0x26e054: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E058u;
        goto label_26e058;
    }
    ctx->pc = 0x26E050u;
    {
        const bool branch_taken_0x26e050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E050u;
        // 0x26e054: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e050) {
            ctx->pc = 0x26E064u;
            goto label_26e064;
        }
    }
    ctx->pc = 0x26E058u;
label_26e058:
    // 0x26e058: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x26e058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_26e05c:
    // 0x26e05c: 0x10000002  b           . + 4 + (0x2 << 2)
label_26e060:
    if (ctx->pc == 0x26E060u) {
        ctx->pc = 0x26E060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E05Cu;
        // 0x26e060: 0x8c450024  lw          $a1, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E064u;
        goto label_26e064;
    }
    ctx->pc = 0x26E05Cu;
    {
        const bool branch_taken_0x26e05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E05Cu;
        // 0x26e060: 0x8c450024  lw          $a1, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e05c) {
            ctx->pc = 0x26E068u;
            goto label_26e068;
        }
    }
    ctx->pc = 0x26E064u;
label_26e064:
    // 0x26e064: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26e064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26e068:
    // 0x26e068: 0x50a0000b  beql        $a1, $zero, . + 4 + (0xB << 2)
label_26e06c:
    if (ctx->pc == 0x26E06Cu) {
        ctx->pc = 0x26E06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E068u;
        // 0x26e06c: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E070u;
        goto label_26e070;
    }
    ctx->pc = 0x26E068u;
    {
        const bool branch_taken_0x26e068 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e068) {
            ctx->pc = 0x26E06Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E068u;
            // 0x26e06c: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E098u;
            goto label_26e098;
        }
    }
    ctx->pc = 0x26E070u;
label_26e070:
    // 0x26e070: 0x8ca500f0  lw          $a1, 0xF0($a1)
    ctx->pc = 0x26e070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
label_26e074:
    // 0x26e074: 0x53a50008  beql        $sp, $a1, . + 4 + (0x8 << 2)
label_26e078:
    if (ctx->pc == 0x26E078u) {
        ctx->pc = 0x26E078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E074u;
        // 0x26e078: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E07Cu;
        goto label_26e07c;
    }
    ctx->pc = 0x26E074u;
    {
        const bool branch_taken_0x26e074 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 5));
        if (branch_taken_0x26e074) {
            ctx->pc = 0x26E078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E074u;
            // 0x26e078: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E098u;
            goto label_26e098;
        }
    }
    ctx->pc = 0x26E07Cu;
label_26e07c:
    // 0x26e07c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x26e07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26e080:
    // 0x26e080: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x26e080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_26e084:
    // 0x26e084: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x26e084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26e088:
    // 0x26e088: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x26e088u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_26e08c:
    // 0x26e08c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x26e08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26e090:
    // 0x26e090: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x26e090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_26e094:
    // 0x26e094: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x26e094u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_26e098:
    // 0x26e098: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x26e098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_26e09c:
    // 0x26e09c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26e09cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_26e0a0:
    // 0x26e0a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_26e0a4:
    if (ctx->pc == 0x26E0A4u) {
        ctx->pc = 0x26E0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E0A0u;
        // 0x26e0a4: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E0A8u;
        goto label_26e0a8;
    }
    ctx->pc = 0x26E0A0u;
    {
        const bool branch_taken_0x26e0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E0A0u;
        // 0x26e0a4: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e0a0) {
            ctx->pc = 0x26E0B4u;
            goto label_26e0b4;
        }
    }
    ctx->pc = 0x26E0A8u;
label_26e0a8:
    // 0x26e0a8: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x26e0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_26e0ac:
    // 0x26e0ac: 0x10000002  b           . + 4 + (0x2 << 2)
label_26e0b0:
    if (ctx->pc == 0x26E0B0u) {
        ctx->pc = 0x26E0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E0ACu;
        // 0x26e0b0: 0x8c420038  lw          $v0, 0x38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E0B4u;
        goto label_26e0b4;
    }
    ctx->pc = 0x26E0ACu;
    {
        const bool branch_taken_0x26e0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E0ACu;
        // 0x26e0b0: 0x8c420038  lw          $v0, 0x38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e0ac) {
            ctx->pc = 0x26E0B8u;
            goto label_26e0b8;
        }
    }
    ctx->pc = 0x26E0B4u;
label_26e0b4:
    // 0x26e0b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26e0b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26e0b8:
    // 0x26e0b8: 0x5040002a  beql        $v0, $zero, . + 4 + (0x2A << 2)
label_26e0bc:
    if (ctx->pc == 0x26E0BCu) {
        ctx->pc = 0x26E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E0B8u;
        // 0x26e0bc: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E0C0u;
        goto label_26e0c0;
    }
    ctx->pc = 0x26E0B8u;
    {
        const bool branch_taken_0x26e0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e0b8) {
            ctx->pc = 0x26E0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E0B8u;
            // 0x26e0bc: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E164u;
            goto label_26e164;
        }
    }
    ctx->pc = 0x26E0C0u;
label_26e0c0:
    // 0x26e0c0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26e0c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_26e0c4:
    // 0x26e0c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26e0c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26e0c8:
    // 0x26e0c8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26e0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_26e0cc:
    // 0x26e0cc: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x26e0ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_26e0d0:
    // 0x26e0d0: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x26e0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_26e0d4:
    // 0x26e0d4: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x26e0d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_26e0d8:
    // 0x26e0d8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x26e0d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_26e0dc:
    // 0x26e0dc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x26e0dcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_26e0e0:
    // 0x26e0e0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x26e0e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_26e0e4:
    // 0x26e0e4: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x26e0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_26e0e8:
    // 0x26e0e8: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x26e0e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_26e0ec:
    // 0x26e0ec: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x26e0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_26e0f0:
    // 0x26e0f0: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x26e0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_26e0f4:
    // 0x26e0f4: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x26e0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_26e0f8:
    // 0x26e0f8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x26e0f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26e0fc:
    // 0x26e0fc: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x26e0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_26e100:
    // 0x26e100: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x26e100u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_26e104:
    // 0x26e104: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x26e104u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_26e108:
    // 0x26e108: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x26e108u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_26e10c:
    // 0x26e10c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x26e10cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_26e110:
    // 0x26e110: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x26e110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_26e114:
    // 0x26e114: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x26e114u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_26e118:
    // 0x26e118: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x26e118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_26e11c:
    // 0x26e11c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x26e11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26e120:
    // 0x26e120: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x26e120u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26e124:
    // 0x26e124: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x26e124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_26e128:
    // 0x26e128: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x26e128u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_26e12c:
    // 0x26e12c: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x26e12cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_26e130:
    // 0x26e130: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x26e130u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_26e134:
    // 0x26e134: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x26e134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_26e138:
    // 0x26e138: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x26e138u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_26e13c:
    // 0x26e13c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x26e13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_26e140:
    // 0x26e140: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x26e140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_26e144:
    // 0x26e144: 0x13a20006  beq         $sp, $v0, . + 4 + (0x6 << 2)
label_26e148:
    if (ctx->pc == 0x26E148u) {
        ctx->pc = 0x26E148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E144u;
        // 0x26e148: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E14Cu;
        goto label_26e14c;
    }
    ctx->pc = 0x26E144u;
    {
        const bool branch_taken_0x26e144 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E144u;
        // 0x26e148: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e144) {
            ctx->pc = 0x26E160u;
            goto label_26e160;
        }
    }
    ctx->pc = 0x26E14Cu;
label_26e14c:
    // 0x26e14c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x26e14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26e150:
    // 0x26e150: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x26e150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26e154:
    // 0x26e154: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x26e154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_26e158:
    // 0x26e158: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x26e158u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_26e15c:
    // 0x26e15c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x26e15cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_26e160:
    // 0x26e160: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x26e160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_26e164:
    // 0x26e164: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x26e164u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_26e168:
    // 0x26e168: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x26e168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_26e16c:
    // 0x26e16c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x26e16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26e170:
    // 0x26e170: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x26e170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26e174:
    // 0x26e174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26e174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26e178:
    // 0x26e178: 0x2406011c  addiu       $a2, $zero, 0x11C
    ctx->pc = 0x26e178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 284));
label_26e17c:
    // 0x26e17c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x26e17cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26e180:
    // 0x26e180: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26e180u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26e184:
    // 0x26e184: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26e184u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26e188:
    // 0x26e188: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x26e188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_26e18c:
    // 0x26e18c: 0xc0b2e5a  jal         func_2CB968
label_26e190:
    if (ctx->pc == 0x26E190u) {
        ctx->pc = 0x26E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E18Cu;
        // 0x26e190: 0x24120028  addiu       $s2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E194u;
        goto label_26e194;
    }
    ctx->pc = 0x26E18Cu;
    SET_GPR_U32(ctx, 31, 0x26E194u);
    ctx->pc = 0x26E190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E18Cu;
    // 0x26e190: 0x24120028  addiu       $s2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x26E18Cu, 0x26E194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E194u;
label_26e194:
    // 0x26e194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26e194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26e198:
    // 0x26e198: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x26e198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26e19c:
    // 0x26e19c: 0x24060123  addiu       $a2, $zero, 0x123
    ctx->pc = 0x26e19cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
label_26e1a0:
    // 0x26e1a0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x26e1a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26e1a4:
    // 0x26e1a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26e1a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26e1a8:
    // 0x26e1a8: 0xc0b2e5a  jal         func_2CB968
label_26e1ac:
    if (ctx->pc == 0x26E1ACu) {
        ctx->pc = 0x26E1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E1A8u;
        // 0x26e1ac: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E1B0u;
        goto label_26e1b0;
    }
    ctx->pc = 0x26E1A8u;
    SET_GPR_U32(ctx, 31, 0x26E1B0u);
    ctx->pc = 0x26E1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E1A8u;
    // 0x26e1ac: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x26E1A8u, 0x26E1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E1B0u;
label_26e1b0:
    // 0x26e1b0: 0x8e630214  lw          $v1, 0x214($s3)
    ctx->pc = 0x26e1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
label_26e1b4:
    // 0x26e1b4: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x26e1b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_26e1b8:
    // 0x26e1b8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x26e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_26e1bc:
    // 0x26e1bc: 0x40f809  jalr        $v0
label_26e1c0:
    if (ctx->pc == 0x26E1C0u) {
        ctx->pc = 0x26E1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E1BCu;
        // 0x26e1c0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E1C4u;
        goto label_26e1c4;
    }
    ctx->pc = 0x26E1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26E1C4u);
        ctx->pc = 0x26E1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E1BCu;
        // 0x26e1c0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E1BCu, 0x26E1C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26E1C4u;
label_26e1c4:
    // 0x26e1c4: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x26e1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
label_26e1c8:
    // 0x26e1c8: 0x105d0007  beq         $v0, $sp, . + 4 + (0x7 << 2)
label_26e1cc:
    if (ctx->pc == 0x26E1CCu) {
        ctx->pc = 0x26E1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E1C8u;
        // 0x26e1cc: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E1D0u;
        goto label_26e1d0;
    }
    ctx->pc = 0x26E1C8u;
    {
        const bool branch_taken_0x26e1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x26E1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E1C8u;
        // 0x26e1cc: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e1c8) {
            ctx->pc = 0x26E1E8u;
            goto label_26e1e8;
        }
    }
    ctx->pc = 0x26E1D0u;
label_26e1d0:
    // 0x26e1d0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x26e1d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_26e1d4:
    // 0x26e1d4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x26e1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26e1d8:
    // 0x26e1d8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x26e1d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_26e1dc:
    // 0x26e1dc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x26e1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26e1e0:
    // 0x26e1e0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x26e1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_26e1e4:
    // 0x26e1e4: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x26e1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
label_26e1e8:
    // 0x26e1e8: 0x26630490  addiu       $v1, $s3, 0x490
    ctx->pc = 0x26e1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1168));
label_26e1ec:
    // 0x26e1ec: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_26e1f0:
    if (ctx->pc == 0x26E1F0u) {
        ctx->pc = 0x26E1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E1ECu;
        // 0x26e1f0: 0xae600100  sw          $zero, 0x100($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E1F4u;
        goto label_26e1f4;
    }
    ctx->pc = 0x26E1ECu;
    {
        const bool branch_taken_0x26e1ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26e1ec) {
            ctx->pc = 0x26E1F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E1ECu;
            // 0x26e1f0: 0xae600100  sw          $zero, 0x100($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 256), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E210u;
            goto label_26e210;
        }
    }
    ctx->pc = 0x26E1F4u;
label_26e1f4:
    // 0x26e1f4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26e1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26e1f8:
    // 0x26e1f8: 0xe6600490  swc1        $f0, 0x490($s3)
    ctx->pc = 0x26e1f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1168), bits); }
label_26e1fc:
    // 0x26e1fc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26e1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26e200:
    // 0x26e200: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x26e200u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_26e204:
    // 0x26e204: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x26e204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26e208:
    // 0x26e208: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x26e208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_26e20c:
    // 0x26e20c: 0xae600100  sw          $zero, 0x100($s3)
    ctx->pc = 0x26e20cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 256), GPR_U32(ctx, 0));
label_26e210:
    // 0x26e210: 0x26620100  addiu       $v0, $s3, 0x100
    ctx->pc = 0x26e210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
label_26e214:
    // 0x26e214: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x26e214u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_26e218:
    // 0x26e218: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26e218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26e21c:
    // 0x26e21c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x26e21cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26e220:
    // 0x26e220: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x26e220u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_26e224:
    // 0x26e224: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26e224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26e228:
    // 0x26e228: 0xc06ed52  jal         func_1BB548
label_26e22c:
    if (ctx->pc == 0x26E22Cu) {
        ctx->pc = 0x26E22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E228u;
        // 0x26e22c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E230u;
        goto label_26e230;
    }
    ctx->pc = 0x26E228u;
    SET_GPR_U32(ctx, 31, 0x26E230u);
    ctx->pc = 0x26E22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E228u;
    // 0x26e22c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB548u, 0x26E228u, 0x26E230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E230u;
label_26e230:
    // 0x26e230: 0xe6740104  swc1        $f20, 0x104($s3)
    ctx->pc = 0x26e230u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 260), bits); }
label_26e234:
    // 0x26e234: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x26e234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_26e238:
    // 0x26e238: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x26e238u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_26e23c:
    // 0x26e23c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x26e23cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_26e240:
    // 0x26e240: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x26e240u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_26e244:
    // 0x26e244: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x26e244u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_26e248:
    // 0x26e248: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x26e248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_26e24c:
    // 0x26e24c: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x26e24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_26e250:
    // 0x26e250: 0x3e00008  jr          $ra
label_26e254:
    if (ctx->pc == 0x26E254u) {
        ctx->pc = 0x26E254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E250u;
        // 0x26e254: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E258u;
        goto label_fallthrough_0x26e250;
    }
    ctx->pc = 0x26E250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E250u;
        // 0x26e254: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x26e250:
    ctx->pc = 0x26E258u;
}
