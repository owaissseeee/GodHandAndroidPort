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

// Function: cOmSub_setEndPos
// Address: 0x1c77d8 - 0x1c7ca0
void cOmSub_setEndPos_0x1c77d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmSub_setEndPos_0x1c77d8");
#endif

    switch (ctx->pc) {
        case 0x1c77d8u: goto label_1c77d8;
        case 0x1c77dcu: goto label_1c77dc;
        case 0x1c77e0u: goto label_1c77e0;
        case 0x1c77e4u: goto label_1c77e4;
        case 0x1c77e8u: goto label_1c77e8;
        case 0x1c77ecu: goto label_1c77ec;
        case 0x1c77f0u: goto label_1c77f0;
        case 0x1c77f4u: goto label_1c77f4;
        case 0x1c77f8u: goto label_1c77f8;
        case 0x1c77fcu: goto label_1c77fc;
        case 0x1c7800u: goto label_1c7800;
        case 0x1c7804u: goto label_1c7804;
        case 0x1c7808u: goto label_1c7808;
        case 0x1c780cu: goto label_1c780c;
        case 0x1c7810u: goto label_1c7810;
        case 0x1c7814u: goto label_1c7814;
        case 0x1c7818u: goto label_1c7818;
        case 0x1c781cu: goto label_1c781c;
        case 0x1c7820u: goto label_1c7820;
        case 0x1c7824u: goto label_1c7824;
        case 0x1c7828u: goto label_1c7828;
        case 0x1c782cu: goto label_1c782c;
        case 0x1c7830u: goto label_1c7830;
        case 0x1c7834u: goto label_1c7834;
        case 0x1c7838u: goto label_1c7838;
        case 0x1c783cu: goto label_1c783c;
        case 0x1c7840u: goto label_1c7840;
        case 0x1c7844u: goto label_1c7844;
        case 0x1c7848u: goto label_1c7848;
        case 0x1c784cu: goto label_1c784c;
        case 0x1c7850u: goto label_1c7850;
        case 0x1c7854u: goto label_1c7854;
        case 0x1c7858u: goto label_1c7858;
        case 0x1c785cu: goto label_1c785c;
        case 0x1c7860u: goto label_1c7860;
        case 0x1c7864u: goto label_1c7864;
        case 0x1c7868u: goto label_1c7868;
        case 0x1c786cu: goto label_1c786c;
        case 0x1c7870u: goto label_1c7870;
        case 0x1c7874u: goto label_1c7874;
        case 0x1c7878u: goto label_1c7878;
        case 0x1c787cu: goto label_1c787c;
        case 0x1c7880u: goto label_1c7880;
        case 0x1c7884u: goto label_1c7884;
        case 0x1c7888u: goto label_1c7888;
        case 0x1c788cu: goto label_1c788c;
        case 0x1c7890u: goto label_1c7890;
        case 0x1c7894u: goto label_1c7894;
        case 0x1c7898u: goto label_1c7898;
        case 0x1c789cu: goto label_1c789c;
        case 0x1c78a0u: goto label_1c78a0;
        case 0x1c78a4u: goto label_1c78a4;
        case 0x1c78a8u: goto label_1c78a8;
        case 0x1c78acu: goto label_1c78ac;
        case 0x1c78b0u: goto label_1c78b0;
        case 0x1c78b4u: goto label_1c78b4;
        case 0x1c78b8u: goto label_1c78b8;
        case 0x1c78bcu: goto label_1c78bc;
        case 0x1c78c0u: goto label_1c78c0;
        case 0x1c78c4u: goto label_1c78c4;
        case 0x1c78c8u: goto label_1c78c8;
        case 0x1c78ccu: goto label_1c78cc;
        case 0x1c78d0u: goto label_1c78d0;
        case 0x1c78d4u: goto label_1c78d4;
        case 0x1c78d8u: goto label_1c78d8;
        case 0x1c78dcu: goto label_1c78dc;
        case 0x1c78e0u: goto label_1c78e0;
        case 0x1c78e4u: goto label_1c78e4;
        case 0x1c78e8u: goto label_1c78e8;
        case 0x1c78ecu: goto label_1c78ec;
        case 0x1c78f0u: goto label_1c78f0;
        case 0x1c78f4u: goto label_1c78f4;
        case 0x1c78f8u: goto label_1c78f8;
        case 0x1c78fcu: goto label_1c78fc;
        case 0x1c7900u: goto label_1c7900;
        case 0x1c7904u: goto label_1c7904;
        case 0x1c7908u: goto label_1c7908;
        case 0x1c790cu: goto label_1c790c;
        case 0x1c7910u: goto label_1c7910;
        case 0x1c7914u: goto label_1c7914;
        case 0x1c7918u: goto label_1c7918;
        case 0x1c791cu: goto label_1c791c;
        case 0x1c7920u: goto label_1c7920;
        case 0x1c7924u: goto label_1c7924;
        case 0x1c7928u: goto label_1c7928;
        case 0x1c792cu: goto label_1c792c;
        case 0x1c7930u: goto label_1c7930;
        case 0x1c7934u: goto label_1c7934;
        case 0x1c7938u: goto label_1c7938;
        case 0x1c793cu: goto label_1c793c;
        case 0x1c7940u: goto label_1c7940;
        case 0x1c7944u: goto label_1c7944;
        case 0x1c7948u: goto label_1c7948;
        case 0x1c794cu: goto label_1c794c;
        case 0x1c7950u: goto label_1c7950;
        case 0x1c7954u: goto label_1c7954;
        case 0x1c7958u: goto label_1c7958;
        case 0x1c795cu: goto label_1c795c;
        case 0x1c7960u: goto label_1c7960;
        case 0x1c7964u: goto label_1c7964;
        case 0x1c7968u: goto label_1c7968;
        case 0x1c796cu: goto label_1c796c;
        case 0x1c7970u: goto label_1c7970;
        case 0x1c7974u: goto label_1c7974;
        case 0x1c7978u: goto label_1c7978;
        case 0x1c797cu: goto label_1c797c;
        case 0x1c7980u: goto label_1c7980;
        case 0x1c7984u: goto label_1c7984;
        case 0x1c7988u: goto label_1c7988;
        case 0x1c798cu: goto label_1c798c;
        case 0x1c7990u: goto label_1c7990;
        case 0x1c7994u: goto label_1c7994;
        case 0x1c7998u: goto label_1c7998;
        case 0x1c799cu: goto label_1c799c;
        case 0x1c79a0u: goto label_1c79a0;
        case 0x1c79a4u: goto label_1c79a4;
        case 0x1c79a8u: goto label_1c79a8;
        case 0x1c79acu: goto label_1c79ac;
        case 0x1c79b0u: goto label_1c79b0;
        case 0x1c79b4u: goto label_1c79b4;
        case 0x1c79b8u: goto label_1c79b8;
        case 0x1c79bcu: goto label_1c79bc;
        case 0x1c79c0u: goto label_1c79c0;
        case 0x1c79c4u: goto label_1c79c4;
        case 0x1c79c8u: goto label_1c79c8;
        case 0x1c79ccu: goto label_1c79cc;
        case 0x1c79d0u: goto label_1c79d0;
        case 0x1c79d4u: goto label_1c79d4;
        case 0x1c79d8u: goto label_1c79d8;
        case 0x1c79dcu: goto label_1c79dc;
        case 0x1c79e0u: goto label_1c79e0;
        case 0x1c79e4u: goto label_1c79e4;
        case 0x1c79e8u: goto label_1c79e8;
        case 0x1c79ecu: goto label_1c79ec;
        case 0x1c79f0u: goto label_1c79f0;
        case 0x1c79f4u: goto label_1c79f4;
        case 0x1c79f8u: goto label_1c79f8;
        case 0x1c79fcu: goto label_1c79fc;
        case 0x1c7a00u: goto label_1c7a00;
        case 0x1c7a04u: goto label_1c7a04;
        case 0x1c7a08u: goto label_1c7a08;
        case 0x1c7a0cu: goto label_1c7a0c;
        case 0x1c7a10u: goto label_1c7a10;
        case 0x1c7a14u: goto label_1c7a14;
        case 0x1c7a18u: goto label_1c7a18;
        case 0x1c7a1cu: goto label_1c7a1c;
        case 0x1c7a20u: goto label_1c7a20;
        case 0x1c7a24u: goto label_1c7a24;
        case 0x1c7a28u: goto label_1c7a28;
        case 0x1c7a2cu: goto label_1c7a2c;
        case 0x1c7a30u: goto label_1c7a30;
        case 0x1c7a34u: goto label_1c7a34;
        case 0x1c7a38u: goto label_1c7a38;
        case 0x1c7a3cu: goto label_1c7a3c;
        case 0x1c7a40u: goto label_1c7a40;
        case 0x1c7a44u: goto label_1c7a44;
        case 0x1c7a48u: goto label_1c7a48;
        case 0x1c7a4cu: goto label_1c7a4c;
        case 0x1c7a50u: goto label_1c7a50;
        case 0x1c7a54u: goto label_1c7a54;
        case 0x1c7a58u: goto label_1c7a58;
        case 0x1c7a5cu: goto label_1c7a5c;
        case 0x1c7a60u: goto label_1c7a60;
        case 0x1c7a64u: goto label_1c7a64;
        case 0x1c7a68u: goto label_1c7a68;
        case 0x1c7a6cu: goto label_1c7a6c;
        case 0x1c7a70u: goto label_1c7a70;
        case 0x1c7a74u: goto label_1c7a74;
        case 0x1c7a78u: goto label_1c7a78;
        case 0x1c7a7cu: goto label_1c7a7c;
        case 0x1c7a80u: goto label_1c7a80;
        case 0x1c7a84u: goto label_1c7a84;
        case 0x1c7a88u: goto label_1c7a88;
        case 0x1c7a8cu: goto label_1c7a8c;
        case 0x1c7a90u: goto label_1c7a90;
        case 0x1c7a94u: goto label_1c7a94;
        case 0x1c7a98u: goto label_1c7a98;
        case 0x1c7a9cu: goto label_1c7a9c;
        case 0x1c7aa0u: goto label_1c7aa0;
        case 0x1c7aa4u: goto label_1c7aa4;
        case 0x1c7aa8u: goto label_1c7aa8;
        case 0x1c7aacu: goto label_1c7aac;
        case 0x1c7ab0u: goto label_1c7ab0;
        case 0x1c7ab4u: goto label_1c7ab4;
        case 0x1c7ab8u: goto label_1c7ab8;
        case 0x1c7abcu: goto label_1c7abc;
        case 0x1c7ac0u: goto label_1c7ac0;
        case 0x1c7ac4u: goto label_1c7ac4;
        case 0x1c7ac8u: goto label_1c7ac8;
        case 0x1c7accu: goto label_1c7acc;
        case 0x1c7ad0u: goto label_1c7ad0;
        case 0x1c7ad4u: goto label_1c7ad4;
        case 0x1c7ad8u: goto label_1c7ad8;
        case 0x1c7adcu: goto label_1c7adc;
        case 0x1c7ae0u: goto label_1c7ae0;
        case 0x1c7ae4u: goto label_1c7ae4;
        case 0x1c7ae8u: goto label_1c7ae8;
        case 0x1c7aecu: goto label_1c7aec;
        case 0x1c7af0u: goto label_1c7af0;
        case 0x1c7af4u: goto label_1c7af4;
        case 0x1c7af8u: goto label_1c7af8;
        case 0x1c7afcu: goto label_1c7afc;
        case 0x1c7b00u: goto label_1c7b00;
        case 0x1c7b04u: goto label_1c7b04;
        case 0x1c7b08u: goto label_1c7b08;
        case 0x1c7b0cu: goto label_1c7b0c;
        case 0x1c7b10u: goto label_1c7b10;
        case 0x1c7b14u: goto label_1c7b14;
        case 0x1c7b18u: goto label_1c7b18;
        case 0x1c7b1cu: goto label_1c7b1c;
        case 0x1c7b20u: goto label_1c7b20;
        case 0x1c7b24u: goto label_1c7b24;
        case 0x1c7b28u: goto label_1c7b28;
        case 0x1c7b2cu: goto label_1c7b2c;
        case 0x1c7b30u: goto label_1c7b30;
        case 0x1c7b34u: goto label_1c7b34;
        case 0x1c7b38u: goto label_1c7b38;
        case 0x1c7b3cu: goto label_1c7b3c;
        case 0x1c7b40u: goto label_1c7b40;
        case 0x1c7b44u: goto label_1c7b44;
        case 0x1c7b48u: goto label_1c7b48;
        case 0x1c7b4cu: goto label_1c7b4c;
        case 0x1c7b50u: goto label_1c7b50;
        case 0x1c7b54u: goto label_1c7b54;
        case 0x1c7b58u: goto label_1c7b58;
        case 0x1c7b5cu: goto label_1c7b5c;
        case 0x1c7b60u: goto label_1c7b60;
        case 0x1c7b64u: goto label_1c7b64;
        case 0x1c7b68u: goto label_1c7b68;
        case 0x1c7b6cu: goto label_1c7b6c;
        case 0x1c7b70u: goto label_1c7b70;
        case 0x1c7b74u: goto label_1c7b74;
        case 0x1c7b78u: goto label_1c7b78;
        case 0x1c7b7cu: goto label_1c7b7c;
        case 0x1c7b80u: goto label_1c7b80;
        case 0x1c7b84u: goto label_1c7b84;
        case 0x1c7b88u: goto label_1c7b88;
        case 0x1c7b8cu: goto label_1c7b8c;
        case 0x1c7b90u: goto label_1c7b90;
        case 0x1c7b94u: goto label_1c7b94;
        case 0x1c7b98u: goto label_1c7b98;
        case 0x1c7b9cu: goto label_1c7b9c;
        case 0x1c7ba0u: goto label_1c7ba0;
        case 0x1c7ba4u: goto label_1c7ba4;
        case 0x1c7ba8u: goto label_1c7ba8;
        case 0x1c7bacu: goto label_1c7bac;
        case 0x1c7bb0u: goto label_1c7bb0;
        case 0x1c7bb4u: goto label_1c7bb4;
        case 0x1c7bb8u: goto label_1c7bb8;
        case 0x1c7bbcu: goto label_1c7bbc;
        case 0x1c7bc0u: goto label_1c7bc0;
        case 0x1c7bc4u: goto label_1c7bc4;
        case 0x1c7bc8u: goto label_1c7bc8;
        case 0x1c7bccu: goto label_1c7bcc;
        case 0x1c7bd0u: goto label_1c7bd0;
        case 0x1c7bd4u: goto label_1c7bd4;
        case 0x1c7bd8u: goto label_1c7bd8;
        case 0x1c7bdcu: goto label_1c7bdc;
        case 0x1c7be0u: goto label_1c7be0;
        case 0x1c7be4u: goto label_1c7be4;
        case 0x1c7be8u: goto label_1c7be8;
        case 0x1c7becu: goto label_1c7bec;
        case 0x1c7bf0u: goto label_1c7bf0;
        case 0x1c7bf4u: goto label_1c7bf4;
        case 0x1c7bf8u: goto label_1c7bf8;
        case 0x1c7bfcu: goto label_1c7bfc;
        case 0x1c7c00u: goto label_1c7c00;
        case 0x1c7c04u: goto label_1c7c04;
        case 0x1c7c08u: goto label_1c7c08;
        case 0x1c7c0cu: goto label_1c7c0c;
        case 0x1c7c10u: goto label_1c7c10;
        case 0x1c7c14u: goto label_1c7c14;
        case 0x1c7c18u: goto label_1c7c18;
        case 0x1c7c1cu: goto label_1c7c1c;
        case 0x1c7c20u: goto label_1c7c20;
        case 0x1c7c24u: goto label_1c7c24;
        case 0x1c7c28u: goto label_1c7c28;
        case 0x1c7c2cu: goto label_1c7c2c;
        case 0x1c7c30u: goto label_1c7c30;
        case 0x1c7c34u: goto label_1c7c34;
        case 0x1c7c38u: goto label_1c7c38;
        case 0x1c7c3cu: goto label_1c7c3c;
        case 0x1c7c40u: goto label_1c7c40;
        case 0x1c7c44u: goto label_1c7c44;
        case 0x1c7c48u: goto label_1c7c48;
        case 0x1c7c4cu: goto label_1c7c4c;
        case 0x1c7c50u: goto label_1c7c50;
        case 0x1c7c54u: goto label_1c7c54;
        case 0x1c7c58u: goto label_1c7c58;
        case 0x1c7c5cu: goto label_1c7c5c;
        case 0x1c7c60u: goto label_1c7c60;
        case 0x1c7c64u: goto label_1c7c64;
        case 0x1c7c68u: goto label_1c7c68;
        case 0x1c7c6cu: goto label_1c7c6c;
        case 0x1c7c70u: goto label_1c7c70;
        case 0x1c7c74u: goto label_1c7c74;
        case 0x1c7c78u: goto label_1c7c78;
        case 0x1c7c7cu: goto label_1c7c7c;
        case 0x1c7c80u: goto label_1c7c80;
        case 0x1c7c84u: goto label_1c7c84;
        case 0x1c7c88u: goto label_1c7c88;
        case 0x1c7c8cu: goto label_1c7c8c;
        case 0x1c7c90u: goto label_1c7c90;
        case 0x1c7c94u: goto label_1c7c94;
        case 0x1c7c98u: goto label_1c7c98;
        case 0x1c7c9cu: goto label_1c7c9c;
        default: break;
    }

    ctx->pc = 0x1c77d8u;

