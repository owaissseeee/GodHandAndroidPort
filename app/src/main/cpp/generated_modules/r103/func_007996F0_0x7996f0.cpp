#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r103_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r103
{
// Function: func_007996F0
// Address: 0x7996f0 - 0x79a250
void func_007996F0_0x7996f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007996F0_0x7996f0");
#endif

    switch (ctx->pc) {
        case 0x7996f0u: goto label_7996f0;
        case 0x7996f4u: goto label_7996f4;
        case 0x7996f8u: goto label_7996f8;
        case 0x7996fcu: goto label_7996fc;
        case 0x799700u: goto label_799700;
        case 0x799704u: goto label_799704;
        case 0x799708u: goto label_799708;
        case 0x79970cu: goto label_79970c;
        case 0x799710u: goto label_799710;
        case 0x799714u: goto label_799714;
        case 0x799718u: goto label_799718;
        case 0x79971cu: goto label_79971c;
        case 0x799720u: goto label_799720;
        case 0x799724u: goto label_799724;
        case 0x799728u: goto label_799728;
        case 0x79972cu: goto label_79972c;
        case 0x799730u: goto label_799730;
        case 0x799734u: goto label_799734;
        case 0x799738u: goto label_799738;
        case 0x79973cu: goto label_79973c;
        case 0x799740u: goto label_799740;
        case 0x799744u: goto label_799744;
        case 0x799748u: goto label_799748;
        case 0x79974cu: goto label_79974c;
        case 0x799750u: goto label_799750;
        case 0x799754u: goto label_799754;
        case 0x799758u: goto label_799758;
        case 0x79975cu: goto label_79975c;
        case 0x799760u: goto label_799760;
        case 0x799764u: goto label_799764;
        case 0x799768u: goto label_799768;
        case 0x79976cu: goto label_79976c;
        case 0x799770u: goto label_799770;
        case 0x799774u: goto label_799774;
        case 0x799778u: goto label_799778;
        case 0x79977cu: goto label_79977c;
        case 0x799780u: goto label_799780;
        case 0x799784u: goto label_799784;
        case 0x799788u: goto label_799788;
        case 0x79978cu: goto label_79978c;
        case 0x799790u: goto label_799790;
        case 0x799794u: goto label_799794;
        case 0x799798u: goto label_799798;
        case 0x79979cu: goto label_79979c;
        case 0x7997a0u: goto label_7997a0;
        case 0x7997a4u: goto label_7997a4;
        case 0x7997a8u: goto label_7997a8;
        case 0x7997acu: goto label_7997ac;
        case 0x7997b0u: goto label_7997b0;
        case 0x7997b4u: goto label_7997b4;
        case 0x7997b8u: goto label_7997b8;
        case 0x7997bcu: goto label_7997bc;
        case 0x7997c0u: goto label_7997c0;
        case 0x7997c4u: goto label_7997c4;
        case 0x7997c8u: goto label_7997c8;
        case 0x7997ccu: goto label_7997cc;
        case 0x7997d0u: goto label_7997d0;
        case 0x7997d4u: goto label_7997d4;
        case 0x7997d8u: goto label_7997d8;
        case 0x7997dcu: goto label_7997dc;
        case 0x7997e0u: goto label_7997e0;
        case 0x7997e4u: goto label_7997e4;
        case 0x7997e8u: goto label_7997e8;
        case 0x7997ecu: goto label_7997ec;
        case 0x7997f0u: goto label_7997f0;
        case 0x7997f4u: goto label_7997f4;
        case 0x7997f8u: goto label_7997f8;
        case 0x7997fcu: goto label_7997fc;
        case 0x799800u: goto label_799800;
        case 0x799804u: goto label_799804;
        case 0x799808u: goto label_799808;
        case 0x79980cu: goto label_79980c;
        case 0x799810u: goto label_799810;
        case 0x799814u: goto label_799814;
        case 0x799818u: goto label_799818;
        case 0x79981cu: goto label_79981c;
        case 0x799820u: goto label_799820;
        case 0x799824u: goto label_799824;
        case 0x799828u: goto label_799828;
        case 0x79982cu: goto label_79982c;
        case 0x799830u: goto label_799830;
        case 0x799834u: goto label_799834;
        case 0x799838u: goto label_799838;
        case 0x79983cu: goto label_79983c;
        case 0x799840u: goto label_799840;
        case 0x799844u: goto label_799844;
        case 0x799848u: goto label_799848;
        case 0x79984cu: goto label_79984c;
        case 0x799850u: goto label_799850;
        case 0x799854u: goto label_799854;
        case 0x799858u: goto label_799858;
        case 0x79985cu: goto label_79985c;
        case 0x799860u: goto label_799860;
        case 0x799864u: goto label_799864;
        case 0x799868u: goto label_799868;
        case 0x79986cu: goto label_79986c;
        case 0x799870u: goto label_799870;
        case 0x799874u: goto label_799874;
        case 0x799878u: goto label_799878;
        case 0x79987cu: goto label_79987c;
        case 0x799880u: goto label_799880;
        case 0x799884u: goto label_799884;
        case 0x799888u: goto label_799888;
        case 0x79988cu: goto label_79988c;
        case 0x799890u: goto label_799890;
        case 0x799894u: goto label_799894;
        case 0x799898u: goto label_799898;
        case 0x79989cu: goto label_79989c;
        case 0x7998a0u: goto label_7998a0;
        case 0x7998a4u: goto label_7998a4;
        case 0x7998a8u: goto label_7998a8;
        case 0x7998acu: goto label_7998ac;
        case 0x7998b0u: goto label_7998b0;
        case 0x7998b4u: goto label_7998b4;
        case 0x7998b8u: goto label_7998b8;
        case 0x7998bcu: goto label_7998bc;
        case 0x7998c0u: goto label_7998c0;
        case 0x7998c4u: goto label_7998c4;
        case 0x7998c8u: goto label_7998c8;
        case 0x7998ccu: goto label_7998cc;
        case 0x7998d0u: goto label_7998d0;
        case 0x7998d4u: goto label_7998d4;
        case 0x7998d8u: goto label_7998d8;
        case 0x7998dcu: goto label_7998dc;
        case 0x7998e0u: goto label_7998e0;
        case 0x7998e4u: goto label_7998e4;
        case 0x7998e8u: goto label_7998e8;
        case 0x7998ecu: goto label_7998ec;
        case 0x7998f0u: goto label_7998f0;
        case 0x7998f4u: goto label_7998f4;
        case 0x7998f8u: goto label_7998f8;
        case 0x7998fcu: goto label_7998fc;
        case 0x799900u: goto label_799900;
        case 0x799904u: goto label_799904;
        case 0x799908u: goto label_799908;
        case 0x79990cu: goto label_79990c;
        case 0x799910u: goto label_799910;
        case 0x799914u: goto label_799914;
        case 0x799918u: goto label_799918;
        case 0x79991cu: goto label_79991c;
        case 0x799920u: goto label_799920;
        case 0x799924u: goto label_799924;
        case 0x799928u: goto label_799928;
        case 0x79992cu: goto label_79992c;
        case 0x799930u: goto label_799930;
        case 0x799934u: goto label_799934;
        case 0x799938u: goto label_799938;
        case 0x79993cu: goto label_79993c;
        case 0x799940u: goto label_799940;
        case 0x799944u: goto label_799944;
        case 0x799948u: goto label_799948;
        case 0x79994cu: goto label_79994c;
        case 0x799950u: goto label_799950;
        case 0x799954u: goto label_799954;
        case 0x799958u: goto label_799958;
        case 0x79995cu: goto label_79995c;
        case 0x799960u: goto label_799960;
        case 0x799964u: goto label_799964;
        case 0x799968u: goto label_799968;
        case 0x79996cu: goto label_79996c;
        case 0x799970u: goto label_799970;
        case 0x799974u: goto label_799974;
        case 0x799978u: goto label_799978;
        case 0x79997cu: goto label_79997c;
        case 0x799980u: goto label_799980;
        case 0x799984u: goto label_799984;
        case 0x799988u: goto label_799988;
        case 0x79998cu: goto label_79998c;
        case 0x799990u: goto label_799990;
        case 0x799994u: goto label_799994;
        case 0x799998u: goto label_799998;
        case 0x79999cu: goto label_79999c;
        case 0x7999a0u: goto label_7999a0;
        case 0x7999a4u: goto label_7999a4;
        case 0x7999a8u: goto label_7999a8;
        case 0x7999acu: goto label_7999ac;
        case 0x7999b0u: goto label_7999b0;
        case 0x7999b4u: goto label_7999b4;
        case 0x7999b8u: goto label_7999b8;
        case 0x7999bcu: goto label_7999bc;
        case 0x7999c0u: goto label_7999c0;
        case 0x7999c4u: goto label_7999c4;
        case 0x7999c8u: goto label_7999c8;
        case 0x7999ccu: goto label_7999cc;
        case 0x7999d0u: goto label_7999d0;
        case 0x7999d4u: goto label_7999d4;
        case 0x7999d8u: goto label_7999d8;
        case 0x7999dcu: goto label_7999dc;
        case 0x7999e0u: goto label_7999e0;
        case 0x7999e4u: goto label_7999e4;
        case 0x7999e8u: goto label_7999e8;
        case 0x7999ecu: goto label_7999ec;
        case 0x7999f0u: goto label_7999f0;
        case 0x7999f4u: goto label_7999f4;
        case 0x7999f8u: goto label_7999f8;
        case 0x7999fcu: goto label_7999fc;
        case 0x799a00u: goto label_799a00;
        case 0x799a04u: goto label_799a04;
        case 0x799a08u: goto label_799a08;
        case 0x799a0cu: goto label_799a0c;
        case 0x799a10u: goto label_799a10;
        case 0x799a14u: goto label_799a14;
        case 0x799a18u: goto label_799a18;
        case 0x799a1cu: goto label_799a1c;
        case 0x799a20u: goto label_799a20;
        case 0x799a24u: goto label_799a24;
        case 0x799a28u: goto label_799a28;
        case 0x799a2cu: goto label_799a2c;
        case 0x799a30u: goto label_799a30;
        case 0x799a34u: goto label_799a34;
        case 0x799a38u: goto label_799a38;
        case 0x799a3cu: goto label_799a3c;
        case 0x799a40u: goto label_799a40;
        case 0x799a44u: goto label_799a44;
        case 0x799a48u: goto label_799a48;
        case 0x799a4cu: goto label_799a4c;
        case 0x799a50u: goto label_799a50;
        case 0x799a54u: goto label_799a54;
        case 0x799a58u: goto label_799a58;
        case 0x799a5cu: goto label_799a5c;
        case 0x799a60u: goto label_799a60;
        case 0x799a64u: goto label_799a64;
        case 0x799a68u: goto label_799a68;
        case 0x799a6cu: goto label_799a6c;
        case 0x799a70u: goto label_799a70;
        case 0x799a74u: goto label_799a74;
        case 0x799a78u: goto label_799a78;
        case 0x799a7cu: goto label_799a7c;
        case 0x799a80u: goto label_799a80;
        case 0x799a84u: goto label_799a84;
        case 0x799a88u: goto label_799a88;
        case 0x799a8cu: goto label_799a8c;
        case 0x799a90u: goto label_799a90;
        case 0x799a94u: goto label_799a94;
        case 0x799a98u: goto label_799a98;
        case 0x799a9cu: goto label_799a9c;
        case 0x799aa0u: goto label_799aa0;
        case 0x799aa4u: goto label_799aa4;
        case 0x799aa8u: goto label_799aa8;
        case 0x799aacu: goto label_799aac;
        case 0x799ab0u: goto label_799ab0;
        case 0x799ab4u: goto label_799ab4;
        case 0x799ab8u: goto label_799ab8;
        case 0x799abcu: goto label_799abc;
        case 0x799ac0u: goto label_799ac0;
        case 0x799ac4u: goto label_799ac4;
        case 0x799ac8u: goto label_799ac8;
        case 0x799accu: goto label_799acc;
        case 0x799ad0u: goto label_799ad0;
        case 0x799ad4u: goto label_799ad4;
        case 0x799ad8u: goto label_799ad8;
        case 0x799adcu: goto label_799adc;
        case 0x799ae0u: goto label_799ae0;
        case 0x799ae4u: goto label_799ae4;
        case 0x799ae8u: goto label_799ae8;
        case 0x799aecu: goto label_799aec;
        case 0x799af0u: goto label_799af0;
        case 0x799af4u: goto label_799af4;
        case 0x799af8u: goto label_799af8;
        case 0x799afcu: goto label_799afc;
        case 0x799b00u: goto label_799b00;
        case 0x799b04u: goto label_799b04;
        case 0x799b08u: goto label_799b08;
        case 0x799b0cu: goto label_799b0c;
        case 0x799b10u: goto label_799b10;
        case 0x799b14u: goto label_799b14;
        case 0x799b18u: goto label_799b18;
        case 0x799b1cu: goto label_799b1c;
        case 0x799b20u: goto label_799b20;
        case 0x799b24u: goto label_799b24;
        case 0x799b28u: goto label_799b28;
        case 0x799b2cu: goto label_799b2c;
        case 0x799b30u: goto label_799b30;
        case 0x799b34u: goto label_799b34;
        case 0x799b38u: goto label_799b38;
        case 0x799b3cu: goto label_799b3c;
        case 0x799b40u: goto label_799b40;
        case 0x799b44u: goto label_799b44;
        case 0x799b48u: goto label_799b48;
        case 0x799b4cu: goto label_799b4c;
        case 0x799b50u: goto label_799b50;
        case 0x799b54u: goto label_799b54;
        case 0x799b58u: goto label_799b58;
        case 0x799b5cu: goto label_799b5c;
        case 0x799b60u: goto label_799b60;
        case 0x799b64u: goto label_799b64;
        case 0x799b68u: goto label_799b68;
        case 0x799b6cu: goto label_799b6c;
        case 0x799b70u: goto label_799b70;
        case 0x799b74u: goto label_799b74;
        case 0x799b78u: goto label_799b78;
        case 0x799b7cu: goto label_799b7c;
        case 0x799b80u: goto label_799b80;
        case 0x799b84u: goto label_799b84;
        case 0x799b88u: goto label_799b88;
        case 0x799b8cu: goto label_799b8c;
        case 0x799b90u: goto label_799b90;
        case 0x799b94u: goto label_799b94;
        case 0x799b98u: goto label_799b98;
        case 0x799b9cu: goto label_799b9c;
        case 0x799ba0u: goto label_799ba0;
        case 0x799ba4u: goto label_799ba4;
        case 0x799ba8u: goto label_799ba8;
        case 0x799bacu: goto label_799bac;
        case 0x799bb0u: goto label_799bb0;
        case 0x799bb4u: goto label_799bb4;
        case 0x799bb8u: goto label_799bb8;
        case 0x799bbcu: goto label_799bbc;
        case 0x799bc0u: goto label_799bc0;
        case 0x799bc4u: goto label_799bc4;
        case 0x799bc8u: goto label_799bc8;
        case 0x799bccu: goto label_799bcc;
        case 0x799bd0u: goto label_799bd0;
        case 0x799bd4u: goto label_799bd4;
        case 0x799bd8u: goto label_799bd8;
        case 0x799bdcu: goto label_799bdc;
        case 0x799be0u: goto label_799be0;
        case 0x799be4u: goto label_799be4;
        case 0x799be8u: goto label_799be8;
        case 0x799becu: goto label_799bec;
        case 0x799bf0u: goto label_799bf0;
        case 0x799bf4u: goto label_799bf4;
        case 0x799bf8u: goto label_799bf8;
        case 0x799bfcu: goto label_799bfc;
        case 0x799c00u: goto label_799c00;
        case 0x799c04u: goto label_799c04;
        case 0x799c08u: goto label_799c08;
        case 0x799c0cu: goto label_799c0c;
        case 0x799c10u: goto label_799c10;
        case 0x799c14u: goto label_799c14;
        case 0x799c18u: goto label_799c18;
        case 0x799c1cu: goto label_799c1c;
        case 0x799c20u: goto label_799c20;
        case 0x799c24u: goto label_799c24;
        case 0x799c28u: goto label_799c28;
        case 0x799c2cu: goto label_799c2c;
        case 0x799c30u: goto label_799c30;
        case 0x799c34u: goto label_799c34;
        case 0x799c38u: goto label_799c38;
        case 0x799c3cu: goto label_799c3c;
        case 0x799c40u: goto label_799c40;
        case 0x799c44u: goto label_799c44;
        case 0x799c48u: goto label_799c48;
        case 0x799c4cu: goto label_799c4c;
        case 0x799c50u: goto label_799c50;
        case 0x799c54u: goto label_799c54;
        case 0x799c58u: goto label_799c58;
        case 0x799c5cu: goto label_799c5c;
        case 0x799c60u: goto label_799c60;
        case 0x799c64u: goto label_799c64;
        case 0x799c68u: goto label_799c68;
        case 0x799c6cu: goto label_799c6c;
        case 0x799c70u: goto label_799c70;
        case 0x799c74u: goto label_799c74;
        case 0x799c78u: goto label_799c78;
        case 0x799c7cu: goto label_799c7c;
        case 0x799c80u: goto label_799c80;
        case 0x799c84u: goto label_799c84;
        case 0x799c88u: goto label_799c88;
        case 0x799c8cu: goto label_799c8c;
        case 0x799c90u: goto label_799c90;
        case 0x799c94u: goto label_799c94;
        case 0x799c98u: goto label_799c98;
        case 0x799c9cu: goto label_799c9c;
        case 0x799ca0u: goto label_799ca0;
        case 0x799ca4u: goto label_799ca4;
        case 0x799ca8u: goto label_799ca8;
        case 0x799cacu: goto label_799cac;
        case 0x799cb0u: goto label_799cb0;
        case 0x799cb4u: goto label_799cb4;
        case 0x799cb8u: goto label_799cb8;
        case 0x799cbcu: goto label_799cbc;
        case 0x799cc0u: goto label_799cc0;
        case 0x799cc4u: goto label_799cc4;
        case 0x799cc8u: goto label_799cc8;
        case 0x799cccu: goto label_799ccc;
        case 0x799cd0u: goto label_799cd0;
        case 0x799cd4u: goto label_799cd4;
        case 0x799cd8u: goto label_799cd8;
        case 0x799cdcu: goto label_799cdc;
        case 0x799ce0u: goto label_799ce0;
        case 0x799ce4u: goto label_799ce4;
        case 0x799ce8u: goto label_799ce8;
        case 0x799cecu: goto label_799cec;
        case 0x799cf0u: goto label_799cf0;
        case 0x799cf4u: goto label_799cf4;
        case 0x799cf8u: goto label_799cf8;
        case 0x799cfcu: goto label_799cfc;
        case 0x799d00u: goto label_799d00;
        case 0x799d04u: goto label_799d04;
        case 0x799d08u: goto label_799d08;
        case 0x799d0cu: goto label_799d0c;
        case 0x799d10u: goto label_799d10;
        case 0x799d14u: goto label_799d14;
        case 0x799d18u: goto label_799d18;
        case 0x799d1cu: goto label_799d1c;
        case 0x799d20u: goto label_799d20;
        case 0x799d24u: goto label_799d24;
        case 0x799d28u: goto label_799d28;
        case 0x799d2cu: goto label_799d2c;
        case 0x799d30u: goto label_799d30;
        case 0x799d34u: goto label_799d34;
        case 0x799d38u: goto label_799d38;
        case 0x799d3cu: goto label_799d3c;
        case 0x799d40u: goto label_799d40;
        case 0x799d44u: goto label_799d44;
        case 0x799d48u: goto label_799d48;
        case 0x799d4cu: goto label_799d4c;
        case 0x799d50u: goto label_799d50;
        case 0x799d54u: goto label_799d54;
        case 0x799d58u: goto label_799d58;
        case 0x799d5cu: goto label_799d5c;
        case 0x799d60u: goto label_799d60;
        case 0x799d64u: goto label_799d64;
        case 0x799d68u: goto label_799d68;
        case 0x799d6cu: goto label_799d6c;
        case 0x799d70u: goto label_799d70;
        case 0x799d74u: goto label_799d74;
        case 0x799d78u: goto label_799d78;
        case 0x799d7cu: goto label_799d7c;
        case 0x799d80u: goto label_799d80;
        case 0x799d84u: goto label_799d84;
        case 0x799d88u: goto label_799d88;
        case 0x799d8cu: goto label_799d8c;
        case 0x799d90u: goto label_799d90;
        case 0x799d94u: goto label_799d94;
        case 0x799d98u: goto label_799d98;
        case 0x799d9cu: goto label_799d9c;
        case 0x799da0u: goto label_799da0;
        case 0x799da4u: goto label_799da4;
        case 0x799da8u: goto label_799da8;
        case 0x799dacu: goto label_799dac;
        case 0x799db0u: goto label_799db0;
        case 0x799db4u: goto label_799db4;
        case 0x799db8u: goto label_799db8;
        case 0x799dbcu: goto label_799dbc;
        case 0x799dc0u: goto label_799dc0;
        case 0x799dc4u: goto label_799dc4;
        case 0x799dc8u: goto label_799dc8;
        case 0x799dccu: goto label_799dcc;
        case 0x799dd0u: goto label_799dd0;
        case 0x799dd4u: goto label_799dd4;
        case 0x799dd8u: goto label_799dd8;
        case 0x799ddcu: goto label_799ddc;
        case 0x799de0u: goto label_799de0;
        case 0x799de4u: goto label_799de4;
        case 0x799de8u: goto label_799de8;
        case 0x799decu: goto label_799dec;
        case 0x799df0u: goto label_799df0;
        case 0x799df4u: goto label_799df4;
        case 0x799df8u: goto label_799df8;
        case 0x799dfcu: goto label_799dfc;
        case 0x799e00u: goto label_799e00;
        case 0x799e04u: goto label_799e04;
        case 0x799e08u: goto label_799e08;
        case 0x799e0cu: goto label_799e0c;
        case 0x799e10u: goto label_799e10;
        case 0x799e14u: goto label_799e14;
        case 0x799e18u: goto label_799e18;
        case 0x799e1cu: goto label_799e1c;
        case 0x799e20u: goto label_799e20;
        case 0x799e24u: goto label_799e24;
        case 0x799e28u: goto label_799e28;
        case 0x799e2cu: goto label_799e2c;
        case 0x799e30u: goto label_799e30;
        case 0x799e34u: goto label_799e34;
        case 0x799e38u: goto label_799e38;
        case 0x799e3cu: goto label_799e3c;
        case 0x799e40u: goto label_799e40;
        case 0x799e44u: goto label_799e44;
        case 0x799e48u: goto label_799e48;
        case 0x799e4cu: goto label_799e4c;
        case 0x799e50u: goto label_799e50;
        case 0x799e54u: goto label_799e54;
        case 0x799e58u: goto label_799e58;
        case 0x799e5cu: goto label_799e5c;
        case 0x799e60u: goto label_799e60;
        case 0x799e64u: goto label_799e64;
        case 0x799e68u: goto label_799e68;
        case 0x799e6cu: goto label_799e6c;
        case 0x799e70u: goto label_799e70;
        case 0x799e74u: goto label_799e74;
        case 0x799e78u: goto label_799e78;
        case 0x799e7cu: goto label_799e7c;
        case 0x799e80u: goto label_799e80;
        case 0x799e84u: goto label_799e84;
        case 0x799e88u: goto label_799e88;
        case 0x799e8cu: goto label_799e8c;
        case 0x799e90u: goto label_799e90;
        case 0x799e94u: goto label_799e94;
        case 0x799e98u: goto label_799e98;
        case 0x799e9cu: goto label_799e9c;
        case 0x799ea0u: goto label_799ea0;
        case 0x799ea4u: goto label_799ea4;
        case 0x799ea8u: goto label_799ea8;
        case 0x799eacu: goto label_799eac;
        case 0x799eb0u: goto label_799eb0;
        case 0x799eb4u: goto label_799eb4;
        case 0x799eb8u: goto label_799eb8;
        case 0x799ebcu: goto label_799ebc;
        case 0x799ec0u: goto label_799ec0;
        case 0x799ec4u: goto label_799ec4;
        case 0x799ec8u: goto label_799ec8;
        case 0x799eccu: goto label_799ecc;
        case 0x799ed0u: goto label_799ed0;
        case 0x799ed4u: goto label_799ed4;
        case 0x799ed8u: goto label_799ed8;
        case 0x799edcu: goto label_799edc;
        case 0x799ee0u: goto label_799ee0;
        case 0x799ee4u: goto label_799ee4;
        case 0x799ee8u: goto label_799ee8;
        case 0x799eecu: goto label_799eec;
        case 0x799ef0u: goto label_799ef0;
        case 0x799ef4u: goto label_799ef4;
        case 0x799ef8u: goto label_799ef8;
        case 0x799efcu: goto label_799efc;
        case 0x799f00u: goto label_799f00;
        case 0x799f04u: goto label_799f04;
        case 0x799f08u: goto label_799f08;
        case 0x799f0cu: goto label_799f0c;
        case 0x799f10u: goto label_799f10;
        case 0x799f14u: goto label_799f14;
        case 0x799f18u: goto label_799f18;
        case 0x799f1cu: goto label_799f1c;
        case 0x799f20u: goto label_799f20;
        case 0x799f24u: goto label_799f24;
        case 0x799f28u: goto label_799f28;
        case 0x799f2cu: goto label_799f2c;
        case 0x799f30u: goto label_799f30;
        case 0x799f34u: goto label_799f34;
        case 0x799f38u: goto label_799f38;
        case 0x799f3cu: goto label_799f3c;
        case 0x799f40u: goto label_799f40;
        case 0x799f44u: goto label_799f44;
        case 0x799f48u: goto label_799f48;
        case 0x799f4cu: goto label_799f4c;
        case 0x799f50u: goto label_799f50;
        case 0x799f54u: goto label_799f54;
        case 0x799f58u: goto label_799f58;
        case 0x799f5cu: goto label_799f5c;
        case 0x799f60u: goto label_799f60;
        case 0x799f64u: goto label_799f64;
        case 0x799f68u: goto label_799f68;
        case 0x799f6cu: goto label_799f6c;
        case 0x799f70u: goto label_799f70;
        case 0x799f74u: goto label_799f74;
        case 0x799f78u: goto label_799f78;
        case 0x799f7cu: goto label_799f7c;
        case 0x799f80u: goto label_799f80;
        case 0x799f84u: goto label_799f84;
        case 0x799f88u: goto label_799f88;
        case 0x799f8cu: goto label_799f8c;
        case 0x799f90u: goto label_799f90;
        case 0x799f94u: goto label_799f94;
        case 0x799f98u: goto label_799f98;
        case 0x799f9cu: goto label_799f9c;
        case 0x799fa0u: goto label_799fa0;
        case 0x799fa4u: goto label_799fa4;
        case 0x799fa8u: goto label_799fa8;
        case 0x799facu: goto label_799fac;
        case 0x799fb0u: goto label_799fb0;
        case 0x799fb4u: goto label_799fb4;
        case 0x799fb8u: goto label_799fb8;
        case 0x799fbcu: goto label_799fbc;
        case 0x799fc0u: goto label_799fc0;
        case 0x799fc4u: goto label_799fc4;
        case 0x799fc8u: goto label_799fc8;
        case 0x799fccu: goto label_799fcc;
        case 0x799fd0u: goto label_799fd0;
        case 0x799fd4u: goto label_799fd4;
        case 0x799fd8u: goto label_799fd8;
        case 0x799fdcu: goto label_799fdc;
        case 0x799fe0u: goto label_799fe0;
        case 0x799fe4u: goto label_799fe4;
        case 0x799fe8u: goto label_799fe8;
        case 0x799fecu: goto label_799fec;
        case 0x799ff0u: goto label_799ff0;
        case 0x799ff4u: goto label_799ff4;
        case 0x799ff8u: goto label_799ff8;
        case 0x799ffcu: goto label_799ffc;
        case 0x79a000u: goto label_79a000;
        case 0x79a004u: goto label_79a004;
        case 0x79a008u: goto label_79a008;
        case 0x79a00cu: goto label_79a00c;
        case 0x79a010u: goto label_79a010;
        case 0x79a014u: goto label_79a014;
        case 0x79a018u: goto label_79a018;
        case 0x79a01cu: goto label_79a01c;
        case 0x79a020u: goto label_79a020;
        case 0x79a024u: goto label_79a024;
        case 0x79a028u: goto label_79a028;
        case 0x79a02cu: goto label_79a02c;
        case 0x79a030u: goto label_79a030;
        case 0x79a034u: goto label_79a034;
        case 0x79a038u: goto label_79a038;
        case 0x79a03cu: goto label_79a03c;
        case 0x79a040u: goto label_79a040;
        case 0x79a044u: goto label_79a044;
        case 0x79a048u: goto label_79a048;
        case 0x79a04cu: goto label_79a04c;
        case 0x79a050u: goto label_79a050;
        case 0x79a054u: goto label_79a054;
        case 0x79a058u: goto label_79a058;
        case 0x79a05cu: goto label_79a05c;
        case 0x79a060u: goto label_79a060;
        case 0x79a064u: goto label_79a064;
        case 0x79a068u: goto label_79a068;
        case 0x79a06cu: goto label_79a06c;
        case 0x79a070u: goto label_79a070;
        case 0x79a074u: goto label_79a074;
        case 0x79a078u: goto label_79a078;
        case 0x79a07cu: goto label_79a07c;
        case 0x79a080u: goto label_79a080;
        case 0x79a084u: goto label_79a084;
        case 0x79a088u: goto label_79a088;
        case 0x79a08cu: goto label_79a08c;
        case 0x79a090u: goto label_79a090;
        case 0x79a094u: goto label_79a094;
        case 0x79a098u: goto label_79a098;
        case 0x79a09cu: goto label_79a09c;
        case 0x79a0a0u: goto label_79a0a0;
        case 0x79a0a4u: goto label_79a0a4;
        case 0x79a0a8u: goto label_79a0a8;
        case 0x79a0acu: goto label_79a0ac;
        case 0x79a0b0u: goto label_79a0b0;
        case 0x79a0b4u: goto label_79a0b4;
        case 0x79a0b8u: goto label_79a0b8;
        case 0x79a0bcu: goto label_79a0bc;
        case 0x79a0c0u: goto label_79a0c0;
        case 0x79a0c4u: goto label_79a0c4;
        case 0x79a0c8u: goto label_79a0c8;
        case 0x79a0ccu: goto label_79a0cc;
        case 0x79a0d0u: goto label_79a0d0;
        case 0x79a0d4u: goto label_79a0d4;
        case 0x79a0d8u: goto label_79a0d8;
        case 0x79a0dcu: goto label_79a0dc;
        case 0x79a0e0u: goto label_79a0e0;
        case 0x79a0e4u: goto label_79a0e4;
        case 0x79a0e8u: goto label_79a0e8;
        case 0x79a0ecu: goto label_79a0ec;
        case 0x79a0f0u: goto label_79a0f0;
        case 0x79a0f4u: goto label_79a0f4;
        case 0x79a0f8u: goto label_79a0f8;
        case 0x79a0fcu: goto label_79a0fc;
        case 0x79a100u: goto label_79a100;
        case 0x79a104u: goto label_79a104;
        case 0x79a108u: goto label_79a108;
        case 0x79a10cu: goto label_79a10c;
        case 0x79a110u: goto label_79a110;
        case 0x79a114u: goto label_79a114;
        case 0x79a118u: goto label_79a118;
        case 0x79a11cu: goto label_79a11c;
        case 0x79a120u: goto label_79a120;
        case 0x79a124u: goto label_79a124;
        case 0x79a128u: goto label_79a128;
        case 0x79a12cu: goto label_79a12c;
        case 0x79a130u: goto label_79a130;
        case 0x79a134u: goto label_79a134;
        case 0x79a138u: goto label_79a138;
        case 0x79a13cu: goto label_79a13c;
        case 0x79a140u: goto label_79a140;
        case 0x79a144u: goto label_79a144;
        case 0x79a148u: goto label_79a148;
        case 0x79a14cu: goto label_79a14c;
        case 0x79a150u: goto label_79a150;
        case 0x79a154u: goto label_79a154;
        case 0x79a158u: goto label_79a158;
        case 0x79a15cu: goto label_79a15c;
        case 0x79a160u: goto label_79a160;
        case 0x79a164u: goto label_79a164;
        case 0x79a168u: goto label_79a168;
        case 0x79a16cu: goto label_79a16c;
        case 0x79a170u: goto label_79a170;
        case 0x79a174u: goto label_79a174;
        case 0x79a178u: goto label_79a178;
        case 0x79a17cu: goto label_79a17c;
        case 0x79a180u: goto label_79a180;
        case 0x79a184u: goto label_79a184;
        case 0x79a188u: goto label_79a188;
        case 0x79a18cu: goto label_79a18c;
        case 0x79a190u: goto label_79a190;
        case 0x79a194u: goto label_79a194;
        case 0x79a198u: goto label_79a198;
        case 0x79a19cu: goto label_79a19c;
        case 0x79a1a0u: goto label_79a1a0;
        case 0x79a1a4u: goto label_79a1a4;
        case 0x79a1a8u: goto label_79a1a8;
        case 0x79a1acu: goto label_79a1ac;
        case 0x79a1b0u: goto label_79a1b0;
        case 0x79a1b4u: goto label_79a1b4;
        case 0x79a1b8u: goto label_79a1b8;
        case 0x79a1bcu: goto label_79a1bc;
        case 0x79a1c0u: goto label_79a1c0;
        case 0x79a1c4u: goto label_79a1c4;
        case 0x79a1c8u: goto label_79a1c8;
        case 0x79a1ccu: goto label_79a1cc;
        case 0x79a1d0u: goto label_79a1d0;
        case 0x79a1d4u: goto label_79a1d4;
        case 0x79a1d8u: goto label_79a1d8;
        case 0x79a1dcu: goto label_79a1dc;
        case 0x79a1e0u: goto label_79a1e0;
        case 0x79a1e4u: goto label_79a1e4;
        case 0x79a1e8u: goto label_79a1e8;
        case 0x79a1ecu: goto label_79a1ec;
        case 0x79a1f0u: goto label_79a1f0;
        case 0x79a1f4u: goto label_79a1f4;
        case 0x79a1f8u: goto label_79a1f8;
        case 0x79a1fcu: goto label_79a1fc;
        case 0x79a200u: goto label_79a200;
        case 0x79a204u: goto label_79a204;
        case 0x79a208u: goto label_79a208;
        case 0x79a20cu: goto label_79a20c;
        case 0x79a210u: goto label_79a210;
        case 0x79a214u: goto label_79a214;
        case 0x79a218u: goto label_79a218;
        case 0x79a21cu: goto label_79a21c;
        case 0x79a220u: goto label_79a220;
        case 0x79a224u: goto label_79a224;
        case 0x79a228u: goto label_79a228;
        case 0x79a22cu: goto label_79a22c;
        case 0x79a230u: goto label_79a230;
        case 0x79a234u: goto label_79a234;
        case 0x79a238u: goto label_79a238;
        case 0x79a23cu: goto label_79a23c;
        case 0x79a240u: goto label_79a240;
        case 0x79a244u: goto label_79a244;
        case 0x79a248u: goto label_79a248;
        case 0x79a24cu: goto label_79a24c;
        default: break;
    }

    ctx->pc = 0x7996f0u;

label_7996f0:
    // 0x7996f0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x7996f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_7996f4:
    // 0x7996f4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x7996f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_7996f8:
    // 0x7996f8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7996f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_7996fc:
    // 0x7996fc: 0x7fb60100  sq          $s6, 0x100($sp)
    ctx->pc = 0x7996fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 22));
