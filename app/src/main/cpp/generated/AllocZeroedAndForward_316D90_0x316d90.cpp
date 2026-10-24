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

// Function: AllocZeroedAndForward_316D90
// Address: 0x316d90 - 0x316e00
void AllocZeroedAndForward_316D90_0x316d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocZeroedAndForward_316D90_0x316d90");
#endif

    switch (ctx->pc) {
        case 0x316dc4u: goto label_316dc4;
        case 0x316ddcu: goto label_316ddc;
        case 0x316de4u: goto label_316de4;
        default: break;
    }

    ctx->pc = 0x316d90u;

    // 0x316d90: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x316d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x316d94: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x316d94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x316d98: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x316d98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x316d9c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x316d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x316da0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x316da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x316da4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x316da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x316da8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x316DA8u;
    {
        const bool branch_taken_0x316da8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x316DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316DA8u;
        // 0x316dac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316da8) {
            ctx->pc = 0x316DECu;
            goto label_316dec;
        }
    }
    ctx->pc = 0x316DB0u;
    // 0x316db0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x316db0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x316db4: 0x24042b10  addiu       $a0, $zero, 0x2B10
    ctx->pc = 0x316db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11024));
    // 0x316db8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x316db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x316dbc: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x316DBCu;
    SET_GPR_U32(ctx, 31, 0x316DC4u);
    ctx->pc = 0x316DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316DBCu;
    // 0x316dc0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x316DBCu, 0x316DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316DC4u;
label_316dc4:
    // 0x316dc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316dc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316dc8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x316DC8u;
    {
        const bool branch_taken_0x316dc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x316DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316DC8u;
        // 0x316dcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316dc8) {
            ctx->pc = 0x316DECu;
            goto label_316dec;
        }
    }
    ctx->pc = 0x316DD0u;
    // 0x316dd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x316dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316dd4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x316DD4u;
    SET_GPR_U32(ctx, 31, 0x316DDCu);
    ctx->pc = 0x316DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316DD4u;
    // 0x316dd8: 0x24062b10  addiu       $a2, $zero, 0x2B10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x316DD4u, 0x316DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316DDCu;
label_316ddc:
    // 0x316ddc: 0xc05c41c  jal         func_171070
    ctx->pc = 0x316DDCu;
    SET_GPR_U32(ctx, 31, 0x316DE4u);
    ctx->pc = 0x316DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316DDCu;
    // 0x316de0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171070u, 0x316DDCu, 0x316DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316DE4u;
label_316de4:
    // 0x316de4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x316DE4u;
    {
        const bool branch_taken_0x316de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316DE4u;
        // 0x316de8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316de4) {
            ctx->pc = 0x316DF4u;
            goto label_316df4;
        }
    }
    ctx->pc = 0x316DECu;
label_316dec:
    // 0x316dec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x316decu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316df0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x316df0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_316df4:
    // 0x316df4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x316df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316df8: 0x3e00008  jr          $ra
    ctx->pc = 0x316DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316DF8u;
        // 0x316dfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316E00u;
}
