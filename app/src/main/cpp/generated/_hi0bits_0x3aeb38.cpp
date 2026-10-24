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

// Function: _hi0bits
// Address: 0x3aeb38 - 0x3aebc0
void _hi0bits_0x3aeb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_hi0bits_0x3aeb38");
#endif

    ctx->pc = 0x3aeb38u;

    // 0x3aeb38: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3aeb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3aeb3c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3aeb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3aeb40: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AEB40u;
    {
        const bool branch_taken_0x3aeb40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AEB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEB40u;
        // 0x3aeb44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aeb40) {
            ctx->pc = 0x3AEB50u;
            goto label_3aeb50;
        }
    }
    ctx->pc = 0x3AEB48u;
    // 0x3aeb48: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3aeb48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3aeb4c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3aeb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_3aeb50:
    // 0x3aeb50: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x3aeb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x3aeb54: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3aeb54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3aeb58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AEB58u;
    {
        const bool branch_taken_0x3aeb58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aeb58) {
            ctx->pc = 0x3AEB68u;
            goto label_3aeb68;
        }
    }
    ctx->pc = 0x3AEB60u;
    // 0x3aeb60: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3aeb60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3aeb64: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x3aeb64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_3aeb68:
    // 0x3aeb68: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x3aeb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x3aeb6c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3aeb6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3aeb70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AEB70u;
    {
        const bool branch_taken_0x3aeb70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aeb70) {
            ctx->pc = 0x3AEB80u;
            goto label_3aeb80;
        }
    }
    ctx->pc = 0x3AEB78u;
    // 0x3aeb78: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3aeb78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3aeb7c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3aeb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_3aeb80:
    // 0x3aeb80: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x3aeb80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x3aeb84: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3aeb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3aeb88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AEB88u;
    {
        const bool branch_taken_0x3aeb88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aeb88) {
            ctx->pc = 0x3AEB98u;
            goto label_3aeb98;
        }
    }
    ctx->pc = 0x3AEB90u;
    // 0x3aeb90: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3aeb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3aeb94: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3aeb94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3aeb98:
    // 0x3aeb98: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AEB98u;
    {
        const bool branch_taken_0x3aeb98 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x3AEB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEB98u;
        // 0x3aeb9c: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aeb98) {
            ctx->pc = 0x3AEBB0u;
            goto label_3aebb0;
        }
    }
    ctx->pc = 0x3AEBA0u;
    // 0x3aeba0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3aeba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3aeba4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3aeba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3aeba8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3AEBA8u;
    {
        const bool branch_taken_0x3aeba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEBA8u;
        // 0x3aebac: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aeba8) {
            ctx->pc = 0x3AEBB4u;
            goto label_3aebb4;
        }
    }
    ctx->pc = 0x3AEBB0u;
label_3aebb0:
    // 0x3aebb0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3aebb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3aebb4:
    // 0x3aebb4: 0x3e00008  jr          $ra
    ctx->pc = 0x3AEBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AEBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AEBBCu;
    // 0x3aebbc: 0x0  nop
    ctx->pc = 0x3aebbcu;
    // NOP
    ctx->pc = 0x3aebc0u;
}