label_799700:
    // 0x799700: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799704:
    // 0x799704: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x799704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
label_799708:
    // 0x799708: 0x3c160060  lui         $s6, 0x60
    ctx->pc = 0x799708u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
label_79970c:
    // 0x79970c: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x79970cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
label_799710:
    // 0x799710: 0x26d0ea60  addiu       $s0, $s6, -0x15A0
    ctx->pc = 0x799710u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961760));
label_799714:
    // 0x799714: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x799714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
label_799718:
    // 0x799718: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x799718u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
label_79971c:
    // 0x79971c: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x79971cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
label_799720:
    // 0x799720: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x799720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
label_799724:
    // 0x799724: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x799724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
label_799728:
    // 0x799728: 0x7fb700f0  sq          $s7, 0xF0($sp)
    ctx->pc = 0x799728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 23));
label_79972c:
    // 0x79972c: 0x7fbe00e0  sq          $fp, 0xE0($sp)
    ctx->pc = 0x79972cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 30));
label_799730:
    // 0x799730: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x799730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_799734:
    // 0x799734: 0xe7b70188  swc1        $f23, 0x188($sp)
    ctx->pc = 0x799734u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_799738:
    // 0x799738: 0xe7b60180  swc1        $f22, 0x180($sp)
    ctx->pc = 0x799738u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_79973c:
    // 0x79973c: 0xe7b50178  swc1        $f21, 0x178($sp)
    ctx->pc = 0x79973cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_799740:
    // 0x799740: 0xc0b42ae  jal         func_2D0AB8
