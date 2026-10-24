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

// Function: func_003029C0
// Address: 0x3029c0 - 0x302e48
void func_003029C0_0x3029c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003029C0_0x3029c0");
#endif

    switch (ctx->pc) {
        case 0x3029c0u: goto label_3029c0;
        case 0x3029c4u: goto label_3029c4;
        case 0x3029c8u: goto label_3029c8;
        case 0x3029ccu: goto label_3029cc;
        case 0x3029d0u: goto label_3029d0;
        case 0x3029d4u: goto label_3029d4;
        case 0x3029d8u: goto label_3029d8;
        case 0x3029dcu: goto label_3029dc;
        case 0x3029e0u: goto label_3029e0;
        case 0x3029e4u: goto label_3029e4;
        case 0x3029e8u: goto label_3029e8;
        case 0x3029ecu: goto label_3029ec;
        case 0x3029f0u: goto label_3029f0;
        case 0x3029f4u: goto label_3029f4;
        case 0x3029f8u: goto label_3029f8;
        case 0x3029fcu: goto label_3029fc;
        case 0x302a00u: goto label_302a00;
        case 0x302a04u: goto label_302a04;
        case 0x302a08u: goto label_302a08;
        case 0x302a0cu: goto label_302a0c;
        case 0x302a10u: goto label_302a10;
        case 0x302a14u: goto label_302a14;
        case 0x302a18u: goto label_302a18;
        case 0x302a1cu: goto label_302a1c;
        case 0x302a20u: goto label_302a20;
        case 0x302a24u: goto label_302a24;
        case 0x302a28u: goto label_302a28;
        case 0x302a2cu: goto label_302a2c;
        case 0x302a30u: goto label_302a30;
        case 0x302a34u: goto label_302a34;
        case 0x302a38u: goto label_302a38;
        case 0x302a3cu: goto label_302a3c;
        case 0x302a40u: goto label_302a40;
        case 0x302a44u: goto label_302a44;
        case 0x302a48u: goto label_302a48;
        case 0x302a4cu: goto label_302a4c;
        case 0x302a50u: goto label_302a50;
        case 0x302a54u: goto label_302a54;
        case 0x302a58u: goto label_302a58;
        case 0x302a5cu: goto label_302a5c;
        case 0x302a60u: goto label_302a60;
        case 0x302a64u: goto label_302a64;
        case 0x302a68u: goto label_302a68;
        case 0x302a6cu: goto label_302a6c;
        case 0x302a70u: goto label_302a70;
        case 0x302a74u: goto label_302a74;
        case 0x302a78u: goto label_302a78;
        case 0x302a7cu: goto label_302a7c;
        case 0x302a80u: goto label_302a80;
        case 0x302a84u: goto label_302a84;
        case 0x302a88u: goto label_302a88;
        case 0x302a8cu: goto label_302a8c;
        case 0x302a90u: goto label_302a90;
        case 0x302a94u: goto label_302a94;
        case 0x302a98u: goto label_302a98;
        case 0x302a9cu: goto label_302a9c;
        case 0x302aa0u: goto label_302aa0;
        case 0x302aa4u: goto label_302aa4;
        case 0x302aa8u: goto label_302aa8;
        case 0x302aacu: goto label_302aac;
        case 0x302ab0u: goto label_302ab0;
        case 0x302ab4u: goto label_302ab4;
        case 0x302ab8u: goto label_302ab8;
        case 0x302abcu: goto label_302abc;
        case 0x302ac0u: goto label_302ac0;
        case 0x302ac4u: goto label_302ac4;
        case 0x302ac8u: goto label_302ac8;
        case 0x302accu: goto label_302acc;
        case 0x302ad0u: goto label_302ad0;
        case 0x302ad4u: goto label_302ad4;
        case 0x302ad8u: goto label_302ad8;
        case 0x302adcu: goto label_302adc;
        case 0x302ae0u: goto label_302ae0;
        case 0x302ae4u: goto label_302ae4;
        case 0x302ae8u: goto label_302ae8;
        case 0x302aecu: goto label_302aec;
        case 0x302af0u: goto label_302af0;
        case 0x302af4u: goto label_302af4;
        case 0x302af8u: goto label_302af8;
        case 0x302afcu: goto label_302afc;
        case 0x302b00u: goto label_302b00;
        case 0x302b04u: goto label_302b04;
        case 0x302b08u: goto label_302b08;
        case 0x302b0cu: goto label_302b0c;
        case 0x302b10u: goto label_302b10;
        case 0x302b14u: goto label_302b14;
        case 0x302b18u: goto label_302b18;
        case 0x302b1cu: goto label_302b1c;
        case 0x302b20u: goto label_302b20;
        case 0x302b24u: goto label_302b24;
        case 0x302b28u: goto label_302b28;
        case 0x302b2cu: goto label_302b2c;
        case 0x302b30u: goto label_302b30;
        case 0x302b34u: goto label_302b34;
        case 0x302b38u: goto label_302b38;
        case 0x302b3cu: goto label_302b3c;
        case 0x302b40u: goto label_302b40;
        case 0x302b44u: goto label_302b44;
        case 0x302b48u: goto label_302b48;
        case 0x302b4cu: goto label_302b4c;
        case 0x302b50u: goto label_302b50;
        case 0x302b54u: goto label_302b54;
        case 0x302b58u: goto label_302b58;
        case 0x302b5cu: goto label_302b5c;
        case 0x302b60u: goto label_302b60;
        case 0x302b64u: goto label_302b64;
        case 0x302b68u: goto label_302b68;
        case 0x302b6cu: goto label_302b6c;
        case 0x302b70u: goto label_302b70;
        case 0x302b74u: goto label_302b74;
        case 0x302b78u: goto label_302b78;
        case 0x302b7cu: goto label_302b7c;
        case 0x302b80u: goto label_302b80;
        case 0x302b84u: goto label_302b84;
        case 0x302b88u: goto label_302b88;
        case 0x302b8cu: goto label_302b8c;
        case 0x302b90u: goto label_302b90;
        case 0x302b94u: goto label_302b94;
        case 0x302b98u: goto label_302b98;
        case 0x302b9cu: goto label_302b9c;
        case 0x302ba0u: goto label_302ba0;
        case 0x302ba4u: goto label_302ba4;
        case 0x302ba8u: goto label_302ba8;
        case 0x302bacu: goto label_302bac;
        case 0x302bb0u: goto label_302bb0;
        case 0x302bb4u: goto label_302bb4;
        case 0x302bb8u: goto label_302bb8;
        case 0x302bbcu: goto label_302bbc;
        case 0x302bc0u: goto label_302bc0;
        case 0x302bc4u: goto label_302bc4;
        case 0x302bc8u: goto label_302bc8;
        case 0x302bccu: goto label_302bcc;
        case 0x302bd0u: goto label_302bd0;
        case 0x302bd4u: goto label_302bd4;
        case 0x302bd8u: goto label_302bd8;
        case 0x302bdcu: goto label_302bdc;
        case 0x302be0u: goto label_302be0;
        case 0x302be4u: goto label_302be4;
        case 0x302be8u: goto label_302be8;
        case 0x302becu: goto label_302bec;
        case 0x302bf0u: goto label_302bf0;
        case 0x302bf4u: goto label_302bf4;
        case 0x302bf8u: goto label_302bf8;
        case 0x302bfcu: goto label_302bfc;
        case 0x302c00u: goto label_302c00;
        case 0x302c04u: goto label_302c04;
        case 0x302c08u: goto label_302c08;
        case 0x302c0cu: goto label_302c0c;
        case 0x302c10u: goto label_302c10;
        case 0x302c14u: goto label_302c14;
        case 0x302c18u: goto label_302c18;
        case 0x302c1cu: goto label_302c1c;
        case 0x302c20u: goto label_302c20;
        case 0x302c24u: goto label_302c24;
        case 0x302c28u: goto label_302c28;
        case 0x302c2cu: goto label_302c2c;
        case 0x302c30u: goto label_302c30;
        case 0x302c34u: goto label_302c34;
        case 0x302c38u: goto label_302c38;
        case 0x302c3cu: goto label_302c3c;
        case 0x302c40u: goto label_302c40;
        case 0x302c44u: goto label_302c44;
        case 0x302c48u: goto label_302c48;
        case 0x302c4cu: goto label_302c4c;
        case 0x302c50u: goto label_302c50;
        case 0x302c54u: goto label_302c54;
        case 0x302c58u: goto label_302c58;
        case 0x302c5cu: goto label_302c5c;
        case 0x302c60u: goto label_302c60;
        case 0x302c64u: goto label_302c64;
        case 0x302c68u: goto label_302c68;
        case 0x302c6cu: goto label_302c6c;
        case 0x302c70u: goto label_302c70;
        case 0x302c74u: goto label_302c74;
        case 0x302c78u: goto label_302c78;
        case 0x302c7cu: goto label_302c7c;
        case 0x302c80u: goto label_302c80;
        case 0x302c84u: goto label_302c84;
        case 0x302c88u: goto label_302c88;
        case 0x302c8cu: goto label_302c8c;
        case 0x302c90u: goto label_302c90;
        case 0x302c94u: goto label_302c94;
        case 0x302c98u: goto label_302c98;
        case 0x302c9cu: goto label_302c9c;
        case 0x302ca0u: goto label_302ca0;
        case 0x302ca4u: goto label_302ca4;
        case 0x302ca8u: goto label_302ca8;
        case 0x302cacu: goto label_302cac;
        case 0x302cb0u: goto label_302cb0;
        case 0x302cb4u: goto label_302cb4;
        case 0x302cb8u: goto label_302cb8;
        case 0x302cbcu: goto label_302cbc;
        case 0x302cc0u: goto label_302cc0;
        case 0x302cc4u: goto label_302cc4;
        case 0x302cc8u: goto label_302cc8;
        case 0x302cccu: goto label_302ccc;
        case 0x302cd0u: goto label_302cd0;
        case 0x302cd4u: goto label_302cd4;
        case 0x302cd8u: goto label_302cd8;
        case 0x302cdcu: goto label_302cdc;
        case 0x302ce0u: goto label_302ce0;
        case 0x302ce4u: goto label_302ce4;
        case 0x302ce8u: goto label_302ce8;
        case 0x302cecu: goto label_302cec;
        case 0x302cf0u: goto label_302cf0;
        case 0x302cf4u: goto label_302cf4;
        case 0x302cf8u: goto label_302cf8;
        case 0x302cfcu: goto label_302cfc;
        case 0x302d00u: goto label_302d00;
        case 0x302d04u: goto label_302d04;
        case 0x302d08u: goto label_302d08;
        case 0x302d0cu: goto label_302d0c;
        case 0x302d10u: goto label_302d10;
        case 0x302d14u: goto label_302d14;
        case 0x302d18u: goto label_302d18;
        case 0x302d1cu: goto label_302d1c;
        case 0x302d20u: goto label_302d20;
        case 0x302d24u: goto label_302d24;
        case 0x302d28u: goto label_302d28;
        case 0x302d2cu: goto label_302d2c;
        case 0x302d30u: goto label_302d30;
        case 0x302d34u: goto label_302d34;
        case 0x302d38u: goto label_302d38;
        case 0x302d3cu: goto label_302d3c;
        case 0x302d40u: goto label_302d40;
        case 0x302d44u: goto label_302d44;
        case 0x302d48u: goto label_302d48;
        case 0x302d4cu: goto label_302d4c;
        case 0x302d50u: goto label_302d50;
        case 0x302d54u: goto label_302d54;
        case 0x302d58u: goto label_302d58;
        case 0x302d5cu: goto label_302d5c;
        case 0x302d60u: goto label_302d60;
        case 0x302d64u: goto label_302d64;
        case 0x302d68u: goto label_302d68;
        case 0x302d6cu: goto label_302d6c;
        case 0x302d70u: goto label_302d70;
        case 0x302d74u: goto label_302d74;
        case 0x302d78u: goto label_302d78;
        case 0x302d7cu: goto label_302d7c;
        case 0x302d80u: goto label_302d80;
        case 0x302d84u: goto label_302d84;
        case 0x302d88u: goto label_302d88;
        case 0x302d8cu: goto label_302d8c;
        case 0x302d90u: goto label_302d90;
        case 0x302d94u: goto label_302d94;
        case 0x302d98u: goto label_302d98;
        case 0x302d9cu: goto label_302d9c;
        case 0x302da0u: goto label_302da0;
        case 0x302da4u: goto label_302da4;
        case 0x302da8u: goto label_302da8;
        case 0x302dacu: goto label_302dac;
        case 0x302db0u: goto label_302db0;
        case 0x302db4u: goto label_302db4;
        case 0x302db8u: goto label_302db8;
        case 0x302dbcu: goto label_302dbc;
        case 0x302dc0u: goto label_302dc0;
        case 0x302dc4u: goto label_302dc4;
        case 0x302dc8u: goto label_302dc8;
        case 0x302dccu: goto label_302dcc;
        case 0x302dd0u: goto label_302dd0;
        case 0x302dd4u: goto label_302dd4;
        case 0x302dd8u: goto label_302dd8;
        case 0x302ddcu: goto label_302ddc;
        case 0x302de0u: goto label_302de0;
        case 0x302de4u: goto label_302de4;
        case 0x302de8u: goto label_302de8;
        case 0x302decu: goto label_302dec;
        case 0x302df0u: goto label_302df0;
        case 0x302df4u: goto label_302df4;
        case 0x302df8u: goto label_302df8;
        case 0x302dfcu: goto label_302dfc;
        case 0x302e00u: goto label_302e00;
        case 0x302e04u: goto label_302e04;
        case 0x302e08u: goto label_302e08;
        case 0x302e0cu: goto label_302e0c;
        case 0x302e10u: goto label_302e10;
        case 0x302e14u: goto label_302e14;
        case 0x302e18u: goto label_302e18;
        case 0x302e1cu: goto label_302e1c;
        case 0x302e20u: goto label_302e20;
        case 0x302e24u: goto label_302e24;
        case 0x302e28u: goto label_302e28;
        case 0x302e2cu: goto label_302e2c;
        case 0x302e30u: goto label_302e30;
        case 0x302e34u: goto label_302e34;
        case 0x302e38u: goto label_302e38;
        case 0x302e3cu: goto label_302e3c;
        case 0x302e40u: goto label_302e40;
        case 0x302e44u: goto label_302e44;
        default: break;
    }

    ctx->pc = 0x3029c0u;

