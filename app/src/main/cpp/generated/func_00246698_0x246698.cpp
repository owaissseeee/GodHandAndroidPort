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

// Function: func_00246698
// Address: 0x246698 - 0x246d18
void func_00246698_0x246698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00246698_0x246698");
#endif

    switch (ctx->pc) {
        case 0x246698u: goto label_246698;
        case 0x24669cu: goto label_24669c;
        case 0x2466a0u: goto label_2466a0;
        case 0x2466a4u: goto label_2466a4;
        case 0x2466a8u: goto label_2466a8;
        case 0x2466acu: goto label_2466ac;
        case 0x2466b0u: goto label_2466b0;
        case 0x2466b4u: goto label_2466b4;
        case 0x2466b8u: goto label_2466b8;
        case 0x2466bcu: goto label_2466bc;
        case 0x2466c0u: goto label_2466c0;
        case 0x2466c4u: goto label_2466c4;
        case 0x2466c8u: goto label_2466c8;
        case 0x2466ccu: goto label_2466cc;
        case 0x2466d0u: goto label_2466d0;
        case 0x2466d4u: goto label_2466d4;
        case 0x2466d8u: goto label_2466d8;
        case 0x2466dcu: goto label_2466dc;
        case 0x2466e0u: goto label_2466e0;
        case 0x2466e4u: goto label_2466e4;
        case 0x2466e8u: goto label_2466e8;
        case 0x2466ecu: goto label_2466ec;
        case 0x2466f0u: goto label_2466f0;
        case 0x2466f4u: goto label_2466f4;
        case 0x2466f8u: goto label_2466f8;
        case 0x2466fcu: goto label_2466fc;
        case 0x246700u: goto label_246700;
        case 0x246704u: goto label_246704;
        case 0x246708u: goto label_246708;
        case 0x24670cu: goto label_24670c;
        case 0x246710u: goto label_246710;
        case 0x246714u: goto label_246714;
        case 0x246718u: goto label_246718;
        case 0x24671cu: goto label_24671c;
        case 0x246720u: goto label_246720;
        case 0x246724u: goto label_246724;
        case 0x246728u: goto label_246728;
        case 0x24672cu: goto label_24672c;
        case 0x246730u: goto label_246730;
        case 0x246734u: goto label_246734;
        case 0x246738u: goto label_246738;
        case 0x24673cu: goto label_24673c;
        case 0x246740u: goto label_246740;
        case 0x246744u: goto label_246744;
        case 0x246748u: goto label_246748;
        case 0x24674cu: goto label_24674c;
        case 0x246750u: goto label_246750;
        case 0x246754u: goto label_246754;
        case 0x246758u: goto label_246758;
        case 0x24675cu: goto label_24675c;
        case 0x246760u: goto label_246760;
        case 0x246764u: goto label_246764;
        case 0x246768u: goto label_246768;
        case 0x24676cu: goto label_24676c;
        case 0x246770u: goto label_246770;
        case 0x246774u: goto label_246774;
        case 0x246778u: goto label_246778;
        case 0x24677cu: goto label_24677c;
        case 0x246780u: goto label_246780;
        case 0x246784u: goto label_246784;
        case 0x246788u: goto label_246788;
        case 0x24678cu: goto label_24678c;
        case 0x246790u: goto label_246790;
        case 0x246794u: goto label_246794;
        case 0x246798u: goto label_246798;
        case 0x24679cu: goto label_24679c;
        case 0x2467a0u: goto label_2467a0;
        case 0x2467a4u: goto label_2467a4;
        case 0x2467a8u: goto label_2467a8;
        case 0x2467acu: goto label_2467ac;
        case 0x2467b0u: goto label_2467b0;
        case 0x2467b4u: goto label_2467b4;
        case 0x2467b8u: goto label_2467b8;
        case 0x2467bcu: goto label_2467bc;
        case 0x2467c0u: goto label_2467c0;
        case 0x2467c4u: goto label_2467c4;
        case 0x2467c8u: goto label_2467c8;
        case 0x2467ccu: goto label_2467cc;
        case 0x2467d0u: goto label_2467d0;
        case 0x2467d4u: goto label_2467d4;
        case 0x2467d8u: goto label_2467d8;
        case 0x2467dcu: goto label_2467dc;
        case 0x2467e0u: goto label_2467e0;
        case 0x2467e4u: goto label_2467e4;
        case 0x2467e8u: goto label_2467e8;
        case 0x2467ecu: goto label_2467ec;
        case 0x2467f0u: goto label_2467f0;
        case 0x2467f4u: goto label_2467f4;
        case 0x2467f8u: goto label_2467f8;
        case 0x2467fcu: goto label_2467fc;
        case 0x246800u: goto label_246800;
        case 0x246804u: goto label_246804;
        case 0x246808u: goto label_246808;
        case 0x24680cu: goto label_24680c;
        case 0x246810u: goto label_246810;
        case 0x246814u: goto label_246814;
        case 0x246818u: goto label_246818;
        case 0x24681cu: goto label_24681c;
        case 0x246820u: goto label_246820;
        case 0x246824u: goto label_246824;
        case 0x246828u: goto label_246828;
        case 0x24682cu: goto label_24682c;
        case 0x246830u: goto label_246830;
        case 0x246834u: goto label_246834;
        case 0x246838u: goto label_246838;
        case 0x24683cu: goto label_24683c;
        case 0x246840u: goto label_246840;
        case 0x246844u: goto label_246844;
        case 0x246848u: goto label_246848;
        case 0x24684cu: goto label_24684c;
        case 0x246850u: goto label_246850;
        case 0x246854u: goto label_246854;
        case 0x246858u: goto label_246858;
        case 0x24685cu: goto label_24685c;
        case 0x246860u: goto label_246860;
        case 0x246864u: goto label_246864;
        case 0x246868u: goto label_246868;
        case 0x24686cu: goto label_24686c;
        case 0x246870u: goto label_246870;
        case 0x246874u: goto label_246874;
        case 0x246878u: goto label_246878;
        case 0x24687cu: goto label_24687c;
        case 0x246880u: goto label_246880;
        case 0x246884u: goto label_246884;
        case 0x246888u: goto label_246888;
        case 0x24688cu: goto label_24688c;
        case 0x246890u: goto label_246890;
        case 0x246894u: goto label_246894;
        case 0x246898u: goto label_246898;
        case 0x24689cu: goto label_24689c;
        case 0x2468a0u: goto label_2468a0;
        case 0x2468a4u: goto label_2468a4;
        case 0x2468a8u: goto label_2468a8;
        case 0x2468acu: goto label_2468ac;
        case 0x2468b0u: goto label_2468b0;
        case 0x2468b4u: goto label_2468b4;
        case 0x2468b8u: goto label_2468b8;
        case 0x2468bcu: goto label_2468bc;
        case 0x2468c0u: goto label_2468c0;
        case 0x2468c4u: goto label_2468c4;
        case 0x2468c8u: goto label_2468c8;
        case 0x2468ccu: goto label_2468cc;
        case 0x2468d0u: goto label_2468d0;
        case 0x2468d4u: goto label_2468d4;
        case 0x2468d8u: goto label_2468d8;
        case 0x2468dcu: goto label_2468dc;
        case 0x2468e0u: goto label_2468e0;
        case 0x2468e4u: goto label_2468e4;
        case 0x2468e8u: goto label_2468e8;
        case 0x2468ecu: goto label_2468ec;
        case 0x2468f0u: goto label_2468f0;
        case 0x2468f4u: goto label_2468f4;
        case 0x2468f8u: goto label_2468f8;
        case 0x2468fcu: goto label_2468fc;
        case 0x246900u: goto label_246900;
        case 0x246904u: goto label_246904;
        case 0x246908u: goto label_246908;
        case 0x24690cu: goto label_24690c;
        case 0x246910u: goto label_246910;
        case 0x246914u: goto label_246914;
        case 0x246918u: goto label_246918;
        case 0x24691cu: goto label_24691c;
        case 0x246920u: goto label_246920;
        case 0x246924u: goto label_246924;
        case 0x246928u: goto label_246928;
        case 0x24692cu: goto label_24692c;
        case 0x246930u: goto label_246930;
        case 0x246934u: goto label_246934;
        case 0x246938u: goto label_246938;
        case 0x24693cu: goto label_24693c;
        case 0x246940u: goto label_246940;
        case 0x246944u: goto label_246944;
        case 0x246948u: goto label_246948;
        case 0x24694cu: goto label_24694c;
        case 0x246950u: goto label_246950;
        case 0x246954u: goto label_246954;
        case 0x246958u: goto label_246958;
        case 0x24695cu: goto label_24695c;
        case 0x246960u: goto label_246960;
        case 0x246964u: goto label_246964;
        case 0x246968u: goto label_246968;
        case 0x24696cu: goto label_24696c;
        case 0x246970u: goto label_246970;
        case 0x246974u: goto label_246974;
        case 0x246978u: goto label_246978;
        case 0x24697cu: goto label_24697c;
        case 0x246980u: goto label_246980;
        case 0x246984u: goto label_246984;
        case 0x246988u: goto label_246988;
        case 0x24698cu: goto label_24698c;
        case 0x246990u: goto label_246990;
        case 0x246994u: goto label_246994;
        case 0x246998u: goto label_246998;
        case 0x24699cu: goto label_24699c;
        case 0x2469a0u: goto label_2469a0;
        case 0x2469a4u: goto label_2469a4;
        case 0x2469a8u: goto label_2469a8;
        case 0x2469acu: goto label_2469ac;
        case 0x2469b0u: goto label_2469b0;
        case 0x2469b4u: goto label_2469b4;
        case 0x2469b8u: goto label_2469b8;
        case 0x2469bcu: goto label_2469bc;
        case 0x2469c0u: goto label_2469c0;
        case 0x2469c4u: goto label_2469c4;
        case 0x2469c8u: goto label_2469c8;
        case 0x2469ccu: goto label_2469cc;
        case 0x2469d0u: goto label_2469d0;
        case 0x2469d4u: goto label_2469d4;
        case 0x2469d8u: goto label_2469d8;
        case 0x2469dcu: goto label_2469dc;
        case 0x2469e0u: goto label_2469e0;
        case 0x2469e4u: goto label_2469e4;
        case 0x2469e8u: goto label_2469e8;
        case 0x2469ecu: goto label_2469ec;
        case 0x2469f0u: goto label_2469f0;
        case 0x2469f4u: goto label_2469f4;
        case 0x2469f8u: goto label_2469f8;
        case 0x2469fcu: goto label_2469fc;
        case 0x246a00u: goto label_246a00;
        case 0x246a04u: goto label_246a04;
        case 0x246a08u: goto label_246a08;
        case 0x246a0cu: goto label_246a0c;
        case 0x246a10u: goto label_246a10;
        case 0x246a14u: goto label_246a14;
        case 0x246a18u: goto label_246a18;
        case 0x246a1cu: goto label_246a1c;
        case 0x246a20u: goto label_246a20;
        case 0x246a24u: goto label_246a24;
        case 0x246a28u: goto label_246a28;
        case 0x246a2cu: goto label_246a2c;
        case 0x246a30u: goto label_246a30;
        case 0x246a34u: goto label_246a34;
        case 0x246a38u: goto label_246a38;
        case 0x246a3cu: goto label_246a3c;
        case 0x246a40u: goto label_246a40;
        case 0x246a44u: goto label_246a44;
        case 0x246a48u: goto label_246a48;
        case 0x246a4cu: goto label_246a4c;
        case 0x246a50u: goto label_246a50;
        case 0x246a54u: goto label_246a54;
        case 0x246a58u: goto label_246a58;
        case 0x246a5cu: goto label_246a5c;
        case 0x246a60u: goto label_246a60;
        case 0x246a64u: goto label_246a64;
        case 0x246a68u: goto label_246a68;
        case 0x246a6cu: goto label_246a6c;
        case 0x246a70u: goto label_246a70;
        case 0x246a74u: goto label_246a74;
        case 0x246a78u: goto label_246a78;
        case 0x246a7cu: goto label_246a7c;
        case 0x246a80u: goto label_246a80;
        case 0x246a84u: goto label_246a84;
        case 0x246a88u: goto label_246a88;
        case 0x246a8cu: goto label_246a8c;
        case 0x246a90u: goto label_246a90;
        case 0x246a94u: goto label_246a94;
        case 0x246a98u: goto label_246a98;
        case 0x246a9cu: goto label_246a9c;
        case 0x246aa0u: goto label_246aa0;
        case 0x246aa4u: goto label_246aa4;
        case 0x246aa8u: goto label_246aa8;
        case 0x246aacu: goto label_246aac;
        case 0x246ab0u: goto label_246ab0;
        case 0x246ab4u: goto label_246ab4;
        case 0x246ab8u: goto label_246ab8;
        case 0x246abcu: goto label_246abc;
        case 0x246ac0u: goto label_246ac0;
        case 0x246ac4u: goto label_246ac4;
        case 0x246ac8u: goto label_246ac8;
        case 0x246accu: goto label_246acc;
        case 0x246ad0u: goto label_246ad0;
        case 0x246ad4u: goto label_246ad4;
        case 0x246ad8u: goto label_246ad8;
        case 0x246adcu: goto label_246adc;
        case 0x246ae0u: goto label_246ae0;
        case 0x246ae4u: goto label_246ae4;
        case 0x246ae8u: goto label_246ae8;
        case 0x246aecu: goto label_246aec;
        case 0x246af0u: goto label_246af0;
        case 0x246af4u: goto label_246af4;
        case 0x246af8u: goto label_246af8;
        case 0x246afcu: goto label_246afc;
        case 0x246b00u: goto label_246b00;
        case 0x246b04u: goto label_246b04;
        case 0x246b08u: goto label_246b08;
        case 0x246b0cu: goto label_246b0c;
        case 0x246b10u: goto label_246b10;
        case 0x246b14u: goto label_246b14;
        case 0x246b18u: goto label_246b18;
        case 0x246b1cu: goto label_246b1c;
        case 0x246b20u: goto label_246b20;
        case 0x246b24u: goto label_246b24;
        case 0x246b28u: goto label_246b28;
        case 0x246b2cu: goto label_246b2c;
        case 0x246b30u: goto label_246b30;
        case 0x246b34u: goto label_246b34;
        case 0x246b38u: goto label_246b38;
        case 0x246b3cu: goto label_246b3c;
        case 0x246b40u: goto label_246b40;
        case 0x246b44u: goto label_246b44;
        case 0x246b48u: goto label_246b48;
        case 0x246b4cu: goto label_246b4c;
        case 0x246b50u: goto label_246b50;
        case 0x246b54u: goto label_246b54;
        case 0x246b58u: goto label_246b58;
        case 0x246b5cu: goto label_246b5c;
        case 0x246b60u: goto label_246b60;
        case 0x246b64u: goto label_246b64;
        case 0x246b68u: goto label_246b68;
        case 0x246b6cu: goto label_246b6c;
        case 0x246b70u: goto label_246b70;
        case 0x246b74u: goto label_246b74;
        case 0x246b78u: goto label_246b78;
        case 0x246b7cu: goto label_246b7c;
        case 0x246b80u: goto label_246b80;
        case 0x246b84u: goto label_246b84;
        case 0x246b88u: goto label_246b88;
        case 0x246b8cu: goto label_246b8c;
        case 0x246b90u: goto label_246b90;
        case 0x246b94u: goto label_246b94;
        case 0x246b98u: goto label_246b98;
        case 0x246b9cu: goto label_246b9c;
        case 0x246ba0u: goto label_246ba0;
        case 0x246ba4u: goto label_246ba4;
        case 0x246ba8u: goto label_246ba8;
        case 0x246bacu: goto label_246bac;
        case 0x246bb0u: goto label_246bb0;
        case 0x246bb4u: goto label_246bb4;
        case 0x246bb8u: goto label_246bb8;
        case 0x246bbcu: goto label_246bbc;
        case 0x246bc0u: goto label_246bc0;
        case 0x246bc4u: goto label_246bc4;
        case 0x246bc8u: goto label_246bc8;
        case 0x246bccu: goto label_246bcc;
        case 0x246bd0u: goto label_246bd0;
        case 0x246bd4u: goto label_246bd4;
        case 0x246bd8u: goto label_246bd8;
        case 0x246bdcu: goto label_246bdc;
        case 0x246be0u: goto label_246be0;
        case 0x246be4u: goto label_246be4;
        case 0x246be8u: goto label_246be8;
        case 0x246becu: goto label_246bec;
        case 0x246bf0u: goto label_246bf0;
        case 0x246bf4u: goto label_246bf4;
        case 0x246bf8u: goto label_246bf8;
        case 0x246bfcu: goto label_246bfc;
        case 0x246c00u: goto label_246c00;
        case 0x246c04u: goto label_246c04;
        case 0x246c08u: goto label_246c08;
        case 0x246c0cu: goto label_246c0c;
        case 0x246c10u: goto label_246c10;
        case 0x246c14u: goto label_246c14;
        case 0x246c18u: goto label_246c18;
        case 0x246c1cu: goto label_246c1c;
        case 0x246c20u: goto label_246c20;
        case 0x246c24u: goto label_246c24;
        case 0x246c28u: goto label_246c28;
        case 0x246c2cu: goto label_246c2c;
        case 0x246c30u: goto label_246c30;
        case 0x246c34u: goto label_246c34;
        case 0x246c38u: goto label_246c38;
        case 0x246c3cu: goto label_246c3c;
        case 0x246c40u: goto label_246c40;
        case 0x246c44u: goto label_246c44;
        case 0x246c48u: goto label_246c48;
        case 0x246c4cu: goto label_246c4c;
        case 0x246c50u: goto label_246c50;
        case 0x246c54u: goto label_246c54;
        case 0x246c58u: goto label_246c58;
        case 0x246c5cu: goto label_246c5c;
        case 0x246c60u: goto label_246c60;
        case 0x246c64u: goto label_246c64;
        case 0x246c68u: goto label_246c68;
        case 0x246c6cu: goto label_246c6c;
        case 0x246c70u: goto label_246c70;
        case 0x246c74u: goto label_246c74;
        case 0x246c78u: goto label_246c78;
        case 0x246c7cu: goto label_246c7c;
        case 0x246c80u: goto label_246c80;
        case 0x246c84u: goto label_246c84;
        case 0x246c88u: goto label_246c88;
        case 0x246c8cu: goto label_246c8c;
        case 0x246c90u: goto label_246c90;
        case 0x246c94u: goto label_246c94;
        case 0x246c98u: goto label_246c98;
        case 0x246c9cu: goto label_246c9c;
        case 0x246ca0u: goto label_246ca0;
        case 0x246ca4u: goto label_246ca4;
        case 0x246ca8u: goto label_246ca8;
        case 0x246cacu: goto label_246cac;
        case 0x246cb0u: goto label_246cb0;
        case 0x246cb4u: goto label_246cb4;
        case 0x246cb8u: goto label_246cb8;
        case 0x246cbcu: goto label_246cbc;
        case 0x246cc0u: goto label_246cc0;
        case 0x246cc4u: goto label_246cc4;
        case 0x246cc8u: goto label_246cc8;
        case 0x246cccu: goto label_246ccc;
        case 0x246cd0u: goto label_246cd0;
        case 0x246cd4u: goto label_246cd4;
        case 0x246cd8u: goto label_246cd8;
        case 0x246cdcu: goto label_246cdc;
        case 0x246ce0u: goto label_246ce0;
        case 0x246ce4u: goto label_246ce4;
        case 0x246ce8u: goto label_246ce8;
        case 0x246cecu: goto label_246cec;
        case 0x246cf0u: goto label_246cf0;
        case 0x246cf4u: goto label_246cf4;
        case 0x246cf8u: goto label_246cf8;
        case 0x246cfcu: goto label_246cfc;
        case 0x246d00u: goto label_246d00;
        case 0x246d04u: goto label_246d04;
        case 0x246d08u: goto label_246d08;
        case 0x246d0cu: goto label_246d0c;
        case 0x246d10u: goto label_246d10;
        case 0x246d14u: goto label_246d14;
        default: break;
    }

    ctx->pc = 0x246698u;