label_799744:
    if (ctx->pc == 0x799744u) {
        ctx->pc = 0x799744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799740u;
        // 0x799744: 0xe7b40170  swc1        $f20, 0x170($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x799748u;
        goto label_799748;
    }
    ctx->pc = 0x799740u;
    SET_GPR_U32(ctx, 31, 0x799748u);
    ctx->pc = 0x799744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799740u;
    // 0x799744: 0xe7b40170  swc1        $f20, 0x170($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x799740u, 0x799748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799748u;
label_799748:
    // 0x799748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79974c:
    // 0x79974c: 0xc0b0ab8  jal         func_2C2AE0
label_799750:
    if (ctx->pc == 0x799750u) {
        ctx->pc = 0x799750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79974Cu;
        // 0x799750: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799754u;
        goto label_799754;
    }
    ctx->pc = 0x79974Cu;
    SET_GPR_U32(ctx, 31, 0x799754u);
    ctx->pc = 0x799750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79974Cu;
    // 0x799750: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x79974Cu, 0x799754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799754u;
label_799754:
    // 0x799754: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799758:
    // 0x799758: 0xc0b0a68  jal         func_2C29A0
label_79975c:
    if (ctx->pc == 0x79975Cu) {
        ctx->pc = 0x79975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799758u;
        // 0x79975c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799760u;
        goto label_799760;
    }
    ctx->pc = 0x799758u;
    SET_GPR_U32(ctx, 31, 0x799760u);
    ctx->pc = 0x79975Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799758u;
    // 0x79975c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29A0u, 0x799758u, 0x799760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799760u;
label_799760:
    // 0x799760: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x799760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_799764:
    // 0x799764: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799764u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_799768:
    // 0x799768: 0x24a592d8  addiu       $a1, $a1, -0x6D28
    ctx->pc = 0x799768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939352));
label_79976c:
    // 0x79976c: 0xc0b0e24  jal         func_2C3890
label_799770:
    if (ctx->pc == 0x799770u) {
        ctx->pc = 0x799770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79976Cu;
        // 0x799770: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799774u;
        goto label_799774;
    }
    ctx->pc = 0x79976Cu;
    SET_GPR_U32(ctx, 31, 0x799774u);
    ctx->pc = 0x799770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79976Cu;
    // 0x799770: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79976Cu, 0x799774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799774u;
label_799774:
    // 0x799774: 0x8ea32f84  lw          $v1, 0x2F84($s5)
    ctx->pc = 0x799774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_799778:
    // 0x799778: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x799778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_79977c:
    // 0x79977c: 0xc0b56a8  jal         func_2D5AA0
label_799780:
    if (ctx->pc == 0x799780u) {
        ctx->pc = 0x799780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79977Cu;
        // 0x799780: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799784u;
        goto label_799784;
    }
    ctx->pc = 0x79977Cu;
    SET_GPR_U32(ctx, 31, 0x799784u);
    ctx->pc = 0x799780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79977Cu;
    // 0x799780: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79977Cu, 0x799784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799784u;
label_799784:
    // 0x799784: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x799784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799788:
    // 0x799788: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x799788u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
label_79978c:
    // 0x79978c: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x79978cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
label_799790:
    // 0x799790: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x799790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_799794:
    // 0x799794: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x799794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_799798:
    // 0x799798: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x799798u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_79979c:
    // 0x79979c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79979cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7997a0:
    // 0x7997a0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x7997a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_7997a4:
    // 0x7997a4: 0xc0b0a92  jal         func_2C2A48
label_7997a8:
    if (ctx->pc == 0x7997A8u) {
        ctx->pc = 0x7997A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997A4u;
        // 0x7997a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997ACu;
        goto label_7997ac;
    }
    ctx->pc = 0x7997A4u;
    SET_GPR_U32(ctx, 31, 0x7997ACu);
    ctx->pc = 0x7997A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997A4u;
    // 0x7997a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x7997A4u, 0x7997ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997ACu;
label_7997ac:
    // 0x7997ac: 0x3c130074  lui         $s3, 0x74
    ctx->pc = 0x7997acu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)116 << 16));
label_7997b0:
    // 0x7997b0: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x7997b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_7997b4:
    // 0x7997b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7997b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7997b8:
    // 0x7997b8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x7997b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_7997bc:
    // 0x7997bc: 0xc0b0a92  jal         func_2C2A48
label_7997c0:
    if (ctx->pc == 0x7997C0u) {
        ctx->pc = 0x7997C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997BCu;
        // 0x7997c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997C4u;
        goto label_7997c4;
    }
    ctx->pc = 0x7997BCu;
    SET_GPR_U32(ctx, 31, 0x7997C4u);
    ctx->pc = 0x7997C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997BCu;
    // 0x7997c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x7997BCu, 0x7997C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997C4u;
label_7997c4:
    // 0x7997c4: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x7997c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
label_7997c8:
    // 0x7997c8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x7997c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_7997cc:
    // 0x7997cc: 0x8e627a8c  lw          $v0, 0x7A8C($s3)
    ctx->pc = 0x7997ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 31372)));
label_7997d0:
    // 0x7997d0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x7997d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_7997d4:
    // 0x7997d4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x7997d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_7997d8:
    // 0x7997d8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x7997d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_7997dc:
    // 0x7997dc: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x7997dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_7997e0:
    // 0x7997e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x7997e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_7997e4:
    // 0x7997e4: 0xa3a40040  sb          $a0, 0x40($sp)
    ctx->pc = 0x7997e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 4));
label_7997e8:
    // 0x7997e8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x7997e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_7997ec:
    // 0x7997ec: 0xa3a50050  sb          $a1, 0x50($sp)
    ctx->pc = 0x7997ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 5));
label_7997f0:
    // 0x7997f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7997f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7997f4:
    // 0x7997f4: 0xae627a8c  sw          $v0, 0x7A8C($s3)
    ctx->pc = 0x7997f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 31372), GPR_U32(ctx, 2));
label_7997f8:
    // 0x7997f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x7997f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_7997fc:
    // 0x7997fc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x7997fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799800:
    // 0x799800: 0xc0a57e0  jal         func_295F80
label_799804:
    if (ctx->pc == 0x799804u) {
        ctx->pc = 0x799804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799800u;
        // 0x799804: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799808u;
        goto label_799808;
    }
    ctx->pc = 0x799800u;
    SET_GPR_U32(ctx, 31, 0x799808u);
    ctx->pc = 0x799804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799800u;
    // 0x799804: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799800u, 0x799808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799808u;
label_799808:
    // 0x799808: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x799808u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79980c:
    // 0x79980c: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x79980cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_799810:
    // 0x799810: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799810u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_799814:
    // 0x799814: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799818:
    // 0x799818: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799818u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79981c:
    // 0x79981c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79981cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799820:
    // 0x799820: 0xc0a57e0  jal         func_295F80
label_799824:
    if (ctx->pc == 0x799824u) {
        ctx->pc = 0x799824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799820u;
        // 0x799824: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799828u;
        goto label_799828;
    }
    ctx->pc = 0x799820u;
    SET_GPR_U32(ctx, 31, 0x799828u);
    ctx->pc = 0x799824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799820u;
    // 0x799824: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799820u, 0x799828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799828u;
label_799828:
    // 0x799828: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x799828u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79982c:
    // 0x79982c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79982cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_799830:
    // 0x799830: 0xc0a5704  jal         func_295C10
label_799834:
    if (ctx->pc == 0x799834u) {
        ctx->pc = 0x799834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799830u;
        // 0x799834: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799838u;
        goto label_799838;
    }
    ctx->pc = 0x799830u;
    SET_GPR_U32(ctx, 31, 0x799838u);
    ctx->pc = 0x799834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799830u;
    // 0x799834: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C10u, 0x799830u, 0x799838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799838u;
label_799838:
    // 0x799838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79983c:
    // 0x79983c: 0xc0a5704  jal         func_295C10
label_799840:
    if (ctx->pc == 0x799840u) {
        ctx->pc = 0x799840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79983Cu;
        // 0x799840: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799844u;
        goto label_799844;
    }
    ctx->pc = 0x79983Cu;
    SET_GPR_U32(ctx, 31, 0x799844u);
    ctx->pc = 0x799840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79983Cu;
    // 0x799840: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C10u, 0x79983Cu, 0x799844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799844u;
label_799844:
    // 0x799844: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799844u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_799848:
    // 0x799848: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x799848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_79984c:
    // 0x79984c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79984cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799850:
    // 0x799850: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x799850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_799854:
    // 0x799854: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799858:
    // 0x799858: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799858u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79985c:
    // 0x79985c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79985cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799860:
    // 0x799860: 0xc0b2e28  jal         func_2CB8A0
label_799864:
    if (ctx->pc == 0x799864u) {
        ctx->pc = 0x799864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799860u;
        // 0x799864: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799868u;
        goto label_799868;
    }
    ctx->pc = 0x799860u;
    SET_GPR_U32(ctx, 31, 0x799868u);
    ctx->pc = 0x799864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799860u;
    // 0x799864: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799860u, 0x799868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799868u;
label_799868:
    // 0x799868: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x799868u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_79986c:
    // 0x79986c: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x79986cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_799870:
    // 0x799870: 0x27b20070  addiu       $s2, $sp, 0x70
    ctx->pc = 0x799870u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_799874:
    // 0x799874: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x799874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_799878:
    // 0x799878: 0x27b60090  addiu       $s6, $sp, 0x90
    ctx->pc = 0x799878u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_79987c:
    // 0x79987c: 0x10000007  b           . + 4 + (0x7 << 2)
label_799880:
    if (ctx->pc == 0x799880u) {
        ctx->pc = 0x799880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79987Cu;
        // 0x799880: 0x27b40010  addiu       $s4, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799884u;
        goto label_799884;
    }
    ctx->pc = 0x79987Cu;
    {
        const bool branch_taken_0x79987c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79987Cu;
        // 0x799880: 0x27b40010  addiu       $s4, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79987c) {
            ctx->pc = 0x79989Cu;
            goto label_79989c;
        }
    }
    ctx->pc = 0x799884u;
label_799884:
    // 0x799884: 0x0  nop
    ctx->pc = 0x799884u;
    // NOP
label_799888:
    // 0x799888: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x799888u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_79988c:
    // 0x79988c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x79988cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_799890:
    // 0x799890: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799894:
    // 0x799894: 0xc0b56a8  jal         func_2D5AA0
label_799898:
    if (ctx->pc == 0x799898u) {
        ctx->pc = 0x799898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799894u;
        // 0x799898: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79989Cu;
        goto label_79989c;
    }
    ctx->pc = 0x799894u;
    SET_GPR_U32(ctx, 31, 0x79989Cu);
    ctx->pc = 0x799898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799894u;
    // 0x799898: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799894u, 0x79989Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79989Cu;
label_79989c:
    // 0x79989c: 0x2fc20709  sltiu       $v0, $fp, 0x709
    ctx->pc = 0x79989cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)1801) ? 1 : 0);
label_7998a0:
    // 0x7998a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_7998a4:
    if (ctx->pc == 0x7998A4u) {
        ctx->pc = 0x7998A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998A0u;
        // 0x7998a4: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998A8u;
        goto label_7998a8;
    }
    ctx->pc = 0x7998A0u;
    {
        const bool branch_taken_0x7998a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998A0u;
        // 0x7998a4: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998a0) {
            ctx->pc = 0x7998D0u;
            goto label_7998d0;
        }
    }
    ctx->pc = 0x7998A8u;
label_7998a8:
    // 0x7998a8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x7998a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_7998ac:
    // 0x7998ac: 0xc0a572a  jal         func_295CA8
label_7998b0:
    if (ctx->pc == 0x7998B0u) {
        ctx->pc = 0x7998B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998ACu;
        // 0x7998b0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998B4u;
        goto label_7998b4;
    }
    ctx->pc = 0x7998ACu;
    SET_GPR_U32(ctx, 31, 0x7998B4u);
    ctx->pc = 0x7998B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998ACu;
    // 0x7998b0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x7998ACu, 0x7998B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998B4u;
label_7998b4:
    // 0x7998b4: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
label_7998b8:
    if (ctx->pc == 0x7998B8u) {
        ctx->pc = 0x7998B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998B4u;
        // 0x7998b8: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998BCu;
        goto label_7998bc;
    }
    ctx->pc = 0x7998B4u;
    {
        const bool branch_taken_0x7998b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x7998B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998B4u;
        // 0x7998b8: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998b4) {
            ctx->pc = 0x7998D0u;
            goto label_7998d0;
        }
    }
    ctx->pc = 0x7998BCu;
label_7998bc:
    // 0x7998bc: 0xc0a572a  jal         func_295CA8
label_7998c0:
    if (ctx->pc == 0x7998C0u) {
        ctx->pc = 0x7998C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998BCu;
        // 0x7998c0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998C4u;
        goto label_7998c4;
    }
    ctx->pc = 0x7998BCu;
    SET_GPR_U32(ctx, 31, 0x7998C4u);
    ctx->pc = 0x7998C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998BCu;
    // 0x7998c0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x7998BCu, 0x7998C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998C4u;
label_7998c4:
    // 0x7998c4: 0x1450fff0  bne         $v0, $s0, . + 4 + (-0x10 << 2)
label_7998c8:
    if (ctx->pc == 0x7998C8u) {
        ctx->pc = 0x7998C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998C4u;
        // 0x7998c8: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998CCu;
        goto label_7998cc;
    }
    ctx->pc = 0x7998C4u;
    {
        const bool branch_taken_0x7998c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x7998C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998C4u;
        // 0x7998c8: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998c4) {
            ctx->pc = 0x799888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799888;
        }
    }
    ctx->pc = 0x7998CCu;
label_7998cc:
    // 0x7998cc: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x7998ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_7998d0:
    // 0x7998d0: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x7998d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
label_7998d4:
    // 0x7998d4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x7998d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_7998d8:
    // 0x7998d8: 0x8c627a8c  lw          $v0, 0x7A8C($v1)
    ctx->pc = 0x7998d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31372)));
label_7998dc:
    // 0x7998dc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x7998dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_7998e0:
    // 0x7998e0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x7998e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_7998e4:
    // 0x7998e4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x7998e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_7998e8:
    // 0x7998e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x7998e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_7998ec:
    // 0x7998ec: 0xa3a40060  sb          $a0, 0x60($sp)
    ctx->pc = 0x7998ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 4));
label_7998f0:
    // 0x7998f0: 0xa3a50070  sb          $a1, 0x70($sp)
    ctx->pc = 0x7998f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 5));
label_7998f4:
    // 0x7998f4: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x7998f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_7998f8:
    // 0x7998f8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x7998f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_7998fc:
    // 0x7998fc: 0xac627a8c  sw          $v0, 0x7A8C($v1)
    ctx->pc = 0x7998fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 31372), GPR_U32(ctx, 2));
label_799900:
    // 0x799900: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x799900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_799904:
    // 0x799904: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799908:
    // 0x799908: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799908u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79990c:
    // 0x79990c: 0xc0a57e0  jal         func_295F80
label_799910:
    if (ctx->pc == 0x799910u) {
        ctx->pc = 0x799910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79990Cu;
        // 0x799910: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x799914u;
        goto label_799914;
    }
    ctx->pc = 0x79990Cu;
    SET_GPR_U32(ctx, 31, 0x799914u);
    ctx->pc = 0x799910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79990Cu;
    // 0x799910: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79990Cu, 0x799914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799914u;
label_799914:
    // 0x799914: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799918:
    // 0x799918: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799918u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79991c:
    // 0x79991c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x79991cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_799920:
    // 0x799920: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799920u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_799924:
    // 0x799924: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_799928:
    // 0x799928: 0xc0a57e0  jal         func_295F80
label_79992c:
    if (ctx->pc == 0x79992Cu) {
        ctx->pc = 0x79992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799928u;
        // 0x79992c: 0x3c1e0400  lui         $fp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799930u;
        goto label_799930;
    }
    ctx->pc = 0x799928u;
    SET_GPR_U32(ctx, 31, 0x799930u);
    ctx->pc = 0x79992Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799928u;
    // 0x79992c: 0x3c1e0400  lui         $fp, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)1024 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799928u, 0x799930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799930u;
label_799930:
    // 0x799930: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x799930u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
label_799934:
    // 0x799934: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x799934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_799938:
    // 0x799938: 0xc0a5704  jal         func_295C10
label_79993c:
    if (ctx->pc == 0x79993Cu) {
        ctx->pc = 0x79993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799938u;
        // 0x79993c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799940u;
        goto label_799940;
    }
    ctx->pc = 0x799938u;
    SET_GPR_U32(ctx, 31, 0x799940u);
    ctx->pc = 0x79993Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799938u;
    // 0x79993c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C10u, 0x799938u, 0x799940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799940u;