label_1c77d8:
    // 0x1c77d8: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1c77d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_1c77dc:
    // 0x1c77dc: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x1c77dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
label_1c77e0:
    // 0x1c77e0: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x1c77e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
label_1c77e4:
    // 0x1c77e4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c77e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c77e8:
    // 0x1c77e8: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x1c77e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
label_1c77ec:
    // 0x1c77ec: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x1c77ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
label_1c77f0:
    // 0x1c77f0: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x1c77f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
label_1c77f4:
    // 0x1c77f4: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x1c77f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
label_1c77f8:
    // 0x1c77f8: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x1c77f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
label_1c77fc:
    // 0x1c77fc: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x1c77fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
label_1c7800:
    // 0x1c7800: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1c7800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_1c7804:
    // 0x1c7804: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1c7804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1c7808:
    // 0x1c7808: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
label_1c780c:
    if (ctx->pc == 0x1C780Cu) {
        ctx->pc = 0x1C780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7808u;
        // 0x1c780c: 0x266400b0  addiu       $a0, $s3, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7810u;
        goto label_1c7810;
    }
    ctx->pc = 0x1C7808u;
    {
        const bool branch_taken_0x1c7808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7808u;
        // 0x1c780c: 0x266400b0  addiu       $a0, $s3, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7808) {
            ctx->pc = 0x1C79D8u;
            goto label_1c79d8;
        }
    }
    ctx->pc = 0x1C7810u;
