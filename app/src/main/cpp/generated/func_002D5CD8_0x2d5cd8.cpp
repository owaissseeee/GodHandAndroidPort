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

// Function: func_002D5CD8
// Address: 0x2d5cd8 - 0x2d5d60
void func_002D5CD8_0x2d5cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D5CD8_0x2d5cd8");
#endif

    switch (ctx->pc) {
        case 0x2d5d20u: goto label_2d5d20;
        case 0x2d5d34u: goto label_2d5d34;
        default: break;
    }

    ctx->pc = 0x2d5cd8u;

    // 0x2d5cd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d5cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d5cdc: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x2d5cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x2d5ce0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d5ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2d5ce4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2d5ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2d5ce8: 0x245163a8  addiu       $s1, $v0, 0x63A8
    ctx->pc = 0x2d5ce8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 25512));
    // 0x2d5cec: 0x8c4363a8  lw          $v1, 0x63A8($v0)
    ctx->pc = 0x2d5cecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7863A8u));
    // 0x2d5cf0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d5cf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5cf4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d5cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2d5cf8: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2D5CF8u;
    {
        const bool branch_taken_0x2d5cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5CF8u;
        // 0x2d5cfc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5cf8) {
            ctx->pc = 0x2D5D34u;
            goto label_2d5d34;
        }
    }
    ctx->pc = 0x2D5D00u;
    // 0x2d5d00: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2d5d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2d5d04: 0x8c620d80  lw          $v0, 0xD80($v1)
    ctx->pc = 0x2d5d04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x460D80u));
    // 0x2d5d08: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D5D08u;
    {
        const bool branch_taken_0x2d5d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5D08u;
        // 0x2d5d0c: 0x24700d80  addiu       $s0, $v1, 0xD80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5d08) {
            ctx->pc = 0x2D5D20u;
            goto label_2d5d20;
        }
    }
    ctx->pc = 0x2D5D10u;
    // 0x2d5d10: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2d5d10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2d5d14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d5d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5d18: 0xc0c7bb2  jal         func_31EEC8
    ctx->pc = 0x2D5D18u;
    SET_GPR_U32(ctx, 31, 0x2D5D20u);
    ctx->pc = 0x2D5D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5D18u;
    // 0x2d5d1c: 0x24a5d210  addiu       $a1, $a1, -0x2DF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEC8u, 0x2D5D18u, 0x2D5D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5D20u;
label_2d5d20:
    // 0x2d5d20: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2d5d20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2d5d24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d5d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5d28: 0x24a5d220  addiu       $a1, $a1, -0x2DE0
    ctx->pc = 0x2d5d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955552));
    // 0x2d5d2c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2D5D2Cu;
    SET_GPR_U32(ctx, 31, 0x2D5D34u);
    ctx->pc = 0x2D5D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5D2Cu;
    // 0x2d5d30: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2D5D2Cu, 0x2D5D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5D34u;
label_2d5d34:
    // 0x2d5d34: 0x264263a8  addiu       $v0, $s2, 0x63A8
    ctx->pc = 0x2d5d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 25512));
    // 0x2d5d38: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d5d38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d5d3c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d5d3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d5d40: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2d5d40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5d44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d5d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5d48: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5D48u;
        // 0x2d5d4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5D50u;
    // 0x2d5d50: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d5d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d5d54: 0x0  nop
    ctx->pc = 0x2d5d54u;
    // NOP
    // 0x2d5d58: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d5d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d5d5c: 0x0  nop
    ctx->pc = 0x2d5d5cu;
    // NOP
    ctx->pc = 0x2d5d60u;
}