label_799940:
    // 0x799940: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_799944:
    // 0x799944: 0xc0a5704  jal         func_295C10
label_799948:
    if (ctx->pc == 0x799948u) {
        ctx->pc = 0x799948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799944u;
        // 0x799948: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79994Cu;
        goto label_79994c;
    }
    ctx->pc = 0x799944u;
    SET_GPR_U32(ctx, 31, 0x79994Cu);
    ctx->pc = 0x799948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799944u;
    // 0x799948: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C10u, 0x799944u, 0x79994Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79994Cu;
label_79994c:
    // 0x79994c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x79994cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_799950:
    // 0x799950: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799954:
    // 0x799954: 0x2444ee00  addiu       $a0, $v0, -0x1200
    ctx->pc = 0x799954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
label_799958:
    // 0x799958: 0x24060033  addiu       $a2, $zero, 0x33
    ctx->pc = 0x799958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_79995c:
    // 0x79995c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79995cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799960:
    // 0x799960: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799960u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799964:
    // 0x799964: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799964u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799968:
    // 0x799968: 0xc0b2e28  jal         func_2CB8A0
label_79996c:
    if (ctx->pc == 0x79996Cu) {
        ctx->pc = 0x79996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799968u;
        // 0x79996c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799970u;
        goto label_799970;
    }
    ctx->pc = 0x799968u;
    SET_GPR_U32(ctx, 31, 0x799970u);
    ctx->pc = 0x79996Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799968u;
    // 0x79996c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799968u, 0x799970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799970u;
label_799970:
    // 0x799970: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x799970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_799974:
    // 0x799974: 0x0  nop
    ctx->pc = 0x799974u;
    // NOP
label_799978:
    // 0x799978: 0xc0a572a  jal         func_295CA8
label_79997c:
    if (ctx->pc == 0x79997Cu) {
        ctx->pc = 0x79997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799978u;
        // 0x79997c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799980u;
        goto label_799980;
    }
    ctx->pc = 0x799978u;
    SET_GPR_U32(ctx, 31, 0x799980u);
    ctx->pc = 0x79997Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799978u;
    // 0x79997c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799978u, 0x799980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799980u;
label_799980:
    // 0x799980: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x799980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_799984:
    // 0x799984: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x799984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_799988:
    // 0x799988: 0xc0a572a  jal         func_295CA8
label_79998c:
    if (ctx->pc == 0x79998Cu) {
        ctx->pc = 0x79998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799988u;
        // 0x79998c: 0x2800b  movn        $s0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799990u;
        goto label_799990;
    }
    ctx->pc = 0x799988u;
    SET_GPR_U32(ctx, 31, 0x799990u);
    ctx->pc = 0x79998Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799988u;
    // 0x79998c: 0x2800b  movn        $s0, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799988u, 0x799990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799990u;
label_799990:
    // 0x799990: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x799990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_799994:
    // 0x799994: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x799994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_799998:
    // 0x799998: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x799998u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_79999c:
    // 0x79999c: 0xc0a572a  jal         func_295CA8
label_7999a0:
    if (ctx->pc == 0x7999A0u) {
        ctx->pc = 0x7999A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79999Cu;
        // 0x7999a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999A4u;
        goto label_7999a4;
    }
    ctx->pc = 0x79999Cu;
    SET_GPR_U32(ctx, 31, 0x7999A4u);
    ctx->pc = 0x7999A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79999Cu;
    // 0x7999a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79999Cu, 0x7999A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999A4u;
label_7999a4:
    // 0x7999a4: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x7999a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_7999a8:
    // 0x7999a8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x7999a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_7999ac:
    // 0x7999ac: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x7999acu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_7999b0:
    // 0x7999b0: 0xc0a572a  jal         func_295CA8
label_7999b4:
    if (ctx->pc == 0x7999B4u) {
        ctx->pc = 0x7999B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999B0u;
        // 0x7999b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999B8u;
        goto label_7999b8;
    }
    ctx->pc = 0x7999B0u;
    SET_GPR_U32(ctx, 31, 0x7999B8u);
    ctx->pc = 0x7999B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999B0u;
    // 0x7999b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x7999B0u, 0x7999B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999B8u;
label_7999b8:
    // 0x7999b8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x7999b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_7999bc:
    // 0x7999bc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x7999bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_7999c0:
    // 0x7999c0: 0x8c647a8c  lw          $a0, 0x7A8C($v1)
    ctx->pc = 0x7999c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31372)));
label_7999c4:
    // 0x7999c4: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x7999c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_7999c8:
    // 0x7999c8: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x7999c8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_7999cc:
    // 0x7999cc: 0x9e1024  and         $v0, $a0, $fp
    ctx->pc = 0x7999ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 30));
label_7999d0:
    // 0x7999d0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_7999d4:
    if (ctx->pc == 0x7999D4u) {
        ctx->pc = 0x7999D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999D0u;
        // 0x7999d4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999D8u;
        goto label_7999d8;
    }
    ctx->pc = 0x7999D0u;
    {
        const bool branch_taken_0x7999d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7999D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999D0u;
        // 0x7999d4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999d0) {
            ctx->pc = 0x799A00u;
            goto label_799a00;
        }
    }
    ctx->pc = 0x7999D8u;
label_7999d8:
    // 0x7999d8: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x7999d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_7999dc:
    // 0x7999dc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_7999e0:
    if (ctx->pc == 0x7999E0u) {
        ctx->pc = 0x7999E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999DCu;
        // 0x7999e0: 0x9e1025  or          $v0, $a0, $fp (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999E4u;
        goto label_7999e4;
    }
    ctx->pc = 0x7999DCu;
    {
        const bool branch_taken_0x7999dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7999E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999DCu;
        // 0x7999e0: 0x9e1025  or          $v0, $a0, $fp (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999dc) {
            ctx->pc = 0x799A00u;
            goto label_799a00;
        }
    }
    ctx->pc = 0x7999E4u;
label_7999e4:
    // 0x7999e4: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x7999e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_7999e8:
    // 0x7999e8: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x7999e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_7999ec:
    // 0x7999ec: 0x262594c8  addiu       $a1, $s1, -0x6B38
    ctx->pc = 0x7999ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294939848));
label_7999f0:
    // 0x7999f0: 0xac627a8c  sw          $v0, 0x7A8C($v1)
    ctx->pc = 0x7999f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 31372), GPR_U32(ctx, 2));
label_7999f4:
    // 0x7999f4: 0xc0b0e24  jal         func_2C3890
label_7999f8:
    if (ctx->pc == 0x7999F8u) {
        ctx->pc = 0x7999F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999F4u;
        // 0x7999f8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999FCu;
        goto label_7999fc;
    }
    ctx->pc = 0x7999F4u;
    SET_GPR_U32(ctx, 31, 0x7999FCu);
    ctx->pc = 0x7999F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999F4u;
    // 0x7999f8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7999F4u, 0x7999FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999FCu;
label_7999fc:
    // 0x7999fc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x7999fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_799a00:
    // 0x799a00: 0x12050007  beq         $s0, $a1, . + 4 + (0x7 << 2)
label_799a04:
    if (ctx->pc == 0x799A04u) {
        ctx->pc = 0x799A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A00u;
        // 0x799a04: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A08u;
        goto label_799a08;
    }
    ctx->pc = 0x799A00u;
    {
        const bool branch_taken_0x799a00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x799A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A00u;
        // 0x799a04: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a00) {
            ctx->pc = 0x799A20u;
            goto label_799a20;
        }
    }
    ctx->pc = 0x799A08u;
label_799a08:
    // 0x799a08: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x799a08u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_799a0c:
    // 0x799a0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799a10:
    // 0x799a10: 0xc0b56a8  jal         func_2D5AA0
label_799a14:
    if (ctx->pc == 0x799A14u) {
        ctx->pc = 0x799A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A10u;
        // 0x799a14: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A18u;
        goto label_799a18;
    }
    ctx->pc = 0x799A10u;
    SET_GPR_U32(ctx, 31, 0x799A18u);
    ctx->pc = 0x799A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A10u;
    // 0x799a14: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799A10u, 0x799A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A18u;
label_799a18:
    // 0x799a18: 0x1000ffd7  b           . + 4 + (-0x29 << 2)
label_799a1c:
    if (ctx->pc == 0x799A1Cu) {
        ctx->pc = 0x799A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A18u;
        // 0x799a1c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A20u;
        goto label_799a20;
    }
    ctx->pc = 0x799A18u;
    {
        const bool branch_taken_0x799a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A18u;
        // 0x799a1c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a18) {
            ctx->pc = 0x799978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799978;
        }
    }
    ctx->pc = 0x799A20u;
label_799a20:
    // 0x799a20: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x799a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_799a24:
    // 0x799a24: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x799a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_799a28:
    // 0x799a28: 0x8c627a8c  lw          $v0, 0x7A8C($v1)
    ctx->pc = 0x799a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31372)));
label_799a2c:
    // 0x799a2c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799a30:
    // 0x799a30: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x799a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_799a34:
    // 0x799a34: 0xa3a40090  sb          $a0, 0x90($sp)
    ctx->pc = 0x799a34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 4));
label_799a38:
    // 0x799a38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x799a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_799a3c:
    // 0x799a3c: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x799a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
label_799a40:
    // 0x799a40: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799a40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_799a44:
    // 0x799a44: 0xa3a50080  sb          $a1, 0x80($sp)
    ctx->pc = 0x799a44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 5));
label_799a48:
    // 0x799a48: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x799a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_799a4c:
    // 0x799a4c: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x799a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_799a50:
    // 0x799a50: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x799a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_799a54:
    // 0x799a54: 0xac627a8c  sw          $v0, 0x7A8C($v1)
    ctx->pc = 0x799a54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 31372), GPR_U32(ctx, 2));
label_799a58:
    // 0x799a58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799a58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799a5c:
    // 0x799a5c: 0xc0a57e0  jal         func_295F80
label_799a60:
    if (ctx->pc == 0x799A60u) {
        ctx->pc = 0x799A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A5Cu;
        // 0x799a60: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A64u;
        goto label_799a64;
    }
    ctx->pc = 0x799A5Cu;
    SET_GPR_U32(ctx, 31, 0x799A64u);
    ctx->pc = 0x799A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A5Cu;
    // 0x799a60: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799A5Cu, 0x799A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A64u;
label_799a64:
    // 0x799a64: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x799a64u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799a68:
    // 0x799a68: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799a6c:
    // 0x799a6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799a6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799a70:
    // 0x799a70: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x799a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_799a74:
    // 0x799a74: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799a74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_799a78:
    // 0x799a78: 0xc0a57e0  jal         func_295F80
label_799a7c:
    if (ctx->pc == 0x799A7Cu) {
        ctx->pc = 0x799A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A78u;
        // 0x799a7c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A80u;
        goto label_799a80;
    }
    ctx->pc = 0x799A78u;
    SET_GPR_U32(ctx, 31, 0x799A80u);
    ctx->pc = 0x799A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A78u;
    // 0x799a7c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799A78u, 0x799A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A80u;
label_799a80:
    // 0x799a80: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x799a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_799a84:
    // 0x799a84: 0xc0a5704  jal         func_295C10
label_799a88:
    if (ctx->pc == 0x799A88u) {
        ctx->pc = 0x799A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A84u;
        // 0x799a88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A8Cu;
        goto label_799a8c;
    }
    ctx->pc = 0x799A84u;
    SET_GPR_U32(ctx, 31, 0x799A8Cu);
    ctx->pc = 0x799A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A84u;
    // 0x799a88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C10u, 0x799A84u, 0x799A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A8Cu;
label_799a8c:
    // 0x799a8c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x799a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_799a90:
    // 0x799a90: 0xc0a5704  jal         func_295C10
label_799a94:
    if (ctx->pc == 0x799A94u) {
        ctx->pc = 0x799A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A90u;
        // 0x799a94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A98u;
        goto label_799a98;
    }
    ctx->pc = 0x799A90u;
    SET_GPR_U32(ctx, 31, 0x799A98u);
    ctx->pc = 0x799A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A90u;
    // 0x799a94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C10u, 0x799A90u, 0x799A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A98u;
label_799a98:
    // 0x799a98: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x799a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_799a9c:
    // 0x799a9c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799aa0:
    // 0x799aa0: 0x2444ee00  addiu       $a0, $v0, -0x1200
    ctx->pc = 0x799aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
label_799aa4:
    // 0x799aa4: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x799aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_799aa8:
    // 0x799aa8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799aac:
    // 0x799aac: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799aacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799ab0:
    // 0x799ab0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799ab0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799ab4:
    // 0x799ab4: 0xc0b2e28  jal         func_2CB8A0
label_799ab8:
    if (ctx->pc == 0x799AB8u) {
        ctx->pc = 0x799AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AB4u;
        // 0x799ab8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799ABCu;
        goto label_799abc;
    }
    ctx->pc = 0x799AB4u;
    SET_GPR_U32(ctx, 31, 0x799ABCu);
    ctx->pc = 0x799AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AB4u;
    // 0x799ab8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799AB4u, 0x799ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799ABCu;
label_799abc:
    // 0x799abc: 0x0  nop
    ctx->pc = 0x799abcu;
    // NOP
label_799ac0:
    // 0x799ac0: 0xc0a572a  jal         func_295CA8
label_799ac4:
    if (ctx->pc == 0x799AC4u) {
        ctx->pc = 0x799AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AC0u;
        // 0x799ac4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AC8u;
        goto label_799ac8;
    }
    ctx->pc = 0x799AC0u;
    SET_GPR_U32(ctx, 31, 0x799AC8u);
    ctx->pc = 0x799AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AC0u;
    // 0x799ac4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799AC0u, 0x799AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AC8u;
label_799ac8:
    // 0x799ac8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799acc:
    // 0x799acc: 0x161e0019  bne         $s0, $fp, . + 4 + (0x19 << 2)
label_799ad0:
    if (ctx->pc == 0x799AD0u) {
        ctx->pc = 0x799AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799ACCu;
        // 0x799ad0: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AD4u;
        goto label_799ad4;
    }
    ctx->pc = 0x799ACCu;
    {
        const bool branch_taken_0x799acc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 30));
        ctx->pc = 0x799AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799ACCu;
        // 0x799ad0: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799acc) {
            ctx->pc = 0x799B34u;
            goto label_799b34;
        }
    }
    ctx->pc = 0x799AD4u;
label_799ad4:
    // 0x799ad4: 0xc0a572a  jal         func_295CA8
label_799ad8:
    if (ctx->pc == 0x799AD8u) {
        ctx->pc = 0x799AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AD4u;
        // 0x799ad8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799ADCu;
        goto label_799adc;
    }
    ctx->pc = 0x799AD4u;
    SET_GPR_U32(ctx, 31, 0x799ADCu);
    ctx->pc = 0x799AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AD4u;
    // 0x799ad8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799AD4u, 0x799ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799ADCu;
label_799adc:
    // 0x799adc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x799adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799ae0:
    // 0x799ae0: 0x16300014  bne         $s1, $s0, . + 4 + (0x14 << 2)
label_799ae4:
    if (ctx->pc == 0x799AE4u) {
        ctx->pc = 0x799AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AE0u;
        // 0x799ae4: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AE8u;
        goto label_799ae8;
    }
    ctx->pc = 0x799AE0u;
    {
        const bool branch_taken_0x799ae0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x799AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AE0u;
        // 0x799ae4: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ae0) {
            ctx->pc = 0x799B34u;
            goto label_799b34;
        }
    }
    ctx->pc = 0x799AE8u;
label_799ae8:
    // 0x799ae8: 0xc0a572a  jal         func_295CA8
label_799aec:
    if (ctx->pc == 0x799AECu) {
        ctx->pc = 0x799AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AE8u;
        // 0x799aec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AF0u;
        goto label_799af0;
    }
    ctx->pc = 0x799AE8u;
    SET_GPR_U32(ctx, 31, 0x799AF0u);
    ctx->pc = 0x799AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AE8u;
    // 0x799aec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799AE8u, 0x799AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AF0u;
label_799af0:
    // 0x799af0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799af4:
    // 0x799af4: 0x1611000f  bne         $s0, $s1, . + 4 + (0xF << 2)
label_799af8:
    if (ctx->pc == 0x799AF8u) {
        ctx->pc = 0x799AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AF4u;
        // 0x799af8: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AFCu;
        goto label_799afc;
    }
    ctx->pc = 0x799AF4u;
    {
        const bool branch_taken_0x799af4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x799AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AF4u;
        // 0x799af8: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799af4) {
            ctx->pc = 0x799B34u;
            goto label_799b34;
        }
    }
    ctx->pc = 0x799AFCu;
label_799afc:
    // 0x799afc: 0xc0a572a  jal         func_295CA8
label_799b00:
    if (ctx->pc == 0x799B00u) {
        ctx->pc = 0x799B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AFCu;
        // 0x799b00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B04u;
        goto label_799b04;
    }
    ctx->pc = 0x799AFCu;
    SET_GPR_U32(ctx, 31, 0x799B04u);
    ctx->pc = 0x799B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AFCu;
    // 0x799b00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799AFCu, 0x799B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B04u;
label_799b04:
    // 0x799b04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x799b04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799b08:
    // 0x799b08: 0x1630000a  bne         $s1, $s0, . + 4 + (0xA << 2)
label_799b0c:
    if (ctx->pc == 0x799B0Cu) {
        ctx->pc = 0x799B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B08u;
        // 0x799b0c: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B10u;
        goto label_799b10;
    }
    ctx->pc = 0x799B08u;
    {
        const bool branch_taken_0x799b08 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x799B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B08u;
        // 0x799b0c: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b08) {
            ctx->pc = 0x799B34u;
            goto label_799b34;
        }
    }
    ctx->pc = 0x799B10u;
label_799b10:
    // 0x799b10: 0xc0a572a  jal         func_295CA8