label_1c7810:
    // 0x1c7810: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1c7810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c7814:
    // 0x1c7814: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x1c7814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_1c7818:
    // 0x1c7818: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1c7818u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1c781c:
    // 0x1c781c: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x1c781cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c7820:
    // 0x1c7820: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1c7820u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1c7824:
    // 0x1c7824: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1c7824u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c7828:
    // 0x1c7828: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c7828u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c782c:
    // 0x1c782c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c782cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c7830:
    // 0x1c7830: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1c7830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c7834:
    // 0x1c7834: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c7834u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c7838:
    // 0x1c7838: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c7838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c783c:
    // 0x1c783c: 0x13b20007  beq         $sp, $s2, . + 4 + (0x7 << 2)
label_1c7840:
    if (ctx->pc == 0x1C7840u) {
        ctx->pc = 0x1C7840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C783Cu;
        // 0x1c7840: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7844u;
        goto label_1c7844;
    }
    ctx->pc = 0x1C783Cu;
    {
        const bool branch_taken_0x1c783c = (GPR_U64(ctx, 29) == GPR_U64(ctx, 18));
        ctx->pc = 0x1C7840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C783Cu;
        // 0x1c7840: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c783c) {
            ctx->pc = 0x1C785Cu;
            goto label_1c785c;
        }
    }
    ctx->pc = 0x1C7844u;
label_1c7844:
    // 0x1c7844: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1c7844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7848:
    // 0x1c7848: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1c7848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c784c:
    // 0x1c784c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1c784cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c7850:
    // 0x1c7850: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1c7850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c7854:
    // 0x1c7854: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1c7854u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1c7858:
    // 0x1c7858: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1c7858u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1c785c:
    // 0x1c785c: 0x92620003  lbu         $v0, 0x3($s3)
    ctx->pc = 0x1c785cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
label_1c7860:
    // 0x1c7860: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c7860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1c7864:
    // 0x1c7864: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
label_1c7868:
    if (ctx->pc == 0x1C7868u) {
        ctx->pc = 0x1C7868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7864u;
        // 0x1c7868: 0x3a0a82d  daddu       $s5, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C786Cu;
        goto label_1c786c;
    }
    ctx->pc = 0x1C7864u;
    {
        const bool branch_taken_0x1c7864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7864u;
        // 0x1c7868: 0x3a0a82d  daddu       $s5, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7864) {
            ctx->pc = 0x1C79D4u;
            goto label_1c79d4;
        }
    }
    ctx->pc = 0x1C786Cu;
label_1c786c:
    // 0x1c786c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1c786cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1c7870:
    // 0x1c7870: 0x10400100  beqz        $v0, . + 4 + (0x100 << 2)
label_1c7874:
    if (ctx->pc == 0x1C7874u) {
        ctx->pc = 0x1C7874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7870u;
        // 0x1c7874: 0x266300c0  addiu       $v1, $s3, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7878u;
        goto label_1c7878;
    }
    ctx->pc = 0x1C7870u;
    {
        const bool branch_taken_0x1c7870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7870u;
        // 0x1c7874: 0x266300c0  addiu       $v1, $s3, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7870) {
            ctx->pc = 0x1C7C74u;
            goto label_1c7c74;
        }
    }
    ctx->pc = 0x1C7878u;