label_3029c0:
    // 0x3029c0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x3029c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_3029c4:
    // 0x3029c4: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x3029c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_3029c8:
    // 0x3029c8: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x3029c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
label_3029cc:
    // 0x3029cc: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x3029ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_3029d0:
    // 0x3029d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3029d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3029d4:
    // 0x3029d4: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x3029d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_3029d8:
    // 0x3029d8: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x3029d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
label_3029dc:
    // 0x3029dc: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x3029dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
label_3029e0:
    // 0x3029e0: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x3029e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_3029e4:
    // 0x3029e4: 0x8e440114  lw          $a0, 0x114($s2)
    ctx->pc = 0x3029e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
label_3029e8:
    // 0x3029e8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3029e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_3029ec:
    // 0x3029ec: 0x1440010f  bnez        $v0, . + 4 + (0x10F << 2)
label_3029f0:
    if (ctx->pc == 0x3029F0u) {
        ctx->pc = 0x3029F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3029ECu;
        // 0x3029f0: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3029F4u;
        goto label_3029f4;
    }
    ctx->pc = 0x3029ECu;
    {
        const bool branch_taken_0x3029ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3029F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3029ECu;
        // 0x3029f0: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3029ec) {
            ctx->pc = 0x302E2Cu;
            goto label_302e2c;
        }
    }
    ctx->pc = 0x3029F4u;
