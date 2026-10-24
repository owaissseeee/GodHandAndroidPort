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

// Function: ForwardInitBuffer_314CC0
// Address: 0x314cc0 - 0x314d30
void ForwardInitBuffer_314CC0_0x314cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_314CC0_0x314cc0");
#endif

    switch (ctx->pc) {
        case 0x314cf4u: goto label_314cf4;
        case 0x314d0cu: goto label_314d0c;
        case 0x314d14u: goto label_314d14;
        default: break;
    }

    ctx->pc = 0x314cc0u;

    // 0x314cc0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x314cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x314cc4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x314cc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x314cc8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x314cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x314ccc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x314cccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x314cd0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x314cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x314cd4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x314cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x314cd8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x314CD8u;
    {
        const bool branch_taken_0x314cd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x314CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314CD8u;
        // 0x314cdc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314cd8) {
            ctx->pc = 0x314D1Cu;
            goto label_314d1c;
        }
    }
    ctx->pc = 0x314CE0u;
    // 0x314ce0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x314ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x314ce4: 0x240408c0  addiu       $a0, $zero, 0x8C0
    ctx->pc = 0x314ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2240));
    // 0x314ce8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x314ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x314cec: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x314CECu;
    SET_GPR_U32(ctx, 31, 0x314CF4u);
    ctx->pc = 0x314CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314CECu;
    // 0x314cf0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x314CECu, 0x314CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314CF4u;
label_314cf4:
    // 0x314cf4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x314cf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314cf8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x314CF8u;
    {
        const bool branch_taken_0x314cf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x314CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314CF8u;
        // 0x314cfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314cf8) {
            ctx->pc = 0x314D1Cu;
            goto label_314d1c;
        }
    }
    ctx->pc = 0x314D00u;
    // 0x314d00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x314d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314d04: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x314D04u;
    SET_GPR_U32(ctx, 31, 0x314D0Cu);
    ctx->pc = 0x314D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314D04u;
    // 0x314d08: 0x240608c0  addiu       $a2, $zero, 0x8C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x314D04u, 0x314D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314D0Cu;
label_314d0c:
    // 0x314d0c: 0xc066b06  jal         func_19AC18
    ctx->pc = 0x314D0Cu;
    SET_GPR_U32(ctx, 31, 0x314D14u);
    ctx->pc = 0x314D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314D0Cu;
    // 0x314d10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19AC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19AC18u, 0x314D0Cu, 0x314D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314D14u;
label_314d14:
    // 0x314d14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x314D14u;
    {
        const bool branch_taken_0x314d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D14u;
        // 0x314d18: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314d14) {
            ctx->pc = 0x314D24u;
            goto label_314d24;
        }
    }
    ctx->pc = 0x314D1Cu;
label_314d1c:
    // 0x314d1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x314d1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314d20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x314d20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_314d24:
    // 0x314d24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314d28: 0x3e00008  jr          $ra
    ctx->pc = 0x314D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D28u;
        // 0x314d2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314D30u;
}
