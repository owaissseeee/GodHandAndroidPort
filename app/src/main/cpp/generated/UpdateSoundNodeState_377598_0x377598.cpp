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

// Function: UpdateSoundNodeState_377598
// Address: 0x377598 - 0x3775e8
void UpdateSoundNodeState_377598_0x377598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateSoundNodeState_377598_0x377598");
#endif

    switch (ctx->pc) {
        case 0x3775d0u: goto label_3775d0;
        case 0x3775d8u: goto label_3775d8;
        default: break;
    }

    ctx->pc = 0x377598u;

    // 0x377598: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x377598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37759c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37759cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3775a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3775a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3775a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3775a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3775a8: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x3775a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3775ac: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x3775acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x3775b0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3775B0u;
    {
        const bool branch_taken_0x3775b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3775B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3775B0u;
        // 0x3775b4: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3775b0) {
            ctx->pc = 0x3775D0u;
            goto label_3775d0;
        }
    }
    ctx->pc = 0x3775B8u;
    // 0x3775b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3775B8u;
    {
        const bool branch_taken_0x3775b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3775BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3775B8u;
        // 0x3775bc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3775b8) {
            ctx->pc = 0x3775C8u;
            goto label_3775c8;
        }
    }
    ctx->pc = 0x3775C0u;
    // 0x3775c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3775C0u;
    {
        const bool branch_taken_0x3775c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3775C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3775C0u;
        // 0x3775c4: 0xa6020014  sh          $v0, 0x14($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3775c0) {
            ctx->pc = 0x3775D8u;
            goto label_3775d8;
        }
    }
    ctx->pc = 0x3775C8u;
label_3775c8:
    // 0x3775c8: 0xc0ddd7c  jal         func_3775F0
    ctx->pc = 0x3775C8u;
    SET_GPR_U32(ctx, 31, 0x3775D0u);
    ctx->pc = 0x3775CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3775C8u;
    // 0x3775cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3775F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3775F0u, 0x3775C8u, 0x3775D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3775D0u;
label_3775d0:
    // 0x3775d0: 0xc0dddc0  jal         func_377700
    ctx->pc = 0x3775D0u;
    SET_GPR_U32(ctx, 31, 0x3775D8u);
    ctx->pc = 0x3775D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3775D0u;
    // 0x3775d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377700u, 0x3775D0u, 0x3775D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3775D8u;
label_3775d8:
    // 0x3775d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3775d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3775dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3775dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3775e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3775E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3775E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3775E0u;
        // 0x3775e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3775E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3775E8u;
}