label_799b14:
    if (ctx->pc == 0x799B14u) {
        ctx->pc = 0x799B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B10u;
        // 0x799b14: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B18u;
        goto label_799b18;
    }
    ctx->pc = 0x799B10u;
    SET_GPR_U32(ctx, 31, 0x799B18u);
    ctx->pc = 0x799B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B10u;
    // 0x799b14: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799B10u, 0x799B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B18u;
label_799b18:
    // 0x799b18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799b18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799b1c:
    // 0x799b1c: 0x16110005  bne         $s0, $s1, . + 4 + (0x5 << 2)
label_799b20:
    if (ctx->pc == 0x799B20u) {
        ctx->pc = 0x799B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B1Cu;
        // 0x799b20: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B24u;
        goto label_799b24;
    }
    ctx->pc = 0x799B1Cu;
    {
        const bool branch_taken_0x799b1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x799B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B1Cu;
        // 0x799b20: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b1c) {
            ctx->pc = 0x799B34u;
            goto label_799b34;
        }
    }
    ctx->pc = 0x799B24u;
label_799b24:
    // 0x799b24: 0xc0a572a  jal         func_295CA8
label_799b28:
    if (ctx->pc == 0x799B28u) {
        ctx->pc = 0x799B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B24u;
        // 0x799b28: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B2Cu;
        goto label_799b2c;
    }
    ctx->pc = 0x799B24u;
    SET_GPR_U32(ctx, 31, 0x799B2Cu);
    ctx->pc = 0x799B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B24u;
    // 0x799b28: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799B24u, 0x799B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B2Cu;
label_799b2c:
    // 0x799b2c: 0x10500007  beq         $v0, $s0, . + 4 + (0x7 << 2)
label_799b30:
    if (ctx->pc == 0x799B30u) {
        ctx->pc = 0x799B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B2Cu;
        // 0x799b30: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B34u;
        goto label_799b34;
    }
    ctx->pc = 0x799B2Cu;
    {
        const bool branch_taken_0x799b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x799B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B2Cu;
        // 0x799b30: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b2c) {
            ctx->pc = 0x799B4Cu;
            goto label_799b4c;
        }
    }
    ctx->pc = 0x799B34u;
label_799b34:
    // 0x799b34: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x799b34u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_799b38:
    // 0x799b38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799b3c:
    // 0x799b3c: 0xc0b56a8  jal         func_2D5AA0
label_799b40:
    if (ctx->pc == 0x799B40u) {
        ctx->pc = 0x799B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B3Cu;
        // 0x799b40: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B44u;
        goto label_799b44;
    }
    ctx->pc = 0x799B3Cu;
    SET_GPR_U32(ctx, 31, 0x799B44u);
    ctx->pc = 0x799B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B3Cu;
    // 0x799b40: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799B3Cu, 0x799B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B44u;
label_799b44:
    // 0x799b44: 0x1000ffde  b           . + 4 + (-0x22 << 2)
label_799b48:
    if (ctx->pc == 0x799B48u) {
        ctx->pc = 0x799B4Cu;
        goto label_799b4c;
    }
    ctx->pc = 0x799B44u;
    {
        const bool branch_taken_0x799b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x799b44) {
            ctx->pc = 0x799AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799ac0;
        }
    }
    ctx->pc = 0x799B4Cu;
label_799b4c:
    // 0x799b4c: 0x2ee20b23  sltiu       $v0, $s7, 0xB23
    ctx->pc = 0x799b4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)2851) ? 1 : 0);
label_799b50:
    // 0x799b50: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_799b54:
    if (ctx->pc == 0x799B54u) {
        ctx->pc = 0x799B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B50u;
        // 0x799b54: 0x3c030057  lui         $v1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B58u;
        goto label_799b58;
    }
    ctx->pc = 0x799B50u;
    {
        const bool branch_taken_0x799b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B50u;
        // 0x799b54: 0x3c030057  lui         $v1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b50) {
            ctx->pc = 0x799B6Cu;
            goto label_799b6c;
        }
    }
    ctx->pc = 0x799B58u;
label_799b58:
    // 0x799b58: 0xc07e804  jal         func_1FA010
label_799b5c:
    if (ctx->pc == 0x799B5Cu) {
        ctx->pc = 0x799B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B58u;
        // 0x799b5c: 0x24649b70  addiu       $a0, $v1, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B60u;
        goto label_799b60;
    }
    ctx->pc = 0x799B58u;
    SET_GPR_U32(ctx, 31, 0x799B60u);
    ctx->pc = 0x799B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B58u;
    // 0x799b5c: 0x24649b70  addiu       $a0, $v1, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x799B58u, 0x799B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B60u;
label_799b60:
    // 0x799b60: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x799b60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_799b64:
    // 0x799b64: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_799b68:
    if (ctx->pc == 0x799B68u) {
        ctx->pc = 0x799B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B64u;
        // 0x799b68: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B6Cu;
        goto label_799b6c;
    }
    ctx->pc = 0x799B64u;
    {
        const bool branch_taken_0x799b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B64u;
        // 0x799b68: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b64) {
            ctx->pc = 0x799B88u;
            goto label_799b88;
        }
    }
    ctx->pc = 0x799B6Cu;
label_799b6c:
    // 0x799b6c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x799b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_799b70:
    // 0x799b70: 0xc07e804  jal         func_1FA010
label_799b74:
    if (ctx->pc == 0x799B74u) {
        ctx->pc = 0x799B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B70u;
        // 0x799b74: 0x24449b70  addiu       $a0, $v0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B78u;
        goto label_799b78;
    }
    ctx->pc = 0x799B70u;
    SET_GPR_U32(ctx, 31, 0x799B78u);
    ctx->pc = 0x799B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B70u;
    // 0x799b74: 0x24449b70  addiu       $a0, $v0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x799B70u, 0x799B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B78u;
label_799b78:
    // 0x799b78: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x799b78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_799b7c:
    // 0x799b7c: 0x144000cf  bnez        $v0, . + 4 + (0xCF << 2)
label_799b80:
    if (ctx->pc == 0x799B80u) {
        ctx->pc = 0x799B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B7Cu;
        // 0x799b80: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B84u;
        goto label_799b84;
    }
    ctx->pc = 0x799B7Cu;
    {
        const bool branch_taken_0x799b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B7Cu;
        // 0x799b80: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b7c) {
            ctx->pc = 0x799EBCu;
            goto label_799ebc;
        }
    }
    ctx->pc = 0x799B84u;
label_799b84:
    // 0x799b84: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x799b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_799b88:
    // 0x799b88: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x799b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_799b8c:
    // 0x799b8c: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x799b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_799b90:
    // 0x799b90: 0x3c130074  lui         $s3, 0x74
    ctx->pc = 0x799b90u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)116 << 16));
label_799b94:
    // 0x799b94: 0xa3a300b0  sb          $v1, 0xB0($sp)
    ctx->pc = 0x799b94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 3));
label_799b98:
    // 0x799b98: 0x3c160058  lui         $s6, 0x58
    ctx->pc = 0x799b98u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)88 << 16));
label_799b9c:
    // 0x799b9c: 0xa3a200a0  sb          $v0, 0xA0($sp)
    ctx->pc = 0x799b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 2));
label_799ba0:
    // 0x799ba0: 0xc0b0fa2  jal         func_2C3E88
label_799ba4:
    if (ctx->pc == 0x799BA4u) {
        ctx->pc = 0x799BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BA0u;
        // 0x799ba4: 0x3c12007a  lui         $s2, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BA8u;
        goto label_799ba8;
    }
    ctx->pc = 0x799BA0u;
    SET_GPR_U32(ctx, 31, 0x799BA8u);
    ctx->pc = 0x799BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BA0u;
    // 0x799ba4: 0x3c12007a  lui         $s2, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x799BA0u, 0x799BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BA8u;
label_799ba8:
    // 0x799ba8: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x799ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_799bac:
    // 0x799bac: 0xc0b0e6c  jal         func_2C39B0
label_799bb0:
    if (ctx->pc == 0x799BB0u) {
        ctx->pc = 0x799BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BACu;
        // 0x799bb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BB4u;
        goto label_799bb4;
    }
    ctx->pc = 0x799BACu;
    SET_GPR_U32(ctx, 31, 0x799BB4u);
    ctx->pc = 0x799BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BACu;
    // 0x799bb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799BACu, 0x799BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BB4u;
label_799bb4:
    // 0x799bb4: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x799bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_799bb8:
    // 0x799bb8: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_799bbc:
    // 0x799bbc: 0xc0b0fb6  jal         func_2C3ED8
label_799bc0:
    if (ctx->pc == 0x799BC0u) {
        ctx->pc = 0x799BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BBCu;
        // 0x799bc0: 0x24a5a520  addiu       $a1, $a1, -0x5AE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BC4u;
        goto label_799bc4;
    }
    ctx->pc = 0x799BBCu;
    SET_GPR_U32(ctx, 31, 0x799BC4u);
    ctx->pc = 0x799BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BBCu;
    // 0x799bc0: 0x24a5a520  addiu       $a1, $a1, -0x5AE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799BBCu, 0x799BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BC4u;
label_799bc4:
    // 0x799bc4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799bc8:
    // 0x799bc8: 0xc0a56f0  jal         func_295BC0
label_799bcc:
    if (ctx->pc == 0x799BCCu) {
        ctx->pc = 0x799BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BC8u;
        // 0x799bcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BD0u;
        goto label_799bd0;
    }
    ctx->pc = 0x799BC8u;
    SET_GPR_U32(ctx, 31, 0x799BD0u);
    ctx->pc = 0x799BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BC8u;
    // 0x799bcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799BC8u, 0x799BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BD0u;
label_799bd0:
    // 0x799bd0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x799bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_799bd4:
    // 0x799bd4: 0xc0a56f0  jal         func_295BC0
label_799bd8:
    if (ctx->pc == 0x799BD8u) {
        ctx->pc = 0x799BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BD4u;
        // 0x799bd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BDCu;
        goto label_799bdc;
    }
    ctx->pc = 0x799BD4u;
    SET_GPR_U32(ctx, 31, 0x799BDCu);
    ctx->pc = 0x799BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BD4u;
    // 0x799bd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799BD4u, 0x799BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BDCu;
label_799bdc:
    // 0x799bdc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x799bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_799be0:
    // 0x799be0: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x799be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_799be4:
    // 0x799be4: 0x2464ee00  addiu       $a0, $v1, -0x1200
    ctx->pc = 0x799be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962688));
label_799be8:
    // 0x799be8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799be8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799bec:
    // 0x799bec: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799becu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799bf0:
    // 0x799bf0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799bf0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799bf4:
    // 0x799bf4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x799bf4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799bf8:
    // 0x799bf8: 0xc0b2e28  jal         func_2CB8A0
label_799bfc:
    if (ctx->pc == 0x799BFCu) {
        ctx->pc = 0x799BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BF8u;
        // 0x799bfc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C00u;
        goto label_799c00;
    }
    ctx->pc = 0x799BF8u;
    SET_GPR_U32(ctx, 31, 0x799C00u);
    ctx->pc = 0x799BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BF8u;
    // 0x799bfc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799BF8u, 0x799C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C00u;
label_799c00:
    // 0x799c00: 0xc0a573a  jal         func_295CE8
label_799c04:
    if (ctx->pc == 0x799C04u) {
        ctx->pc = 0x799C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C00u;
        // 0x799c04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C08u;
        goto label_799c08;
    }
    ctx->pc = 0x799C00u;
    SET_GPR_U32(ctx, 31, 0x799C08u);
    ctx->pc = 0x799C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C00u;
    // 0x799c04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799C00u, 0x799C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C08u;
label_799c08:
    // 0x799c08: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x799c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_799c0c:
    // 0x799c0c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x799c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_799c10:
    // 0x799c10: 0xc0b56a8  jal         func_2D5AA0
label_799c14:
    if (ctx->pc == 0x799C14u) {
        ctx->pc = 0x799C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C10u;
        // 0x799c14: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C18u;
        goto label_799c18;
    }
    ctx->pc = 0x799C10u;
    SET_GPR_U32(ctx, 31, 0x799C18u);
    ctx->pc = 0x799C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C10u;
    // 0x799c14: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799C10u, 0x799C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C18u;
label_799c18:
    // 0x799c18: 0xc0a573a  jal         func_295CE8
label_799c1c:
    if (ctx->pc == 0x799C1Cu) {
        ctx->pc = 0x799C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C18u;
        // 0x799c1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C20u;
        goto label_799c20;
    }
    ctx->pc = 0x799C18u;
    SET_GPR_U32(ctx, 31, 0x799C20u);
    ctx->pc = 0x799C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C18u;
    // 0x799c1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799C18u, 0x799C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C20u;
label_799c20:
    // 0x799c20: 0xc0b101e  jal         func_2C4078
label_799c24:
    if (ctx->pc == 0x799C24u) {
        ctx->pc = 0x799C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C20u;
        // 0x799c24: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C28u;
        goto label_799c28;
    }
    ctx->pc = 0x799C20u;
    SET_GPR_U32(ctx, 31, 0x799C28u);
    ctx->pc = 0x799C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C20u;
    // 0x799c24: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799C20u, 0x799C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C28u;
label_799c28:
    // 0x799c28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799c2c:
    // 0x799c2c: 0xc0a56f0  jal         func_295BC0
label_799c30:
    if (ctx->pc == 0x799C30u) {
        ctx->pc = 0x799C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C2Cu;
        // 0x799c30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C34u;
        goto label_799c34;
    }
    ctx->pc = 0x799C2Cu;
    SET_GPR_U32(ctx, 31, 0x799C34u);
    ctx->pc = 0x799C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C2Cu;
    // 0x799c30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799C2Cu, 0x799C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C34u;
label_799c34:
    // 0x799c34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x799c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_799c38:
    // 0x799c38: 0xc0a56f0  jal         func_295BC0
label_799c3c:
    if (ctx->pc == 0x799C3Cu) {
        ctx->pc = 0x799C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C38u;
        // 0x799c3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C40u;
        goto label_799c40;
    }
    ctx->pc = 0x799C38u;
    SET_GPR_U32(ctx, 31, 0x799C40u);
    ctx->pc = 0x799C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C38u;
    // 0x799c3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799C38u, 0x799C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C40u;
label_799c40:
    // 0x799c40: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_799c44:
    // 0x799c44: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x799c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
label_799c48:
    // 0x799c48: 0x8044a528  lb          $a0, -0x5AD8($v0)
    ctx->pc = 0x799c48u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294944040)));
label_799c4c:
    // 0x799c4c: 0x27be00a0  addiu       $fp, $sp, 0xA0
    ctx->pc = 0x799c4cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_799c50:
    // 0x799c50: 0x27b100b0  addiu       $s1, $sp, 0xB0
    ctx->pc = 0x799c50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_799c54:
    // 0x799c54: 0x2446a528  addiu       $a2, $v0, -0x5AD8
    ctx->pc = 0x799c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944040));
label_799c58:
    // 0x799c58: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x799c58u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799c5c:
    // 0x799c5c: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x799c5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
label_799c60:
    // 0x799c60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799c64:
    // 0x799c64: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_799c68:
    if (ctx->pc == 0x799C68u) {
        ctx->pc = 0x799C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C64u;
        // 0x799c68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C6Cu;
        goto label_799c6c;
    }
    ctx->pc = 0x799C64u;
    {
        const bool branch_taken_0x799c64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C64u;
        // 0x799c68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c64) {
            ctx->pc = 0x799C98u;
            goto label_799c98;
        }
    }
    ctx->pc = 0x799C6Cu;
label_799c6c:
    // 0x799c6c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799c6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799c70:
    // 0x799c70: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799c70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_799c74:
    // 0x799c74: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799c74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_799c78:
    // 0x799c78: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_799c7c:
    // 0x799c7c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_799c80:
    // 0x799c80: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799c80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_799c84:
    // 0x799c84: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_799c88:
    if (ctx->pc == 0x799C88u) {
        ctx->pc = 0x799C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C84u;
        // 0x799c88: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C8Cu;
        goto label_799c8c;
    }
    ctx->pc = 0x799C84u;
    {
        const bool branch_taken_0x799c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C84u;
        // 0x799c88: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c84) {
            ctx->pc = 0x799C98u;
            goto label_799c98;
        }
    }
    ctx->pc = 0x799C8Cu;
label_799c8c:
    // 0x799c8c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799c8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799c90:
    // 0x799c90: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_799c94:
    if (ctx->pc == 0x799C94u) {
        ctx->pc = 0x799C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C90u;
        // 0x799c94: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C98u;
        goto label_799c98;
    }
    ctx->pc = 0x799C90u;
    {
        const bool branch_taken_0x799c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799c90) {
            ctx->pc = 0x799C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799C90u;
            // 0x799c94: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799c70;
        }
    }
    ctx->pc = 0x799C98u;
label_799c98:
    // 0x799c98: 0xc053f66  jal         func_14FD98
label_799c9c:
    if (ctx->pc == 0x799C9Cu) {
        ctx->pc = 0x799C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C98u;
        // 0x799c9c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799CA0u;
        goto label_799ca0;
    }
    ctx->pc = 0x799C98u;
    SET_GPR_U32(ctx, 31, 0x799CA0u);
    ctx->pc = 0x799C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C98u;
    // 0x799c9c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799C98u, 0x799CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CA0u;
label_799ca0:
    // 0x799ca0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799ca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799ca4:
    // 0x799ca4: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x799ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_799ca8:
    // 0x799ca8: 0xc0b1444  jal         func_2C5110
label_799cac:
    if (ctx->pc == 0x799CACu) {
        ctx->pc = 0x799CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CA8u;
        // 0x799cac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799CB0u;
        goto label_799cb0;
    }
    ctx->pc = 0x799CA8u;
    SET_GPR_U32(ctx, 31, 0x799CB0u);
    ctx->pc = 0x799CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CA8u;
    // 0x799cac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5110u, 0x799CA8u, 0x799CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CB0u;