label_246698:
    // 0x246698: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x246698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_24669c:
    // 0x24669c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24669cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2466a0:
    // 0x2466a0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2466a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2466a4:
    // 0x2466a4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2466a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2466a8:
    // 0x2466a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2466a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2466ac:
    // 0x2466ac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2466acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2466b0:
    // 0x2466b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2466b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2466b4:
    // 0x2466b4: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2466b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_2466b8:
    // 0x2466b8: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x2466b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_2466bc:
    // 0x2466bc: 0x106200b0  beq         $v1, $v0, . + 4 + (0xB0 << 2)
label_2466c0:
    if (ctx->pc == 0x2466C0u) {
        ctx->pc = 0x2466C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466BCu;
        // 0x2466c0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2466C4u;
        goto label_2466c4;
    }
    ctx->pc = 0x2466BCu;
    {
        const bool branch_taken_0x2466bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2466C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466BCu;
        // 0x2466c0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2466bc) {
            ctx->pc = 0x246980u;
            goto label_246980;
        }
    }
    ctx->pc = 0x2466C4u;
label_2466c4:
    // 0x2466c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2466c8:
    if (ctx->pc == 0x2466C8u) {
        ctx->pc = 0x2466C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466C4u;
        // 0x2466c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2466CCu;
        goto label_2466cc;
    }
    ctx->pc = 0x2466C4u;
    {
        const bool branch_taken_0x2466c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2466C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466C4u;
        // 0x2466c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2466c4) {
            ctx->pc = 0x2466DCu;
            goto label_2466dc;
        }
    }
    ctx->pc = 0x2466CCu;
label_2466cc:
    // 0x2466cc: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_2466d0:
    if (ctx->pc == 0x2466D0u) {
        ctx->pc = 0x2466D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466CCu;
        // 0x2466d0: 0x3c120058  lui         $s2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2466D4u;
        goto label_2466d4;
    }
    ctx->pc = 0x2466CCu;
    {
        const bool branch_taken_0x2466cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2466D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466CCu;
        // 0x2466d0: 0x3c120058  lui         $s2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2466cc) {
            ctx->pc = 0x2466F4u;
            goto label_2466f4;
        }
    }
    ctx->pc = 0x2466D4u;
