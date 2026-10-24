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

// Function: cScenario__endSoftEvent
// Address: 0x2c3c10 - 0x2c3e40
void cScenario__endSoftEvent_0x2c3c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario__endSoftEvent_0x2c3c10");
#endif

    switch (ctx->pc) {
        case 0x2c3c10u: goto label_2c3c10;
        case 0x2c3c14u: goto label_2c3c14;
        case 0x2c3c18u: goto label_2c3c18;
        case 0x2c3c1cu: goto label_2c3c1c;
        case 0x2c3c20u: goto label_2c3c20;
        case 0x2c3c24u: goto label_2c3c24;
        case 0x2c3c28u: goto label_2c3c28;
        case 0x2c3c2cu: goto label_2c3c2c;
        case 0x2c3c30u: goto label_2c3c30;
        case 0x2c3c34u: goto label_2c3c34;
        case 0x2c3c38u: goto label_2c3c38;
        case 0x2c3c3cu: goto label_2c3c3c;
        case 0x2c3c40u: goto label_2c3c40;
        case 0x2c3c44u: goto label_2c3c44;
        case 0x2c3c48u: goto label_2c3c48;
        case 0x2c3c4cu: goto label_2c3c4c;
        case 0x2c3c50u: goto label_2c3c50;
        case 0x2c3c54u: goto label_2c3c54;
        case 0x2c3c58u: goto label_2c3c58;
        case 0x2c3c5cu: goto label_2c3c5c;
        case 0x2c3c60u: goto label_2c3c60;
        case 0x2c3c64u: goto label_2c3c64;
        case 0x2c3c68u: goto label_2c3c68;
        case 0x2c3c6cu: goto label_2c3c6c;
        case 0x2c3c70u: goto label_2c3c70;
        case 0x2c3c74u: goto label_2c3c74;
        case 0x2c3c78u: goto label_2c3c78;
        case 0x2c3c7cu: goto label_2c3c7c;
        case 0x2c3c80u: goto label_2c3c80;
        case 0x2c3c84u: goto label_2c3c84;
        case 0x2c3c88u: goto label_2c3c88;
        case 0x2c3c8cu: goto label_2c3c8c;
        case 0x2c3c90u: goto label_2c3c90;
        case 0x2c3c94u: goto label_2c3c94;
        case 0x2c3c98u: goto label_2c3c98;
        case 0x2c3c9cu: goto label_2c3c9c;
        case 0x2c3ca0u: goto label_2c3ca0;
        case 0x2c3ca4u: goto label_2c3ca4;
        case 0x2c3ca8u: goto label_2c3ca8;
        case 0x2c3cacu: goto label_2c3cac;
        case 0x2c3cb0u: goto label_2c3cb0;
        case 0x2c3cb4u: goto label_2c3cb4;
        case 0x2c3cb8u: goto label_2c3cb8;
        case 0x2c3cbcu: goto label_2c3cbc;
        case 0x2c3cc0u: goto label_2c3cc0;
        case 0x2c3cc4u: goto label_2c3cc4;
        case 0x2c3cc8u: goto label_2c3cc8;
        case 0x2c3cccu: goto label_2c3ccc;
        case 0x2c3cd0u: goto label_2c3cd0;
        case 0x2c3cd4u: goto label_2c3cd4;
        case 0x2c3cd8u: goto label_2c3cd8;
        case 0x2c3cdcu: goto label_2c3cdc;
        case 0x2c3ce0u: goto label_2c3ce0;
        case 0x2c3ce4u: goto label_2c3ce4;
        case 0x2c3ce8u: goto label_2c3ce8;
        case 0x2c3cecu: goto label_2c3cec;
        case 0x2c3cf0u: goto label_2c3cf0;
        case 0x2c3cf4u: goto label_2c3cf4;
        case 0x2c3cf8u: goto label_2c3cf8;
        case 0x2c3cfcu: goto label_2c3cfc;
        case 0x2c3d00u: goto label_2c3d00;
        case 0x2c3d04u: goto label_2c3d04;
        case 0x2c3d08u: goto label_2c3d08;
        case 0x2c3d0cu: goto label_2c3d0c;
        case 0x2c3d10u: goto label_2c3d10;
        case 0x2c3d14u: goto label_2c3d14;
        case 0x2c3d18u: goto label_2c3d18;
        case 0x2c3d1cu: goto label_2c3d1c;
        case 0x2c3d20u: goto label_2c3d20;
        case 0x2c3d24u: goto label_2c3d24;
        case 0x2c3d28u: goto label_2c3d28;
        case 0x2c3d2cu: goto label_2c3d2c;
        case 0x2c3d30u: goto label_2c3d30;
        case 0x2c3d34u: goto label_2c3d34;
        case 0x2c3d38u: goto label_2c3d38;
        case 0x2c3d3cu: goto label_2c3d3c;
        case 0x2c3d40u: goto label_2c3d40;
        case 0x2c3d44u: goto label_2c3d44;
        case 0x2c3d48u: goto label_2c3d48;
        case 0x2c3d4cu: goto label_2c3d4c;
        case 0x2c3d50u: goto label_2c3d50;
        case 0x2c3d54u: goto label_2c3d54;
        case 0x2c3d58u: goto label_2c3d58;
        case 0x2c3d5cu: goto label_2c3d5c;
        case 0x2c3d60u: goto label_2c3d60;
        case 0x2c3d64u: goto label_2c3d64;
        case 0x2c3d68u: goto label_2c3d68;
        case 0x2c3d6cu: goto label_2c3d6c;
        case 0x2c3d70u: goto label_2c3d70;
        case 0x2c3d74u: goto label_2c3d74;
        case 0x2c3d78u: goto label_2c3d78;
        case 0x2c3d7cu: goto label_2c3d7c;
        case 0x2c3d80u: goto label_2c3d80;
        case 0x2c3d84u: goto label_2c3d84;
        case 0x2c3d88u: goto label_2c3d88;
        case 0x2c3d8cu: goto label_2c3d8c;
        case 0x2c3d90u: goto label_2c3d90;
        case 0x2c3d94u: goto label_2c3d94;
        case 0x2c3d98u: goto label_2c3d98;
        case 0x2c3d9cu: goto label_2c3d9c;
        case 0x2c3da0u: goto label_2c3da0;
        case 0x2c3da4u: goto label_2c3da4;
        case 0x2c3da8u: goto label_2c3da8;
        case 0x2c3dacu: goto label_2c3dac;
        case 0x2c3db0u: goto label_2c3db0;
        case 0x2c3db4u: goto label_2c3db4;
        case 0x2c3db8u: goto label_2c3db8;
        case 0x2c3dbcu: goto label_2c3dbc;
        case 0x2c3dc0u: goto label_2c3dc0;
        case 0x2c3dc4u: goto label_2c3dc4;
        case 0x2c3dc8u: goto label_2c3dc8;
        case 0x2c3dccu: goto label_2c3dcc;
        case 0x2c3dd0u: goto label_2c3dd0;
        case 0x2c3dd4u: goto label_2c3dd4;
        case 0x2c3dd8u: goto label_2c3dd8;
        case 0x2c3ddcu: goto label_2c3ddc;
        case 0x2c3de0u: goto label_2c3de0;
        case 0x2c3de4u: goto label_2c3de4;
        case 0x2c3de8u: goto label_2c3de8;
        case 0x2c3decu: goto label_2c3dec;
        case 0x2c3df0u: goto label_2c3df0;
        case 0x2c3df4u: goto label_2c3df4;
        case 0x2c3df8u: goto label_2c3df8;
        case 0x2c3dfcu: goto label_2c3dfc;
        case 0x2c3e00u: goto label_2c3e00;
        case 0x2c3e04u: goto label_2c3e04;
        case 0x2c3e08u: goto label_2c3e08;
        case 0x2c3e0cu: goto label_2c3e0c;
        case 0x2c3e10u: goto label_2c3e10;
        case 0x2c3e14u: goto label_2c3e14;
        case 0x2c3e18u: goto label_2c3e18;
        case 0x2c3e1cu: goto label_2c3e1c;
        case 0x2c3e20u: goto label_2c3e20;
        case 0x2c3e24u: goto label_2c3e24;
        case 0x2c3e28u: goto label_2c3e28;
        case 0x2c3e2cu: goto label_2c3e2c;
        case 0x2c3e30u: goto label_2c3e30;
        case 0x2c3e34u: goto label_2c3e34;
        case 0x2c3e38u: goto label_2c3e38;
        case 0x2c3e3cu: goto label_2c3e3c;
        default: break;
    }

    ctx->pc = 0x2c3c10u;