label_799cb0:
    // 0x799cb0: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_799cb4:
    if (ctx->pc == 0x799CB4u) {
        ctx->pc = 0x799CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CB0u;
        // 0x799cb4: 0x8e657a84  lw          $a1, 0x7A84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 31364)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799CB8u;
        goto label_799cb8;
    }
    ctx->pc = 0x799CB0u;
    {
        const bool branch_taken_0x799cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799cb0) {
            ctx->pc = 0x799CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799CB0u;
            // 0x799cb4: 0x8e657a84  lw          $a1, 0x7A84($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 31364)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799CF4u;
            goto label_799cf4;
        }
    }
    ctx->pc = 0x799CB8u;
label_799cb8:
    // 0x799cb8: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x799cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_799cbc:
    // 0x799cbc: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x799cbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_799cc0:
    // 0x799cc0: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x799cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_799cc4:
    // 0x799cc4: 0x60f809  jalr        $v1
label_799cc8:
    if (ctx->pc == 0x799CC8u) {
        ctx->pc = 0x799CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CC4u;
        // 0x799cc8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799CCCu;
        goto label_799ccc;
    }
    ctx->pc = 0x799CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x799CCCu);
        ctx->pc = 0x799CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CC4u;
        // 0x799cc8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799CC4u, 0x799CCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799CCCu;
label_799ccc:
    // 0x799ccc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x799cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_799cd0:
    // 0x799cd0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799cd4:
    // 0x799cd4: 0x2444ee00  addiu       $a0, $v0, -0x1200
    ctx->pc = 0x799cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
label_799cd8:
    // 0x799cd8: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x799cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_799cdc:
    // 0x799cdc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799cdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799ce0:
    // 0x799ce0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799ce0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799ce4:
    // 0x799ce4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799ce4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799ce8:
    // 0x799ce8: 0xc0b2e28  jal         func_2CB8A0
label_799cec:
    if (ctx->pc == 0x799CECu) {
        ctx->pc = 0x799CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CE8u;
        // 0x799cec: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799CF0u;
        goto label_799cf0;
    }
    ctx->pc = 0x799CE8u;
    SET_GPR_U32(ctx, 31, 0x799CF0u);
    ctx->pc = 0x799CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CE8u;
    // 0x799cec: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799CE8u, 0x799CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CF0u;
label_799cf0:
    // 0x799cf0: 0x8e657a84  lw          $a1, 0x7A84($s3)
    ctx->pc = 0x799cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 31364)));
label_799cf4:
    // 0x799cf4: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x799cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_799cf8:
    // 0x799cf8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x799cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_799cfc:
    // 0x799cfc: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x799cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
label_799d00:
    // 0x799d00: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x799d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_799d04:
    // 0x799d04: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x799d04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_799d08:
    // 0x799d08: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x799d08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_799d0c:
    // 0x799d0c: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x799d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_799d10:
    // 0x799d10: 0xae657a84  sw          $a1, 0x7A84($s3)
    ctx->pc = 0x799d10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 31364), GPR_U32(ctx, 5));
label_799d14:
    // 0x799d14: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799d14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_799d18:
    // 0x799d18: 0xc0b0fb6  jal         func_2C3ED8
label_799d1c:
    if (ctx->pc == 0x799D1Cu) {
        ctx->pc = 0x799D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D18u;
        // 0x799d1c: 0x24a5a530  addiu       $a1, $a1, -0x5AD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D20u;
        goto label_799d20;
    }
    ctx->pc = 0x799D18u;
    SET_GPR_U32(ctx, 31, 0x799D20u);
    ctx->pc = 0x799D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D18u;
    // 0x799d1c: 0x24a5a530  addiu       $a1, $a1, -0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799D18u, 0x799D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D20u;
label_799d20:
    // 0x799d20: 0x93a500a0  lbu         $a1, 0xA0($sp)
    ctx->pc = 0x799d20u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
label_799d24:
    // 0x799d24: 0xc0a54b4  jal         func_2952D0
label_799d28:
    if (ctx->pc == 0x799D28u) {
        ctx->pc = 0x799D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D24u;
        // 0x799d28: 0x26c46ab0  addiu       $a0, $s6, 0x6AB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 27312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D2Cu;
        goto label_799d2c;
    }
    ctx->pc = 0x799D24u;
    SET_GPR_U32(ctx, 31, 0x799D2Cu);
    ctx->pc = 0x799D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D24u;
    // 0x799d28: 0x26c46ab0  addiu       $a0, $s6, 0x6AB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 27312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799D24u, 0x799D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D2Cu;
label_799d2c:
    // 0x799d2c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x799d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_799d30:
    // 0x799d30: 0xc0a56f0  jal         func_295BC0
label_799d34:
    if (ctx->pc == 0x799D34u) {
        ctx->pc = 0x799D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D30u;
        // 0x799d34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D38u;
        goto label_799d38;
    }
    ctx->pc = 0x799D30u;
    SET_GPR_U32(ctx, 31, 0x799D38u);
    ctx->pc = 0x799D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D30u;
    // 0x799d34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799D30u, 0x799D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D38u;
label_799d38:
    // 0x799d38: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x799d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_799d3c:
    // 0x799d3c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799d40:
    // 0x799d40: 0x2464ee00  addiu       $a0, $v1, -0x1200
    ctx->pc = 0x799d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962688));
label_799d44:
    // 0x799d44: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799d44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799d48:
    // 0x799d48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799d4c:
    // 0x799d4c: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x799d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_799d50:
    // 0x799d50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799d50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799d54:
    // 0x799d54: 0xc0b2e28  jal         func_2CB8A0
label_799d58:
    if (ctx->pc == 0x799D58u) {
        ctx->pc = 0x799D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D54u;
        // 0x799d58: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D5Cu;
        goto label_799d5c;
    }
    ctx->pc = 0x799D54u;
    SET_GPR_U32(ctx, 31, 0x799D5Cu);
    ctx->pc = 0x799D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D54u;
    // 0x799d58: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799D54u, 0x799D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D5Cu;
label_799d5c:
    // 0x799d5c: 0xc0b101e  jal         func_2C4078
label_799d60:
    if (ctx->pc == 0x799D60u) {
        ctx->pc = 0x799D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D5Cu;
        // 0x799d60: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D64u;
        goto label_799d64;
    }
    ctx->pc = 0x799D5Cu;
    SET_GPR_U32(ctx, 31, 0x799D64u);
    ctx->pc = 0x799D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D5Cu;
    // 0x799d60: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799D5Cu, 0x799D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D64u;
label_799d64:
    // 0x799d64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799d68:
    // 0x799d68: 0xc0a56f0  jal         func_295BC0
label_799d6c:
    if (ctx->pc == 0x799D6Cu) {
        ctx->pc = 0x799D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D68u;
        // 0x799d6c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D70u;
        goto label_799d70;
    }
    ctx->pc = 0x799D68u;
    SET_GPR_U32(ctx, 31, 0x799D70u);
    ctx->pc = 0x799D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D68u;
    // 0x799d6c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799D68u, 0x799D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D70u;
label_799d70:
    // 0x799d70: 0x8242a538  lb          $v0, -0x5AC8($s2)
    ctx->pc = 0x799d70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294944056)));
label_799d74:
    // 0x799d74: 0x26e84c58  addiu       $t0, $s7, 0x4C58
    ctx->pc = 0x799d74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), 19544));
label_799d78:
    // 0x799d78: 0x2643a538  addiu       $v1, $s2, -0x5AC8
    ctx->pc = 0x799d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294944056));
label_799d7c:
    // 0x799d7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799d80:
    // 0x799d80: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_799d84:
    if (ctx->pc == 0x799D84u) {
        ctx->pc = 0x799D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D80u;
        // 0x799d84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D88u;
        goto label_799d88;
    }
    ctx->pc = 0x799D80u;
    {
        const bool branch_taken_0x799d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D80u;
        // 0x799d84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d80) {
            ctx->pc = 0x799DB8u;
            goto label_799db8;
        }
    }
    ctx->pc = 0x799D88u;
label_799d88:
    // 0x799d88: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799d88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799d8c:
    // 0x799d8c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799d8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799d90:
    // 0x799d90: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799d90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_799d94:
    // 0x799d94: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799d94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_799d98:
    // 0x799d98: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_799d9c:
    // 0x799d9c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_799da0:
    // 0x799da0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799da0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_799da4:
    // 0x799da4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_799da8:
    if (ctx->pc == 0x799DA8u) {
        ctx->pc = 0x799DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DA4u;
        // 0x799da8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799DACu;
        goto label_799dac;
    }
    ctx->pc = 0x799DA4u;
    {
        const bool branch_taken_0x799da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DA4u;
        // 0x799da8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799da4) {
            ctx->pc = 0x799DB8u;
            goto label_799db8;
        }
    }
    ctx->pc = 0x799DACu;
label_799dac:
    // 0x799dac: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799dacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799db0:
    // 0x799db0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_799db4:
    if (ctx->pc == 0x799DB4u) {
        ctx->pc = 0x799DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DB0u;
        // 0x799db4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799DB8u;
        goto label_799db8;
    }
    ctx->pc = 0x799DB0u;
    {
        const bool branch_taken_0x799db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799db0) {
            ctx->pc = 0x799DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799DB0u;
            // 0x799db4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799d90;
        }
    }
    ctx->pc = 0x799DB8u;
label_799db8:
    // 0x799db8: 0xc053f66  jal         func_14FD98
label_799dbc:
    if (ctx->pc == 0x799DBCu) {
        ctx->pc = 0x799DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DB8u;
        // 0x799dbc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799DC0u;
        goto label_799dc0;
    }
    ctx->pc = 0x799DB8u;
    SET_GPR_U32(ctx, 31, 0x799DC0u);
    ctx->pc = 0x799DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DB8u;
    // 0x799dbc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799DB8u, 0x799DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DC0u;
label_799dc0:
    // 0x799dc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799dc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799dc4:
    // 0x799dc4: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x799dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_799dc8:
    // 0x799dc8: 0xc0b1444  jal         func_2C5110
label_799dcc:
    if (ctx->pc == 0x799DCCu) {
        ctx->pc = 0x799DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DC8u;
        // 0x799dcc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799DD0u;
        goto label_799dd0;
    }
    ctx->pc = 0x799DC8u;
    SET_GPR_U32(ctx, 31, 0x799DD0u);
    ctx->pc = 0x799DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DC8u;
    // 0x799dcc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5110u, 0x799DC8u, 0x799DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DD0u;
label_799dd0:
    // 0x799dd0: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_799dd4:
    if (ctx->pc == 0x799DD4u) {
        ctx->pc = 0x799DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DD0u;
        // 0x799dd4: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799DD8u;
        goto label_799dd8;
    }
    ctx->pc = 0x799DD0u;
    {
        const bool branch_taken_0x799dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DD0u;
        // 0x799dd4: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799dd0) {
            ctx->pc = 0x799E14u;
            goto label_799e14;
        }
    }
    ctx->pc = 0x799DD8u;
label_799dd8:
    // 0x799dd8: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x799dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_799ddc:
    // 0x799ddc: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x799ddcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_799de0:
    // 0x799de0: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x799de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_799de4:
    // 0x799de4: 0x60f809  jalr        $v1
label_799de8:
    if (ctx->pc == 0x799DE8u) {
        ctx->pc = 0x799DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DE4u;
        // 0x799de8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799DECu;
        goto label_799dec;
    }
    ctx->pc = 0x799DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x799DECu);
        ctx->pc = 0x799DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DE4u;
        // 0x799de8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799DE4u, 0x799DECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799DECu;
label_799dec:
    // 0x799dec: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x799decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_799df0:
    // 0x799df0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799df4:
    // 0x799df4: 0x2444ee00  addiu       $a0, $v0, -0x1200
    ctx->pc = 0x799df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
label_799df8:
    // 0x799df8: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x799df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_799dfc:
    // 0x799dfc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799e00:
    // 0x799e00: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799e00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799e04:
    // 0x799e04: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799e04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799e08:
    // 0x799e08: 0xc0b2e28  jal         func_2CB8A0
label_799e0c:
    if (ctx->pc == 0x799E0Cu) {
        ctx->pc = 0x799E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E08u;
        // 0x799e0c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E10u;
        goto label_799e10;
    }
    ctx->pc = 0x799E08u;
    SET_GPR_U32(ctx, 31, 0x799E10u);
    ctx->pc = 0x799E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E08u;
    // 0x799e0c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799E08u, 0x799E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E10u;
label_799e10:
    // 0x799e10: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x799e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_799e14:
    // 0x799e14: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799e14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_799e18:
    // 0x799e18: 0x24a5a540  addiu       $a1, $a1, -0x5AC0
    ctx->pc = 0x799e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944064));
label_799e1c:
    // 0x799e1c: 0xc0b0fb6  jal         func_2C3ED8
label_799e20:
    if (ctx->pc == 0x799E20u) {
        ctx->pc = 0x799E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E1Cu;
        // 0x799e20: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E24u;
        goto label_799e24;
    }
    ctx->pc = 0x799E1Cu;
    SET_GPR_U32(ctx, 31, 0x799E24u);
    ctx->pc = 0x799E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E1Cu;
    // 0x799e20: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799E1Cu, 0x799E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E24u;
label_799e24:
    // 0x799e24: 0x93a500b0  lbu         $a1, 0xB0($sp)
    ctx->pc = 0x799e24u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
label_799e28:
    // 0x799e28: 0xc0a54b4  jal         func_2952D0
label_799e2c:
    if (ctx->pc == 0x799E2Cu) {
        ctx->pc = 0x799E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E28u;
        // 0x799e2c: 0x26c46ab0  addiu       $a0, $s6, 0x6AB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 27312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E30u;
        goto label_799e30;
    }
    ctx->pc = 0x799E28u;
    SET_GPR_U32(ctx, 31, 0x799E30u);
    ctx->pc = 0x799E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E28u;
    // 0x799e2c: 0x26c46ab0  addiu       $a0, $s6, 0x6AB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 27312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799E28u, 0x799E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E30u;
label_799e30:
    // 0x799e30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_799e34:
    // 0x799e34: 0xc0a56f0  jal         func_295BC0
label_799e38:
    if (ctx->pc == 0x799E38u) {
        ctx->pc = 0x799E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E34u;
        // 0x799e38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E3Cu;
        goto label_799e3c;
    }
    ctx->pc = 0x799E34u;
    SET_GPR_U32(ctx, 31, 0x799E3Cu);
    ctx->pc = 0x799E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E34u;
    // 0x799e38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799E34u, 0x799E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E3Cu;
label_799e3c:
    // 0x799e3c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x799e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_799e40:
    // 0x799e40: 0x24060036  addiu       $a2, $zero, 0x36
    ctx->pc = 0x799e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_799e44:
    // 0x799e44: 0x2464ee00  addiu       $a0, $v1, -0x1200
    ctx->pc = 0x799e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962688));
label_799e48:
    // 0x799e48: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799e48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799e4c:
    // 0x799e4c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799e4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799e50:
    // 0x799e50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799e50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799e54:
    // 0x799e54: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x799e54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799e58:
    // 0x799e58: 0xc0b2e28  jal         func_2CB8A0
label_799e5c:
    if (ctx->pc == 0x799E5Cu) {
        ctx->pc = 0x799E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E58u;
        // 0x799e5c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E60u;
        goto label_799e60;
    }
    ctx->pc = 0x799E58u;
    SET_GPR_U32(ctx, 31, 0x799E60u);
    ctx->pc = 0x799E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E58u;
    // 0x799e5c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799E58u, 0x799E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E60u;
label_799e60:
    // 0x799e60: 0xc0b101e  jal         func_2C4078
label_799e64:
    if (ctx->pc == 0x799E64u) {
        ctx->pc = 0x799E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E60u;
        // 0x799e64: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E68u;
        goto label_799e68;
    }
    ctx->pc = 0x799E60u;
    SET_GPR_U32(ctx, 31, 0x799E68u);
    ctx->pc = 0x799E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E60u;
    // 0x799e64: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799E60u, 0x799E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E68u;
label_799e68:
    // 0x799e68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_799e6c:
    // 0x799e6c: 0xc0a56f0  jal         func_295BC0
label_799e70:
    if (ctx->pc == 0x799E70u) {
        ctx->pc = 0x799E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E6Cu;
        // 0x799e70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E74u;
        goto label_799e74;
    }
    ctx->pc = 0x799E6Cu;
    SET_GPR_U32(ctx, 31, 0x799E74u);
    ctx->pc = 0x799E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E6Cu;
    // 0x799e70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799E6Cu, 0x799E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E74u;
label_799e74:
    // 0x799e74: 0xc0b0f04  jal         func_2C3C10
label_799e78:
    if (ctx->pc == 0x799E78u) {
        ctx->pc = 0x799E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E74u;
        // 0x799e78: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E7Cu;
        goto label_799e7c;
    }
    ctx->pc = 0x799E74u;
    SET_GPR_U32(ctx, 31, 0x799E7Cu);
    ctx->pc = 0x799E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E74u;
    // 0x799e78: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x799E74u, 0x799E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E7Cu;
label_799e7c:
    // 0x799e7c: 0x10000005  b           . + 4 + (0x5 << 2)
label_799e80:
    if (ctx->pc == 0x799E80u) {
        ctx->pc = 0x799E84u;
        goto label_799e84;
    }
    ctx->pc = 0x799E7Cu;
    {
        const bool branch_taken_0x799e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x799e7c) {
            ctx->pc = 0x799E94u;
            goto label_799e94;
        }
    }
    ctx->pc = 0x799E84u;
label_799e84:
    // 0x799e84: 0x0  nop
    ctx->pc = 0x799e84u;
    // NOP
label_799e88:
    // 0x799e88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799e8c:
    // 0x799e8c: 0xc0b56a8  jal         func_2D5AA0
label_799e90:
    if (ctx->pc == 0x799E90u) {
        ctx->pc = 0x799E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E8Cu;
        // 0x799e90: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E94u;
        goto label_799e94;
    }
    ctx->pc = 0x799E8Cu;
    SET_GPR_U32(ctx, 31, 0x799E94u);
    ctx->pc = 0x799E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E8Cu;
    // 0x799e90: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799E8Cu, 0x799E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E94u;