label_1c7878:
    // 0x1c7878: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x1c7878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_1c787c:
    // 0x1c787c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c787cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c7880:
    // 0x1c7880: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c7880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c7884:
    // 0x1c7884: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c7884u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c7888:
    // 0x1c7888: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1c7888u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c788c:
    // 0x1c788c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c788cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c7890:
    // 0x1c7890: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c7890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c7894:
    // 0x1c7894: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1c7894u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1c7898:
    // 0x1c7898: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c7898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c789c:
    // 0x1c789c: 0x10520006  beq         $v0, $s2, . + 4 + (0x6 << 2)
label_1c78a0:
    if (ctx->pc == 0x1C78A0u) {
        ctx->pc = 0x1C78A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C789Cu;
        // 0x1c78a0: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C78A4u;
        goto label_1c78a4;
    }
    ctx->pc = 0x1C789Cu;
    {
        const bool branch_taken_0x1c789c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1C78A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C789Cu;
        // 0x1c78a0: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c789c) {
            ctx->pc = 0x1C78B8u;
            goto label_1c78b8;
        }
    }
    ctx->pc = 0x1C78A4u;
label_1c78a4:
    // 0x1c78a4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1c78a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1c78a8:
    // 0x1c78a8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1c78a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c78ac:
    // 0x1c78ac: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c78acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c78b0:
    // 0x1c78b0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1c78b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c78b4:
    // 0x1c78b4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c78b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c78b8:
    // 0x1c78b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c78b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c78bc:
    // 0x1c78bc: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1c78bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c78c0:
    // 0x1c78c0: 0x2670000c  addiu       $s0, $s3, 0xC
    ctx->pc = 0x1c78c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_1c78c4:
    // 0x1c78c4: 0x0  nop
    ctx->pc = 0x1c78c4u;
    // NOP
label_1c78c8:
    // 0x1c78c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c78c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c78cc:
    // 0x1c78cc: 0x5040003e  beql        $v0, $zero, . + 4 + (0x3E << 2)
label_1c78d0:
    if (ctx->pc == 0x1C78D0u) {
        ctx->pc = 0x1C78D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78CCu;
        // 0x1c78d0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C78D4u;
        goto label_1c78d4;
    }
    ctx->pc = 0x1C78CCu;
    {
        const bool branch_taken_0x1c78cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c78cc) {
            ctx->pc = 0x1C78D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C78CCu;
            // 0x1c78d0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C79C8u;
            goto label_1c79c8;
        }
    }
    ctx->pc = 0x1C78D4u;
label_1c78d4:
    // 0x1c78d4: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1c78d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_1c78d8:
    // 0x1c78d8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c78d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c78dc:
    // 0x1c78dc: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c78dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c78e0:
    // 0x1c78e0: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c78e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c78e4:
    // 0x1c78e4: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x1c78e4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_1c78e8:
    // 0x1c78e8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c78e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c78ec:
    // 0x1c78ec: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c78ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c78f0:
    // 0x1c78f0: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1c78f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1c78f4:
    // 0x1c78f4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c78f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c78f8:
    // 0x1c78f8: 0x10520006  beq         $v0, $s2, . + 4 + (0x6 << 2)
label_1c78fc:
    if (ctx->pc == 0x1C78FCu) {
        ctx->pc = 0x1C78FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78F8u;
        // 0x1c78fc: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7900u;
        goto label_1c7900;
    }
    ctx->pc = 0x1C78F8u;
    {
        const bool branch_taken_0x1c78f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1C78FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78F8u;
        // 0x1c78fc: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c78f8) {
            ctx->pc = 0x1C7914u;
            goto label_1c7914;
        }
    }
    ctx->pc = 0x1C7900u;
label_1c7900:
    // 0x1c7900: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1c7900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1c7904:
    // 0x1c7904: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1c7904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c7908:
    // 0x1c7908: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c7908u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c790c:
    // 0x1c790c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1c790cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7910:
    // 0x1c7910: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c7910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c7914:
    // 0x1c7914: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c7914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c7918:
    // 0x1c7918: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c7918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c791c:
    // 0x1c791c: 0x946302fe  lhu         $v1, 0x2FE($v1)
    ctx->pc = 0x1c791cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 766)));
label_1c7920:
    // 0x1c7920: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x1c7920u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
label_1c7924:
    // 0x1c7924: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c7928:
    if (ctx->pc == 0x1C7928u) {
        ctx->pc = 0x1C7928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7924u;
        // 0x1c7928: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C792Cu;
        goto label_1c792c;
    }
    ctx->pc = 0x1C7924u;
    {
        const bool branch_taken_0x1c7924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7924u;
        // 0x1c7928: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7924) {
            ctx->pc = 0x1C7934u;
            goto label_1c7934;
        }
    }
    ctx->pc = 0x1C792Cu;
label_1c792c:
    // 0x1c792c: 0x286201ff  slti        $v0, $v1, 0x1FF
    ctx->pc = 0x1c792cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)511) ? 1 : 0);
label_1c7930:
    // 0x1c7930: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7934:
    // 0x1c7934: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c7934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c7938:
    // 0x1c7938: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_1c793c:
    if (ctx->pc == 0x1C793Cu) {
        ctx->pc = 0x1C793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7938u;
        // 0x1c793c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7940u;
        goto label_1c7940;
    }
    ctx->pc = 0x1C7938u;
    {
        const bool branch_taken_0x1c7938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7938) {
            ctx->pc = 0x1C793Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7938u;
            // 0x1c793c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C79A0u;
            goto label_1c79a0;
        }
    }
    ctx->pc = 0x1C7940u;
label_1c7940:
    // 0x1c7940: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x1c7940u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
label_1c7944:
    // 0x1c7944: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c7948:
    if (ctx->pc == 0x1C7948u) {
        ctx->pc = 0x1C7948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7944u;
        // 0x1c7948: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C794Cu;
        goto label_1c794c;
    }
    ctx->pc = 0x1C7944u;
    {
        const bool branch_taken_0x1c7944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7944u;
        // 0x1c7948: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7944) {
            ctx->pc = 0x1C7954u;
            goto label_1c7954;
        }
    }
    ctx->pc = 0x1C794Cu;
label_1c794c:
    // 0x1c794c: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1c794cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_1c7950:
    // 0x1c7950: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7954:
    // 0x1c7954: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c7954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c7958:
    // 0x1c7958: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_1c795c:
    if (ctx->pc == 0x1C795Cu) {
        ctx->pc = 0x1C795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7958u;
        // 0x1c795c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7960u;
        goto label_1c7960;
    }
    ctx->pc = 0x1C7958u;
    {
        const bool branch_taken_0x1c7958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7958) {
            ctx->pc = 0x1C795Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7958u;
            // 0x1c795c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C79A0u;
            goto label_1c79a0;
        }
    }
    ctx->pc = 0x1C7960u;
label_1c7960:
    // 0x1c7960: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1c7960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_1c7964:
    // 0x1c7964: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c7968:
    if (ctx->pc == 0x1C7968u) {
        ctx->pc = 0x1C7968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7964u;
        // 0x1c7968: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C796Cu;
        goto label_1c796c;
    }
    ctx->pc = 0x1C7964u;
    {
        const bool branch_taken_0x1c7964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7964u;
        // 0x1c7968: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7964) {
            ctx->pc = 0x1C7974u;
            goto label_1c7974;
        }
    }
    ctx->pc = 0x1C796Cu;