label_2c3c10:
    // 0x2c3c10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c3c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2c3c14:
    // 0x2c3c14: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c3c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2c3c18:
    // 0x2c3c18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c3c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c3c1c:
    // 0x2c3c1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c3c1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c3c20:
    // 0x2c3c20: 0x860200e8  lh          $v0, 0xE8($s0)
    ctx->pc = 0x2c3c20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 232)));
label_2c3c24:
    // 0x2c3c24: 0x18400082  blez        $v0, . + 4 + (0x82 << 2)
label_2c3c28:
    if (ctx->pc == 0x2C3C28u) {
        ctx->pc = 0x2C3C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C24u;
        // 0x2c3c28: 0x960300e8  lhu         $v1, 0xE8($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3C2Cu;
        goto label_2c3c2c;
    }
    ctx->pc = 0x2C3C24u;
    {
        const bool branch_taken_0x2c3c24 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2C3C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C24u;
        // 0x2c3c28: 0x960300e8  lhu         $v1, 0xE8($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3c24) {
            ctx->pc = 0x2C3E30u;
            goto label_2c3e30;
        }
    }
    ctx->pc = 0x2C3C2Cu;
label_2c3c2c:
    // 0x2c3c2c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2c3c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2c3c30:
    // 0x2c3c30: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x2c3c30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2c3c34:
    // 0x2c3c34: 0x1c60007e  bgtz        $v1, . + 4 + (0x7E << 2)