label_799e94:
    // 0x799e94: 0xc0a572a  jal         func_295CA8
label_799e98:
    if (ctx->pc == 0x799E98u) {
        ctx->pc = 0x799E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E94u;
        // 0x799e98: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E9Cu;
        goto label_799e9c;
    }
    ctx->pc = 0x799E94u;
    SET_GPR_U32(ctx, 31, 0x799E9Cu);
    ctx->pc = 0x799E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E94u;
    // 0x799e98: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799E94u, 0x799E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E9Cu;
label_799e9c:
    // 0x799e9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799e9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799ea0:
    // 0x799ea0: 0x1613fff9  bne         $s0, $s3, . + 4 + (-0x7 << 2)
label_799ea4:
    if (ctx->pc == 0x799EA4u) {
        ctx->pc = 0x799EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EA0u;
        // 0x799ea4: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799EA8u;
        goto label_799ea8;
    }
    ctx->pc = 0x799EA0u;
    {
        const bool branch_taken_0x799ea0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x799EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EA0u;
        // 0x799ea4: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ea0) {
            ctx->pc = 0x799E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799e88;
        }
    }
    ctx->pc = 0x799EA8u;
label_799ea8:
    // 0x799ea8: 0xc0a572a  jal         func_295CA8
label_799eac:
    if (ctx->pc == 0x799EACu) {
        ctx->pc = 0x799EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EA8u;
        // 0x799eac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799EB0u;
        goto label_799eb0;
    }
    ctx->pc = 0x799EA8u;
    SET_GPR_U32(ctx, 31, 0x799EB0u);
    ctx->pc = 0x799EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EA8u;
    // 0x799eac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799EA8u, 0x799EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EB0u;
label_799eb0:
    // 0x799eb0: 0x1450fff5  bne         $v0, $s0, . + 4 + (-0xB << 2)
label_799eb4:
    if (ctx->pc == 0x799EB4u) {
        ctx->pc = 0x799EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EB0u;
        // 0x799eb4: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799EB8u;
        goto label_799eb8;
    }
    ctx->pc = 0x799EB0u;
    {
        const bool branch_taken_0x799eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x799EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EB0u;
        // 0x799eb4: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799eb0) {
            ctx->pc = 0x799E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799e88;
        }
    }
    ctx->pc = 0x799EB8u;
label_799eb8:
    // 0x799eb8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x799eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_799ebc:
    // 0x799ebc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799ec0:
    // 0x799ec0: 0x2451ee00  addiu       $s1, $v0, -0x1200
    ctx->pc = 0x799ec0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
label_799ec4:
    // 0x799ec4: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x799ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_799ec8:
    // 0x799ec8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799ec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_799ecc:
    // 0x799ecc: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x799eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
label_799ed0:
    // 0x799ed0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x799ed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_799ed4:
    // 0x799ed4: 0xc0b42ae  jal         func_2D0AB8
label_799ed8:
    if (ctx->pc == 0x799ED8u) {
        ctx->pc = 0x799ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799ED4u;
        // 0x799ed8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799EDCu;
        goto label_799edc;
    }
    ctx->pc = 0x799ED4u;
    SET_GPR_U32(ctx, 31, 0x799EDCu);
    ctx->pc = 0x799ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799ED4u;
    // 0x799ed8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x799ED4u, 0x799EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EDCu;
label_799edc:
    // 0x799edc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x799edcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799ee0:
    // 0x799ee0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x799ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_799ee4:
    // 0x799ee4: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x799ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_799ee8:
    // 0x799ee8: 0x2470ea60  addiu       $s0, $v1, -0x15A0
    ctx->pc = 0x799ee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961760));
label_799eec:
    // 0x799eec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799ef0:
    // 0x799ef0: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x799ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_799ef4:
    // 0x799ef4: 0x8c627a8c  lw          $v0, 0x7A8C($v1)
    ctx->pc = 0x799ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31372)));
label_799ef8:
    // 0x799ef8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x799ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_799efc:
    // 0x799efc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x799efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_799f00:
    // 0x799f00: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x799f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_799f04:
    // 0x799f04: 0xc0b0e6c  jal         func_2C39B0
label_799f08:
    if (ctx->pc == 0x799F08u) {
        ctx->pc = 0x799F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F04u;
        // 0x799f08: 0xac627a8c  sw          $v0, 0x7A8C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 31372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F0Cu;
        goto label_799f0c;
    }
    ctx->pc = 0x799F04u;
    SET_GPR_U32(ctx, 31, 0x799F0Cu);
    ctx->pc = 0x799F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F04u;
    // 0x799f08: 0xac627a8c  sw          $v0, 0x7A8C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 31372), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799F04u, 0x799F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F0Cu;
label_799f0c:
    // 0x799f0c: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x799f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_799f10:
    // 0x799f10: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_799f14:
    // 0x799f14: 0xc0b0fb6  jal         func_2C3ED8
label_799f18:
    if (ctx->pc == 0x799F18u) {
        ctx->pc = 0x799F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F14u;
        // 0x799f18: 0x2445a548  addiu       $a1, $v0, -0x5AB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F1Cu;
        goto label_799f1c;
    }
    ctx->pc = 0x799F14u;
    SET_GPR_U32(ctx, 31, 0x799F1Cu);
    ctx->pc = 0x799F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F14u;
    // 0x799f18: 0x2445a548  addiu       $a1, $v0, -0x5AB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799F14u, 0x799F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F1Cu;
label_799f1c:
    // 0x799f1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799f20:
    // 0x799f20: 0xc0a578e  jal         func_295E38
label_799f24:
    if (ctx->pc == 0x799F24u) {
        ctx->pc = 0x799F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F20u;
        // 0x799f24: 0x240503d1  addiu       $a1, $zero, 0x3D1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 977));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F28u;
        goto label_799f28;
    }
    ctx->pc = 0x799F20u;
    SET_GPR_U32(ctx, 31, 0x799F28u);
    ctx->pc = 0x799F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F20u;
    // 0x799f24: 0x240503d1  addiu       $a1, $zero, 0x3D1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 977));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x799F20u, 0x799F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F28u;
label_799f28:
    // 0x799f28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x799f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_799f2c:
    // 0x799f2c: 0xc0a578e  jal         func_295E38
label_799f30:
    if (ctx->pc == 0x799F30u) {
        ctx->pc = 0x799F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F2Cu;
        // 0x799f30: 0x240503d7  addiu       $a1, $zero, 0x3D7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 983));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F34u;
        goto label_799f34;
    }
    ctx->pc = 0x799F2Cu;
    SET_GPR_U32(ctx, 31, 0x799F34u);
    ctx->pc = 0x799F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F2Cu;
    // 0x799f30: 0x240503d7  addiu       $a1, $zero, 0x3D7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 983));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x799F2Cu, 0x799F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F34u;
label_799f34:
    // 0x799f34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799f38:
    // 0x799f38: 0xc0a56f0  jal         func_295BC0
label_799f3c:
    if (ctx->pc == 0x799F3Cu) {
        ctx->pc = 0x799F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F38u;
        // 0x799f3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F40u;
        goto label_799f40;
    }
    ctx->pc = 0x799F38u;
    SET_GPR_U32(ctx, 31, 0x799F40u);
    ctx->pc = 0x799F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F38u;
    // 0x799f3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799F38u, 0x799F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F40u;
label_799f40:
    // 0x799f40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799f44:
    // 0x799f44: 0xc0a56f0  jal         func_295BC0
label_799f48:
    if (ctx->pc == 0x799F48u) {
        ctx->pc = 0x799F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F44u;
        // 0x799f48: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F4Cu;
        goto label_799f4c;
    }
    ctx->pc = 0x799F44u;
    SET_GPR_U32(ctx, 31, 0x799F4Cu);
    ctx->pc = 0x799F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F44u;
    // 0x799f48: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799F44u, 0x799F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F4Cu;
label_799f4c:
    // 0x799f4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799f50:
    // 0x799f50: 0xc0a56e0  jal         func_295B80
label_799f54:
    if (ctx->pc == 0x799F54u) {
        ctx->pc = 0x799F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F50u;
        // 0x799f54: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F58u;
        goto label_799f58;
    }
    ctx->pc = 0x799F50u;
    SET_GPR_U32(ctx, 31, 0x799F58u);
    ctx->pc = 0x799F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F50u;
    // 0x799f54: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B80u, 0x799F50u, 0x799F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F58u;
label_799f58:
    // 0x799f58: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799f58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_799f5c:
    // 0x799f5c: 0xc0a56e0  jal         func_295B80
label_799f60:
    if (ctx->pc == 0x799F60u) {
        ctx->pc = 0x799F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F5Cu;
        // 0x799f60: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F64u;
        goto label_799f64;
    }
    ctx->pc = 0x799F5Cu;
    SET_GPR_U32(ctx, 31, 0x799F64u);
    ctx->pc = 0x799F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F5Cu;
    // 0x799f60: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B80u, 0x799F5Cu, 0x799F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F64u;
label_799f64:
    // 0x799f64: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x799f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_799f68:
    // 0x799f68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799f6c:
    // 0x799f6c: 0xc0b0a92  jal         func_2C2A48
label_799f70:
    if (ctx->pc == 0x799F70u) {
        ctx->pc = 0x799F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F6Cu;
        // 0x799f70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F74u;
        goto label_799f74;
    }
    ctx->pc = 0x799F6Cu;
    SET_GPR_U32(ctx, 31, 0x799F74u);
    ctx->pc = 0x799F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F6Cu;
    // 0x799f70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x799F6Cu, 0x799F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F74u;
label_799f74:
    // 0x799f74: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x799f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_799f78:
    // 0x799f78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799f7c:
    // 0x799f7c: 0xc0b0a92  jal         func_2C2A48
label_799f80:
    if (ctx->pc == 0x799F80u) {
        ctx->pc = 0x799F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F7Cu;
        // 0x799f80: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F84u;
        goto label_799f84;
    }
    ctx->pc = 0x799F7Cu;
    SET_GPR_U32(ctx, 31, 0x799F84u);
    ctx->pc = 0x799F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F7Cu;
    // 0x799f80: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x799F7Cu, 0x799F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F84u;
label_799f84:
    // 0x799f84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799f88:
    // 0x799f88: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x799f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_799f8c:
    // 0x799f8c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x799f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_799f90:
    // 0x799f90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799f90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799f94:
    // 0x799f94: 0xc0a57e0  jal         func_295F80
label_799f98:
    if (ctx->pc == 0x799F98u) {
        ctx->pc = 0x799F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F94u;
        // 0x799f98: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F9Cu;
        goto label_799f9c;
    }
    ctx->pc = 0x799F94u;
    SET_GPR_U32(ctx, 31, 0x799F9Cu);
    ctx->pc = 0x799F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F94u;
    // 0x799f98: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799F94u, 0x799F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F9Cu;
label_799f9c:
    // 0x799f9c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x799f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_799fa0:
    // 0x799fa0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x799fa0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_799fa4:
    // 0x799fa4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x799fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_799fa8:
    // 0x799fa8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799fa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799fac:
    // 0x799fac: 0xc0a57e0  jal         func_295F80
label_799fb0:
    if (ctx->pc == 0x799FB0u) {
        ctx->pc = 0x799FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FACu;
        // 0x799fb0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FB4u;
        goto label_799fb4;
    }
    ctx->pc = 0x799FACu;
    SET_GPR_U32(ctx, 31, 0x799FB4u);
    ctx->pc = 0x799FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FACu;
    // 0x799fb0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799FACu, 0x799FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FB4u;
label_799fb4:
    // 0x799fb4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799fb8:
    // 0x799fb8: 0xc0a5704  jal         func_295C10
label_799fbc:
    if (ctx->pc == 0x799FBCu) {
        ctx->pc = 0x799FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FB8u;
        // 0x799fbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FC0u;
        goto label_799fc0;
    }
    ctx->pc = 0x799FB8u;
    SET_GPR_U32(ctx, 31, 0x799FC0u);
    ctx->pc = 0x799FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FB8u;
    // 0x799fbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C10u, 0x799FB8u, 0x799FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FC0u;
label_799fc0:
    // 0x799fc0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x799fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_799fc4:
    // 0x799fc4: 0xc0a5704  jal         func_295C10
label_799fc8:
    if (ctx->pc == 0x799FC8u) {
        ctx->pc = 0x799FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FC4u;
        // 0x799fc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FCCu;
        goto label_799fcc;
    }
    ctx->pc = 0x799FC4u;
    SET_GPR_U32(ctx, 31, 0x799FCCu);
    ctx->pc = 0x799FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FC4u;
    // 0x799fc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C10u, 0x799FC4u, 0x799FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FCCu;
label_799fcc:
    // 0x799fcc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799fd0:
    // 0x799fd0: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x799fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_799fd4:
    // 0x799fd4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799fd8:
    // 0x799fd8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799fd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799fdc:
    // 0x799fdc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799fdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799fe0:
    // 0x799fe0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x799fe0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799fe4:
    // 0x799fe4: 0xc0b2e28  jal         func_2CB8A0
label_799fe8:
    if (ctx->pc == 0x799FE8u) {
        ctx->pc = 0x799FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FE4u;
        // 0x799fe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FECu;
        goto label_799fec;
    }
    ctx->pc = 0x799FE4u;
    SET_GPR_U32(ctx, 31, 0x799FECu);
    ctx->pc = 0x799FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FE4u;
    // 0x799fe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799FE4u, 0x799FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FECu;
label_799fec:
    // 0x799fec: 0xc0b101e  jal         func_2C4078
label_799ff0:
    if (ctx->pc == 0x799FF0u) {
        ctx->pc = 0x799FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FECu;
        // 0x799ff0: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FF4u;
        goto label_799ff4;
    }
    ctx->pc = 0x799FECu;
    SET_GPR_U32(ctx, 31, 0x799FF4u);
    ctx->pc = 0x799FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FECu;
    // 0x799ff0: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799FECu, 0x799FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FF4u;
label_799ff4:
    // 0x799ff4: 0xc0b0f04  jal         func_2C3C10
label_799ff8:
    if (ctx->pc == 0x799FF8u) {
        ctx->pc = 0x799FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FF4u;
        // 0x799ff8: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FFCu;
        goto label_799ffc;
    }
    ctx->pc = 0x799FF4u;
    SET_GPR_U32(ctx, 31, 0x799FFCu);
    ctx->pc = 0x799FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FF4u;
    // 0x799ff8: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x799FF4u, 0x799FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FFCu;
label_799ffc:
    // 0x799ffc: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x799ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_79a000:
    // 0x79a000: 0x8c64d6e8  lw          $a0, -0x2918($v1)
    ctx->pc = 0x79a000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956776)));
label_79a004:
    // 0x79a004: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x79a004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_79a008:
    // 0x79a008: 0x8c821f20  lw          $v0, 0x1F20($a0)
    ctx->pc = 0x79a008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7968)));
label_79a00c:
    // 0x79a00c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79a00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_79a010:
    // 0x79a010: 0x10000004  b           . + 4 + (0x4 << 2)
label_79a014:
    if (ctx->pc == 0x79A014u) {
        ctx->pc = 0x79A014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A010u;
        // 0x79a014: 0xac821f20  sw          $v0, 0x1F20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 7968), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A018u;
        goto label_79a018;
    }
    ctx->pc = 0x79A010u;
    {
        const bool branch_taken_0x79a010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A010u;
        // 0x79a014: 0xac821f20  sw          $v0, 0x1F20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 7968), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a010) {
            ctx->pc = 0x79A024u;
            goto label_79a024;
        }
    }
    ctx->pc = 0x79A018u;
label_79a018:
    // 0x79a018: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a01c:
    // 0x79a01c: 0xc0b56a8  jal         func_2D5AA0
label_79a020:
    if (ctx->pc == 0x79A020u) {
        ctx->pc = 0x79A020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A01Cu;
        // 0x79a020: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A024u;
        goto label_79a024;
    }
    ctx->pc = 0x79A01Cu;
    SET_GPR_U32(ctx, 31, 0x79A024u);
    ctx->pc = 0x79A020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A01Cu;
    // 0x79a020: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A01Cu, 0x79A024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A024u;
label_79a024:
    // 0x79a024: 0xc0a572a  jal         func_295CA8
label_79a028:
    if (ctx->pc == 0x79A028u) {
        ctx->pc = 0x79A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A024u;
        // 0x79a028: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A02Cu;
        goto label_79a02c;
    }
    ctx->pc = 0x79A024u;
    SET_GPR_U32(ctx, 31, 0x79A02Cu);
    ctx->pc = 0x79A028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A024u;
    // 0x79a028: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A024u, 0x79A02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A02Cu;
label_79a02c:
    // 0x79a02c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a02cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a030:
    // 0x79a030: 0x1613fff9  bne         $s0, $s3, . + 4 + (-0x7 << 2)
label_79a034:
    if (ctx->pc == 0x79A034u) {
        ctx->pc = 0x79A034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A030u;
        // 0x79a034: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A038u;
        goto label_79a038;
    }
    ctx->pc = 0x79A030u;
    {
        const bool branch_taken_0x79a030 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x79A034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A030u;
        // 0x79a034: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a030) {
            ctx->pc = 0x79A018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a018;
        }
    }
    ctx->pc = 0x79A038u;
label_79a038:
    // 0x79a038: 0xc0a572a  jal         func_295CA8
label_79a03c:
    if (ctx->pc == 0x79A03Cu) {
        ctx->pc = 0x79A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A038u;
        // 0x79a03c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A040u;
        goto label_79a040;
    }
    ctx->pc = 0x79A038u;
    SET_GPR_U32(ctx, 31, 0x79A040u);
    ctx->pc = 0x79A03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A038u;
    // 0x79a03c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A038u, 0x79A040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A040u;
label_79a040:
    // 0x79a040: 0x1450fff5  bne         $v0, $s0, . + 4 + (-0xB << 2)
