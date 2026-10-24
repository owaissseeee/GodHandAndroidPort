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

// Function: func_001D9CA0
// Address: 0x1d9ca0 - 0x1d9d28
void func_001D9CA0_0x1d9ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D9CA0_0x1d9ca0");
#endif

    switch (ctx->pc) {
        case 0x1d9cb4u: goto label_1d9cb4;
        case 0x1d9cccu: goto label_1d9ccc;
        case 0x1d9ce8u: goto label_1d9ce8;
        case 0x1d9d08u: goto label_1d9d08;
        default: break;
    }

    ctx->pc = 0x1d9ca0u;

    // 0x1d9ca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d9ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d9ca4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d9ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d9ca8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d9ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d9cac: 0xc07736a  jal         func_1DCDA8
    ctx->pc = 0x1D9CACu;
    SET_GPR_U32(ctx, 31, 0x1D9CB4u);
    ctx->pc = 0x1D9CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9CACu;
    // 0x1d9cb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCDA8u, 0x1D9CACu, 0x1D9CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9CB4u;
label_1d9cb4:
    // 0x1d9cb4: 0x28430008  slti        $v1, $v0, 0x8
    ctx->pc = 0x1d9cb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d9cb8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1D9CB8u;
    {
        const bool branch_taken_0x1d9cb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9CB8u;
        // 0x1d9cbc: 0xae023048  sw          $v0, 0x3048($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9cb8) {
            ctx->pc = 0x1D9CF0u;
            goto label_1d9cf0;
        }
    }
    ctx->pc = 0x1D9CC0u;
    // 0x1d9cc0: 0x92053048  lbu         $a1, 0x3048($s0)
    ctx->pc = 0x1d9cc0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12360)));
    // 0x1d9cc4: 0xc077a16  jal         func_1DE858
    ctx->pc = 0x1D9CC4u;
    SET_GPR_U32(ctx, 31, 0x1D9CCCu);
    ctx->pc = 0x1D9CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9CC4u;
    // 0x1d9cc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE858u, 0x1D9CC4u, 0x1D9CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9CCCu;
label_1d9ccc:
    // 0x1d9ccc: 0x8e023048  lw          $v0, 0x3048($s0)
    ctx->pc = 0x1d9cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12360)));
    // 0x1d9cd0: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1d9cd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d9cd4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D9CD4u;
    {
        const bool branch_taken_0x1d9cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9CD4u;
        // 0x1d9cd8: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9cd4) {
            ctx->pc = 0x1D9CF0u;
            goto label_1d9cf0;
        }
    }
    ctx->pc = 0x1D9CDCu;
    // 0x1d9cdc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d9cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d9ce0: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x1D9CE0u;
    SET_GPR_U32(ctx, 31, 0x1D9CE8u);
    ctx->pc = 0x1D9CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9CE0u;
    // 0x1d9ce4: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x1D9CE0u, 0x1D9CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9CE8u;
label_1d9ce8:
    // 0x1d9ce8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D9CE8u;
    {
        const bool branch_taken_0x1d9ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9CE8u;
        // 0x1d9cec: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9ce8) {
            ctx->pc = 0x1D9D0Cu;
            goto label_1d9d0c;
        }
    }
    ctx->pc = 0x1D9CF0u;
label_1d9cf0:
    // 0x1d9cf0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d9cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d9cf4: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x1d9cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1d9cf8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d9cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d9cfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d9cfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d00: 0xc0b4584  jal         func_2D1610
    ctx->pc = 0x1D9D00u;
    SET_GPR_U32(ctx, 31, 0x1D9D08u);
    ctx->pc = 0x1D9D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D00u;
    // 0x1d9d04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1610u, 0x1D9D00u, 0x1D9D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D08u;
label_1d9d08:
    // 0x1d9d08: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1d9d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d9d0c:
    // 0x1d9d0c: 0xa2003025  sb          $zero, 0x3025($s0)
    ctx->pc = 0x1d9d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12325), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d9d10: 0xa2023024  sb          $v0, 0x3024($s0)
    ctx->pc = 0x1d9d10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12324), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d9d14: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d9d14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9d18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d9d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D1Cu;
        // 0x1d9d20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9D24u;
    // 0x1d9d24: 0x0  nop
    ctx->pc = 0x1d9d24u;
    // NOP
    ctx->pc = 0x1d9d28u;
}