label_2c3c38:
    if (ctx->pc == 0x2C3C38u) {
        ctx->pc = 0x2C3C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C34u;
        // 0x2c3c38: 0xa60200e8  sh          $v0, 0xE8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 232), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3C3Cu;
        goto label_2c3c3c;
    }
    ctx->pc = 0x2C3C34u;
    {
        const bool branch_taken_0x2c3c34 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x2C3C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C34u;
        // 0x2c3c38: 0xa60200e8  sh          $v0, 0xE8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 232), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3c34) {
            ctx->pc = 0x2C3E30u;
            goto label_2c3e30;
        }
    }
    ctx->pc = 0x2C3C3Cu;
label_2c3c3c:
    // 0x2c3c3c: 0x3c0b0074  lui         $t3, 0x74
    ctx->pc = 0x2c3c3cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)116 << 16));
label_2c3c40:
    // 0x2c3c40: 0x3c04fdff  lui         $a0, 0xFDFF
    ctx->pc = 0x2c3c40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65023 << 16));
label_2c3c44:
    // 0x2c3c44: 0x256a7a84  addiu       $t2, $t3, 0x7A84
    ctx->pc = 0x2c3c44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 31364));
label_2c3c48:
    // 0x2c3c48: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2c3c48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2c3c4c:
    // 0x2c3c4c: 0x8d42fff4  lw          $v0, -0xC($t2)
    ctx->pc = 0x2c3c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294967284)));
label_2c3c50:
    // 0x2c3c50: 0x3c03ffbf  lui         $v1, 0xFFBF
    ctx->pc = 0x2c3c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65471 << 16));
label_2c3c54:
    // 0x2c3c54: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2c3c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2c3c58:
    // 0x2c3c58: 0x3c09ffef  lui         $t1, 0xFFEF
    ctx->pc = 0x2c3c58u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65519 << 16));
label_2c3c5c:
    // 0x2c3c5c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2c3c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2c3c60:
    // 0x2c3c60: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x2c3c60u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_2c3c64:
    // 0x2c3c64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c3c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2c3c68:
    // 0x2c3c68: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x2c3c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
label_2c3c6c:
    // 0x2c3c6c: 0x3c03fffb  lui         $v1, 0xFFFB
    ctx->pc = 0x2c3c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65531 << 16));
label_2c3c70:
    // 0x2c3c70: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x2c3c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
label_2c3c74:
    // 0x2c3c74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2c3c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2c3c78:
    // 0x2c3c78: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2c3c78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2c3c7c:
    // 0x2c3c7c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c3c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2c3c80:
    // 0x2c3c80: 0x3c06bfff  lui         $a2, 0xBFFF
    ctx->pc = 0x2c3c80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49151 << 16));
label_2c3c84:
    // 0x2c3c84: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2c3c84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_2c3c88:
    // 0x2c3c88: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2c3c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2c3c8c:
    // 0x2c3c8c: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x2c3c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