label_2466d4:
    // 0x2466d4: 0x1000016e  b           . + 4 + (0x16E << 2)
label_2466d8:
    if (ctx->pc == 0x2466D8u) {
        ctx->pc = 0x2466D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466D4u;
        // 0x2466d8: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2466DCu;
        goto label_2466dc;
    }
    ctx->pc = 0x2466D4u;
    {
        const bool branch_taken_0x2466d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2466D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466D4u;
        // 0x2466d8: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2466d4) {
            ctx->pc = 0x246C90u;
            goto label_246c90;
        }
    }
    ctx->pc = 0x2466DCu;
label_2466dc:
    // 0x2466dc: 0x106200df  beq         $v1, $v0, . + 4 + (0xDF << 2)
label_2466e0:
    if (ctx->pc == 0x2466E0u) {
        ctx->pc = 0x2466E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466DCu;
        // 0x2466e0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2466E4u;
        goto label_2466e4;
    }
    ctx->pc = 0x2466DCu;
    {
        const bool branch_taken_0x2466dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2466E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466DCu;
        // 0x2466e0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2466dc) {
            ctx->pc = 0x246A5Cu;
            goto label_246a5c;
        }
    }
    ctx->pc = 0x2466E4u;
label_2466e4:
    // 0x2466e4: 0x1062010a  beq         $v1, $v0, . + 4 + (0x10A << 2)
label_2466e8:
    if (ctx->pc == 0x2466E8u) {
        ctx->pc = 0x2466E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466E4u;
        // 0x2466e8: 0x3c120058  lui         $s2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2466ECu;
        goto label_2466ec;
    }
    ctx->pc = 0x2466E4u;
    {
        const bool branch_taken_0x2466e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2466E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466E4u;
        // 0x2466e8: 0x3c120058  lui         $s2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2466e4) {
            ctx->pc = 0x246B10u;
            goto label_246b10;
        }
    }
    ctx->pc = 0x2466ECu;
label_2466ec:
    // 0x2466ec: 0x10000168  b           . + 4 + (0x168 << 2)
label_2466f0:
    if (ctx->pc == 0x2466F0u) {
        ctx->pc = 0x2466F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466ECu;
        // 0x2466f0: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2466F4u;
        goto label_2466f4;
    }
    ctx->pc = 0x2466ECu;
    {
        const bool branch_taken_0x2466ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2466F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466ECu;
        // 0x2466f0: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2466ec) {
            ctx->pc = 0x246C90u;
            goto label_246c90;
        }
    }
    ctx->pc = 0x2466F4u;
label_2466f4:
    // 0x2466f4: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x2466f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
label_2466f8:
    // 0x2466f8: 0x2463fdfb  addiu       $v1, $v1, -0x205
    ctx->pc = 0x2466f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966779));
label_2466fc:
    // 0x2466fc: 0x2c620075  sltiu       $v0, $v1, 0x75
    ctx->pc = 0x2466fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)117) ? 1 : 0);
label_246700:
    // 0x246700: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_246704:
    if (ctx->pc == 0x246704u) {
        ctx->pc = 0x246704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246700u;
        // 0x246704: 0xa2001864  sb          $zero, 0x1864($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246708u;
        goto label_246708;
    }
    ctx->pc = 0x246700u;
    {
        const bool branch_taken_0x246700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246700u;
        // 0x246704: 0xa2001864  sb          $zero, 0x1864($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246700) {
            ctx->pc = 0x246724u;
            goto label_246724;
        }
    }
    ctx->pc = 0x246708u;
label_246708:
    // 0x246708: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x246708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_24670c:
    // 0x24670c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24670cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_246710:
    // 0x246710: 0x2442d530  addiu       $v0, $v0, -0x2AD0
    ctx->pc = 0x246710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956336));
label_246714:
    // 0x246714: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x246714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_246718:
    // 0x246718: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x246718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24671c:
    // 0x24671c: 0x800008  jr          $a0
label_246720:
    if (ctx->pc == 0x246720u) {
        ctx->pc = 0x246724u;
        goto label_246724;
    }
    ctx->pc = 0x24671Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x246724u: goto label_246724;
            case 0x246734u: goto label_246734;
            case 0x246744u: goto label_246744;
            case 0x246754u: goto label_246754;
            case 0x246764u: goto label_246764;
            case 0x246774u: goto label_246774;
            case 0x246784u: goto label_246784;
            case 0x2467B4u: goto label_2467b4;
            case 0x2467C4u: goto label_2467c4;
            case 0x2467D4u: goto label_2467d4;
            case 0x2467E4u: goto label_2467e4;
            case 0x246810u: goto label_246810;
            case 0x246820u: goto label_246820;
            case 0x246830u: goto label_246830;
            case 0x246840u: goto label_246840;
            case 0x246850u: goto label_246850;
            case 0x246860u: goto label_246860;
            case 0x246870u: goto label_246870;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24671Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x246724u;
label_246724:
    // 0x246724: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x246724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_246728:
    // 0x246728: 0x8c43043c  lw          $v1, 0x43C($v0)
    ctx->pc = 0x246728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1084)));
label_24672c:
    // 0x24672c: 0x10000053  b           . + 4 + (0x53 << 2)
label_246730:
    if (ctx->pc == 0x246730u) {
        ctx->pc = 0x246730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24672Cu;
        // 0x246730: 0x8c440440  lw          $a0, 0x440($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246734u;
        goto label_246734;
    }
    ctx->pc = 0x24672Cu;
    {
        const bool branch_taken_0x24672c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24672Cu;
        // 0x246730: 0x8c440440  lw          $a0, 0x440($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24672c) {
            ctx->pc = 0x24687Cu;
            goto label_24687c;
        }
    }
    ctx->pc = 0x246734u;
label_246734:
    // 0x246734: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x246734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_246738:
    // 0x246738: 0x8c431458  lw          $v1, 0x1458($v0)
    ctx->pc = 0x246738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5208)));
label_24673c:
    // 0x24673c: 0x1000004f  b           . + 4 + (0x4F << 2)
label_246740:
    if (ctx->pc == 0x246740u) {
        ctx->pc = 0x246740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24673Cu;
        // 0x246740: 0x8c44145c  lw          $a0, 0x145C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246744u;
        goto label_246744;
    }
    ctx->pc = 0x24673Cu;
    {
        const bool branch_taken_0x24673c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24673Cu;
        // 0x246740: 0x8c44145c  lw          $a0, 0x145C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24673c) {
            ctx->pc = 0x24687Cu;
            goto label_24687c;
        }
    }
    ctx->pc = 0x246744u;
label_246744:
    // 0x246744: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x246744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_246748:
    // 0x246748: 0x8c430bf8  lw          $v1, 0xBF8($v0)
    ctx->pc = 0x246748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3064)));
label_24674c:
    // 0x24674c: 0x1000004b  b           . + 4 + (0x4B << 2)
label_246750:
    if (ctx->pc == 0x246750u) {
        ctx->pc = 0x246750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24674Cu;
        // 0x246750: 0x8c440bfc  lw          $a0, 0xBFC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3068)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246754u;
        goto label_246754;
    }
    ctx->pc = 0x24674Cu;
    {
        const bool branch_taken_0x24674c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24674Cu;
        // 0x246750: 0x8c440bfc  lw          $a0, 0xBFC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3068)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24674c) {
            ctx->pc = 0x24687Cu;
            goto label_24687c;
        }
    }
    ctx->pc = 0x246754u;
label_246754:
    // 0x246754: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x246754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_246758:
    // 0x246758: 0x8c430b84  lw          $v1, 0xB84($v0)
    ctx->pc = 0x246758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2948)));
label_24675c:
    // 0x24675c: 0x10000047  b           . + 4 + (0x47 << 2)
label_246760:
    if (ctx->pc == 0x246760u) {
        ctx->pc = 0x246760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24675Cu;
        // 0x246760: 0x8c440b88  lw          $a0, 0xB88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2952)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246764u;
        goto label_246764;
    }
    ctx->pc = 0x24675Cu;
    {
        const bool branch_taken_0x24675c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24675Cu;
        // 0x246760: 0x8c440b88  lw          $a0, 0xB88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24675c) {
            ctx->pc = 0x24687Cu;
            goto label_24687c;
        }
    }
    ctx->pc = 0x246764u;
label_246764:
    // 0x246764: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x246764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_246768:
    // 0x246768: 0x8c433038  lw          $v1, 0x3038($v0)
    ctx->pc = 0x246768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12344)));
label_24676c:
    // 0x24676c: 0x10000043  b           . + 4 + (0x43 << 2)
label_246770:
    if (ctx->pc == 0x246770u) {
        ctx->pc = 0x246770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24676Cu;
        // 0x246770: 0x8c44303c  lw          $a0, 0x303C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12348)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246774u;
        goto label_246774;
    }
    ctx->pc = 0x24676Cu;
    {
        const bool branch_taken_0x24676c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24676Cu;
        // 0x246770: 0x8c44303c  lw          $a0, 0x303C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24676c) {
            ctx->pc = 0x24687Cu;
            goto label_24687c;
        }
    }
    ctx->pc = 0x246774u;
label_246774:
    // 0x246774: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x246774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_246778:
    // 0x246778: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x246778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
label_24677c:
    // 0x24677c: 0x1000003f  b           . + 4 + (0x3F << 2)
label_246780:
    if (ctx->pc == 0x246780u) {
        ctx->pc = 0x246780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24677Cu;
        // 0x246780: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246784u;
        goto label_246784;
    }
    ctx->pc = 0x24677Cu;
    {
        const bool branch_taken_0x24677c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24677Cu;
        // 0x246780: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24677c) {
            ctx->pc = 0x24687Cu;
            goto label_24687c;
        }
    }
    ctx->pc = 0x246784u;
label_246784:
    // 0x246784: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x246784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_246788:
    // 0x246788: 0x8e070744  lw          $a3, 0x744($s0)
    ctx->pc = 0x246788u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1860)));
label_24678c:
    // 0x24678c: 0x8c433724  lw          $v1, 0x3724($v0)
    ctx->pc = 0x24678cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14116)));
label_246790:
    // 0x246790: 0x8c443728  lw          $a0, 0x3728($v0)
    ctx->pc = 0x246790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14120)));
label_246794:
    // 0x246794: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x246794u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_246798:
    // 0x246798: 0x10e0003a  beqz        $a3, . + 4 + (0x3A << 2)
label_24679c:
    if (ctx->pc == 0x24679Cu) {
        ctx->pc = 0x24679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246798u;
        // 0x24679c: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2467A0u;
        goto label_2467a0;
    }
    ctx->pc = 0x246798u;
    {
        const bool branch_taken_0x246798 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x24679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246798u;
        // 0x24679c: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246798) {
            ctx->pc = 0x246884u;
            goto label_246884;
        }
    }
    ctx->pc = 0x2467A0u;
label_2467a0:
    // 0x2467a0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2467a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2467a4:
    // 0x2467a4: 0xc09fa94  jal         func_27EA50
label_2467a8:
    if (ctx->pc == 0x2467A8u) {
        ctx->pc = 0x2467A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467A4u;
        // 0x2467a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2467ACu;
        goto label_2467ac;
    }
    ctx->pc = 0x2467A4u;
    SET_GPR_U32(ctx, 31, 0x2467ACu);
    ctx->pc = 0x2467A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2467A4u;
    // 0x2467a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x2467A4u, 0x2467ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2467ACu;
