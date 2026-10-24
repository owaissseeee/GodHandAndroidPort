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

// Function: cE3_runDemo
// Address: 0x201d20 - 0x201e80
void cE3_runDemo_0x201d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cE3_runDemo_0x201d20");
#endif

    switch (ctx->pc) {
        case 0x201d94u: goto label_201d94;
        case 0x201dbcu: goto label_201dbc;
        case 0x201e3cu: goto label_201e3c;
        case 0x201e44u: goto label_201e44;
        default: break;
    }

    ctx->pc = 0x201d20u;

    // 0x201d20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x201d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x201d24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x201d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201d28: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x201d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x201d2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x201d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x201d30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x201d30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201d34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201d38: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x201d38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x201d3c: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x201D3Cu;
    {
        const bool branch_taken_0x201d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x201D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D3Cu;
        // 0x201d40: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d3c) {
            ctx->pc = 0x201DC8u;
            goto label_201dc8;
        }
    }
    ctx->pc = 0x201D44u;
    // 0x201d44: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x201D44u;
    {
        const bool branch_taken_0x201d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201d44) {
            ctx->pc = 0x201D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201D44u;
            // 0x201d48: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201D5Cu;
            goto label_201d5c;
        }
    }
    ctx->pc = 0x201D4Cu;
    // 0x201d4c: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x201D4Cu;
    {
        const bool branch_taken_0x201d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x201d4c) {
            ctx->pc = 0x201D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201D4Cu;
            // 0x201d50: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201D6Cu;
            goto label_201d6c;
        }
    }
    ctx->pc = 0x201D54u;
    // 0x201d54: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x201D54u;
    {
        const bool branch_taken_0x201d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D54u;
        // 0x201d58: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d54) {
            ctx->pc = 0x201E70u;
            goto label_201e70;
        }
    }
    ctx->pc = 0x201D5Cu;
label_201d5c:
    // 0x201d5c: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x201D5Cu;
    {
        const bool branch_taken_0x201d5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x201D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D5Cu;
        // 0x201d60: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d5c) {
            ctx->pc = 0x201E54u;
            goto label_201e54;
        }
    }
    ctx->pc = 0x201D64u;
    // 0x201d64: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x201D64u;
    {
        const bool branch_taken_0x201d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D64u;
        // 0x201d68: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d64) {
            ctx->pc = 0x201E74u;
            goto label_201e74;
        }
    }
    ctx->pc = 0x201D6Cu;
label_201d6c:
    // 0x201d6c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x201D6Cu;
    {
        const bool branch_taken_0x201d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D6Cu;
        // 0x201d70: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d6c) {
            ctx->pc = 0x201D9Cu;
            goto label_201d9c;
        }
    }
    ctx->pc = 0x201D74u;
    // 0x201d74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x201d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201d78: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x201d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x201d7c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x201d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x201d80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x201d80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201d84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x201d84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201d88: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x201d88u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x201d8c: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x201D8Cu;
    SET_GPR_U32(ctx, 31, 0x201D94u);
    ctx->pc = 0x201D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201D8Cu;
    // 0x201d90: 0x240a003c  addiu       $t2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x201D8Cu, 0x201D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201D94u;
label_201d94:
    // 0x201d94: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x201D94u;
    {
        const bool branch_taken_0x201d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D94u;
        // 0x201d98: 0x92020001  lbu         $v0, 0x1($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d94) {
            ctx->pc = 0x201DC0u;
            goto label_201dc0;
        }
    }
    ctx->pc = 0x201D9Cu;
label_201d9c:
    // 0x201d9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x201d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201da0: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x201da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x201da4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x201da4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x201da8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x201da8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201dac: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x201dacu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x201db0: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x201db0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x201db4: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x201DB4u;
    SET_GPR_U32(ctx, 31, 0x201DBCu);
    ctx->pc = 0x201DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201DB4u;
    // 0x201db8: 0x240a003c  addiu       $t2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x201DB4u, 0x201DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201DBCu;
label_201dbc:
    // 0x201dbc: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x201dbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_201dc0:
    // 0x201dc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x201dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x201dc4: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x201dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_201dc8:
    // 0x201dc8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x201dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x201dcc: 0x24717470  addiu       $s1, $v1, 0x7470
    ctx->pc = 0x201dccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 29808));
    // 0x201dd0: 0x9222001c  lbu         $v0, 0x1C($s1)
    ctx->pc = 0x201dd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x201dd4: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x201dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x201dd8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x201dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x201ddc: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x201DDCu;
    {
        const bool branch_taken_0x201ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201DDCu;
        // 0x201de0: 0x3c090074  lui         $t1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201ddc) {
            ctx->pc = 0x201E6Cu;
            goto label_201e6c;
        }
    }
    ctx->pc = 0x201DE4u;
    // 0x201de4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x201de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x201de8: 0x8d227a78  lw          $v0, 0x7A78($t1)
    ctx->pc = 0x201de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 31352)));
    // 0x201dec: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x201decu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x201df0: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x201df0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x201df4: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x201df4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x201df8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x201df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x201dfc: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x201dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
    // 0x201e00: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x201e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x201e04: 0x3c080400  lui         $t0, 0x400
    ctx->pc = 0x201e04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1024 << 16));
    // 0x201e08: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x201e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x201e0c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x201e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x201e10: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x201e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x201e14: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x201e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x201e18: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x201e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x201e1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x201e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201e20: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x201e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x201e24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x201e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x201e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x201e2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x201e2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e30: 0xad227a78  sw          $v0, 0x7A78($t1)
    ctx->pc = 0x201e30u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 31352), GPR_U32(ctx, 2));
    // 0x201e34: 0xc0c3970  jal         func_30E5C0
    ctx->pc = 0x201E34u;
    SET_GPR_U32(ctx, 31, 0x201E3Cu);
    ctx->pc = 0x201E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201E34u;
    // 0x201e38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E5C0u, 0x201E34u, 0x201E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201E3Cu;
label_201e3c:
    // 0x201e3c: 0xc0c1db8  jal         func_3076E0
    ctx->pc = 0x201E3Cu;
    SET_GPR_U32(ctx, 31, 0x201E44u);
    ctx->pc = 0x201E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201E3Cu;
    // 0x201e40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3076E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3076E0u, 0x201E3Cu, 0x201E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201E44u;
label_201e44:
    // 0x201e44: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x201e44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x201e48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x201e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x201e4c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x201E4Cu;
    {
        const bool branch_taken_0x201e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E4Cu;
        // 0x201e50: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201e4c) {
            ctx->pc = 0x201E6Cu;
            goto label_201e6c;
        }
    }
    ctx->pc = 0x201E54u;
label_201e54:
    // 0x201e54: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x201e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x201e58: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x201e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x201e5c: 0x8c827a24  lw          $v0, 0x7A24($a0)
    ctx->pc = 0x201e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x201e60: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x201e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x201e64: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x201e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x201e68: 0xac827a24  sw          $v0, 0x7A24($a0)
    ctx->pc = 0x201e68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 31268), GPR_U32(ctx, 2));
label_201e6c:
    // 0x201e6c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x201e6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_201e70:
    // 0x201e70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x201e70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_201e74:
    // 0x201e74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201e78: 0x3e00008  jr          $ra
    ctx->pc = 0x201E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E78u;
        // 0x201e7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201E80u;
}
