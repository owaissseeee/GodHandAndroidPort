#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: func_007CEC48
// Address: 0x7cec48 - 0x7cecc8
void func_007CEC48_0x7cec48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007CEC48_0x7cec48");
#endif

    switch (ctx->pc) {
        case 0x7cec98u: goto label_7cec98;
        case 0x7cecb4u: goto label_7cecb4;
        default: break;
    }

    ctx->pc = 0x7cec48u;

    // 0x7cec48: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cec48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cec4c: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7cec4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7cec50: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x7cec50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x7cec54: 0x3c06007d  lui         $a2, 0x7D
    ctx->pc = 0x7cec54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)125 << 16));
    // 0x7cec58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7cec58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7cec5c: 0x2442ebe0  addiu       $v0, $v0, -0x1420
    ctx->pc = 0x7cec5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962144));
    // 0x7cec60: 0x24635090  addiu       $v1, $v1, 0x5090
    ctx->pc = 0x7cec60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20624));
    // 0x7cec64: 0x24a58cf0  addiu       $a1, $a1, -0x7310
    ctx->pc = 0x7cec64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937840));
    // 0x7cec68: 0x24c613e0  addiu       $a2, $a2, 0x13E0
    ctx->pc = 0x7cec68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5088));
    // 0x7cec6c: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x7cec6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x7cec70: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x7cec70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x7cec74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x7cec74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cec78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x7cec78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x7cec7c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x7cec7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x7cec80: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x7cec80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x7cec84: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x7cec84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x7cec88: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x7cec88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x7cec8c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x7cec8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x7cec90: 0xc0ebea8  jal         func_3AFAA0
    ctx->pc = 0x7CEC90u;
    SET_GPR_U32(ctx, 31, 0x7CEC98u);
    ctx->pc = 0x7CEC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CEC90u;
    // 0x7cec94: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFAA0u, 0x7CEC90u, 0x7CEC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CEC98u;
label_7cec98:
    // 0x7cec98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7cec98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cec9c: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CEC9Cu;
    {
        const bool branch_taken_0x7cec9c = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x7CECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CEC9Cu;
        // 0x7ceca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cec9c) {
            ctx->pc = 0x7CECACu;
            goto label_7cecac;
        }
    }
    ctx->pc = 0x7CECA4u;
    // 0x7ceca4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7CECA4u;
    {
        const bool branch_taken_0x7ceca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CECA4u;
        // 0x7ceca8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ceca4) {
            ctx->pc = 0x7CECB8u;
            goto label_7cecb8;
        }
    }
    ctx->pc = 0x7CECACu;
label_7cecac:
    // 0x7cecac: 0xc0ec2ea  jal         func_3B0BA8
    ctx->pc = 0x7CECACu;
    SET_GPR_U32(ctx, 31, 0x7CECB4u);
    ctx->pc = 0x7CECB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CECACu;
    // 0x7cecb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0BA8u, 0x7CECACu, 0x7CECB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CECB4u;
label_7cecb4:
    // 0x7cecb4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x7cecb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7cecb8:
    // 0x7cecb8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x7cecb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7cecbc: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x7cecbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7cecc0: 0x3e00008  jr          $ra
    ctx->pc = 0x7CECC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CECC0u;
        // 0x7cecc4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CECC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CECC8u;
}
} // namespace gh_mcport