label_1c796c:
    // 0x1c796c: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x1c796cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
label_1c7970:
    // 0x1c7970: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7974:
    // 0x1c7974: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c7974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c7978:
    // 0x1c7978: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_1c797c:
    if (ctx->pc == 0x1C797Cu) {
        ctx->pc = 0x1C797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7978u;
        // 0x1c797c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7980u;
        goto label_1c7980;
    }
    ctx->pc = 0x1C7978u;
    {
        const bool branch_taken_0x1c7978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7978) {
            ctx->pc = 0x1C797Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7978u;
            // 0x1c797c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C79A0u;
            goto label_1c79a0;
        }
    }
    ctx->pc = 0x1C7980u;
label_1c7980:
    // 0x1c7980: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x1c7980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
label_1c7984:
    // 0x1c7984: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c7988:
    if (ctx->pc == 0x1C7988u) {
        ctx->pc = 0x1C7988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7984u;
        // 0x1c7988: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C798Cu;
        goto label_1c798c;
    }
    ctx->pc = 0x1C7984u;
    {
        const bool branch_taken_0x1c7984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7984u;
        // 0x1c7988: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7984) {
            ctx->pc = 0x1C7994u;
            goto label_1c7994;
        }
    }
    ctx->pc = 0x1C798Cu;
label_1c798c:
    // 0x1c798c: 0x28620600  slti        $v0, $v1, 0x600
    ctx->pc = 0x1c798cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1536) ? 1 : 0);
label_1c7990:
    // 0x1c7990: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7994:
    // 0x1c7994: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c7994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c7998:
    // 0x1c7998: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1c799c:
    if (ctx->pc == 0x1C799Cu) {
        ctx->pc = 0x1C799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7998u;
        // 0x1c799c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C79A0u;
        goto label_1c79a0;
    }
    ctx->pc = 0x1C7998u;
    {
        const bool branch_taken_0x1c7998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7998) {
            ctx->pc = 0x1C799Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7998u;
            // 0x1c799c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C79A0u;
            goto label_1c79a0;
        }
    }
    ctx->pc = 0x1C79A0u;
label_1c79a0:
    // 0x1c79a0: 0x54b60009  bnel        $a1, $s6, . + 4 + (0x9 << 2)
label_1c79a4:
    if (ctx->pc == 0x1C79A4u) {
        ctx->pc = 0x1C79A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C79A0u;
        // 0x1c79a4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C79A8u;
        goto label_1c79a8;
    }
    ctx->pc = 0x1C79A0u;
    {
        const bool branch_taken_0x1c79a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 22));
        if (branch_taken_0x1c79a0) {
            ctx->pc = 0x1C79A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C79A0u;
            // 0x1c79a4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C79C8u;
            goto label_1c79c8;
        }
    }
    ctx->pc = 0x1C79A8u;
label_1c79a8:
    // 0x1c79a8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c79a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c79ac:
    // 0x1c79ac: 0x8c820214  lw          $v0, 0x214($a0)
    ctx->pc = 0x1c79acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
label_1c79b0:
    // 0x1c79b0: 0x8c8500f0  lw          $a1, 0xF0($a0)
    ctx->pc = 0x1c79b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_1c79b4:
    // 0x1c79b4: 0x84430070  lh          $v1, 0x70($v0)
    ctx->pc = 0x1c79b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1c79b8:
    // 0x1c79b8: 0x8c460074  lw          $a2, 0x74($v0)
    ctx->pc = 0x1c79b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1c79bc:
    // 0x1c79bc: 0xc0f809  jalr        $a2
label_1c79c0:
    if (ctx->pc == 0x1C79C0u) {
        ctx->pc = 0x1C79C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C79BCu;
        // 0x1c79c0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C79C4u;
        goto label_1c79c4;
    }
    ctx->pc = 0x1C79BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1C79C4u);
        ctx->pc = 0x1C79C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C79BCu;
        // 0x1c79c0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C79BCu, 0x1C79C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C79C4u;
label_1c79c4:
    // 0x1c79c4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c79c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c79c8:
    // 0x1c79c8: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x1c79c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1c79cc:
    // 0x1c79cc: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
label_1c79d0:
    if (ctx->pc == 0x1C79D0u) {
        ctx->pc = 0x1C79D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C79CCu;
        // 0x1c79d0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C79D4u;
        goto label_1c79d4;
    }
    ctx->pc = 0x1C79CCu;
    {
        const bool branch_taken_0x1c79cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C79D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C79CCu;
        // 0x1c79d0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c79cc) {
            ctx->pc = 0x1C78C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c78c8;
        }
    }
    ctx->pc = 0x1C79D4u;
label_1c79d4:
    // 0x1c79d4: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1c79d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1c79d8:
    // 0x1c79d8: 0x104000a6  beqz        $v0, . + 4 + (0xA6 << 2)
label_1c79dc:
    if (ctx->pc == 0x1C79DCu) {
        ctx->pc = 0x1C79DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C79D8u;
        // 0x1c79dc: 0x266300c0  addiu       $v1, $s3, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C79E0u;
        goto label_1c79e0;
    }
    ctx->pc = 0x1C79D8u;
    {
        const bool branch_taken_0x1c79d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C79DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C79D8u;
        // 0x1c79dc: 0x266300c0  addiu       $v1, $s3, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c79d8) {
            ctx->pc = 0x1C7C74u;
            goto label_1c7c74;
        }
    }
    ctx->pc = 0x1C79E0u;
label_1c79e0:
    // 0x1c79e0: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1c79e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c79e4:
    // 0x1c79e4: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x1c79e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_1c79e8:
    // 0x1c79e8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1c79e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c79ec:
    // 0x1c79ec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1c79ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1c79f0:
    // 0x1c79f0: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1c79f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c79f4:
    // 0x1c79f4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c79f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c79f8:
    // 0x1c79f8: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1c79f8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c79fc:
    // 0x1c79fc: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c79fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c7a00:
    // 0x1c7a00: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1c7a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c7a04:
    // 0x1c7a04: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1c7a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1c7a08:
    // 0x1c7a08: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c7a08u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c7a0c:
    // 0x1c7a0c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1c7a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c7a10:
    // 0x1c7a10: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
label_1c7a14:
    if (ctx->pc == 0x1C7A14u) {
        ctx->pc = 0x1C7A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7A10u;
        // 0x1c7a14: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7A18u;
        goto label_1c7a18;
    }
    ctx->pc = 0x1C7A10u;
    {
        const bool branch_taken_0x1c7a10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1C7A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7A10u;
        // 0x1c7a14: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7a10) {
            ctx->pc = 0x1C7A2Cu;
            goto label_1c7a2c;
        }
    }
    ctx->pc = 0x1C7A18u;
label_1c7a18:
    // 0x1c7a18: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1c7a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c7a1c:
    // 0x1c7a1c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1c7a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1c7a20:
    // 0x1c7a20: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x1c7a20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_1c7a24:
    // 0x1c7a24: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1c7a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7a28:
    // 0x1c7a28: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1c7a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1c7a2c:
    // 0x1c7a2c: 0x92620003  lbu         $v0, 0x3($s3)
    ctx->pc = 0x1c7a2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