label_3029f4:
    // 0x3029f4: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x3029f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_3029f8:
    // 0x3029f8: 0x8e420118  lw          $v0, 0x118($s2)
    ctx->pc = 0x3029f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
label_3029fc:
    // 0x3029fc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3029fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_302a00:
    // 0x302a00: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x302a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_302a04:
    // 0x302a04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_302a08:
    if (ctx->pc == 0x302A08u) {
        ctx->pc = 0x302A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302A04u;
        // 0x302a08: 0xae430114  sw          $v1, 0x114($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302A0Cu;
        goto label_302a0c;
    }
    ctx->pc = 0x302A04u;
    {
        const bool branch_taken_0x302a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302A04u;
        // 0x302a08: 0xae430114  sw          $v1, 0x114($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302a04) {
            ctx->pc = 0x302A1Cu;
            goto label_302a1c;
        }
    }
    ctx->pc = 0x302A0Cu;
label_302a0c:
    // 0x302a0c: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x302a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_302a10:
    // 0x302a10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x302a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_302a14:
    // 0x302a14: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x302a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_302a18:
    // 0x302a18: 0xae420114  sw          $v0, 0x114($s2)
    ctx->pc = 0x302a18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 2));
label_302a1c:
    // 0x302a1c: 0x8e430100  lw          $v1, 0x100($s2)
    ctx->pc = 0x302a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
label_302a20:
    // 0x302a20: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x302a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_302a24:
    // 0x302a24: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x302a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_302a28:
    // 0x302a28: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_302a2c:
    if (ctx->pc == 0x302A2Cu) {
        ctx->pc = 0x302A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302A28u;
        // 0x302a2c: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302A30u;
        goto label_302a30;
    }
    ctx->pc = 0x302A28u;
    {
        const bool branch_taken_0x302a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302A28u;
        // 0x302a2c: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302a28) {
            ctx->pc = 0x302A4Cu;
            goto label_302a4c;
        }
    }
    ctx->pc = 0x302A30u;
label_302a30:
    // 0x302a30: 0x8e430114  lw          $v1, 0x114($s2)
    ctx->pc = 0x302a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
label_302a34:
    // 0x302a34: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x302a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_302a38:
    // 0x302a38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x302a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_302a3c:
    // 0x302a3c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x302a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_302a40:
    // 0x302a40: 0xae430114  sw          $v1, 0x114($s2)
    ctx->pc = 0x302a40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 3));
label_302a44:
    // 0x302a44: 0x8e430100  lw          $v1, 0x100($s2)
    ctx->pc = 0x302a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
label_302a48:
    // 0x302a48: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x302a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_302a4c:
    // 0x302a4c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x302a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_302a50:
    // 0x302a50: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x302a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_302a54:
    // 0x302a54: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_302a58:
    if (ctx->pc == 0x302A58u) {
        ctx->pc = 0x302A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302A54u;
        // 0x302a58: 0x8e420108  lw          $v0, 0x108($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302A5Cu;
        goto label_302a5c;
    }
    ctx->pc = 0x302A54u;
    {
        const bool branch_taken_0x302a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x302a54) {
            ctx->pc = 0x302A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302A54u;
            // 0x302a58: 0x8e420108  lw          $v0, 0x108($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302A68u;
            goto label_302a68;
        }
    }
    ctx->pc = 0x302A5Cu;
label_302a5c:
    // 0x302a5c: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x302a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_302a60:
    // 0x302a60: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_302a64:
    if (ctx->pc == 0x302A64u) {
        ctx->pc = 0x302A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302A60u;
        // 0x302a64: 0x8e420108  lw          $v0, 0x108($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302A68u;
        goto label_302a68;
    }
    ctx->pc = 0x302A60u;
    {
        const bool branch_taken_0x302a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302A60u;
        // 0x302a64: 0x8e420108  lw          $v0, 0x108($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302a60) {
            ctx->pc = 0x302A8Cu;
            goto label_302a8c;
        }
    }
    ctx->pc = 0x302A68u;
label_302a68:
    // 0x302a68: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_302a6c:
    if (ctx->pc == 0x302A6Cu) {
        ctx->pc = 0x302A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302A68u;
        // 0x302a6c: 0x86420186  lh          $v0, 0x186($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 390)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302A70u;
        goto label_302a70;
    }
    ctx->pc = 0x302A68u;
    {
        const bool branch_taken_0x302a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302a68) {
            ctx->pc = 0x302A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302A68u;
            // 0x302a6c: 0x86420186  lh          $v0, 0x186($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302AB0u;
            goto label_302ab0;
        }
    }
    ctx->pc = 0x302A70u;
label_302a70:
    // 0x302a70: 0x904302f4  lbu         $v1, 0x2F4($v0)
    ctx->pc = 0x302a70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 756)));
label_302a74:
    // 0x302a74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x302a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_302a78:
    // 0x302a78: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_302a7c:
    if (ctx->pc == 0x302A7Cu) {
        ctx->pc = 0x302A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302A78u;
        // 0x302a7c: 0x8e420108  lw          $v0, 0x108($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302A80u;
        goto label_302a80;
    }
    ctx->pc = 0x302A78u;
    {
        const bool branch_taken_0x302a78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x302a78) {
            ctx->pc = 0x302A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302A78u;
            // 0x302a7c: 0x8e420108  lw          $v0, 0x108($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302A8Cu;
            goto label_302a8c;
        }
    }
    ctx->pc = 0x302A80u;
label_302a80:
    // 0x302a80: 0xc0c0a46  jal         func_302918
label_302a84:
    if (ctx->pc == 0x302A84u) {
        ctx->pc = 0x302A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302A80u;
        // 0x302a84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302A88u;
        goto label_302a88;
    }
    ctx->pc = 0x302A80u;
    SET_GPR_U32(ctx, 31, 0x302A88u);
    ctx->pc = 0x302A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302A80u;
    // 0x302a84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302918u, 0x302A80u, 0x302A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302A88u;
label_302a88:
    // 0x302a88: 0x8e420108  lw          $v0, 0x108($s2)
    ctx->pc = 0x302a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_302a8c:
    // 0x302a8c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_302a90:
    if (ctx->pc == 0x302A90u) {
        ctx->pc = 0x302A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302A8Cu;
        // 0x302a90: 0x86420186  lh          $v0, 0x186($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 390)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302A94u;
        goto label_302a94;
    }
    ctx->pc = 0x302A8Cu;
    {
        const bool branch_taken_0x302a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302a8c) {
            ctx->pc = 0x302A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302A8Cu;
            // 0x302a90: 0x86420186  lh          $v0, 0x186($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302AB0u;
            goto label_302ab0;
        }
    }
    ctx->pc = 0x302A94u;
label_302a94:
    // 0x302a94: 0x8c420250  lw          $v0, 0x250($v0)
    ctx->pc = 0x302a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
label_302a98:
    // 0x302a98: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
label_302a9c:
    if (ctx->pc == 0x302A9Cu) {
        ctx->pc = 0x302A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302A98u;
        // 0x302a9c: 0x86420186  lh          $v0, 0x186($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 390)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302AA0u;
        goto label_302aa0;
    }
    ctx->pc = 0x302A98u;
    {
        const bool branch_taken_0x302a98 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x302a98) {
            ctx->pc = 0x302A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302A98u;
            // 0x302a9c: 0x86420186  lh          $v0, 0x186($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302AB0u;
            goto label_302ab0;
        }
    }
    ctx->pc = 0x302AA0u;