label_2c3c90:
    // 0x2c3c90: 0x8d657a84  lw          $a1, 0x7A84($t3)
    ctx->pc = 0x2c3c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 31364)));
label_2c3c94:
    // 0x2c3c94: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2c3c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_2c3c98:
    // 0x2c3c98: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2c3c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2c3c9c:
    // 0x2c3c9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c3c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2c3ca0:
    // 0x2c3ca0: 0x3c04efff  lui         $a0, 0xEFFF
    ctx->pc = 0x2c3ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61439 << 16));
label_2c3ca4:
    // 0x2c3ca4: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x2c3ca4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
label_2c3ca8:
    // 0x2c3ca8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2c3ca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2c3cac:
    // 0x2c3cac: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x2c3cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
label_2c3cb0:
    // 0x2c3cb0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2c3cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2c3cb4:
    // 0x2c3cb4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2c3cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2c3cb8:
    // 0x2c3cb8: 0x2408ffbf  addiu       $t0, $zero, -0x41
    ctx->pc = 0x2c3cb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_2c3cbc:
    // 0x2c3cbc: 0x3c07fffe  lui         $a3, 0xFFFE
    ctx->pc = 0x2c3cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65534 << 16));
label_2c3cc0:
    // 0x2c3cc0: 0x3c06fbff  lui         $a2, 0xFBFF
    ctx->pc = 0x2c3cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64511 << 16));
label_2c3cc4:
    // 0x2c3cc4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2c3cc4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_2c3cc8:
    // 0x2c3cc8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c3cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2c3ccc:
    // 0x2c3ccc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2c3cccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_2c3cd0:
    // 0x2c3cd0: 0xa82824  and         $a1, $a1, $t0
    ctx->pc = 0x2c3cd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
label_2c3cd4:
    // 0x2c3cd4: 0x3c04ff7f  lui         $a0, 0xFF7F
    ctx->pc = 0x2c3cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65407 << 16));
label_2c3cd8:
    // 0x2c3cd8: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x2c3cd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
label_2c3cdc:
    // 0x2c3cdc: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x2c3cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
label_2c3ce0:
    // 0x2c3ce0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2c3ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_2c3ce4:
    // 0x2c3ce4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2c3ce4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2c3ce8:
    // 0x2c3ce8: 0x8d47fffc  lw          $a3, -0x4($t2)
    ctx->pc = 0x2c3ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294967292)));
label_2c3cec:
    // 0x2c3cec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2c3cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2c3cf0:
    // 0x2c3cf0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2c3cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2c3cf4:
    // 0x2c3cf4: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x2c3cf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
label_2c3cf8:
    // 0x2c3cf8: 0xad42fff4  sw          $v0, -0xC($t2)
    ctx->pc = 0x2c3cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294967284), GPR_U32(ctx, 2));
label_2c3cfc:
    // 0x2c3cfc: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x2c3cfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_2c3d00:
    // 0x2c3d00: 0xe93824  and         $a3, $a3, $t1
    ctx->pc = 0x2c3d00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 9));
label_2c3d04:
    // 0x2c3d04: 0xad657a84  sw          $a1, 0x7A84($t3)
    ctx->pc = 0x2c3d04u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 31364), GPR_U32(ctx, 5));
label_2c3d08:
    // 0x2c3d08: 0xad47fffc  sw          $a3, -0x4($t2)
    ctx->pc = 0x2c3d08u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294967292), GPR_U32(ctx, 7));
label_2c3d0c:
    // 0x2c3d0c: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x2c3d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_2c3d10:
    // 0x2c3d10: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x2c3d10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2c3d14:
    // 0x2c3d14: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_2c3d18:
    if (ctx->pc == 0x2C3D18u) {
        ctx->pc = 0x2C3D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D14u;
        // 0x2c3d18: 0x160602d  daddu       $t4, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3D1Cu;
        goto label_2c3d1c;
    }
    ctx->pc = 0x2C3D14u;
    {
        const bool branch_taken_0x2c3d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D14u;
        // 0x2c3d18: 0x160602d  daddu       $t4, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3d14) {
            ctx->pc = 0x2C3DC0u;
            goto label_2c3dc0;
        }
    }
    ctx->pc = 0x2C3D1Cu;
label_2c3d1c:
    // 0x2c3d1c: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2c3d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
label_2c3d20:
    // 0x2c3d20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c3d20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2c3d24:
    // 0x2c3d24: 0x2442c2a0  addiu       $v0, $v0, -0x3D60
    ctx->pc = 0x2c3d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951584));