label_2467ac:
    // 0x2467ac: 0x10000036  b           . + 4 + (0x36 << 2)
label_2467b0:
    if (ctx->pc == 0x2467B0u) {
        ctx->pc = 0x2467B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467ACu;
        // 0x2467b0: 0x96020640  lhu         $v0, 0x640($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2467B4u;
        goto label_2467b4;
    }
    ctx->pc = 0x2467ACu;
    {
        const bool branch_taken_0x2467ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2467B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467ACu;
        // 0x2467b0: 0x96020640  lhu         $v0, 0x640($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2467ac) {
            ctx->pc = 0x246888u;
            goto label_246888;
        }
    }
    ctx->pc = 0x2467B4u;
label_2467b4:
    // 0x2467b4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2467b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_2467b8:
    // 0x2467b8: 0x8c430b84  lw          $v1, 0xB84($v0)
    ctx->pc = 0x2467b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2948)));
label_2467bc:
    // 0x2467bc: 0x1000002f  b           . + 4 + (0x2F << 2)
label_2467c0:
    if (ctx->pc == 0x2467C0u) {
        ctx->pc = 0x2467C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467BCu;
        // 0x2467c0: 0x8c440b88  lw          $a0, 0xB88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2952)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2467C4u;
        goto label_2467c4;
    }
    ctx->pc = 0x2467BCu;
    {
        const bool branch_taken_0x2467bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2467C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467BCu;
        // 0x2467c0: 0x8c440b88  lw          $a0, 0xB88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2467bc) {
            ctx->pc = 0x24687Cu;
            goto label_24687c;
        }
    }
    ctx->pc = 0x2467C4u;
label_2467c4:
    // 0x2467c4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2467c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_2467c8:
    // 0x2467c8: 0x8c4317f8  lw          $v1, 0x17F8($v0)
    ctx->pc = 0x2467c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6136)));
label_2467cc:
    // 0x2467cc: 0x1000002b  b           . + 4 + (0x2B << 2)
label_2467d0:
    if (ctx->pc == 0x2467D0u) {
        ctx->pc = 0x2467D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467CCu;
        // 0x2467d0: 0x8c4417fc  lw          $a0, 0x17FC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2467D4u;
        goto label_2467d4;
    }
    ctx->pc = 0x2467CCu;
    {
        const bool branch_taken_0x2467cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2467D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467CCu;
        // 0x2467d0: 0x8c4417fc  lw          $a0, 0x17FC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2467cc) {
            ctx->pc = 0x24687Cu;
            goto label_24687c;
        }
    }
    ctx->pc = 0x2467D4u;
label_2467d4:
    // 0x2467d4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2467d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_2467d8:
    // 0x2467d8: 0x8c4318dc  lw          $v1, 0x18DC($v0)
    ctx->pc = 0x2467d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6364)));
label_2467dc:
    // 0x2467dc: 0x10000027  b           . + 4 + (0x27 << 2)
label_2467e0:
    if (ctx->pc == 0x2467E0u) {
        ctx->pc = 0x2467E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467DCu;
        // 0x2467e0: 0x8c4418e0  lw          $a0, 0x18E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2467E4u;
        goto label_2467e4;
    }
    ctx->pc = 0x2467DCu;
    {
        const bool branch_taken_0x2467dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2467E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467DCu;
        // 0x2467e0: 0x8c4418e0  lw          $a0, 0x18E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2467dc) {
            ctx->pc = 0x24687Cu;
            goto label_24687c;
        }
    }
    ctx->pc = 0x2467E4u;
label_2467e4:
    // 0x2467e4: 0xc0c73f8  jal         func_31CFE0
label_2467e8:
    if (ctx->pc == 0x2467E8u) {
        ctx->pc = 0x2467ECu;
        goto label_2467ec;
    }
    ctx->pc = 0x2467E4u;
    SET_GPR_U32(ctx, 31, 0x2467ECu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2467E4u, 0x2467ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2467ECu;
label_2467ec:
    // 0x2467ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2467ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2467f0:
    // 0x2467f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2467f4:
    if (ctx->pc == 0x2467F4u) {
        ctx->pc = 0x2467F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467F0u;
        // 0x2467f4: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2467F8u;
        goto label_2467f8;
    }
    ctx->pc = 0x2467F0u;
    {
        const bool branch_taken_0x2467f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2467F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467F0u;
        // 0x2467f4: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2467f0) {
            ctx->pc = 0x246804u;
            goto label_246804;
        }
    }
    ctx->pc = 0x2467F8u;
label_2467f8:
    // 0x2467f8: 0x8c433b1c  lw          $v1, 0x3B1C($v0)
    ctx->pc = 0x2467f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15132)));
label_2467fc:
    // 0x2467fc: 0x1000001f  b           . + 4 + (0x1F << 2)
label_246800:
    if (ctx->pc == 0x246800u) {
        ctx->pc = 0x246800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467FCu;
        // 0x246800: 0x8c443b20  lw          $a0, 0x3B20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246804u;
        goto label_246804;
    }
    ctx->pc = 0x2467FCu;
    {
        const bool branch_taken_0x2467fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467FCu;
        // 0x246800: 0x8c443b20  lw          $a0, 0x3B20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2467fc) {
            ctx->pc = 0x24687Cu;
            goto label_24687c;
        }
    }
    ctx->pc = 0x246804u;
label_246804:
    // 0x246804: 0x8c433b24  lw          $v1, 0x3B24($v0)
    ctx->pc = 0x246804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15140)));
label_246808:
    // 0x246808: 0x1000001c  b           . + 4 + (0x1C << 2)
label_24680c:
    if (ctx->pc == 0x24680Cu) {
        ctx->pc = 0x24680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246808u;
        // 0x24680c: 0x8c443b28  lw          $a0, 0x3B28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246810u;
        goto label_246810;
    }
    ctx->pc = 0x246808u;
    {
        const bool branch_taken_0x246808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246808u;
        // 0x24680c: 0x8c443b28  lw          $a0, 0x3B28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246808) {
            ctx->pc = 0x24687Cu;
            goto label_24687c;
        }
    }
    ctx->pc = 0x246810u;
label_246810:
    // 0x246810: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x246810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_246814:
    // 0x246814: 0x8c431890  lw          $v1, 0x1890($v0)
    ctx->pc = 0x246814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6288)));
label_246818:
    // 0x246818: 0x10000018  b           . + 4 + (0x18 << 2)
label_24681c:
    if (ctx->pc == 0x24681Cu) {
        ctx->pc = 0x24681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246818u;
        // 0x24681c: 0x8c441894  lw          $a0, 0x1894($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246820u;
        goto label_246820;
    }
    ctx->pc = 0x246818u;
    {
        const bool branch_taken_0x246818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246818u;
        // 0x24681c: 0x8c441894  lw          $a0, 0x1894($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246818) {
            ctx->pc = 0x24687Cu;
            goto label_24687c;
        }
    }
    ctx->pc = 0x246820u;
label_246820:
    // 0x246820: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x246820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_246824:
    // 0x246824: 0x8c431ea0  lw          $v1, 0x1EA0($v0)
    ctx->pc = 0x246824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7840)));
label_246828:
    // 0x246828: 0x10000014  b           . + 4 + (0x14 << 2)
label_24682c:
    if (ctx->pc == 0x24682Cu) {
        ctx->pc = 0x24682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246828u;
        // 0x24682c: 0x8c441ea4  lw          $a0, 0x1EA4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7844)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246830u;
        goto label_246830;
    }
    ctx->pc = 0x246828u;
    {
        const bool branch_taken_0x246828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246828u;
        // 0x24682c: 0x8c441ea4  lw          $a0, 0x1EA4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7844)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246828) {
            ctx->pc = 0x24687Cu;
            goto label_24687c;
        }
    }
    ctx->pc = 0x246830u;
label_246830:
    // 0x246830: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x246830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_246834:
    // 0x246834: 0x8c433418  lw          $v1, 0x3418($v0)
    ctx->pc = 0x246834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13336)));
label_246838:
    // 0x246838: 0x10000010  b           . + 4 + (0x10 << 2)
label_24683c:
    if (ctx->pc == 0x24683Cu) {
        ctx->pc = 0x24683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246838u;
        // 0x24683c: 0x8c44341c  lw          $a0, 0x341C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246840u;
        goto label_246840;
    }
    ctx->pc = 0x246838u;
    {
        const bool branch_taken_0x246838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246838u;
        // 0x24683c: 0x8c44341c  lw          $a0, 0x341C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246838) {
            ctx->pc = 0x24687Cu;
            goto label_24687c;
        }
    }
    ctx->pc = 0x246840u;
label_246840:
    // 0x246840: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x246840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_246844:
    // 0x246844: 0x8c430f94  lw          $v1, 0xF94($v0)
    ctx->pc = 0x246844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3988)));
label_246848:
    // 0x246848: 0x1000000c  b           . + 4 + (0xC << 2)
label_24684c:
    if (ctx->pc == 0x24684Cu) {
        ctx->pc = 0x24684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246848u;
        // 0x24684c: 0x8c440f98  lw          $a0, 0xF98($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3992)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246850u;
        goto label_246850;
    }
    ctx->pc = 0x246848u;
    {
        const bool branch_taken_0x246848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246848u;
        // 0x24684c: 0x8c440f98  lw          $a0, 0xF98($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246848) {
            ctx->pc = 0x24687Cu;
            goto label_24687c;
        }
    }
    ctx->pc = 0x246850u;
label_246850:
    // 0x246850: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x246850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_246854:
    // 0x246854: 0x8c431bc0  lw          $v1, 0x1BC0($v0)
    ctx->pc = 0x246854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7104)));
label_246858:
    // 0x246858: 0x10000008  b           . + 4 + (0x8 << 2)
label_24685c:
    if (ctx->pc == 0x24685Cu) {
        ctx->pc = 0x24685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246858u;
        // 0x24685c: 0x8c441bc4  lw          $a0, 0x1BC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246860u;
        goto label_246860;
    }
    ctx->pc = 0x246858u;
    {
        const bool branch_taken_0x246858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246858u;
        // 0x24685c: 0x8c441bc4  lw          $a0, 0x1BC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246858) {
            ctx->pc = 0x24687Cu;
            goto label_24687c;
        }
    }
    ctx->pc = 0x246860u;
label_246860:
    // 0x246860: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x246860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_246864:
    // 0x246864: 0x8c432d38  lw          $v1, 0x2D38($v0)
    ctx->pc = 0x246864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11576)));
label_246868:
    // 0x246868: 0x10000004  b           . + 4 + (0x4 << 2)
label_24686c:
    if (ctx->pc == 0x24686Cu) {
        ctx->pc = 0x24686Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246868u;
        // 0x24686c: 0x8c442d3c  lw          $a0, 0x2D3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246870u;
        goto label_246870;
    }
    ctx->pc = 0x246868u;
    {
        const bool branch_taken_0x246868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24686Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246868u;
        // 0x24686c: 0x8c442d3c  lw          $a0, 0x2D3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246868) {
            ctx->pc = 0x24687Cu;
            goto label_24687c;
        }
    }
    ctx->pc = 0x246870u;