label_302aa0:
    // 0x302aa0: 0xa640018a  sh          $zero, 0x18A($s2)
    ctx->pc = 0x302aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 394), (uint16_t)GPR_U32(ctx, 0));
label_302aa4:
    // 0x302aa4: 0xc0c0a46  jal         func_302918
label_302aa8:
    if (ctx->pc == 0x302AA8u) {
        ctx->pc = 0x302AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302AA4u;
        // 0x302aa8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302AACu;
        goto label_302aac;
    }
    ctx->pc = 0x302AA4u;
    SET_GPR_U32(ctx, 31, 0x302AACu);
    ctx->pc = 0x302AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302AA4u;
    // 0x302aa8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302918u, 0x302AA4u, 0x302AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302AACu;
label_302aac:
    // 0x302aac: 0x86420186  lh          $v0, 0x186($s2)
    ctx->pc = 0x302aacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 390)));
label_302ab0:
    // 0x302ab0: 0xc6410180  lwc1        $f1, 0x180($s2)
    ctx->pc = 0x302ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_302ab4:
    // 0x302ab4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x302ab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_302ab8:
    // 0x302ab8: 0x0  nop
    ctx->pc = 0x302ab8u;
    // NOP
label_302abc:
    // 0x302abc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x302abcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_302ac0:
    // 0x302ac0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x302ac0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_302ac4:
    // 0x302ac4: 0x0  nop
    ctx->pc = 0x302ac4u;
    // NOP
label_302ac8:
    // 0x302ac8: 0x4502006c  bc1fl       . + 4 + (0x6C << 2)
label_302acc:
    if (ctx->pc == 0x302ACCu) {
        ctx->pc = 0x302ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302AC8u;
        // 0x302acc: 0x8e440114  lw          $a0, 0x114($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302AD0u;
        goto label_302ad0;
    }
    ctx->pc = 0x302AC8u;
    {
        const bool branch_taken_0x302ac8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x302ac8) {
            ctx->pc = 0x302ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302AC8u;
            // 0x302acc: 0x8e440114  lw          $a0, 0x114($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302C7Cu;
            goto label_302c7c;
        }
    }
    ctx->pc = 0x302AD0u;
label_302ad0:
    // 0x302ad0: 0x8e430100  lw          $v1, 0x100($s2)
    ctx->pc = 0x302ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
label_302ad4:
    // 0x302ad4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x302ad4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_302ad8:
    // 0x302ad8: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x302ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
label_302adc:
    // 0x302adc: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_302ae0:
    if (ctx->pc == 0x302AE0u) {
        ctx->pc = 0x302AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302ADCu;
        // 0x302ae0: 0x8e450104  lw          $a1, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302AE4u;
        goto label_302ae4;
    }
    ctx->pc = 0x302ADCu;
    {
        const bool branch_taken_0x302adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302adc) {
            ctx->pc = 0x302AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302ADCu;
            // 0x302ae0: 0x8e450104  lw          $a1, 0x104($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302B3Cu;
            goto label_302b3c;
        }
    }
    ctx->pc = 0x302AE4u;
label_302ae4:
    // 0x302ae4: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x302ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_302ae8:
    // 0x302ae8: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x302ae8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_302aec:
    // 0x302aec: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x302aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_302af0:
    // 0x302af0: 0x60f809  jalr        $v1
label_302af4:
    if (ctx->pc == 0x302AF4u) {
        ctx->pc = 0x302AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302AF0u;
        // 0x302af4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302AF8u;
        goto label_302af8;
    }
    ctx->pc = 0x302AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x302AF8u);
        ctx->pc = 0x302AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302AF0u;
        // 0x302af4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302AF0u, 0x302AF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x302AF8u;
label_302af8:
    // 0x302af8: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x302af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_302afc:
    // 0x302afc: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x302afcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_302b00:
    // 0x302b00: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x302b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_302b04:
    // 0x302b04: 0x60f809  jalr        $v1
label_302b08:
    if (ctx->pc == 0x302B08u) {
        ctx->pc = 0x302B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B04u;
        // 0x302b08: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302B0Cu;
        goto label_302b0c;
    }
    ctx->pc = 0x302B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x302B0Cu);
        ctx->pc = 0x302B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B04u;
        // 0x302b08: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302B04u, 0x302B0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x302B0Cu;
label_302b0c:
    // 0x302b0c: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x302b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_302b10:
    // 0x302b10: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x302b10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_302b14:
    // 0x302b14: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x302b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_302b18:
    // 0x302b18: 0x60f809  jalr        $v1
label_302b1c:
    if (ctx->pc == 0x302B1Cu) {
        ctx->pc = 0x302B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B18u;
        // 0x302b1c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302B20u;
        goto label_302b20;
    }
    ctx->pc = 0x302B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x302B20u);
        ctx->pc = 0x302B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B18u;
        // 0x302b1c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302B18u, 0x302B20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x302B20u;
label_302b20:
    // 0x302b20: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x302b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_302b24:
    // 0x302b24: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x302b24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_302b28:
    // 0x302b28: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x302b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_302b2c:
    // 0x302b2c: 0x60f809  jalr        $v1
label_302b30:
    if (ctx->pc == 0x302B30u) {
        ctx->pc = 0x302B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B2Cu;
        // 0x302b30: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302B34u;
        goto label_302b34;
    }
    ctx->pc = 0x302B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x302B34u);
        ctx->pc = 0x302B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B2Cu;
        // 0x302b30: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302B2Cu, 0x302B34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x302B34u;
label_302b34:
    // 0x302b34: 0x1000004d  b           . + 4 + (0x4D << 2)
label_302b38:
    if (ctx->pc == 0x302B38u) {
        ctx->pc = 0x302B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B34u;
        // 0x302b38: 0x8e420114  lw          $v0, 0x114($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302B3Cu;
        goto label_302b3c;
    }
    ctx->pc = 0x302B34u;
    {
        const bool branch_taken_0x302b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B34u;
        // 0x302b38: 0x8e420114  lw          $v0, 0x114($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302b34) {
            ctx->pc = 0x302C6Cu;
            goto label_302c6c;
        }
    }
    ctx->pc = 0x302B3Cu;
label_302b3c:
    // 0x302b3c: 0x10a00034  beqz        $a1, . + 4 + (0x34 << 2)
label_302b40:
    if (ctx->pc == 0x302B40u) {
        ctx->pc = 0x302B44u;
        goto label_302b44;
    }
    ctx->pc = 0x302B3Cu;
    {
        const bool branch_taken_0x302b3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x302b3c) {
            ctx->pc = 0x302C10u;
            goto label_302c10;
        }
    }
    ctx->pc = 0x302B44u;
label_302b44:
    // 0x302b44: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x302b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_302b48:
    // 0x302b48: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x302b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_302b4c:
    // 0x302b4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x302b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_302b50:
    // 0x302b50: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_302b54:
    if (ctx->pc == 0x302B54u) {
        ctx->pc = 0x302B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B50u;
        // 0x302b54: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302B58u;
        goto label_302b58;
    }
    ctx->pc = 0x302B50u;
    {
        const bool branch_taken_0x302b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302b50) {
            ctx->pc = 0x302B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302B50u;
            // 0x302b54: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302BB4u;
            goto label_302bb4;
        }
    }
    ctx->pc = 0x302B58u;
label_302b58:
    // 0x302b58: 0x8e450108  lw          $a1, 0x108($s2)
    ctx->pc = 0x302b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_302b5c:
    // 0x302b5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x302b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_302b60:
    // 0x302b60: 0xc051d4a  jal         func_147528
label_302b64:
    if (ctx->pc == 0x302B64u) {
        ctx->pc = 0x302B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B60u;
        // 0x302b64: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302B68u;
        goto label_302b68;
    }
    ctx->pc = 0x302B60u;
    SET_GPR_U32(ctx, 31, 0x302B68u);
    ctx->pc = 0x302B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302B60u;
    // 0x302b64: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x302B60u, 0x302B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302B68u;