label_2c3d28:
    // 0x2c3d28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c3d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2c3d2c:
    // 0x2c3d2c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c3d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c3d30:
    // 0x2c3d30: 0x800008  jr          $a0
label_2c3d34:
    if (ctx->pc == 0x2C3D34u) {
        ctx->pc = 0x2C3D38u;
        goto label_2c3d38;
    }
    ctx->pc = 0x2C3D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C3D38u: goto label_2c3d38;
            case 0x2C3D60u: goto label_2c3d60;
            case 0x2C3D88u: goto label_2c3d88;
            case 0x2C3DB8u: goto label_2c3db8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3D30u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C3D38u;
label_2c3d38:
    // 0x2c3d38: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2c3d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_2c3d3c:
    // 0x2c3d3c: 0x3c03fdff  lui         $v1, 0xFDFF
    ctx->pc = 0x2c3d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65023 << 16));
label_2c3d40:
    // 0x2c3d40: 0x8c457a80  lw          $a1, 0x7A80($v0)
    ctx->pc = 0x2c3d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31360)));
label_2c3d44:
    // 0x2c3d44: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2c3d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2c3d48:
    // 0x2c3d48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c3d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3d4c:
    // 0x2c3d4c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x2c3d4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_2c3d50:
    // 0x2c3d50: 0xc0be91c  jal         func_2FA470
label_2c3d54:
    if (ctx->pc == 0x2C3D54u) {
        ctx->pc = 0x2C3D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D50u;
        // 0x2c3d54: 0xac457a80  sw          $a1, 0x7A80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 31360), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3D58u;
        goto label_2c3d58;
    }
    ctx->pc = 0x2C3D50u;
    SET_GPR_U32(ctx, 31, 0x2C3D58u);
    ctx->pc = 0x2C3D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3D50u;
    // 0x2c3d54: 0xac457a80  sw          $a1, 0x7A80($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 31360), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA470u, 0x2C3D50u, 0x2C3D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3D58u;
label_2c3d58:
    // 0x2c3d58: 0x10000013  b           . + 4 + (0x13 << 2)
label_2c3d5c:
    if (ctx->pc == 0x2C3D5Cu) {
        ctx->pc = 0x2C3D60u;
        goto label_2c3d60;
    }
    ctx->pc = 0x2C3D58u;
    {
        const bool branch_taken_0x2c3d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3d58) {
            ctx->pc = 0x2C3DA8u;
            goto label_2c3da8;
        }
    }
    ctx->pc = 0x2C3D60u;
label_2c3d60:
    // 0x2c3d60: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2c3d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_2c3d64:
    // 0x2c3d64: 0x3c03fdff  lui         $v1, 0xFDFF
    ctx->pc = 0x2c3d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65023 << 16));
label_2c3d68:
    // 0x2c3d68: 0x8c457a80  lw          $a1, 0x7A80($v0)
    ctx->pc = 0x2c3d68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31360)));
label_2c3d6c:
    // 0x2c3d6c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2c3d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2c3d70:
    // 0x2c3d70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c3d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3d74:
    // 0x2c3d74: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x2c3d74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_2c3d78:
    // 0x2c3d78: 0xc0be91c  jal         func_2FA470
label_2c3d7c:
    if (ctx->pc == 0x2C3D7Cu) {
        ctx->pc = 0x2C3D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D78u;
        // 0x2c3d7c: 0xac457a80  sw          $a1, 0x7A80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 31360), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3D80u;
        goto label_2c3d80;
    }
    ctx->pc = 0x2C3D78u;
    SET_GPR_U32(ctx, 31, 0x2C3D80u);
    ctx->pc = 0x2C3D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3D78u;
    // 0x2c3d7c: 0xac457a80  sw          $a1, 0x7A80($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 31360), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA470u, 0x2C3D78u, 0x2C3D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3D80u;
label_2c3d80:
    // 0x2c3d80: 0x10000010  b           . + 4 + (0x10 << 2)
label_2c3d84:
    if (ctx->pc == 0x2C3D84u) {
        ctx->pc = 0x2C3D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D80u;
        // 0x2c3d84: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3D88u;
        goto label_2c3d88;
    }
    ctx->pc = 0x2C3D80u;
    {
        const bool branch_taken_0x2c3d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D80u;
        // 0x2c3d84: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3d80) {
            ctx->pc = 0x2C3DC4u;
            goto label_2c3dc4;
        }
    }
    ctx->pc = 0x2C3D88u;