label_1c7a30:
    // 0x1c7a30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c7a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1c7a34:
    // 0x1c7a34: 0x14400090  bnez        $v0, . + 4 + (0x90 << 2)
label_1c7a38:
    if (ctx->pc == 0x1C7A38u) {
        ctx->pc = 0x1C7A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7A34u;
        // 0x1c7a38: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7A3Cu;
        goto label_1c7a3c;
    }
    ctx->pc = 0x1C7A34u;
    {
        const bool branch_taken_0x1c7a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7A34u;
        // 0x1c7a38: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7a34) {
            ctx->pc = 0x1C7C78u;
            goto label_1c7c78;
        }
    }
    ctx->pc = 0x1C7A3Cu;
label_1c7a3c:
    // 0x1c7a3c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1c7a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1c7a40:
    // 0x1c7a40: 0x5060008e  beql        $v1, $zero, . + 4 + (0x8E << 2)
label_1c7a44:
    if (ctx->pc == 0x1C7A44u) {
        ctx->pc = 0x1C7A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7A40u;
        // 0x1c7a44: 0x7bb10130  lq          $s1, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7A48u;
        goto label_1c7a48;
    }
    ctx->pc = 0x1C7A40u;
    {
        const bool branch_taken_0x1c7a40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7a40) {
            ctx->pc = 0x1C7A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7A40u;
            // 0x1c7a44: 0x7bb10130  lq          $s1, 0x130($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7C7Cu;
            goto label_1c7c7c;
        }
    }
    ctx->pc = 0x1C7A48u;
label_1c7a48:
    // 0x1c7a48: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x1c7a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c7a4c:
    // 0x1c7a4c: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x1c7a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c7a50:
    // 0x1c7a50: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c7a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1c7a54:
    // 0x1c7a54: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x1c7a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
label_1c7a58:
    // 0x1c7a58: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
label_1c7a5c:
    if (ctx->pc == 0x1C7A5Cu) {
        ctx->pc = 0x1C7A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7A58u;
        // 0x1c7a5c: 0x27a30090  addiu       $v1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7A60u;
        goto label_1c7a60;
    }
    ctx->pc = 0x1C7A58u;
    {
        const bool branch_taken_0x1c7a58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c7a58) {
            ctx->pc = 0x1C7A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7A58u;
            // 0x1c7a5c: 0x27a30090  addiu       $v1, $sp, 0x90 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7A7Cu;
            goto label_1c7a7c;
        }
    }
    ctx->pc = 0x1C7A60u;
label_1c7a60:
    // 0x1c7a60: 0xc4600100  lwc1        $f0, 0x100($v1)
    ctx->pc = 0x1c7a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7a64:
    // 0x1c7a64: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1c7a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1c7a68:
    // 0x1c7a68: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1c7a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c7a6c:
    // 0x1c7a6c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1c7a6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1c7a70:
    // 0x1c7a70: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1c7a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7a74:
    // 0x1c7a74: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1c7a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1c7a78:
    // 0x1c7a78: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x1c7a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1c7a7c:
    // 0x1c7a7c: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1c7a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1c7a80:
    // 0x1c7a80: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x1c7a80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1c7a84:
    // 0x1c7a84: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1c7a84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1c7a88:
    // 0x1c7a88: 0xf8440010  sqc2        $vf4, 0x10($v0)
    ctx->pc = 0x1c7a88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c7a8c:
    // 0x1c7a8c: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1c7a8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1c7a90:
    // 0x1c7a90: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x1c7a90u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1c7a94:
    // 0x1c7a94: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c7a94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c7a98:
    // 0x1c7a98: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1c7a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c7a9c:
    // 0x1c7a9c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c7a9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c7aa0:
    // 0x1c7aa0: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1c7aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c7aa4:
    // 0x1c7aa4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1c7aa4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7aa8:
    // 0x1c7aa8: 0x12160007  beq         $s0, $s6, . + 4 + (0x7 << 2)
label_1c7aac:
    if (ctx->pc == 0x1C7AACu) {
        ctx->pc = 0x1C7AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7AA8u;
        // 0x1c7aac: 0x60b82d  daddu       $s7, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7AB0u;
        goto label_1c7ab0;
    }
    ctx->pc = 0x1C7AA8u;
    {
        const bool branch_taken_0x1c7aa8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x1C7AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7AA8u;
        // 0x1c7aac: 0x60b82d  daddu       $s7, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7aa8) {
            ctx->pc = 0x1C7AC8u;
            goto label_1c7ac8;
        }
    }
    ctx->pc = 0x1C7AB0u;
label_1c7ab0:
    // 0x1c7ab0: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1c7ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7ab4:
    // 0x1c7ab4: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1c7ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c7ab8:
    // 0x1c7ab8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1c7ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1c7abc:
    // 0x1c7abc: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1c7abcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_1c7ac0:
    // 0x1c7ac0: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1c7ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7ac4:
    // 0x1c7ac4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1c7ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1c7ac8:
    // 0x1c7ac8: 0xc07df68  jal         func_1F7DA0
label_1c7acc:
    if (ctx->pc == 0x1C7ACCu) {
        ctx->pc = 0x1C7ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7AC8u;
        // 0x1c7acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7AD0u;
        goto label_1c7ad0;
    }
    ctx->pc = 0x1C7AC8u;
    SET_GPR_U32(ctx, 31, 0x1C7AD0u);
    ctx->pc = 0x1C7ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7AC8u;
    // 0x1c7acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x1C7AC8u, 0x1C7AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7AD0u;
label_1c7ad0:
    // 0x1c7ad0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1c7ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1c7ad4:
    // 0x1c7ad4: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x1c7ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
label_1c7ad8:
    // 0x1c7ad8: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
label_1c7adc:
    if (ctx->pc == 0x1C7ADCu) {
        ctx->pc = 0x1C7ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7AD8u;
        // 0x1c7adc: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7AE0u;
        goto label_1c7ae0;
    }
    ctx->pc = 0x1C7AD8u;
    {
        const bool branch_taken_0x1c7ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1C7ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7AD8u;
        // 0x1c7adc: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7ad8) {
            ctx->pc = 0x1C7AF4u;
            goto label_1c7af4;
        }
    }
    ctx->pc = 0x1C7AE0u;
label_1c7ae0:
    // 0x1c7ae0: 0xe4600100  swc1        $f0, 0x100($v1)
    ctx->pc = 0x1c7ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
label_1c7ae4:
    // 0x1c7ae4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1c7ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c7ae8:
    // 0x1c7ae8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c7ae8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c7aec:
    // 0x1c7aec: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1c7aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7af0:
    // 0x1c7af0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c7af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c7af4:
    // 0x1c7af4: 0xc0527ae  jal         func_149EB8
label_1c7af8:
    if (ctx->pc == 0x1C7AF8u) {
        ctx->pc = 0x1C7AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7AF4u;
        // 0x1c7af8: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7AFCu;
        goto label_1c7afc;
    }
    ctx->pc = 0x1C7AF4u;
    SET_GPR_U32(ctx, 31, 0x1C7AFCu);
    ctx->pc = 0x1C7AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7AF4u;
    // 0x1c7af8: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1C7AF4u, 0x1C7AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7AFCu;