label_302b68:
    // 0x302b68: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x302b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_302b6c:
    // 0x302b6c: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x302b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_302b70:
    // 0x302b70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x302b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_302b74:
    // 0x302b74: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x302b74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_302b78:
    // 0x302b78: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x302b78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_302b7c:
    // 0x302b7c: 0xc44200b8  lwc1        $f2, 0xB8($v0)
    ctx->pc = 0x302b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_302b80:
    // 0x302b80: 0xc44000b0  lwc1        $f0, 0xB0($v0)
    ctx->pc = 0x302b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_302b84:
    // 0x302b84: 0xc44100b4  lwc1        $f1, 0xB4($v0)
    ctx->pc = 0x302b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_302b88:
    // 0x302b88: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x302b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_302b8c:
    // 0x302b8c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x302b8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_302b90:
    // 0x302b90: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x302b90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_302b94:
    // 0x302b94: 0xe463000c  swc1        $f3, 0xC($v1)
    ctx->pc = 0x302b94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_302b98:
    // 0x302b98: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x302b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_302b9c:
    // 0x302b9c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x302b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_302ba0:
    // 0x302ba0: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x302ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_302ba4:
    // 0x302ba4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x302ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_302ba8:
    // 0x302ba8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x302ba8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_302bac:
    // 0x302bac: 0x10000004  b           . + 4 + (0x4 << 2)
label_302bb0:
    if (ctx->pc == 0x302BB0u) {
        ctx->pc = 0x302BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302BACu;
        // 0x302bb0: 0xe7a20038  swc1        $f2, 0x38($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x302BB4u;
        goto label_302bb4;
    }
    ctx->pc = 0x302BACu;
    {
        const bool branch_taken_0x302bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302BACu;
        // 0x302bb0: 0xe7a20038  swc1        $f2, 0x38($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302bac) {
            ctx->pc = 0x302BC0u;
            goto label_302bc0;
        }
    }
    ctx->pc = 0x302BB4u;
label_302bb4:
    // 0x302bb4: 0xc051d4a  jal         func_147528
label_302bb8:
    if (ctx->pc == 0x302BB8u) {
        ctx->pc = 0x302BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302BB4u;
        // 0x302bb8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302BBCu;
        goto label_302bbc;
    }
    ctx->pc = 0x302BB4u;
    SET_GPR_U32(ctx, 31, 0x302BBCu);
    ctx->pc = 0x302BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302BB4u;
    // 0x302bb8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x302BB4u, 0x302BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302BBCu;
label_302bbc:
    // 0x302bbc: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x302bbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_302bc0:
    // 0x302bc0: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x302bc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_302bc4:
    // 0x302bc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x302bc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_302bc8:
    // 0x302bc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302bcc:
    // 0x302bcc: 0xc051dca  jal         func_147728
label_302bd0:
    if (ctx->pc == 0x302BD0u) {
        ctx->pc = 0x302BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302BCCu;
        // 0x302bd0: 0x264501b0  addiu       $a1, $s2, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302BD4u;
        goto label_302bd4;
    }
    ctx->pc = 0x302BCCu;
    SET_GPR_U32(ctx, 31, 0x302BD4u);
    ctx->pc = 0x302BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302BCCu;
    // 0x302bd0: 0x264501b0  addiu       $a1, $s2, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x302BCCu, 0x302BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302BD4u;
label_302bd4:
    // 0x302bd4: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x302bd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302bd8:
    // 0x302bd8: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x302bd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_302bdc:
    // 0x302bdc: 0x264501c0  addiu       $a1, $s2, 0x1C0
    ctx->pc = 0x302bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 448));
label_302be0:
    // 0x302be0: 0xc051db4  jal         func_1476D0
label_302be4:
    if (ctx->pc == 0x302BE4u) {
        ctx->pc = 0x302BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302BE0u;
        // 0x302be4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302BE8u;
        goto label_302be8;
    }
    ctx->pc = 0x302BE0u;
    SET_GPR_U32(ctx, 31, 0x302BE8u);
    ctx->pc = 0x302BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302BE0u;
    // 0x302be4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1476D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1476D0u, 0x302BE0u, 0x302BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302BE8u;
label_302be8:
    // 0x302be8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x302be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_302bec:
    // 0x302bec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302bf0:
    // 0x302bf0: 0xc051d52  jal         func_147548
label_302bf4:
    if (ctx->pc == 0x302BF4u) {
        ctx->pc = 0x302BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302BF0u;
        // 0x302bf4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302BF8u;
        goto label_302bf8;
    }
    ctx->pc = 0x302BF0u;
    SET_GPR_U32(ctx, 31, 0x302BF8u);
    ctx->pc = 0x302BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302BF0u;
    // 0x302bf4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x302BF0u, 0x302BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302BF8u;
label_302bf8:
    // 0x302bf8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x302bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_302bfc:
    // 0x302bfc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x302bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_302c00:
    // 0x302c00: 0xc051d52  jal         func_147548
label_302c04:
    if (ctx->pc == 0x302C04u) {
        ctx->pc = 0x302C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C00u;
        // 0x302c04: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302C08u;
        goto label_302c08;
    }
    ctx->pc = 0x302C00u;
    SET_GPR_U32(ctx, 31, 0x302C08u);
    ctx->pc = 0x302C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302C00u;
    // 0x302c04: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x302C00u, 0x302C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302C08u;
label_302c08:
    // 0x302c08: 0x10000008  b           . + 4 + (0x8 << 2)
label_302c0c:
    if (ctx->pc == 0x302C0Cu) {
        ctx->pc = 0x302C10u;
        goto label_302c10;
    }
    ctx->pc = 0x302C08u;
    {
        const bool branch_taken_0x302c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x302c08) {
            ctx->pc = 0x302C2Cu;
            goto label_302c2c;
        }
    }
    ctx->pc = 0x302C10u;
label_302c10:
    // 0x302c10: 0xc0ad86c  jal         func_2B61B0
label_302c14:
    if (ctx->pc == 0x302C14u) {
        ctx->pc = 0x302C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C10u;
        // 0x302c14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302C18u;
        goto label_302c18;
    }
    ctx->pc = 0x302C10u;
    SET_GPR_U32(ctx, 31, 0x302C18u);
    ctx->pc = 0x302C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302C10u;
    // 0x302c14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61B0u, 0x302C10u, 0x302C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302C18u;
label_302c18:
    // 0x302c18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x302c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_302c1c:
    // 0x302c1c: 0xc051d4a  jal         func_147528
label_302c20:
    if (ctx->pc == 0x302C20u) {
        ctx->pc = 0x302C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C1Cu;
        // 0x302c20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302C24u;
        goto label_302c24;
    }
    ctx->pc = 0x302C1Cu;
    SET_GPR_U32(ctx, 31, 0x302C24u);
    ctx->pc = 0x302C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302C1Cu;
    // 0x302c20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x302C1Cu, 0x302C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302C24u;
label_302c24:
    // 0x302c24: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x302c24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_302c28:
    // 0x302c28: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x302c28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_302c2c:
    // 0x302c2c: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x302c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
label_302c30:
    // 0x302c30: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x302c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_302c34:
    // 0x302c34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x302c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_302c38:
    // 0x302c38: 0xc051f22  jal         func_147C88
label_302c3c:
    if (ctx->pc == 0x302C3Cu) {
        ctx->pc = 0x302C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C38u;
        // 0x302c3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302C40u;
        goto label_302c40;
    }
    ctx->pc = 0x302C38u;
    SET_GPR_U32(ctx, 31, 0x302C40u);
    ctx->pc = 0x302C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302C38u;
    // 0x302c3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x302C38u, 0x302C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302C40u;
label_302c40:
    // 0x302c40: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x302c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_302c44:
    // 0x302c44: 0xc0ad88c  jal         func_2B6230