label_246870:
    // 0x246870: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x246870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_246874:
    // 0x246874: 0x8c4303f4  lw          $v1, 0x3F4($v0)
    ctx->pc = 0x246874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1012)));
label_246878:
    // 0x246878: 0x8c4403f8  lw          $a0, 0x3F8($v0)
    ctx->pc = 0x246878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1016)));
label_24687c:
    // 0x24687c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x24687cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_246880:
    // 0x246880: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x246880u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_246884:
    // 0x246884: 0x96020640  lhu         $v0, 0x640($s0)
    ctx->pc = 0x246884u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1600)));
label_246888:
    // 0x246888: 0x30440007  andi        $a0, $v0, 0x7
    ctx->pc = 0x246888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_24688c:
    // 0x24688c: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x24688cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_246890:
    // 0x246890: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_246894:
    if (ctx->pc == 0x246894u) {
        ctx->pc = 0x246894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246890u;
        // 0x246894: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246898u;
        goto label_246898;
    }
    ctx->pc = 0x246890u;
    {
        const bool branch_taken_0x246890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x246894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246890u;
        // 0x246894: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246890) {
            ctx->pc = 0x2468B0u;
            goto label_2468b0;
        }
    }
    ctx->pc = 0x246898u;
label_246898:
    // 0x246898: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x246898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_24689c:
    // 0x24689c: 0x2442d710  addiu       $v0, $v0, -0x28F0
    ctx->pc = 0x24689cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956816));
label_2468a0:
    // 0x2468a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2468a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2468a4:
    // 0x2468a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2468a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2468a8:
    // 0x2468a8: 0x800008  jr          $a0
label_2468ac:
    if (ctx->pc == 0x2468ACu) {
        ctx->pc = 0x2468B0u;
        goto label_2468b0;
    }
    ctx->pc = 0x2468A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2468B0u: goto label_2468b0;
            case 0x2468BCu: goto label_2468bc;
            case 0x2468CCu: goto label_2468cc;
            case 0x2468DCu: goto label_2468dc;
            case 0x2468ECu: goto label_2468ec;
            case 0x2468FCu: goto label_2468fc;
            case 0x24690Cu: goto label_24690c;
            case 0x24691Cu: goto label_24691c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2468A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2468B0u;
label_2468b0:
    // 0x2468b0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2468b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2468b4:
    // 0x2468b4: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2468b8:
    if (ctx->pc == 0x2468B8u) {
        ctx->pc = 0x2468BCu;
        goto label_2468bc;
    }
    ctx->pc = 0x2468B4u;
    {
        const bool branch_taken_0x2468b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2468b4) {
            ctx->pc = 0x246924u;
            goto label_246924;
        }
    }
    ctx->pc = 0x2468BCu;
label_2468bc:
    // 0x2468bc: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2468bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_2468c0:
    // 0x2468c0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2468c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2468c4:
    // 0x2468c4: 0x10000017  b           . + 4 + (0x17 << 2)
label_2468c8:
    if (ctx->pc == 0x2468C8u) {
        ctx->pc = 0x2468CCu;
        goto label_2468cc;
    }
    ctx->pc = 0x2468C4u;
    {
        const bool branch_taken_0x2468c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2468c4) {
            ctx->pc = 0x246924u;
            goto label_246924;
        }
    }
    ctx->pc = 0x2468CCu;
label_2468cc:
    // 0x2468cc: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2468ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_2468d0:
    // 0x2468d0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2468d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2468d4:
    // 0x2468d4: 0x10000013  b           . + 4 + (0x13 << 2)
label_2468d8:
    if (ctx->pc == 0x2468D8u) {
        ctx->pc = 0x2468DCu;
        goto label_2468dc;
    }
    ctx->pc = 0x2468D4u;
    {
        const bool branch_taken_0x2468d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2468d4) {
            ctx->pc = 0x246924u;
            goto label_246924;
        }
    }
    ctx->pc = 0x2468DCu;
label_2468dc:
    // 0x2468dc: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x2468dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
label_2468e0:
    // 0x2468e0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2468e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2468e4:
    // 0x2468e4: 0x1000000f  b           . + 4 + (0xF << 2)
label_2468e8:
    if (ctx->pc == 0x2468E8u) {
        ctx->pc = 0x2468ECu;
        goto label_2468ec;
    }
    ctx->pc = 0x2468E4u;
    {
        const bool branch_taken_0x2468e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2468e4) {
            ctx->pc = 0x246924u;
            goto label_246924;
        }
    }
    ctx->pc = 0x2468ECu;
label_2468ec:
    // 0x2468ec: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2468ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_2468f0:
    // 0x2468f0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2468f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2468f4:
    // 0x2468f4: 0x1000000b  b           . + 4 + (0xB << 2)
label_2468f8:
    if (ctx->pc == 0x2468F8u) {
        ctx->pc = 0x2468FCu;
        goto label_2468fc;
    }
    ctx->pc = 0x2468F4u;
    {
        const bool branch_taken_0x2468f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2468f4) {
            ctx->pc = 0x246924u;
            goto label_246924;
        }
    }
    ctx->pc = 0x2468FCu;
label_2468fc:
    // 0x2468fc: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x2468fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
label_246900:
    // 0x246900: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x246900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_246904:
    // 0x246904: 0x10000007  b           . + 4 + (0x7 << 2)
label_246908:
    if (ctx->pc == 0x246908u) {
        ctx->pc = 0x24690Cu;
        goto label_24690c;
    }
    ctx->pc = 0x246904u;
    {
        const bool branch_taken_0x246904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246904) {
            ctx->pc = 0x246924u;
            goto label_246924;
        }
    }
    ctx->pc = 0x24690Cu;
label_24690c:
    // 0x24690c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x24690cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_246910:
    // 0x246910: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x246910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_246914:
    // 0x246914: 0x10000003  b           . + 4 + (0x3 << 2)
label_246918:
    if (ctx->pc == 0x246918u) {
        ctx->pc = 0x24691Cu;
        goto label_24691c;
    }
    ctx->pc = 0x246914u;
    {
        const bool branch_taken_0x246914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246914) {
            ctx->pc = 0x246924u;
            goto label_246924;
        }
    }
    ctx->pc = 0x24691Cu;
label_24691c:
    // 0x24691c: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x24691cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_246920:
    // 0x246920: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x246920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_246924:
    // 0x246924: 0xc09d91a  jal         func_276468
label_246928:
    if (ctx->pc == 0x246928u) {
        ctx->pc = 0x246928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246924u;
        // 0x246928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24692Cu;
        goto label_24692c;
    }
    ctx->pc = 0x246924u;
    SET_GPR_U32(ctx, 31, 0x24692Cu);
    ctx->pc = 0x246928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246924u;
    // 0x246928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x246924u, 0x24692Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24692Cu;
label_24692c:
    // 0x24692c: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x24692cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_246930:
    // 0x246930: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x246930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_246934:
    // 0x246934: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x246934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_246938:
    // 0x246938: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x246938u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_24693c:
    // 0x24693c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24693cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_246940:
    // 0x246940: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x246940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_246944:
    // 0x246944: 0xc0aa15e  jal         func_2A8578
label_246948:
    if (ctx->pc == 0x246948u) {
        ctx->pc = 0x246948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246944u;
        // 0x246948: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24694Cu;
        goto label_24694c;
    }
    ctx->pc = 0x246944u;
    SET_GPR_U32(ctx, 31, 0x24694Cu);
    ctx->pc = 0x246948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246944u;
    // 0x246948: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x246944u, 0x24694Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24694Cu;
label_24694c:
    // 0x24694c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24694cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_246950:
    // 0x246950: 0xc0c7408  jal         func_31D020
label_246954:
    if (ctx->pc == 0x246954u) {
        ctx->pc = 0x246954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246950u;
        // 0x246954: 0xae0205f0  sw          $v0, 0x5F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246958u;
        goto label_246958;
    }
    ctx->pc = 0x246950u;
    SET_GPR_U32(ctx, 31, 0x246958u);
    ctx->pc = 0x246954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246950u;
    // 0x246954: 0xae0205f0  sw          $v0, 0x5F0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x246950u, 0x246958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246958u;
label_246958:
    // 0x246958: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x246958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
label_24695c:
    // 0x24695c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24695cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_246960:
    // 0x246960: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x246960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
label_246964:
    // 0x246964: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x246964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_246968:
    // 0x246968: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x246968u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_24696c:
    // 0x24696c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x24696cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_246970:
    // 0x246970: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x246970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_246974:
    // 0x246974: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x246974u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_246978:
    // 0x246978: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x246978u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_24697c:
    // 0x24697c: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x24697cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
label_246980:
    // 0x246980: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x246980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_246984:
    // 0x246984: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x246984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_246988:
    // 0x246988: 0xc055f06  jal         func_157C18
label_24698c:
    if (ctx->pc == 0x24698Cu) {
        ctx->pc = 0x24698Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246988u;
        // 0x24698c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246990u;
        goto label_246990;
    }
    ctx->pc = 0x246988u;
    SET_GPR_U32(ctx, 31, 0x246990u);
    ctx->pc = 0x24698Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246988u;
    // 0x24698c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x246988u, 0x246990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246990u;
label_246990:
    // 0x246990: 0x3c120058  lui         $s2, 0x58
    ctx->pc = 0x246990u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
label_246994:
    // 0x246994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_246998:
    // 0x246998: 0xc053e7c  jal         func_14F9F0
label_24699c:
    if (ctx->pc == 0x24699Cu) {
        ctx->pc = 0x24699Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246998u;
        // 0x24699c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2469A0u;
        goto label_2469a0;
    }
    ctx->pc = 0x246998u;
    SET_GPR_U32(ctx, 31, 0x2469A0u);
    ctx->pc = 0x24699Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246998u;
    // 0x24699c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x246998u, 0x2469A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2469A0u;
label_2469a0:
    // 0x2469a0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2469a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2469a4:
    // 0x2469a4: 0xc053e4a  jal         func_14F928
label_2469a8:
    if (ctx->pc == 0x2469A8u) {
        ctx->pc = 0x2469A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469A4u;
        // 0x2469a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2469ACu;
        goto label_2469ac;
    }
    ctx->pc = 0x2469A4u;
    SET_GPR_U32(ctx, 31, 0x2469ACu);
    ctx->pc = 0x2469A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2469A4u;
    // 0x2469a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2469A4u, 0x2469ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2469ACu;
label_2469ac:
    // 0x2469ac: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x2469acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
label_2469b0:
    // 0x2469b0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2469b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_2469b4:
    // 0x2469b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2469b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2469b8:
    // 0x2469b8: 0x504000b5  beql        $v0, $zero, . + 4 + (0xB5 << 2)
label_2469bc:
    if (ctx->pc == 0x2469BCu) {
        ctx->pc = 0x2469BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469B8u;
        // 0x2469bc: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2469C0u;
        goto label_2469c0;
    }
    ctx->pc = 0x2469B8u;
    {
        const bool branch_taken_0x2469b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2469b8) {
            ctx->pc = 0x2469BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2469B8u;
            // 0x2469bc: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246C90u;
            goto label_246c90;
        }
    }
    ctx->pc = 0x2469C0u;
