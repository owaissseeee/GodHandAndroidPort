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

// Function: AllocZeroedAndInitVu0SlotArray5B_3156D0
// Address: 0x3156d0 - 0x315740
void AllocZeroedAndInitVu0SlotArray5B_3156D0_0x3156d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocZeroedAndInitVu0SlotArray5B_3156D0_0x3156d0");
#endif

    switch (ctx->pc) {
        case 0x315704u: goto label_315704;
        case 0x31571cu: goto label_31571c;
        case 0x315724u: goto label_315724;
        default: break;
    }

    ctx->pc = 0x3156d0u;

    // 0x3156d0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x3156d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x3156d4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3156d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3156d8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x3156d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x3156dc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3156dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3156e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3156e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3156e4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3156e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3156e8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3156E8u;
    {
        const bool branch_taken_0x3156e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3156ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3156E8u;
        // 0x3156ec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3156e8) {
            ctx->pc = 0x31572Cu;
            goto label_31572c;
        }
    }
    ctx->pc = 0x3156F0u;
    // 0x3156f0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x3156f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x3156f4: 0x24040860  addiu       $a0, $zero, 0x860
    ctx->pc = 0x3156f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2144));
    // 0x3156f8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x3156f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x3156fc: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x3156FCu;
    SET_GPR_U32(ctx, 31, 0x315704u);
    ctx->pc = 0x315700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3156FCu;
    // 0x315700: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x3156FCu, 0x315704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315704u;
label_315704:
    // 0x315704: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x315704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315708: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x315708u;
    {
        const bool branch_taken_0x315708 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315708u;
        // 0x31570c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315708) {
            ctx->pc = 0x31572Cu;
            goto label_31572c;
        }
    }
    ctx->pc = 0x315710u;
    // 0x315710: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x315710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315714: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x315714u;
    SET_GPR_U32(ctx, 31, 0x31571Cu);
    ctx->pc = 0x315718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315714u;
    // 0x315718: 0x24060860  addiu       $a2, $zero, 0x860 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x315714u, 0x31571Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31571Cu;
label_31571c:
    // 0x31571c: 0xc068182  jal         func_1A0608
    ctx->pc = 0x31571Cu;
    SET_GPR_U32(ctx, 31, 0x315724u);
    ctx->pc = 0x315720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31571Cu;
    // 0x315720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0608u, 0x31571Cu, 0x315724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315724u;
label_315724:
    // 0x315724: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x315724u;
    {
        const bool branch_taken_0x315724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315724u;
        // 0x315728: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315724) {
            ctx->pc = 0x315734u;
            goto label_315734;
        }
    }
    ctx->pc = 0x31572Cu;
label_31572c:
    // 0x31572c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31572cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315730: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x315730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_315734:
    // 0x315734: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x315734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315738: 0x3e00008  jr          $ra
    ctx->pc = 0x315738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315738u;
        // 0x31573c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315740u;
}