label_302c48:
    if (ctx->pc == 0x302C48u) {
        ctx->pc = 0x302C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C44u;
        // 0x302c48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302C4Cu;
        goto label_302c4c;
    }
    ctx->pc = 0x302C44u;
    SET_GPR_U32(ctx, 31, 0x302C4Cu);
    ctx->pc = 0x302C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302C44u;
    // 0x302c48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6230u, 0x302C44u, 0x302C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302C4Cu;
label_302c4c:
    // 0x302c4c: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x302c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
label_302c50:
    // 0x302c50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x302c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_302c54:
    // 0x302c54: 0xc051f18  jal         func_147C60
label_302c58:
    if (ctx->pc == 0x302C58u) {
        ctx->pc = 0x302C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C54u;
        // 0x302c58: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302C5Cu;
        goto label_302c5c;
    }
    ctx->pc = 0x302C54u;
    SET_GPR_U32(ctx, 31, 0x302C5Cu);
    ctx->pc = 0x302C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302C54u;
    // 0x302c58: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x302C54u, 0x302C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302C5Cu;
label_302c5c:
    // 0x302c5c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x302c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_302c60:
    // 0x302c60: 0xc0ad8a2  jal         func_2B6288
label_302c64:
    if (ctx->pc == 0x302C64u) {
        ctx->pc = 0x302C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C60u;
        // 0x302c64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302C68u;
        goto label_302c68;
    }
    ctx->pc = 0x302C60u;
    SET_GPR_U32(ctx, 31, 0x302C68u);
    ctx->pc = 0x302C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302C60u;
    // 0x302c64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6288u, 0x302C60u, 0x302C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302C68u;
label_302c68:
    // 0x302c68: 0x8e420114  lw          $v0, 0x114($s2)
    ctx->pc = 0x302c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
label_302c6c:
    // 0x302c6c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x302c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_302c70:
    // 0x302c70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x302c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_302c74:
    // 0x302c74: 0xae420114  sw          $v0, 0x114($s2)
    ctx->pc = 0x302c74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 2));
label_302c78:
    // 0x302c78: 0x8e440114  lw          $a0, 0x114($s2)
    ctx->pc = 0x302c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
label_302c7c:
    // 0x302c7c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x302c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_302c80:
    // 0x302c80: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x302c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_302c84:
    // 0x302c84: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_302c88:
    if (ctx->pc == 0x302C88u) {
        ctx->pc = 0x302C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C84u;
        // 0x302c88: 0x8e430100  lw          $v1, 0x100($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302C8Cu;
        goto label_302c8c;
    }
    ctx->pc = 0x302C84u;
    {
        const bool branch_taken_0x302c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302c84) {
            ctx->pc = 0x302C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302C84u;
            // 0x302c88: 0x8e430100  lw          $v1, 0x100($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302CC0u;
            goto label_302cc0;
        }
    }
    ctx->pc = 0x302C8Cu;
label_302c8c:
    // 0x302c8c: 0xc0ad796  jal         func_2B5E58
label_302c90:
    if (ctx->pc == 0x302C90u) {
        ctx->pc = 0x302C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C8Cu;
        // 0x302c90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302C94u;
        goto label_302c94;
    }
    ctx->pc = 0x302C8Cu;
    SET_GPR_U32(ctx, 31, 0x302C94u);
    ctx->pc = 0x302C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302C8Cu;
    // 0x302c90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5E58u, 0x302C8Cu, 0x302C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302C94u;
label_302c94:
    // 0x302c94: 0x14400065  bnez        $v0, . + 4 + (0x65 << 2)
label_302c98:
    if (ctx->pc == 0x302C98u) {
        ctx->pc = 0x302C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C94u;
        // 0x302c98: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302C9Cu;
        goto label_302c9c;
    }
    ctx->pc = 0x302C94u;
    {
        const bool branch_taken_0x302c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x302C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C94u;
        // 0x302c98: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302c94) {
            ctx->pc = 0x302E2Cu;
            goto label_302e2c;
        }
    }
    ctx->pc = 0x302C9Cu;
label_302c9c:
    // 0x302c9c: 0xc0ad794  jal         func_2B5E50
label_302ca0:
    if (ctx->pc == 0x302CA0u) {
        ctx->pc = 0x302CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C9Cu;
        // 0x302ca0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302CA4u;
        goto label_302ca4;
    }
    ctx->pc = 0x302C9Cu;
    SET_GPR_U32(ctx, 31, 0x302CA4u);
    ctx->pc = 0x302CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302C9Cu;
    // 0x302ca0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5E50u, 0x302C9Cu, 0x302CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302CA4u;
label_302ca4:
    // 0x302ca4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x302ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_302ca8:
    // 0x302ca8: 0xc0ad73c  jal         func_2B5CF0
label_302cac:
    if (ctx->pc == 0x302CACu) {
        ctx->pc = 0x302CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302CA8u;
        // 0x302cac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302CB0u;
        goto label_302cb0;
    }
    ctx->pc = 0x302CA8u;
    SET_GPR_U32(ctx, 31, 0x302CB0u);
    ctx->pc = 0x302CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302CA8u;
    // 0x302cac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5CF0u, 0x302CA8u, 0x302CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302CB0u;
label_302cb0:
    // 0x302cb0: 0xc0c0176  jal         func_3005D8
label_302cb4:
    if (ctx->pc == 0x302CB4u) {
        ctx->pc = 0x302CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302CB0u;
        // 0x302cb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302CB8u;
        goto label_302cb8;
    }
    ctx->pc = 0x302CB0u;
    SET_GPR_U32(ctx, 31, 0x302CB8u);
    ctx->pc = 0x302CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302CB0u;
    // 0x302cb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3005D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3005D8u, 0x302CB0u, 0x302CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302CB8u;
label_302cb8:
    // 0x302cb8: 0x1000005c  b           . + 4 + (0x5C << 2)
label_302cbc:
    if (ctx->pc == 0x302CBCu) {
        ctx->pc = 0x302CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302CB8u;
        // 0x302cbc: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302CC0u;
        goto label_302cc0;
    }
    ctx->pc = 0x302CB8u;
    {
        const bool branch_taken_0x302cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302CB8u;
        // 0x302cbc: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302cb8) {
            ctx->pc = 0x302E2Cu;
            goto label_302e2c;
        }
    }
    ctx->pc = 0x302CC0u;
label_302cc0:
    // 0x302cc0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x302cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_302cc4:
    // 0x302cc4: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x302cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_302cc8:
    // 0x302cc8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_302ccc:
    if (ctx->pc == 0x302CCCu) {
        ctx->pc = 0x302CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302CC8u;
        // 0x302ccc: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302CD0u;
        goto label_302cd0;
    }
    ctx->pc = 0x302CC8u;
    {
        const bool branch_taken_0x302cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x302CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302CC8u;
        // 0x302ccc: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302cc8) {
            ctx->pc = 0x302CE0u;
            goto label_302ce0;
        }
    }
    ctx->pc = 0x302CD0u;
label_302cd0:
    // 0x302cd0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x302cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_302cd4:
    // 0x302cd4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x302cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_302cd8:
    // 0x302cd8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_302cdc:
    if (ctx->pc == 0x302CDCu) {
        ctx->pc = 0x302CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302CD8u;
        // 0x302cdc: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302CE0u;
        goto label_302ce0;
    }
    ctx->pc = 0x302CD8u;
    {
        const bool branch_taken_0x302cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x302CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302CD8u;
        // 0x302cdc: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302cd8) {
            ctx->pc = 0x302CF4u;
            goto label_302cf4;
        }
    }
    ctx->pc = 0x302CE0u;
label_302ce0:
    // 0x302ce0: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x302ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
label_302ce4:
    // 0x302ce4: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x302ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31364)));