label_2469c0:
    // 0x2469c0: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x2469c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_2469c4:
    // 0x2469c4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2469c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2469c8:
    // 0x2469c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2469cc:
    if (ctx->pc == 0x2469CCu) {
        ctx->pc = 0x2469CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469C8u;
        // 0x2469cc: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2469D0u;
        goto label_2469d0;
    }
    ctx->pc = 0x2469C8u;
    {
        const bool branch_taken_0x2469c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2469CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469C8u;
        // 0x2469cc: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2469c8) {
            ctx->pc = 0x2469ECu;
            goto label_2469ec;
        }
    }
    ctx->pc = 0x2469D0u;
label_2469d0:
    // 0x2469d0: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x2469d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
label_2469d4:
    // 0x2469d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2469d8:
    if (ctx->pc == 0x2469D8u) {
        ctx->pc = 0x2469D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469D4u;
        // 0x2469d8: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2469DCu;
        goto label_2469dc;
    }
    ctx->pc = 0x2469D4u;
    {
        const bool branch_taken_0x2469d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2469D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469D4u;
        // 0x2469d8: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2469d4) {
            ctx->pc = 0x2469ECu;
            goto label_2469ec;
        }
    }
    ctx->pc = 0x2469DCu;
label_2469dc:
    // 0x2469dc: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x2469dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
label_2469e0:
    // 0x2469e0: 0xc09d138  jal         func_2744E0
label_2469e4:
    if (ctx->pc == 0x2469E4u) {
        ctx->pc = 0x2469E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469E0u;
        // 0x2469e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2469E8u;
        goto label_2469e8;
    }
    ctx->pc = 0x2469E0u;
    SET_GPR_U32(ctx, 31, 0x2469E8u);
    ctx->pc = 0x2469E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2469E0u;
    // 0x2469e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2744E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744E0u, 0x2469E0u, 0x2469E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2469E8u;
label_2469e8:
    // 0x2469e8: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2469e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_2469ec:
    // 0x2469ec: 0x245164f0  addiu       $s1, $v0, 0x64F0
    ctx->pc = 0x2469ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
label_2469f0:
    // 0x2469f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2469f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2469f4:
    // 0x2469f4: 0xc0a529a  jal         func_294A68
label_2469f8:
    if (ctx->pc == 0x2469F8u) {
        ctx->pc = 0x2469F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469F4u;
        // 0x2469f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2469FCu;
        goto label_2469fc;
    }
    ctx->pc = 0x2469F4u;
    SET_GPR_U32(ctx, 31, 0x2469FCu);
    ctx->pc = 0x2469F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2469F4u;
    // 0x2469f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294A68u, 0x2469F4u, 0x2469FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2469FCu;
label_2469fc:
    // 0x2469fc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_246a00:
    if (ctx->pc == 0x246A00u) {
        ctx->pc = 0x246A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469FCu;
        // 0x246a00: 0xc6000600  lwc1        $f0, 0x600($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A04u;
        goto label_246a04;
    }
    ctx->pc = 0x2469FCu;
    {
        const bool branch_taken_0x2469fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2469fc) {
            ctx->pc = 0x246A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2469FCu;
            // 0x246a00: 0xc6000600  lwc1        $f0, 0x600($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x246A2Cu;
            goto label_246a2c;
        }
    }
    ctx->pc = 0x246A04u;
label_246a04:
    // 0x246a04: 0xc0c7408  jal         func_31D020
label_246a08:
    if (ctx->pc == 0x246A08u) {
        ctx->pc = 0x246A0Cu;
        goto label_246a0c;
    }
    ctx->pc = 0x246A04u;
    SET_GPR_U32(ctx, 31, 0x246A0Cu);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x246A04u, 0x246A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246A0Cu;
label_246a0c:
    // 0x246a0c: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x246a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
label_246a10:
    // 0x246a10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x246a10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_246a14:
    // 0x246a14: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x246a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
label_246a18:
    // 0x246a18: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x246a18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_246a1c:
    // 0x246a1c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x246a1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_246a20:
    // 0x246a20: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x246a20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_246a24:
    // 0x246a24: 0x10000099  b           . + 4 + (0x99 << 2)
label_246a28:
    if (ctx->pc == 0x246A28u) {
        ctx->pc = 0x246A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A24u;
        // 0x246a28: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A2Cu;
        goto label_246a2c;
    }
    ctx->pc = 0x246A24u;
    {
        const bool branch_taken_0x246a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A24u;
        // 0x246a28: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x246a24) {
            ctx->pc = 0x246C8Cu;
            goto label_246c8c;
        }
    }
    ctx->pc = 0x246A2Cu;
label_246a2c:
    // 0x246a2c: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x246a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_246a30:
    // 0x246a30: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x246a30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_246a34:
    // 0x246a34: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x246a34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_246a38:
    // 0x246a38: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x246a38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_246a3c:
    // 0x246a3c: 0x0  nop
    ctx->pc = 0x246a3cu;
    // NOP
label_246a40:
    // 0x246a40: 0x45000092  bc1f        . + 4 + (0x92 << 2)
label_246a44:
    if (ctx->pc == 0x246A44u) {
        ctx->pc = 0x246A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A40u;
        // 0x246a44: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A48u;
        goto label_246a48;
    }
    ctx->pc = 0x246A40u;
    {
        const bool branch_taken_0x246a40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x246A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A40u;
        // 0x246a44: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x246a40) {
            ctx->pc = 0x246C8Cu;
            goto label_246c8c;
        }
    }
    ctx->pc = 0x246A48u;
label_246a48:
    // 0x246a48: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x246a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_246a4c:
    // 0x246a4c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x246a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_246a50:
    // 0x246a50: 0xa2220540  sb          $v0, 0x540($s1)
    ctx->pc = 0x246a50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1344), (uint8_t)GPR_U32(ctx, 2));
label_246a54:
    // 0x246a54: 0x1000008d  b           . + 4 + (0x8D << 2)
label_246a58:
    if (ctx->pc == 0x246A58u) {
        ctx->pc = 0x246A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A54u;
        // 0x246a58: 0xa20302f6  sb          $v1, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A5Cu;
        goto label_246a5c;
    }
    ctx->pc = 0x246A54u;
    {
        const bool branch_taken_0x246a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A54u;
        // 0x246a58: 0xa20302f6  sb          $v1, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246a54) {
            ctx->pc = 0x246C8Cu;
            goto label_246c8c;
        }
    }
    ctx->pc = 0x246A5Cu;
label_246a5c:
    // 0x246a5c: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x246a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
label_246a60:
    // 0x246a60: 0x2862020f  slti        $v0, $v1, 0x20F
    ctx->pc = 0x246a60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)527) ? 1 : 0);
label_246a64:
    // 0x246a64: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_246a68:
    if (ctx->pc == 0x246A68u) {
        ctx->pc = 0x246A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A64u;
        // 0x246a68: 0xa2001864  sb          $zero, 0x1864($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A6Cu;
        goto label_246a6c;
    }
    ctx->pc = 0x246A64u;
    {
        const bool branch_taken_0x246a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A64u;
        // 0x246a68: 0xa2001864  sb          $zero, 0x1864($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246a64) {
            ctx->pc = 0x246A88u;
            goto label_246a88;
        }
    }
    ctx->pc = 0x246A6Cu;
label_246a6c:
    // 0x246a6c: 0x2862020d  slti        $v0, $v1, 0x20D
    ctx->pc = 0x246a6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)525) ? 1 : 0);
label_246a70:
    // 0x246a70: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_246a74:
    if (ctx->pc == 0x246A74u) {
        ctx->pc = 0x246A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A70u;
        // 0x246a74: 0x2402020a  addiu       $v0, $zero, 0x20A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 522));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A78u;
        goto label_246a78;
    }
    ctx->pc = 0x246A70u;
    {
        const bool branch_taken_0x246a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A70u;
        // 0x246a74: 0x2402020a  addiu       $v0, $zero, 0x20A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 522));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246a70) {
            ctx->pc = 0x246AC0u;
            goto label_246ac0;
        }
    }
    ctx->pc = 0x246A78u;
label_246a78:
    // 0x246a78: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_246a7c:
    if (ctx->pc == 0x246A7Cu) {
        ctx->pc = 0x246A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A78u;
        // 0x246a7c: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A80u;
        goto label_246a80;
    }
    ctx->pc = 0x246A78u;
    {
        const bool branch_taken_0x246a78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x246A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A78u;
        // 0x246a7c: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246a78) {
            ctx->pc = 0x246AC4u;
            goto label_246ac4;
        }
    }
    ctx->pc = 0x246A80u;
label_246a80:
    // 0x246a80: 0x1000000d  b           . + 4 + (0xD << 2)
label_246a84:
    if (ctx->pc == 0x246A84u) {
        ctx->pc = 0x246A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A80u;
        // 0x246a84: 0x8c430504  lw          $v1, 0x504($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A88u;
        goto label_246a88;
    }
    ctx->pc = 0x246A80u;
    {
        const bool branch_taken_0x246a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A80u;
        // 0x246a84: 0x8c430504  lw          $v1, 0x504($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246a80) {
            ctx->pc = 0x246AB8u;
            goto label_246ab8;
        }
    }
    ctx->pc = 0x246A88u;
label_246a88:
    // 0x246a88: 0x24020218  addiu       $v0, $zero, 0x218
    ctx->pc = 0x246a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 536));
label_246a8c:
    // 0x246a8c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_246a90:
    if (ctx->pc == 0x246A90u) {
        ctx->pc = 0x246A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A8Cu;
        // 0x246a90: 0x28620218  slti        $v0, $v1, 0x218 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)536) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A94u;
        goto label_246a94;
    }
    ctx->pc = 0x246A8Cu;
    {
        const bool branch_taken_0x246a8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x246A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A8Cu;
        // 0x246a90: 0x28620218  slti        $v0, $v1, 0x218 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)536) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246a8c) {
            ctx->pc = 0x246AC0u;
            goto label_246ac0;
        }
    }
    ctx->pc = 0x246A94u;
label_246a94:
    // 0x246a94: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_246a98:
    if (ctx->pc == 0x246A98u) {
        ctx->pc = 0x246A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A94u;
        // 0x246a98: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A9Cu;
        goto label_246a9c;
    }
    ctx->pc = 0x246A94u;
    {
        const bool branch_taken_0x246a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246a94) {
            ctx->pc = 0x246A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246A94u;
            // 0x246a98: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246AB4u;
            goto label_246ab4;
        }
    }
    ctx->pc = 0x246A9Cu;
label_246a9c:
    // 0x246a9c: 0x28620248  slti        $v0, $v1, 0x248
    ctx->pc = 0x246a9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)584) ? 1 : 0);
label_246aa0:
    // 0x246aa0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_246aa4:
    if (ctx->pc == 0x246AA4u) {
        ctx->pc = 0x246AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246AA0u;
        // 0x246aa4: 0x28620245  slti        $v0, $v1, 0x245 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)581) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x246AA8u;
        goto label_246aa8;
    }
    ctx->pc = 0x246AA0u;
    {
        const bool branch_taken_0x246aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246AA0u;
        // 0x246aa4: 0x28620245  slti        $v0, $v1, 0x245 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)581) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246aa0) {
            ctx->pc = 0x246AB0u;
            goto label_246ab0;
        }
    }
    ctx->pc = 0x246AA8u;