label_2c3d88:
    // 0x2c3d88: 0x8d837a84  lw          $v1, 0x7A84($t4)
    ctx->pc = 0x2c3d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 31364)));
label_2c3d8c:
    // 0x2c3d8c: 0x3c02fff7  lui         $v0, 0xFFF7
    ctx->pc = 0x2c3d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65527 << 16));
label_2c3d90:
    // 0x2c3d90: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c3d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2c3d94:
    // 0x2c3d94: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2c3d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2c3d98:
    // 0x2c3d98: 0xc0b6dac  jal         func_2DB6B0
label_2c3d9c:
    if (ctx->pc == 0x2C3D9Cu) {
        ctx->pc = 0x2C3D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D98u;
        // 0x2c3d9c: 0xad837a84  sw          $v1, 0x7A84($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 31364), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3DA0u;
        goto label_2c3da0;
    }
    ctx->pc = 0x2C3D98u;
    SET_GPR_U32(ctx, 31, 0x2C3DA0u);
    ctx->pc = 0x2C3D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3D98u;
    // 0x2c3d9c: 0xad837a84  sw          $v1, 0x7A84($t4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 12), 31364), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2C3D98u, 0x2C3DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3DA0u;
label_2c3da0:
    // 0x2c3da0: 0xc04b106  jal         func_12C418
label_2c3da4:
    if (ctx->pc == 0x2C3DA4u) {
        ctx->pc = 0x2C3DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3DA0u;
        // 0x2c3da4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3DA8u;
        goto label_2c3da8;
    }
    ctx->pc = 0x2C3DA0u;
    SET_GPR_U32(ctx, 31, 0x2C3DA8u);
    ctx->pc = 0x2C3DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3DA0u;
    // 0x2c3da4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C418u, 0x2C3DA0u, 0x2C3DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3DA8u;
label_2c3da8:
    // 0x2c3da8: 0xc0b0ff0  jal         func_2C3FC0
label_2c3dac:
    if (ctx->pc == 0x2C3DACu) {
        ctx->pc = 0x2C3DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3DA8u;
        // 0x2c3dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3DB0u;
        goto label_2c3db0;
    }
    ctx->pc = 0x2C3DA8u;
    SET_GPR_U32(ctx, 31, 0x2C3DB0u);
    ctx->pc = 0x2C3DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3DA8u;
    // 0x2c3dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3FC0u, 0x2C3DA8u, 0x2C3DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3DB0u;
label_2c3db0:
    // 0x2c3db0: 0x10000004  b           . + 4 + (0x4 << 2)
label_2c3db4:
    if (ctx->pc == 0x2C3DB4u) {
        ctx->pc = 0x2C3DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3DB0u;
        // 0x2c3db4: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3DB8u;
        goto label_2c3db8;
    }
    ctx->pc = 0x2C3DB0u;
    {
        const bool branch_taken_0x2c3db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3DB0u;
        // 0x2c3db4: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3db0) {
            ctx->pc = 0x2C3DC4u;
            goto label_2c3dc4;
        }
    }
    ctx->pc = 0x2C3DB8u;
label_2c3db8:
    // 0x2c3db8: 0xc0b0ff0  jal         func_2C3FC0
label_2c3dbc:
    if (ctx->pc == 0x2C3DBCu) {
        ctx->pc = 0x2C3DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3DB8u;
        // 0x2c3dbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3DC0u;
        goto label_2c3dc0;
    }
    ctx->pc = 0x2C3DB8u;
    SET_GPR_U32(ctx, 31, 0x2C3DC0u);
    ctx->pc = 0x2C3DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3DB8u;
    // 0x2c3dbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3FC0u, 0x2C3DB8u, 0x2C3DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3DC0u;
label_2c3dc0:
    // 0x2c3dc0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2c3dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_2c3dc4:
    // 0x2c3dc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c3dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3dc8:
    // 0x2c3dc8: 0xc0a523a  jal         func_2948E8
label_2c3dcc:
    if (ctx->pc == 0x2C3DCCu) {
        ctx->pc = 0x2C3DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3DC8u;
        // 0x2c3dcc: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3DD0u;
        goto label_2c3dd0;
    }
    ctx->pc = 0x2C3DC8u;
    SET_GPR_U32(ctx, 31, 0x2C3DD0u);
    ctx->pc = 0x2C3DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3DC8u;
    // 0x2c3dcc: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2948E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2948E8u, 0x2C3DC8u, 0x2C3DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3DD0u;