label_302ce8:
    // 0x302ce8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x302ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_302cec:
    // 0x302cec: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_302cf0:
    if (ctx->pc == 0x302CF0u) {
        ctx->pc = 0x302CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302CECu;
        // 0x302cf0: 0xc6400180  lwc1        $f0, 0x180($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x302CF4u;
        goto label_302cf4;
    }
    ctx->pc = 0x302CECu;
    {
        const bool branch_taken_0x302cec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x302cec) {
            ctx->pc = 0x302CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302CECu;
            // 0x302cf0: 0xc6400180  lwc1        $f0, 0x180($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x302D04u;
            goto label_302d04;
        }
    }
    ctx->pc = 0x302CF4u;
label_302cf4:
    // 0x302cf4: 0xc0be8d4  jal         func_2FA350
label_302cf8:
    if (ctx->pc == 0x302CF8u) {
        ctx->pc = 0x302CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302CF4u;
        // 0x302cf8: 0x26440180  addiu       $a0, $s2, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302CFCu;
        goto label_302cfc;
    }
    ctx->pc = 0x302CF4u;
    SET_GPR_U32(ctx, 31, 0x302CFCu);
    ctx->pc = 0x302CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302CF4u;
    // 0x302cf8: 0x26440180  addiu       $a0, $s2, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA350u, 0x302CF4u, 0x302CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302CFCu;
label_302cfc:
    // 0x302cfc: 0x10000007  b           . + 4 + (0x7 << 2)
label_302d00:
    if (ctx->pc == 0x302D00u) {
        ctx->pc = 0x302D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302CFCu;
        // 0x302d00: 0x8e430100  lw          $v1, 0x100($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302D04u;
        goto label_302d04;
    }
    ctx->pc = 0x302CFCu;
    {
        const bool branch_taken_0x302cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302CFCu;
        // 0x302d00: 0x8e430100  lw          $v1, 0x100($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302cfc) {
            ctx->pc = 0x302D1Cu;
            goto label_302d1c;
        }
    }
    ctx->pc = 0x302D04u;
label_302d04:
    // 0x302d04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x302d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_302d08:
    // 0x302d08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x302d08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_302d0c:
    // 0x302d0c: 0x0  nop
    ctx->pc = 0x302d0cu;
    // NOP
label_302d10:
    // 0x302d10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x302d10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_302d14:
    // 0x302d14: 0xe6400180  swc1        $f0, 0x180($s2)
    ctx->pc = 0x302d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 384), bits); }
label_302d18:
    // 0x302d18: 0x8e430100  lw          $v1, 0x100($s2)
    ctx->pc = 0x302d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
label_302d1c:
    // 0x302d1c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x302d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_302d20:
    // 0x302d20: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x302d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_302d24:
    // 0x302d24: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_302d28:
    if (ctx->pc == 0x302D28u) {
        ctx->pc = 0x302D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302D24u;
        // 0x302d28: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302D2Cu;
        goto label_302d2c;
    }
    ctx->pc = 0x302D24u;
    {
        const bool branch_taken_0x302d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x302D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302D24u;
        // 0x302d28: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302d24) {
            ctx->pc = 0x302D40u;
            goto label_302d40;
        }
    }
    ctx->pc = 0x302D2Cu;
label_302d2c:
    // 0x302d2c: 0x8e420114  lw          $v0, 0x114($s2)
    ctx->pc = 0x302d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
label_302d30:
    // 0x302d30: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x302d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_302d34:
    // 0x302d34: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x302d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_302d38:
    // 0x302d38: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_302d3c:
    if (ctx->pc == 0x302D3Cu) {
        ctx->pc = 0x302D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302D38u;
        // 0x302d3c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302D40u;
        goto label_302d40;
    }
    ctx->pc = 0x302D38u;
    {
        const bool branch_taken_0x302d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x302D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302D38u;
        // 0x302d3c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302d38) {
            ctx->pc = 0x302D54u;
            goto label_302d54;
        }
    }
    ctx->pc = 0x302D40u;
label_302d40:
    // 0x302d40: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x302d40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
label_302d44:
    // 0x302d44: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x302d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31364)));
label_302d48:
    // 0x302d48: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x302d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_302d4c:
    // 0x302d4c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_302d50:
    if (ctx->pc == 0x302D50u) {
        ctx->pc = 0x302D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302D4Cu;
        // 0x302d50: 0xc6400228  lwc1        $f0, 0x228($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x302D54u;
        goto label_302d54;
    }
    ctx->pc = 0x302D4Cu;
    {
        const bool branch_taken_0x302d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x302d4c) {
            ctx->pc = 0x302D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302D4Cu;
            // 0x302d50: 0xc6400228  lwc1        $f0, 0x228($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x302D64u;
            goto label_302d64;
        }
    }
    ctx->pc = 0x302D54u;
label_302d54:
    // 0x302d54: 0xc0be8d4  jal         func_2FA350
label_302d58:
    if (ctx->pc == 0x302D58u) {
        ctx->pc = 0x302D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302D54u;
        // 0x302d58: 0x26440228  addiu       $a0, $s2, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302D5Cu;
        goto label_302d5c;
    }
    ctx->pc = 0x302D54u;
    SET_GPR_U32(ctx, 31, 0x302D5Cu);
    ctx->pc = 0x302D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302D54u;
    // 0x302d58: 0x26440228  addiu       $a0, $s2, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA350u, 0x302D54u, 0x302D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302D5Cu;
label_302d5c:
    // 0x302d5c: 0x10000007  b           . + 4 + (0x7 << 2)
label_302d60:
    if (ctx->pc == 0x302D60u) {
        ctx->pc = 0x302D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302D5Cu;
        // 0x302d60: 0x96420224  lhu         $v0, 0x224($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302D64u;
        goto label_302d64;
    }
    ctx->pc = 0x302D5Cu;
    {
        const bool branch_taken_0x302d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302D5Cu;
        // 0x302d60: 0x96420224  lhu         $v0, 0x224($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302d5c) {
            ctx->pc = 0x302D7Cu;
            goto label_302d7c;
        }
    }
    ctx->pc = 0x302D64u;
label_302d64:
    // 0x302d64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x302d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_302d68:
    // 0x302d68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x302d68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_302d6c:
    // 0x302d6c: 0x0  nop
    ctx->pc = 0x302d6cu;
    // NOP
label_302d70:
    // 0x302d70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x302d70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_302d74:
    // 0x302d74: 0xe6400228  swc1        $f0, 0x228($s2)
    ctx->pc = 0x302d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 552), bits); }
label_302d78:
    // 0x302d78: 0x96420224  lhu         $v0, 0x224($s2)
    ctx->pc = 0x302d78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 548)));
label_302d7c:
    // 0x302d7c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_302d80:
    if (ctx->pc == 0x302D80u) {
        ctx->pc = 0x302D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302D7Cu;
        // 0x302d80: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302D84u;
        goto label_302d84;
    }
    ctx->pc = 0x302D7Cu;
    {
        const bool branch_taken_0x302d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302D7Cu;
        // 0x302d80: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302d7c) {
            ctx->pc = 0x302DB4u;
            goto label_302db4;
        }
    }
    ctx->pc = 0x302D84u;
label_302d84:
    // 0x302d84: 0xc6400228  lwc1        $f0, 0x228($s2)
    ctx->pc = 0x302d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_302d88:
    // 0x302d88: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x302d88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_302d8c:
    // 0x302d8c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x302d8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_302d90:
    // 0x302d90: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x302d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_302d94:
    // 0x302d94: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x302d94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_302d98:
    // 0x302d98: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x302d98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_302d9c:
    // 0x302d9c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_302da0:
    if (ctx->pc == 0x302DA0u) {
        ctx->pc = 0x302DA4u;
        goto label_302da4;
    }
    ctx->pc = 0x302D9Cu;
    {
        const bool branch_taken_0x302d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x302d9c) {
            ctx->pc = 0x302DB4u;
            goto label_302db4;
        }
    }
    ctx->pc = 0x302DA4u;