label_246aa8:
    // 0x246aa8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_246aac:
    if (ctx->pc == 0x246AACu) {
        ctx->pc = 0x246AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246AA8u;
        // 0x246aac: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246AB0u;
        goto label_246ab0;
    }
    ctx->pc = 0x246AA8u;
    {
        const bool branch_taken_0x246aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246aa8) {
            ctx->pc = 0x246AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246AA8u;
            // 0x246aac: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246AC4u;
            goto label_246ac4;
        }
    }
    ctx->pc = 0x246AB0u;
label_246ab0:
    // 0x246ab0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x246ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_246ab4:
    // 0x246ab4: 0x8c430504  lw          $v1, 0x504($v0)
    ctx->pc = 0x246ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1284)));
label_246ab8:
    // 0x246ab8: 0x10000004  b           . + 4 + (0x4 << 2)
label_246abc:
    if (ctx->pc == 0x246ABCu) {
        ctx->pc = 0x246ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246AB8u;
        // 0x246abc: 0x8c440508  lw          $a0, 0x508($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246AC0u;
        goto label_246ac0;
    }
    ctx->pc = 0x246AB8u;
    {
        const bool branch_taken_0x246ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246AB8u;
        // 0x246abc: 0x8c440508  lw          $a0, 0x508($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246ab8) {
            ctx->pc = 0x246ACCu;
            goto label_246acc;
        }
    }
    ctx->pc = 0x246AC0u;
label_246ac0:
    // 0x246ac0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x246ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_246ac4:
    // 0x246ac4: 0x8c430c54  lw          $v1, 0xC54($v0)
    ctx->pc = 0x246ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3156)));
label_246ac8:
    // 0x246ac8: 0x8c440c58  lw          $a0, 0xC58($v0)
    ctx->pc = 0x246ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3160)));
label_246acc:
    // 0x246acc: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x246accu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_246ad0:
    // 0x246ad0: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x246ad0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_246ad4:
    // 0x246ad4: 0xc09d91a  jal         func_276468
label_246ad8:
    if (ctx->pc == 0x246AD8u) {
        ctx->pc = 0x246AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246AD4u;
        // 0x246ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246ADCu;
        goto label_246adc;
    }
    ctx->pc = 0x246AD4u;
    SET_GPR_U32(ctx, 31, 0x246ADCu);
    ctx->pc = 0x246AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246AD4u;
    // 0x246ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x246AD4u, 0x246ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246ADCu;
label_246adc:
    // 0x246adc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x246adcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_246ae0:
    // 0x246ae0: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x246ae0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_246ae4:
    // 0x246ae4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x246ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_246ae8:
    // 0x246ae8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x246ae8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_246aec:
    // 0x246aec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_246af0:
    // 0x246af0: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x246af0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_246af4:
    // 0x246af4: 0xc0aa15e  jal         func_2A8578
label_246af8:
    if (ctx->pc == 0x246AF8u) {
        ctx->pc = 0x246AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246AF4u;
        // 0x246af8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246AFCu;
        goto label_246afc;
    }
    ctx->pc = 0x246AF4u;
    SET_GPR_U32(ctx, 31, 0x246AFCu);
    ctx->pc = 0x246AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246AF4u;
    // 0x246af8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x246AF4u, 0x246AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246AFCu;
label_246afc:
    // 0x246afc: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x246afcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_246b00:
    // 0x246b00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x246b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_246b04:
    // 0x246b04: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x246b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
label_246b08:
    // 0x246b08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x246b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_246b0c:
    // 0x246b0c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x246b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_246b10:
    // 0x246b10: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x246b10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_246b14:
    // 0x246b14: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x246b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_246b18:
    // 0x246b18: 0x24a264f0  addiu       $v0, $a1, 0x64F0
    ctx->pc = 0x246b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 25840));
label_246b1c:
    // 0x246b1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_246b20:
    // 0x246b20: 0xa0430540  sb          $v1, 0x540($v0)
    ctx->pc = 0x246b20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1344), (uint8_t)GPR_U32(ctx, 3));
label_246b24:
    // 0x246b24: 0xc055f06  jal         func_157C18
label_246b28:
    if (ctx->pc == 0x246B28u) {
        ctx->pc = 0x246B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B24u;
        // 0x246b28: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246B2Cu;
        goto label_246b2c;
    }
    ctx->pc = 0x246B24u;
    SET_GPR_U32(ctx, 31, 0x246B2Cu);
    ctx->pc = 0x246B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246B24u;
    // 0x246b28: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x246B24u, 0x246B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B2Cu;
label_246b2c:
    // 0x246b2c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_246b30:
    if (ctx->pc == 0x246B30u) {
        ctx->pc = 0x246B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B2Cu;
        // 0x246b30: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246B34u;
        goto label_246b34;
    }
    ctx->pc = 0x246B2Cu;
    {
        const bool branch_taken_0x246b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246b2c) {
            ctx->pc = 0x246B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246B2Cu;
            // 0x246b30: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246B34u;
            goto label_246b34;
        }
    }
    ctx->pc = 0x246B34u;
label_246b34:
    // 0x246b34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x246b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_246b38:
    // 0x246b38: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x246b38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_246b3c:
    // 0x246b3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_246b40:
    // 0x246b40: 0xc053e7c  jal         func_14F9F0
label_246b44:
    if (ctx->pc == 0x246B44u) {
        ctx->pc = 0x246B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B40u;
        // 0x246b44: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x246B48u;
        goto label_246b48;
    }
    ctx->pc = 0x246B40u;
    SET_GPR_U32(ctx, 31, 0x246B48u);
    ctx->pc = 0x246B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246B40u;
    // 0x246b44: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x246B40u, 0x246B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B48u;
label_246b48:
    // 0x246b48: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x246b48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_246b4c:
    // 0x246b4c: 0xc053e4a  jal         func_14F928
label_246b50:
    if (ctx->pc == 0x246B50u) {
        ctx->pc = 0x246B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B4Cu;
        // 0x246b50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246B54u;
        goto label_246b54;
    }
    ctx->pc = 0x246B4Cu;
    SET_GPR_U32(ctx, 31, 0x246B54u);
    ctx->pc = 0x246B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246B4Cu;
    // 0x246b50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x246B4Cu, 0x246B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B54u;
label_246b54:
    // 0x246b54: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x246b54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_246b58:
    // 0x246b58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x246b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_246b5c:
    // 0x246b5c: 0x50400042  beql        $v0, $zero, . + 4 + (0x42 << 2)
label_246b60:
    if (ctx->pc == 0x246B60u) {
        ctx->pc = 0x246B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B5Cu;
        // 0x246b60: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246B64u;
        goto label_246b64;
    }
    ctx->pc = 0x246B5Cu;
    {
        const bool branch_taken_0x246b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246b5c) {
            ctx->pc = 0x246B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246B5Cu;
            // 0x246b60: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246C68u;
            goto label_246c68;
        }
    }
    ctx->pc = 0x246B64u;
label_246b64:
    // 0x246b64: 0x8e020738  lw          $v0, 0x738($s0)
    ctx->pc = 0x246b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1848)));
label_246b68:
    // 0x246b68: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
label_246b6c:
    if (ctx->pc == 0x246B6Cu) {
        ctx->pc = 0x246B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B68u;
        // 0x246b6c: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246B70u;
        goto label_246b70;
    }
    ctx->pc = 0x246B68u;
    {
        const bool branch_taken_0x246b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246b68) {
            ctx->pc = 0x246B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246B68u;
            // 0x246b6c: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246C68u;
            goto label_246c68;
        }
    }
    ctx->pc = 0x246B70u;
label_246b70:
    // 0x246b70: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x246b70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_246b74:
    // 0x246b74: 0xc0c3ea6  jal         func_30FA98
label_246b78:
    if (ctx->pc == 0x246B78u) {
        ctx->pc = 0x246B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B74u;
        // 0x246b78: 0x240403b1  addiu       $a0, $zero, 0x3B1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 945));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246B7Cu;
        goto label_246b7c;
    }
    ctx->pc = 0x246B74u;
    SET_GPR_U32(ctx, 31, 0x246B7Cu);
    ctx->pc = 0x246B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246B74u;
    // 0x246b78: 0x240403b1  addiu       $a0, $zero, 0x3B1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 945));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x246B74u, 0x246B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B7Cu;
label_246b7c:
    // 0x246b7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x246b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_246b80:
    // 0x246b80: 0x10a00038  beqz        $a1, . + 4 + (0x38 << 2)
label_246b84:
    if (ctx->pc == 0x246B84u) {
        ctx->pc = 0x246B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B80u;
        // 0x246b84: 0xae050738  sw          $a1, 0x738($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1848), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246B88u;
        goto label_246b88;
    }
    ctx->pc = 0x246B80u;
    {
        const bool branch_taken_0x246b80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x246B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B80u;
        // 0x246b84: 0xae050738  sw          $a1, 0x738($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1848), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246b80) {
            ctx->pc = 0x246C64u;
            goto label_246c64;
        }
    }
    ctx->pc = 0x246B88u;
label_246b88:
    // 0x246b88: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x246b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_246b8c:
    // 0x246b8c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x246b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_246b90:
    // 0x246b90: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x246b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_246b94:
    // 0x246b94: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x246b94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_246b98:
    // 0x246b98: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x246b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_246b9c:
    // 0x246b9c: 0x40f809  jalr        $v0
label_246ba0:
    if (ctx->pc == 0x246BA0u) {
        ctx->pc = 0x246BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B9Cu;
        // 0x246ba0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246BA4u;
        goto label_246ba4;
    }
    ctx->pc = 0x246B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x246BA4u);
        ctx->pc = 0x246BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B9Cu;
        // 0x246ba0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246B9Cu, 0x246BA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x246BA4u;
label_246ba4:
    // 0x246ba4: 0x8e020738  lw          $v0, 0x738($s0)
    ctx->pc = 0x246ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1848)));
label_246ba8:
    // 0x246ba8: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x246ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_246bac:
    // 0x246bac: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x246bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_246bb0:
    // 0x246bb0: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
label_246bb4:
    if (ctx->pc == 0x246BB4u) {
        ctx->pc = 0x246BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BB0u;
        // 0x246bb4: 0x8e040738  lw          $a0, 0x738($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1848)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246BB8u;
        goto label_246bb8;
    }
    ctx->pc = 0x246BB0u;
    {
        const bool branch_taken_0x246bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x246bb0) {
            ctx->pc = 0x246BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246BB0u;
            // 0x246bb4: 0x8e040738  lw          $a0, 0x738($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1848)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246BD4u;
            goto label_246bd4;
        }
    }
    ctx->pc = 0x246BB8u;
label_246bb8:
    // 0x246bb8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x246bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_246bbc:
    // 0x246bbc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x246bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_246bc0:
    // 0x246bc0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x246bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_246bc4:
    // 0x246bc4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x246bc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_246bc8:
    // 0x246bc8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x246bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_246bcc:
    // 0x246bcc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x246bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_246bd0:
    // 0x246bd0: 0x8e040738  lw          $a0, 0x738($s0)
    ctx->pc = 0x246bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1848)));
label_246bd4:
    // 0x246bd4: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x246bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_246bd8:
    // 0x246bd8: 0x24830490  addiu       $v1, $a0, 0x490
    ctx->pc = 0x246bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1168));