label_1c7afc:
    // 0x1c7afc: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x1c7afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c7b00:
    // 0x1c7b00: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1c7b00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1c7b04:
    // 0x1c7b04: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1c7b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1c7b08:
    // 0x1c7b08: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1c7b08u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7b0c:
    // 0x1c7b0c: 0x2671000c  addiu       $s1, $s3, 0xC
    ctx->pc = 0x1c7b0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_1c7b10:
    // 0x1c7b10: 0xc051f18  jal         func_147C60
label_1c7b14:
    if (ctx->pc == 0x1C7B14u) {
        ctx->pc = 0x1C7B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7B10u;
        // 0x1c7b14: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7B18u;
        goto label_1c7b18;
    }
    ctx->pc = 0x1C7B10u;
    SET_GPR_U32(ctx, 31, 0x1C7B18u);
    ctx->pc = 0x1C7B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7B10u;
    // 0x1c7b14: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x1C7B10u, 0x1C7B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B18u;
label_1c7b18:
    // 0x1c7b18: 0x27b400a0  addiu       $s4, $sp, 0xA0
    ctx->pc = 0x1c7b18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1c7b1c:
    // 0x1c7b1c: 0x27b200b0  addiu       $s2, $sp, 0xB0
    ctx->pc = 0x1c7b1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c7b20:
    // 0x1c7b20: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1c7b20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c7b24:
    // 0x1c7b24: 0x52000050  beql        $s0, $zero, . + 4 + (0x50 << 2)
label_1c7b28:
    if (ctx->pc == 0x1C7B28u) {
        ctx->pc = 0x1C7B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7B24u;
        // 0x1c7b28: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7B2Cu;
        goto label_1c7b2c;
    }
    ctx->pc = 0x1C7B24u;
    {
        const bool branch_taken_0x1c7b24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7b24) {
            ctx->pc = 0x1C7B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7B24u;
            // 0x1c7b28: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7C68u;
            goto label_1c7c68;
        }
    }
    ctx->pc = 0x1C7B2Cu;
label_1c7b2c:
    // 0x1c7b2c: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x1c7b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c7b30:
    // 0x1c7b30: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1c7b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_1c7b34:
    // 0x1c7b34: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x1c7b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c7b38:
    // 0x1c7b38: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c7b38u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c7b3c:
    // 0x1c7b3c: 0xdac50000  lqc2        $vf5, 0x0($s6)
    ctx->pc = 0x1c7b3cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_1c7b40:
    // 0x1c7b40: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c7b40u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c7b44:
    // 0x1c7b44: 0xfa840010  sqc2        $vf4, 0x10($s4)
    ctx->pc = 0x1c7b44u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c7b48:
    // 0x1c7b48: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1c7b48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_1c7b4c:
    // 0x1c7b4c: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x1c7b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c7b50:
    // 0x1c7b50: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1c7b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1c7b54:
    // 0x1c7b54: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1c7b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7b58:
    // 0x1c7b58: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x1c7b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c7b5c:
    // 0x1c7b5c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1c7b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_1c7b60:
    // 0x1c7b60: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x1c7b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c7b64:
    // 0x1c7b64: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1c7b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1c7b68:
    // 0x1c7b68: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x1c7b68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1c7b6c:
    // 0x1c7b6c: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1c7b6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1c7b70:
    // 0x1c7b70: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x1c7b70u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_1c7b74:
    // 0x1c7b74: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x1c7b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c7b78:
    // 0x1c7b78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c7b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c7b7c:
    // 0x1c7b7c: 0xc0c28ac  jal         func_30A2B0
label_1c7b80:
    if (ctx->pc == 0x1C7B80u) {
        ctx->pc = 0x1C7B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7B7Cu;
        // 0x1c7b80: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7B84u;
        goto label_1c7b84;
    }
    ctx->pc = 0x1C7B7Cu;
    SET_GPR_U32(ctx, 31, 0x1C7B84u);
    ctx->pc = 0x1C7B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7B7Cu;
    // 0x1c7b80: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1C7B7Cu, 0x1C7B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B84u;
label_1c7b84:
    // 0x1c7b84: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1c7b84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_1c7b88:
    // 0x1c7b88: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x1c7b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c7b8c:
    // 0x1c7b8c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1c7b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_1c7b90:
    // 0x1c7b90: 0x10540006  beq         $v0, $s4, . + 4 + (0x6 << 2)
label_1c7b94:
    if (ctx->pc == 0x1C7B94u) {
        ctx->pc = 0x1C7B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7B90u;
        // 0x1c7b94: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7B98u;
        goto label_1c7b98;
    }
    ctx->pc = 0x1C7B90u;
    {
        const bool branch_taken_0x1c7b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x1C7B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7B90u;
        // 0x1c7b94: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7b90) {
            ctx->pc = 0x1C7BACu;
            goto label_1c7bac;
        }
    }
    ctx->pc = 0x1C7B98u;
label_1c7b98:
    // 0x1c7b98: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1c7b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1c7b9c:
    // 0x1c7b9c: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x1c7b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c7ba0:
    // 0x1c7ba0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c7ba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c7ba4:
    // 0x1c7ba4: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1c7ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7ba8:
    // 0x1c7ba8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c7ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c7bac:
    // 0x1c7bac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1c7bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c7bb0:
    // 0x1c7bb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c7bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7bb4:
    // 0x1c7bb4: 0x946302fe  lhu         $v1, 0x2FE($v1)
    ctx->pc = 0x1c7bb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 766)));
label_1c7bb8:
    // 0x1c7bb8: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x1c7bb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
label_1c7bbc:
    // 0x1c7bbc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c7bc0:
    if (ctx->pc == 0x1C7BC0u) {
        ctx->pc = 0x1C7BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7BBCu;
        // 0x1c7bc0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7BC4u;
        goto label_1c7bc4;
    }
    ctx->pc = 0x1C7BBCu;
    {
        const bool branch_taken_0x1c7bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7BBCu;
        // 0x1c7bc0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7bbc) {
            ctx->pc = 0x1C7BCCu;
            goto label_1c7bcc;
        }
    }
    ctx->pc = 0x1C7BC4u;
label_1c7bc4:
    // 0x1c7bc4: 0x286201ff  slti        $v0, $v1, 0x1FF
    ctx->pc = 0x1c7bc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)511) ? 1 : 0);
label_1c7bc8:
    // 0x1c7bc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7bcc:
    // 0x1c7bcc: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c7bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c7bd0:
    // 0x1c7bd0: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_1c7bd4:
    if (ctx->pc == 0x1C7BD4u) {
        ctx->pc = 0x1C7BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7BD0u;
        // 0x1c7bd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7BD8u;
        goto label_1c7bd8;
    }
    ctx->pc = 0x1C7BD0u;
    {
        const bool branch_taken_0x1c7bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7bd0) {
            ctx->pc = 0x1C7BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7BD0u;
            // 0x1c7bd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7C3Cu;
            goto label_1c7c3c;
        }
    }
    ctx->pc = 0x1C7BD8u;
label_1c7bd8:
    // 0x1c7bd8: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x1c7bd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
label_1c7bdc:
    // 0x1c7bdc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c7be0:
    if (ctx->pc == 0x1C7BE0u) {
        ctx->pc = 0x1C7BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7BDCu;
        // 0x1c7be0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7BE4u;
        goto label_1c7be4;
    }
    ctx->pc = 0x1C7BDCu;
    {
        const bool branch_taken_0x1c7bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7BDCu;
        // 0x1c7be0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7bdc) {
            ctx->pc = 0x1C7BECu;
            goto label_1c7bec;
        }
    }
    ctx->pc = 0x1C7BE4u;