label_79a044:
    if (ctx->pc == 0x79A044u) {
        ctx->pc = 0x79A044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A040u;
        // 0x79a044: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A048u;
        goto label_79a048;
    }
    ctx->pc = 0x79A040u;
    {
        const bool branch_taken_0x79a040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x79A044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A040u;
        // 0x79a044: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a040) {
            ctx->pc = 0x79A018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a018;
        }
    }
    ctx->pc = 0x79A048u;
label_79a048:
    // 0x79a048: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79a048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_79a04c:
    // 0x79a04c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x79a04cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_79a050:
    // 0x79a050: 0x8c448658  lw          $a0, -0x79A8($v0)
    ctx->pc = 0x79a050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936152)));
label_79a054:
    // 0x79a054: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x79a054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_79a058:
    // 0x79a058: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x79a058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_79a05c:
    // 0x79a05c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79a05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_79a060:
    // 0x79a060: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x79a060u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_79a064:
    // 0x79a064: 0x8ea32f84  lw          $v1, 0x2F84($s5)
    ctx->pc = 0x79a064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_79a068:
    // 0x79a068: 0xc0b56a8  jal         func_2D5AA0
label_79a06c:
    if (ctx->pc == 0x79A06Cu) {
        ctx->pc = 0x79A06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A068u;
        // 0x79a06c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A070u;
        goto label_79a070;
    }
    ctx->pc = 0x79A068u;
    SET_GPR_U32(ctx, 31, 0x79A070u);
    ctx->pc = 0x79A06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A068u;
    // 0x79a06c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A068u, 0x79A070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A070u;
label_79a070:
    // 0x79a070: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x79a070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_79a074:
    // 0x79a074: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a078:
    // 0x79a078: 0xc0b42ae  jal         func_2D0AB8
label_79a07c:
    if (ctx->pc == 0x79A07Cu) {
        ctx->pc = 0x79A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A078u;
        // 0x79a07c: 0x2464ee00  addiu       $a0, $v1, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A080u;
        goto label_79a080;
    }
    ctx->pc = 0x79A078u;
    SET_GPR_U32(ctx, 31, 0x79A080u);
    ctx->pc = 0x79A07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A078u;
    // 0x79a07c: 0x2464ee00  addiu       $a0, $v1, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x79A078u, 0x79A080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A080u;
label_79a080:
    // 0x79a080: 0xc0a56ae  jal         func_295AB8
label_79a084:
    if (ctx->pc == 0x79A084u) {
        ctx->pc = 0x79A084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A080u;
        // 0x79a084: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A088u;
        goto label_79a088;
    }
    ctx->pc = 0x79A080u;
    SET_GPR_U32(ctx, 31, 0x79A088u);
    ctx->pc = 0x79A084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A080u;
    // 0x79a084: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x79A080u, 0x79A088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A088u;
label_79a088:
    // 0x79a088: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79a088u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79a08c:
    // 0x79a08c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x79a08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_79a090:
    // 0x79a090: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_79a094:
    // 0x79a094: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x79a094u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_79a098:
    // 0x79a098: 0x8c44a600  lw          $a0, -0x5A00($v0)
    ctx->pc = 0x79a098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944256)));
label_79a09c:
    // 0x79a09c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x79a09cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79a0a0:
    // 0x79a0a0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79a0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_79a0a4:
    // 0x79a0a4: 0xc0b0346  jal         func_2C0D18
label_79a0a8:
    if (ctx->pc == 0x79A0A8u) {
        ctx->pc = 0x79A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0A4u;
        // 0x79a0a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A0ACu;
        goto label_79a0ac;
    }
    ctx->pc = 0x79A0A4u;
    SET_GPR_U32(ctx, 31, 0x79A0ACu);
    ctx->pc = 0x79A0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0A4u;
    // 0x79a0a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0D18u, 0x79A0A4u, 0x79A0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0ACu;
label_79a0ac:
    // 0x79a0ac: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x79a0acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_79a0b0:
    // 0x79a0b0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79a0b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_79a0b4:
    // 0x79a0b4: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_79a0b8:
    // 0x79a0b8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x79a0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_79a0bc:
    // 0x79a0bc: 0x8c44a600  lw          $a0, -0x5A00($v0)
    ctx->pc = 0x79a0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944256)));
label_79a0c0:
    // 0x79a0c0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x79a0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_79a0c4:
    // 0x79a0c4: 0x2470ea60  addiu       $s0, $v1, -0x15A0
    ctx->pc = 0x79a0c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961760));
label_79a0c8:
    // 0x79a0c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79a0c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_79a0cc:
    // 0x79a0cc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x79a0ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_79a0d0:
    // 0x79a0d0: 0xc0b036a  jal         func_2C0DA8
label_79a0d4:
    if (ctx->pc == 0x79A0D4u) {
        ctx->pc = 0x79A0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0D0u;
        // 0x79a0d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A0D8u;
        goto label_79a0d8;
    }
    ctx->pc = 0x79A0D0u;
    SET_GPR_U32(ctx, 31, 0x79A0D8u);
    ctx->pc = 0x79A0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0D0u;
    // 0x79a0d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DA8u, 0x79A0D0u, 0x79A0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0D8u;
label_79a0d8:
    // 0x79a0d8: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_79a0dc:
    // 0x79a0dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a0e0:
    // 0x79a0e0: 0x8c43a600  lw          $v1, -0x5A00($v0)
    ctx->pc = 0x79a0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944256)));
label_79a0e4:
    // 0x79a0e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a0e8:
    // 0x79a0e8: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x79a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_79a0ec:
    // 0x79a0ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a0ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a0f0:
    // 0x79a0f0: 0xa462005e  sh          $v0, 0x5E($v1)
    ctx->pc = 0x79a0f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 94), (uint16_t)GPR_U32(ctx, 2));
label_79a0f4:
    // 0x79a0f4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a0f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79a0f8:
    // 0x79a0f8: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79a0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
label_79a0fc:
    // 0x79a0fc: 0xc0b0be4  jal         func_2C2F90
label_79a100:
    if (ctx->pc == 0x79A100u) {
        ctx->pc = 0x79A100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0FCu;
        // 0x79a100: 0x8c65a600  lw          $a1, -0x5A00($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A104u;
        goto label_79a104;
    }
    ctx->pc = 0x79A0FCu;
    SET_GPR_U32(ctx, 31, 0x79A104u);
    ctx->pc = 0x79A100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0FCu;
    // 0x79a100: 0x8c65a600  lw          $a1, -0x5A00($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944256)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2F90u, 0x79A0FCu, 0x79A104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A104u;
label_79a104:
    // 0x79a104: 0xc0a56ae  jal         func_295AB8
label_79a108:
    if (ctx->pc == 0x79A108u) {
        ctx->pc = 0x79A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A104u;
        // 0x79a108: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A10Cu;
        goto label_79a10c;
    }
    ctx->pc = 0x79A104u;
    SET_GPR_U32(ctx, 31, 0x79A10Cu);
    ctx->pc = 0x79A108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A104u;
    // 0x79a108: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x79A104u, 0x79A10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A10Cu;
label_79a10c:
    // 0x79a10c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79a10cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79a110:
    // 0x79a110: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x79a110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_79a114:
    // 0x79a114: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_79a118:
    // 0x79a118: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x79a118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_79a11c:
    // 0x79a11c: 0x8c44a600  lw          $a0, -0x5A00($v0)
    ctx->pc = 0x79a11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944256)));
label_79a120:
    // 0x79a120: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x79a120u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79a124:
    // 0x79a124: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79a124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_79a128:
    // 0x79a128: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a12c:
    // 0x79a12c: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x79a12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_79a130:
    // 0x79a130: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x79a130u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_79a134:
    // 0x79a134: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x79a134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_79a138:
    // 0x79a138: 0xc0b0346  jal         func_2C0D18
label_79a13c:
    if (ctx->pc == 0x79A13Cu) {
        ctx->pc = 0x79A13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A138u;
        // 0x79a13c: 0x2484009c  addiu       $a0, $a0, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 156));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A140u;
        goto label_79a140;
    }
    ctx->pc = 0x79A138u;
    SET_GPR_U32(ctx, 31, 0x79A140u);
    ctx->pc = 0x79A13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A138u;
    // 0x79a13c: 0x2484009c  addiu       $a0, $a0, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0D18u, 0x79A138u, 0x79A140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A140u;
label_79a140:
    // 0x79a140: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x79a140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_79a144:
    // 0x79a144: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79a144u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_79a148:
    // 0x79a148: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x79a148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_79a14c:
    // 0x79a14c: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79a14cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
label_79a150:
    // 0x79a150: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79a150u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_79a154:
    // 0x79a154: 0x8c64a600  lw          $a0, -0x5A00($v1)
    ctx->pc = 0x79a154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944256)));
label_79a158:
    // 0x79a158: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x79a158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_79a15c:
    // 0x79a15c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a15cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a160:
    // 0x79a160: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x79a160u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_79a164:
    // 0x79a164: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_79a168:
    // 0x79a168: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x79a168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_79a16c:
    // 0x79a16c: 0xc0b036a  jal         func_2C0DA8
label_79a170:
    if (ctx->pc == 0x79A170u) {
        ctx->pc = 0x79A170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A16Cu;
        // 0x79a170: 0x2484009c  addiu       $a0, $a0, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 156));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A174u;
        goto label_79a174;
    }
    ctx->pc = 0x79A16Cu;
    SET_GPR_U32(ctx, 31, 0x79A174u);
    ctx->pc = 0x79A170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A16Cu;
    // 0x79a170: 0x2484009c  addiu       $a0, $a0, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DA8u, 0x79A16Cu, 0x79A174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A174u;
label_79a174:
    // 0x79a174: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_79a178:
    // 0x79a178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a17c:
    // 0x79a17c: 0x8c43a600  lw          $v1, -0x5A00($v0)
    ctx->pc = 0x79a17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944256)));
label_79a180:
    // 0x79a180: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a184:
    // 0x79a184: 0x24021001  addiu       $v0, $zero, 0x1001
    ctx->pc = 0x79a184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
label_79a188:
    // 0x79a188: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a188u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a18c:
    // 0x79a18c: 0xa46200fa  sh          $v0, 0xFA($v1)
    ctx->pc = 0x79a18cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 250), (uint16_t)GPR_U32(ctx, 2));
label_79a190:
    // 0x79a190: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a190u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79a194:
    // 0x79a194: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79a194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
label_79a198:
    // 0x79a198: 0x8c65a600  lw          $a1, -0x5A00($v1)
    ctx->pc = 0x79a198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944256)));
label_79a19c:
    // 0x79a19c: 0xc0b0be4  jal         func_2C2F90
label_79a1a0:
    if (ctx->pc == 0x79A1A0u) {
        ctx->pc = 0x79A1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A19Cu;
        // 0x79a1a0: 0x24a5009c  addiu       $a1, $a1, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 156));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1A4u;
        goto label_79a1a4;
    }
    ctx->pc = 0x79A19Cu;
    SET_GPR_U32(ctx, 31, 0x79A1A4u);
    ctx->pc = 0x79A1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A19Cu;
    // 0x79a1a0: 0x24a5009c  addiu       $a1, $a1, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2F90u, 0x79A19Cu, 0x79A1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1A4u;
label_79a1a4:
    // 0x79a1a4: 0x4617ad41  sub.s       $f21, $f21, $f23
    ctx->pc = 0x79a1a4u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[23]);
label_79a1a8:
    // 0x79a1a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79a1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a1ac:
    // 0x79a1ac: 0xc0b6cc6  jal         func_2DB318
label_79a1b0:
    if (ctx->pc == 0x79A1B0u) {
        ctx->pc = 0x79A1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1ACu;
        // 0x79a1b0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1B4u;
        goto label_79a1b4;
    }
    ctx->pc = 0x79A1ACu;
    SET_GPR_U32(ctx, 31, 0x79A1B4u);
    ctx->pc = 0x79A1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1ACu;
    // 0x79a1b0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB318u, 0x79A1ACu, 0x79A1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1B4u;
label_79a1b4:
    // 0x79a1b4: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x79a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_79a1b8:
    // 0x79a1b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a1bc:
    // 0x79a1bc: 0xc0b56a8  jal         func_2D5AA0
label_79a1c0:
    if (ctx->pc == 0x79A1C0u) {
        ctx->pc = 0x79A1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1BCu;
        // 0x79a1c0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1C4u;
        goto label_79a1c4;
    }
    ctx->pc = 0x79A1BCu;
    SET_GPR_U32(ctx, 31, 0x79A1C4u);
    ctx->pc = 0x79A1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1BCu;
    // 0x79a1c0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A1BCu, 0x79A1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1C4u;
label_79a1c4:
    // 0x79a1c4: 0x4615b034  c.lt.s      $f22, $f21
    ctx->pc = 0x79a1c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_79a1c8:
    // 0x79a1c8: 0x0  nop
    ctx->pc = 0x79a1c8u;
    // NOP
label_79a1cc:
    // 0x79a1cc: 0x4503fff6  bc1tl       . + 4 + (-0xA << 2)
label_79a1d0:
    if (ctx->pc == 0x79A1D0u) {
        ctx->pc = 0x79A1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1CCu;
        // 0x79a1d0: 0x4617ad41  sub.s       $f21, $f21, $f23 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1D4u;
        goto label_79a1d4;
    }
    ctx->pc = 0x79A1CCu;
    {
        const bool branch_taken_0x79a1cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x79a1cc) {
            ctx->pc = 0x79A1D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A1CCu;
            // 0x79a1d0: 0x4617ad41  sub.s       $f21, $f21, $f23 (Delay Slot)
            ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[23]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a1a8;
        }
    }
    ctx->pc = 0x79A1D4u;
label_79a1d4:
    // 0x79a1d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79a1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a1d8:
    // 0x79a1d8: 0xc0b6cac  jal         func_2DB2B0
label_79a1dc:
    if (ctx->pc == 0x79A1DCu) {
        ctx->pc = 0x79A1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1D8u;
        // 0x79a1dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1E0u;
        goto label_79a1e0;
    }
    ctx->pc = 0x79A1D8u;
    SET_GPR_U32(ctx, 31, 0x79A1E0u);
    ctx->pc = 0x79A1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1D8u;
    // 0x79a1dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79A1D8u, 0x79A1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1E0u;
label_79a1e0:
    // 0x79a1e0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x79a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_79a1e4:
    // 0x79a1e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a1e8:
    // 0x79a1e8: 0x2450ea60  addiu       $s0, $v0, -0x15A0
    ctx->pc = 0x79a1e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961760));
label_79a1ec:
    // 0x79a1ec: 0xc0b0ab8  jal         func_2C2AE0
label_79a1f0:
    if (ctx->pc == 0x79A1F0u) {
        ctx->pc = 0x79A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1ECu;
        // 0x79a1f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1F4u;
        goto label_79a1f4;
    }
    ctx->pc = 0x79A1ECu;
    SET_GPR_U32(ctx, 31, 0x79A1F4u);
    ctx->pc = 0x79A1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1ECu;
    // 0x79a1f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x79A1ECu, 0x79A1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1F4u;
label_79a1f4:
    // 0x79a1f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a1f8:
    // 0x79a1f8: 0xc0b0a3e  jal         func_2C28F8
label_79a1fc:
    if (ctx->pc == 0x79A1FCu) {
        ctx->pc = 0x79A1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1F8u;
        // 0x79a1fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A200u;
        goto label_79a200;
    }
    ctx->pc = 0x79A1F8u;
    SET_GPR_U32(ctx, 31, 0x79A200u);
    ctx->pc = 0x79A1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1F8u;
    // 0x79a1fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C28F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C28F8u, 0x79A1F8u, 0x79A200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A200u;
label_79a200:
    // 0x79a200: 0x8ea32f84  lw          $v1, 0x2F84($s5)
    ctx->pc = 0x79a200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_79a204:
    // 0x79a204: 0xc0b5692  jal         func_2D5A48
label_79a208:
    if (ctx->pc == 0x79A208u) {
        ctx->pc = 0x79A208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A204u;
        // 0x79a208: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A20Cu;
        goto label_79a20c;
    }
    ctx->pc = 0x79A204u;
    SET_GPR_U32(ctx, 31, 0x79A20Cu);
    ctx->pc = 0x79A208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A204u;
    // 0x79a208: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A204u, 0x79A20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A20Cu;
label_79a20c:
    // 0x79a20c: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x79a20cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_79a210:
    // 0x79a210: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x79a210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_79a214:
    // 0x79a214: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x79a214u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_79a218:
    // 0x79a218: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x79a218u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_79a21c:
    // 0x79a21c: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x79a21cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_79a220:
    // 0x79a220: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x79a220u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_79a224:
    // 0x79a224: 0x7bb60100  lq          $s6, 0x100($sp)
    ctx->pc = 0x79a224u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_79a228:
    // 0x79a228: 0x7bb700f0  lq          $s7, 0xF0($sp)
    ctx->pc = 0x79a228u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_79a22c:
    // 0x79a22c: 0x7bbe00e0  lq          $fp, 0xE0($sp)
    ctx->pc = 0x79a22cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_79a230:
    // 0x79a230: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x79a230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_79a234:
    // 0x79a234: 0xc7b70188  lwc1        $f23, 0x188($sp)
    ctx->pc = 0x79a234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_79a238:
    // 0x79a238: 0xc7b60180  lwc1        $f22, 0x180($sp)
    ctx->pc = 0x79a238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_79a23c:
    // 0x79a23c: 0xc7b50178  lwc1        $f21, 0x178($sp)
    ctx->pc = 0x79a23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_79a240:
    // 0x79a240: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x79a240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_79a244:
    // 0x79a244: 0x3e00008  jr          $ra
label_79a248:
    if (ctx->pc == 0x79A248u) {
        ctx->pc = 0x79A248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A244u;
        // 0x79a248: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A24Cu;
        goto label_79a24c;
    }
    ctx->pc = 0x79A244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A244u;
        // 0x79a248: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A24Cu;
label_79a24c:
    // 0x79a24c: 0x0  nop
    ctx->pc = 0x79a24cu;
    // NOP
    ctx->pc = 0x79a250u;
}
} // namespace gh_r103
