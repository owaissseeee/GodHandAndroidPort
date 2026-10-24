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

// Function: func_00186D90
// Address: 0x186d90 - 0x186e08
void func_00186D90_0x186d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00186D90_0x186d90");
#endif

    switch (ctx->pc) {
        case 0x186da8u: goto label_186da8;
        default: break;
    }

    ctx->pc = 0x186d90u;

    // 0x186d90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x186d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x186d94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x186d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x186d98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x186d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x186d9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x186d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186da0: 0xc06dce0  jal         func_1B7380
    ctx->pc = 0x186DA0u;
    SET_GPR_U32(ctx, 31, 0x186DA8u);
    ctx->pc = 0x186DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186DA0u;
    // 0x186da4: 0x8e050650  lw          $a1, 0x650($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x186DA0u, 0x186DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186DA8u;
label_186da8:
    // 0x186da8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x186da8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186dac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x186dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x186db0: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x186DB0u;
    {
        const bool branch_taken_0x186db0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x186db0) {
            ctx->pc = 0x186DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186DB0u;
            // 0x186db4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186DF8u;
            goto label_186df8;
        }
    }
    ctx->pc = 0x186DB8u;
    // 0x186db8: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x186db8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x186dbc: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x186DBCu;
    {
        const bool branch_taken_0x186dbc = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x186dbc) {
            ctx->pc = 0x186DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186DBCu;
            // 0x186dc0: 0xa20302f4  sb          $v1, 0x2F4($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186DE8u;
            goto label_186de8;
        }
    }
    ctx->pc = 0x186DC4u;
    // 0x186dc4: 0x8e0305b0  lw          $v1, 0x5B0($s0)
    ctx->pc = 0x186dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x186dc8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x186dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x186dcc: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x186dccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x186dd0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x186dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x186dd4: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x186dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x186dd8: 0xae0305b0  sw          $v1, 0x5B0($s0)
    ctx->pc = 0x186dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 3));
    // 0x186ddc: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x186ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x186de0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x186DE0u;
    {
        const bool branch_taken_0x186de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186DE0u;
        // 0x186de4: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186de0) {
            ctx->pc = 0x186DF4u;
            goto label_186df4;
        }
    }
    ctx->pc = 0x186DE8u;
label_186de8:
    // 0x186de8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x186de8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x186dec: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x186decu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x186df0: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x186df0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_186df4:
    // 0x186df4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x186df4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_186df8:
    // 0x186df8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x186DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186DFCu;
        // 0x186e00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186E04u;
    // 0x186e04: 0x0  nop
    ctx->pc = 0x186e04u;
    // NOP
    ctx->pc = 0x186e08u;
}