label_246bdc:
    // 0x246bdc: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_246be0:
    if (ctx->pc == 0x246BE0u) {
        ctx->pc = 0x246BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BDCu;
        // 0x246be0: 0x8e020738  lw          $v0, 0x738($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1848)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246BE4u;
        goto label_246be4;
    }
    ctx->pc = 0x246BDCu;
    {
        const bool branch_taken_0x246bdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x246bdc) {
            ctx->pc = 0x246BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246BDCu;
            // 0x246be0: 0x8e020738  lw          $v0, 0x738($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1848)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246C00u;
            goto label_246c00;
        }
    }
    ctx->pc = 0x246BE4u;
label_246be4:
    // 0x246be4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x246be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_246be8:
    // 0x246be8: 0xe4800490  swc1        $f0, 0x490($a0)
    ctx->pc = 0x246be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1168), bits); }
label_246bec:
    // 0x246bec: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x246becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_246bf0:
    // 0x246bf0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x246bf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_246bf4:
    // 0x246bf4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x246bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_246bf8:
    // 0x246bf8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x246bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_246bfc:
    // 0x246bfc: 0x8e020738  lw          $v0, 0x738($s0)
    ctx->pc = 0x246bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1848)));
label_246c00:
    // 0x246c00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x246c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_246c04:
    // 0x246c04: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x246c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
label_246c08:
    // 0x246c08: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x246c08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_246c0c:
    // 0x246c0c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x246c0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_246c10:
    // 0x246c10: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x246c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_246c14:
    // 0x246c14: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x246c14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
label_246c18:
    // 0x246c18: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x246c18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_246c1c:
    // 0x246c1c: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x246c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_246c20:
    // 0x246c20: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x246c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_246c24:
    // 0x246c24: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x246c24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_246c28:
    // 0x246c28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x246c28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_246c2c:
    // 0x246c2c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x246c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_246c30:
    // 0x246c30: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x246c30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_246c34:
    // 0x246c34: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x246c34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_246c38:
    // 0x246c38: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x246c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_246c3c:
    // 0x246c3c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x246c3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_246c40:
    // 0x246c40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x246c40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_246c44:
    // 0x246c44: 0x8e040738  lw          $a0, 0x738($s0)
    ctx->pc = 0x246c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1848)));
label_246c48:
    // 0x246c48: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x246c48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_246c4c:
    // 0x246c4c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x246c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_246c50:
    // 0x246c50: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x246c50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_246c54:
    // 0x246c54: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x246c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_246c58:
    // 0x246c58: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x246c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_246c5c:
    // 0x246c5c: 0xc073c58  jal         func_1CF160
label_246c60:
    if (ctx->pc == 0x246C60u) {
        ctx->pc = 0x246C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C5Cu;
        // 0x246c60: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246C64u;
        goto label_246c64;
    }
    ctx->pc = 0x246C5Cu;
    SET_GPR_U32(ctx, 31, 0x246C64u);
    ctx->pc = 0x246C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246C5Cu;
    // 0x246c60: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF160u, 0x246C5Cu, 0x246C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246C64u;
label_246c64:
    // 0x246c64: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x246c64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_246c68:
    // 0x246c68: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x246c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_246c6c:
    // 0x246c6c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_246c70:
    if (ctx->pc == 0x246C70u) {
        ctx->pc = 0x246C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C6Cu;
        // 0x246c70: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246C74u;
        goto label_246c74;
    }
    ctx->pc = 0x246C6Cu;
    {
        const bool branch_taken_0x246c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246c6c) {
            ctx->pc = 0x246C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246C6Cu;
            // 0x246c70: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246C90u;
            goto label_246c90;
        }
    }
    ctx->pc = 0x246C74u;
label_246c74:
    // 0x246c74: 0x8e040738  lw          $a0, 0x738($s0)
    ctx->pc = 0x246c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1848)));
label_246c78:
    // 0x246c78: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_246c7c:
    if (ctx->pc == 0x246C7Cu) {
        ctx->pc = 0x246C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C78u;
        // 0x246c7c: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246C80u;
        goto label_246c80;
    }
    ctx->pc = 0x246C78u;
    {
        const bool branch_taken_0x246c78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x246c78) {
            ctx->pc = 0x246C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246C78u;
            // 0x246c7c: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246C90u;
            goto label_246c90;
        }
    }
    ctx->pc = 0x246C80u;
label_246c80:
    // 0x246c80: 0xc0740d0  jal         func_1D0340
label_246c84:
    if (ctx->pc == 0x246C84u) {
        ctx->pc = 0x246C88u;
        goto label_246c88;
    }
    ctx->pc = 0x246C80u;
    SET_GPR_U32(ctx, 31, 0x246C88u);
    ctx->pc = 0x1D0340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0340u, 0x246C80u, 0x246C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246C88u;
label_246c88:
    // 0x246c88: 0xae000738  sw          $zero, 0x738($s0)
    ctx->pc = 0x246c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1848), GPR_U32(ctx, 0));
label_246c8c:
    // 0x246c8c: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x246c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_246c90:
    // 0x246c90: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x246c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_246c94:
    // 0x246c94: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x246c94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_246c98:
    // 0x246c98: 0xc0a4b72  jal         func_292DC8
label_246c9c:
    if (ctx->pc == 0x246C9Cu) {
        ctx->pc = 0x246C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C98u;
        // 0x246c9c: 0x264464f0  addiu       $a0, $s2, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246CA0u;
        goto label_246ca0;
    }
    ctx->pc = 0x246C98u;
    SET_GPR_U32(ctx, 31, 0x246CA0u);
    ctx->pc = 0x246C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246C98u;
    // 0x246c9c: 0x264464f0  addiu       $a0, $s2, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292DC8u, 0x246C98u, 0x246CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246CA0u;
label_246ca0:
    // 0x246ca0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_246ca4:
    if (ctx->pc == 0x246CA4u) {
        ctx->pc = 0x246CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CA0u;
        // 0x246ca4: 0xc60116c0  lwc1        $f1, 0x16C0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x246CA8u;
        goto label_246ca8;
    }
    ctx->pc = 0x246CA0u;
    {
        const bool branch_taken_0x246ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246ca0) {
            ctx->pc = 0x246CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246CA0u;
            // 0x246ca4: 0xc60116c0  lwc1        $f1, 0x16C0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x246CD0u;
            goto label_246cd0;
        }
    }
    ctx->pc = 0x246CA8u;
label_246ca8:
    // 0x246ca8: 0x8e040738  lw          $a0, 0x738($s0)
    ctx->pc = 0x246ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1848)));
label_246cac:
    // 0x246cac: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_246cb0:
    if (ctx->pc == 0x246CB0u) {
        ctx->pc = 0x246CB4u;
        goto label_246cb4;
    }
    ctx->pc = 0x246CACu;
    {
        const bool branch_taken_0x246cac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x246cac) {
            ctx->pc = 0x246CC0u;
            goto label_246cc0;
        }
    }
    ctx->pc = 0x246CB4u;
label_246cb4:
    // 0x246cb4: 0xc074102  jal         func_1D0408
label_246cb8:
    if (ctx->pc == 0x246CB8u) {
        ctx->pc = 0x246CBCu;
        goto label_246cbc;
    }
    ctx->pc = 0x246CB4u;
    SET_GPR_U32(ctx, 31, 0x246CBCu);
    ctx->pc = 0x1D0408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0408u, 0x246CB4u, 0x246CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246CBCu;
label_246cbc:
    // 0x246cbc: 0xae000738  sw          $zero, 0x738($s0)
    ctx->pc = 0x246cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1848), GPR_U32(ctx, 0));
label_246cc0:
    // 0x246cc0: 0xc09c176  jal         func_2705D8
label_246cc4:
    if (ctx->pc == 0x246CC4u) {
        ctx->pc = 0x246CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CC0u;
        // 0x246cc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246CC8u;
        goto label_246cc8;
    }
    ctx->pc = 0x246CC0u;
    SET_GPR_U32(ctx, 31, 0x246CC8u);
    ctx->pc = 0x246CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246CC0u;
    // 0x246cc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x246CC0u, 0x246CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246CC8u;
label_246cc8:
    // 0x246cc8: 0x1000000d  b           . + 4 + (0xD << 2)
label_246ccc:
    if (ctx->pc == 0x246CCCu) {
        ctx->pc = 0x246CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CC8u;
        // 0x246ccc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246CD0u;
        goto label_246cd0;
    }
    ctx->pc = 0x246CC8u;
    {
        const bool branch_taken_0x246cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CC8u;
        // 0x246ccc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246cc8) {
            ctx->pc = 0x246D00u;
            goto label_246d00;
        }
    }
    ctx->pc = 0x246CD0u;
label_246cd0:
    // 0x246cd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x246cd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_246cd4:
    // 0x246cd4: 0x0  nop
    ctx->pc = 0x246cd4u;
    // NOP
label_246cd8:
    // 0x246cd8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x246cd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_246cdc:
    // 0x246cdc: 0x0  nop
    ctx->pc = 0x246cdcu;
    // NOP
label_246ce0:
    // 0x246ce0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_246ce4:
    if (ctx->pc == 0x246CE4u) {
        ctx->pc = 0x246CE8u;
        goto label_246ce8;
    }
    ctx->pc = 0x246CE0u;
    {
        const bool branch_taken_0x246ce0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x246ce0) {
            ctx->pc = 0x246CF4u;
            goto label_246cf4;
        }
    }
    ctx->pc = 0x246CE8u;
label_246ce8:
    // 0x246ce8: 0x8e0216ec  lw          $v0, 0x16EC($s0)
    ctx->pc = 0x246ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5868)));
label_246cec:
    // 0x246cec: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_246cf0:
    if (ctx->pc == 0x246CF0u) {
        ctx->pc = 0x246CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CECu;
        // 0x246cf0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246CF4u;
        goto label_246cf4;
    }
    ctx->pc = 0x246CECu;
    {
        const bool branch_taken_0x246cec = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x246cec) {
            ctx->pc = 0x246CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246CECu;
            // 0x246cf0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246D00u;
            goto label_246d00;
        }
    }
    ctx->pc = 0x246CF4u;
label_246cf4:
    // 0x246cf4: 0xc09c176  jal         func_2705D8
label_246cf8:
    if (ctx->pc == 0x246CF8u) {
        ctx->pc = 0x246CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CF4u;
        // 0x246cf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246CFCu;
        goto label_246cfc;
    }
    ctx->pc = 0x246CF4u;
    SET_GPR_U32(ctx, 31, 0x246CFCu);
    ctx->pc = 0x246CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246CF4u;
    // 0x246cf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x246CF4u, 0x246CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246CFCu;
label_246cfc:
    // 0x246cfc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x246cfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_246d00:
    // 0x246d00: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x246d00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_246d04:
    // 0x246d04: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x246d04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_246d08:
    // 0x246d08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x246d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_246d0c:
    // 0x246d0c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x246d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_246d10:
    // 0x246d10: 0x3e00008  jr          $ra
label_246d14:
    if (ctx->pc == 0x246D14u) {
        ctx->pc = 0x246D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D10u;
        // 0x246d14: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D18u;
        goto label_fallthrough_0x246d10;
    }
    ctx->pc = 0x246D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D10u;
        // 0x246d14: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x246d10:
    ctx->pc = 0x246D18u;
}