label_302da4:
    // 0x302da4: 0xc0c0a46  jal         func_302918
label_302da8:
    if (ctx->pc == 0x302DA8u) {
        ctx->pc = 0x302DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302DA4u;
        // 0x302da8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302DACu;
        goto label_302dac;
    }
    ctx->pc = 0x302DA4u;
    SET_GPR_U32(ctx, 31, 0x302DACu);
    ctx->pc = 0x302DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302DA4u;
    // 0x302da8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302918u, 0x302DA4u, 0x302DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302DACu;
label_302dac:
    // 0x302dac: 0x1000001f  b           . + 4 + (0x1F << 2)
label_302db0:
    if (ctx->pc == 0x302DB0u) {
        ctx->pc = 0x302DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302DACu;
        // 0x302db0: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302DB4u;
        goto label_302db4;
    }
    ctx->pc = 0x302DACu;
    {
        const bool branch_taken_0x302dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302DACu;
        // 0x302db0: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302dac) {
            ctx->pc = 0x302E2Cu;
            goto label_302e2c;
        }
    }
    ctx->pc = 0x302DB4u;
label_302db4:
    // 0x302db4: 0xc0c0d74  jal         func_3035D0
label_302db8:
    if (ctx->pc == 0x302DB8u) {
        ctx->pc = 0x302DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302DB4u;
        // 0x302db8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302DBCu;
        goto label_302dbc;
    }
    ctx->pc = 0x302DB4u;
    SET_GPR_U32(ctx, 31, 0x302DBCu);
    ctx->pc = 0x302DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302DB4u;
    // 0x302db8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3035D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3035D0u, 0x302DB4u, 0x302DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302DBCu;
label_302dbc:
    // 0x302dbc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x302dbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_302dc0:
    // 0x302dc0: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
label_302dc4:
    if (ctx->pc == 0x302DC4u) {
        ctx->pc = 0x302DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302DC0u;
        // 0x302dc4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302DC8u;
        goto label_302dc8;
    }
    ctx->pc = 0x302DC0u;
    {
        const bool branch_taken_0x302dc0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x302DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302DC0u;
        // 0x302dc4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302dc0) {
            ctx->pc = 0x302E28u;
            goto label_302e28;
        }
    }
    ctx->pc = 0x302DC8u;
label_302dc8:
    // 0x302dc8: 0x8e420100  lw          $v0, 0x100($s2)
    ctx->pc = 0x302dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
label_302dcc:
    // 0x302dcc: 0xc0beaa2  jal         func_2FAA88
label_302dd0:
    if (ctx->pc == 0x302DD0u) {
        ctx->pc = 0x302DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302DCCu;
        // 0x302dd0: 0x90440133  lbu         $a0, 0x133($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 307)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302DD4u;
        goto label_302dd4;
    }
    ctx->pc = 0x302DCCu;
    SET_GPR_U32(ctx, 31, 0x302DD4u);
    ctx->pc = 0x302DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302DCCu;
    // 0x302dd0: 0x90440133  lbu         $a0, 0x133($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 307)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAA88u, 0x302DCCu, 0x302DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302DD4u;
label_302dd4:
    // 0x302dd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x302dd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_302dd8:
    // 0x302dd8: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_302ddc:
    if (ctx->pc == 0x302DDCu) {
        ctx->pc = 0x302DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302DD8u;
        // 0x302ddc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302DE0u;
        goto label_302de0;
    }
    ctx->pc = 0x302DD8u;
    {
        const bool branch_taken_0x302dd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x302DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302DD8u;
        // 0x302ddc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302dd8) {
            ctx->pc = 0x302E1Cu;
            goto label_302e1c;
        }
    }
    ctx->pc = 0x302DE0u;
label_302de0:
    // 0x302de0: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x302de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_302de4:
    // 0x302de4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x302de4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_302de8:
    // 0x302de8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x302de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_302dec:
    // 0x302dec: 0x60f809  jalr        $v1
label_302df0:
    if (ctx->pc == 0x302DF0u) {
        ctx->pc = 0x302DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302DECu;
        // 0x302df0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302DF4u;
        goto label_302df4;
    }
    ctx->pc = 0x302DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x302DF4u);
        ctx->pc = 0x302DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302DECu;
        // 0x302df0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302DECu, 0x302DF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x302DF4u;
label_302df4:
    // 0x302df4: 0x8e0600f0  lw          $a2, 0xF0($s0)
    ctx->pc = 0x302df4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_302df8:
    // 0x302df8: 0x264501a0  addiu       $a1, $s2, 0x1A0
    ctx->pc = 0x302df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 416));
label_302dfc:
    // 0x302dfc: 0x84c40018  lh          $a0, 0x18($a2)
    ctx->pc = 0x302dfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 24)));
label_302e00:
    // 0x302e00: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x302e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_302e04:
    // 0x302e04: 0x40f809  jalr        $v0
label_302e08:
    if (ctx->pc == 0x302E08u) {
        ctx->pc = 0x302E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E04u;
        // 0x302e08: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302E0Cu;
        goto label_302e0c;
    }
    ctx->pc = 0x302E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x302E0Cu);
        ctx->pc = 0x302E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E04u;
        // 0x302e08: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302E04u, 0x302E0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x302E0Cu;
label_302e0c:
    // 0x302e0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_302e10:
    if (ctx->pc == 0x302E10u) {
        ctx->pc = 0x302E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E0Cu;
        // 0x302e10: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302E14u;
        goto label_302e14;
    }
    ctx->pc = 0x302E0Cu;
    {
        const bool branch_taken_0x302e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x302E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E0Cu;
        // 0x302e10: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302e0c) {
            ctx->pc = 0x302E20u;
            goto label_302e20;
        }
    }
    ctx->pc = 0x302E14u;
label_302e14:
    // 0x302e14: 0xc0bef94  jal         func_2FBE50
label_302e18:
    if (ctx->pc == 0x302E18u) {
        ctx->pc = 0x302E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E14u;
        // 0x302e18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302E1Cu;
        goto label_302e1c;
    }
    ctx->pc = 0x302E14u;
    SET_GPR_U32(ctx, 31, 0x302E1Cu);
    ctx->pc = 0x302E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302E14u;
    // 0x302e18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE50u, 0x302E14u, 0x302E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302E1Cu;
label_302e1c:
    // 0x302e1c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x302e1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_302e20:
    // 0x302e20: 0x1c40ffe9  bgtz        $v0, . + 4 + (-0x17 << 2)
label_302e24:
    if (ctx->pc == 0x302E24u) {
        ctx->pc = 0x302E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E20u;
        // 0x302e24: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302E28u;
        goto label_302e28;
    }
    ctx->pc = 0x302E20u;
    {
        const bool branch_taken_0x302e20 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x302E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E20u;
        // 0x302e24: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302e20) {
            ctx->pc = 0x302DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_302dc8;
        }
    }
    ctx->pc = 0x302E28u;
label_302e28:
    // 0x302e28: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x302e28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_302e2c:
    // 0x302e2c: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x302e2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_302e30:
    // 0x302e30: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x302e30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_302e34:
    // 0x302e34: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x302e34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_302e38:
    // 0x302e38: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x302e38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_302e3c:
    // 0x302e3c: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x302e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_302e40:
    // 0x302e40: 0x3e00008  jr          $ra
label_302e44:
    if (ctx->pc == 0x302E44u) {
        ctx->pc = 0x302E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E40u;
        // 0x302e44: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302E48u;
        goto label_fallthrough_0x302e40;
    }
    ctx->pc = 0x302E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E40u;
        // 0x302e44: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x302e40:
    ctx->pc = 0x302E48u;
}