label_1c7be4:
    // 0x1c7be4: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1c7be4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_1c7be8:
    // 0x1c7be8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7bec:
    // 0x1c7bec: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c7becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c7bf0:
    // 0x1c7bf0: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_1c7bf4:
    if (ctx->pc == 0x1C7BF4u) {
        ctx->pc = 0x1C7BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7BF0u;
        // 0x1c7bf4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7BF8u;
        goto label_1c7bf8;
    }
    ctx->pc = 0x1C7BF0u;
    {
        const bool branch_taken_0x1c7bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7bf0) {
            ctx->pc = 0x1C7BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7BF0u;
            // 0x1c7bf4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7C3Cu;
            goto label_1c7c3c;
        }
    }
    ctx->pc = 0x1C7BF8u;
label_1c7bf8:
    // 0x1c7bf8: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1c7bf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_1c7bfc:
    // 0x1c7bfc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c7c00:
    if (ctx->pc == 0x1C7C00u) {
        ctx->pc = 0x1C7C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7BFCu;
        // 0x1c7c00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7C04u;
        goto label_1c7c04;
    }
    ctx->pc = 0x1C7BFCu;
    {
        const bool branch_taken_0x1c7bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7BFCu;
        // 0x1c7c00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7bfc) {
            ctx->pc = 0x1C7C0Cu;
            goto label_1c7c0c;
        }
    }
    ctx->pc = 0x1C7C04u;
label_1c7c04:
    // 0x1c7c04: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x1c7c04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
label_1c7c08:
    // 0x1c7c08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7c0c:
    // 0x1c7c0c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c7c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c7c10:
    // 0x1c7c10: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_1c7c14:
    if (ctx->pc == 0x1C7C14u) {
        ctx->pc = 0x1C7C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C10u;
        // 0x1c7c14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7C18u;
        goto label_1c7c18;
    }
    ctx->pc = 0x1C7C10u;
    {
        const bool branch_taken_0x1c7c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7c10) {
            ctx->pc = 0x1C7C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7C10u;
            // 0x1c7c14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7C3Cu;
            goto label_1c7c3c;
        }
    }
    ctx->pc = 0x1C7C18u;
label_1c7c18:
    // 0x1c7c18: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x1c7c18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
label_1c7c1c:
    // 0x1c7c1c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c7c20:
    if (ctx->pc == 0x1C7C20u) {
        ctx->pc = 0x1C7C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C1Cu;
        // 0x1c7c20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7C24u;
        goto label_1c7c24;
    }
    ctx->pc = 0x1C7C1Cu;
    {
        const bool branch_taken_0x1c7c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C1Cu;
        // 0x1c7c20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7c1c) {
            ctx->pc = 0x1C7C2Cu;
            goto label_1c7c2c;
        }
    }
    ctx->pc = 0x1C7C24u;
label_1c7c24:
    // 0x1c7c24: 0x28620600  slti        $v0, $v1, 0x600
    ctx->pc = 0x1c7c24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1536) ? 1 : 0);
label_1c7c28:
    // 0x1c7c28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7c2c:
    // 0x1c7c2c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c7c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c7c30:
    // 0x1c7c30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1c7c34:
    if (ctx->pc == 0x1C7C34u) {
        ctx->pc = 0x1C7C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C30u;
        // 0x1c7c34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7C38u;
        goto label_1c7c38;
    }
    ctx->pc = 0x1C7C30u;
    {
        const bool branch_taken_0x1c7c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C30u;
        // 0x1c7c34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7c30) {
            ctx->pc = 0x1C7C40u;
            goto label_1c7c40;
        }
    }
    ctx->pc = 0x1C7C38u;
label_1c7c38:
    // 0x1c7c38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c7c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7c3c:
    // 0x1c7c3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c7c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7c40:
    // 0x1c7c40: 0x54a20009  bnel        $a1, $v0, . + 4 + (0x9 << 2)
label_1c7c44:
    if (ctx->pc == 0x1C7C44u) {
        ctx->pc = 0x1C7C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C40u;
        // 0x1c7c44: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7C48u;
        goto label_1c7c48;
    }
    ctx->pc = 0x1C7C40u;
    {
        const bool branch_taken_0x1c7c40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c7c40) {
            ctx->pc = 0x1C7C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7C40u;
            // 0x1c7c44: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7C68u;
            goto label_1c7c68;
        }
    }
    ctx->pc = 0x1C7C48u;
label_1c7c48:
    // 0x1c7c48: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1c7c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c7c4c:
    // 0x1c7c4c: 0x8c820214  lw          $v0, 0x214($a0)
    ctx->pc = 0x1c7c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
label_1c7c50:
    // 0x1c7c50: 0x8c8500f0  lw          $a1, 0xF0($a0)
    ctx->pc = 0x1c7c50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_1c7c54:
    // 0x1c7c54: 0x84430070  lh          $v1, 0x70($v0)
    ctx->pc = 0x1c7c54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1c7c58:
    // 0x1c7c58: 0x8c460074  lw          $a2, 0x74($v0)
    ctx->pc = 0x1c7c58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1c7c5c:
    // 0x1c7c5c: 0xc0f809  jalr        $a2
label_1c7c60:
    if (ctx->pc == 0x1C7C60u) {
        ctx->pc = 0x1C7C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C5Cu;
        // 0x1c7c60: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7C64u;
        goto label_1c7c64;
    }
    ctx->pc = 0x1C7C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1C7C64u);
        ctx->pc = 0x1C7C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C5Cu;
        // 0x1c7c60: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7C5Cu, 0x1C7C64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C7C64u;
label_1c7c64:
    // 0x1c7c64: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1c7c64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1c7c68:
    // 0x1c7c68: 0x2ea20008  sltiu       $v0, $s5, 0x8
    ctx->pc = 0x1c7c68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1c7c6c:
    // 0x1c7c6c: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
label_1c7c70:
    if (ctx->pc == 0x1C7C70u) {
        ctx->pc = 0x1C7C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C6Cu;
        // 0x1c7c70: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7C74u;
        goto label_1c7c74;
    }
    ctx->pc = 0x1C7C6Cu;
    {
        const bool branch_taken_0x1c7c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C6Cu;
        // 0x1c7c70: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7c6c) {
            ctx->pc = 0x1C7B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7b20;
        }
    }
    ctx->pc = 0x1C7C74u;
label_1c7c74:
    // 0x1c7c74: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x1c7c74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1c7c78:
    // 0x1c7c78: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x1c7c78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1c7c7c:
    // 0x1c7c7c: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x1c7c7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1c7c80:
    // 0x1c7c80: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x1c7c80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1c7c84:
    // 0x1c7c84: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x1c7c84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1c7c88:
    // 0x1c7c88: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x1c7c88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1c7c8c:
    // 0x1c7c8c: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x1c7c8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1c7c90:
    // 0x1c7c90: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x1c7c90u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1c7c94:
    // 0x1c7c94: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1c7c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1c7c98:
    // 0x1c7c98: 0x3e00008  jr          $ra
label_1c7c9c:
    if (ctx->pc == 0x1C7C9Cu) {
        ctx->pc = 0x1C7C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C98u;
        // 0x1c7c9c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7CA0u;
        goto label_fallthrough_0x1c7c98;
    }
    ctx->pc = 0x1C7C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C98u;
        // 0x1c7c9c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c7c98:
    ctx->pc = 0x1C7CA0u;
}