label_2c3dd0:
    // 0x2c3dd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c3dd4:
    // 0x2c3dd4: 0xc0b141a  jal         func_2C5068
label_2c3dd8:
    if (ctx->pc == 0x2C3DD8u) {
        ctx->pc = 0x2C3DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3DD4u;
        // 0x2c3dd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3DDCu;
        goto label_2c3ddc;
    }
    ctx->pc = 0x2C3DD4u;
    SET_GPR_U32(ctx, 31, 0x2C3DDCu);
    ctx->pc = 0x2C3DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3DD4u;
    // 0x2c3dd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5068u, 0x2C3DD4u, 0x2C3DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3DDCu;
label_2c3ddc:
    // 0x2c3ddc: 0xc0b6dac  jal         func_2DB6B0
label_2c3de0:
    if (ctx->pc == 0x2C3DE0u) {
        ctx->pc = 0x2C3DE4u;
        goto label_2c3de4;
    }
    ctx->pc = 0x2C3DDCu;
    SET_GPR_U32(ctx, 31, 0x2C3DE4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2C3DDCu, 0x2C3DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3DE4u;
label_2c3de4:
    // 0x2c3de4: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x2c3de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_2c3de8:
    // 0x2c3de8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c3de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3dec:
    // 0x2c3dec: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x2c3decu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_2c3df0:
    // 0x2c3df0: 0x8c660064  lw          $a2, 0x64($v1)
    ctx->pc = 0x2c3df0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_2c3df4:
    // 0x2c3df4: 0xc0f809  jalr        $a2
label_2c3df8:
    if (ctx->pc == 0x2C3DF8u) {
        ctx->pc = 0x2C3DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3DF4u;
        // 0x2c3df8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3DFCu;
        goto label_2c3dfc;
    }
    ctx->pc = 0x2C3DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2C3DFCu);
        ctx->pc = 0x2C3DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3DF4u;
        // 0x2c3df8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3DF4u, 0x2C3DFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C3DFCu;
label_2c3dfc:
    // 0x2c3dfc: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2c3dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2c3e00:
    // 0x2c3e00: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
label_2c3e04:
    if (ctx->pc == 0x2C3E04u) {
        ctx->pc = 0x2C3E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E00u;
        // 0x2c3e04: 0x24030058  addiu       $v1, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3E08u;
        goto label_2c3e08;
    }
    ctx->pc = 0x2C3E00u;
    {
        const bool branch_taken_0x2c3e00 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2C3E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E00u;
        // 0x2c3e04: 0x24030058  addiu       $v1, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e00) {
            ctx->pc = 0x2C3E20u;
            goto label_2c3e20;
        }
    }
    ctx->pc = 0x2C3E08u;
label_2c3e08:
    // 0x2c3e08: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x2c3e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2c3e0c:
    // 0x2c3e0c: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x2c3e0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2c3e10:
    // 0x2c3e10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c3e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2c3e14:
    // 0x2c3e14: 0x90620050  lbu         $v0, 0x50($v1)
    ctx->pc = 0x2c3e14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 80)));
label_2c3e18:
    // 0x2c3e18: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x2c3e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
label_2c3e1c:
    // 0x2c3e1c: 0xa0620050  sb          $v0, 0x50($v1)
    ctx->pc = 0x2c3e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 80), (uint8_t)GPR_U32(ctx, 2));
label_2c3e20:
    // 0x2c3e20: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2c3e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2c3e24:
    // 0x2c3e24: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2c3e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2c3e28:
    // 0x2c3e28: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c3e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2c3e2c:
    // 0x2c3e2c: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2c3e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_2c3e30:
    // 0x2c3e30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c3e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c3e34:
    // 0x2c3e34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c3e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c3e38:
    // 0x2c3e38: 0x3e00008  jr          $ra
label_2c3e3c:
    if (ctx->pc == 0x2C3E3Cu) {
        ctx->pc = 0x2C3E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E38u;
        // 0x2c3e3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3E40u;
        goto label_fallthrough_0x2c3e38;
    }
    ctx->pc = 0x2C3E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E38u;
        // 0x2c3e3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c3e38:
    ctx->pc = 0x2C3E40u;
}
