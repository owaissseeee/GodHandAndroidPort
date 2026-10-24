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

// Function: ForwardInitVtable214Buffer_3137B0
// Address: 0x3137b0 - 0x313820
void ForwardInitVtable214Buffer_3137B0_0x3137b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitVtable214Buffer_3137B0_0x3137b0");
#endif

    switch (ctx->pc) {
        case 0x3137e4u: goto label_3137e4;
        case 0x3137fcu: goto label_3137fc;
        case 0x313804u: goto label_313804;
        default: break;
    }

    ctx->pc = 0x3137b0u;

    // 0x3137b0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x3137b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x3137b4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3137b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3137b8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x3137b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x3137bc: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x3137bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x3137c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3137c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3137c4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3137c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3137c8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3137C8u;
    {
        const bool branch_taken_0x3137c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3137CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3137C8u;
        // 0x3137cc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3137c8) {
            ctx->pc = 0x31380Cu;
            goto label_31380c;
        }
    }
    ctx->pc = 0x3137D0u;
    // 0x3137d0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x3137d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x3137d4: 0x240415b0  addiu       $a0, $zero, 0x15B0
    ctx->pc = 0x3137d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5552));
    // 0x3137d8: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x3137d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
    // 0x3137dc: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x3137DCu;
    SET_GPR_U32(ctx, 31, 0x3137E4u);
    ctx->pc = 0x3137E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3137DCu;
    // 0x3137e0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x3137DCu, 0x3137E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3137E4u;
label_3137e4:
    // 0x3137e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3137e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3137e8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3137E8u;
    {
        const bool branch_taken_0x3137e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3137ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3137E8u;
        // 0x3137ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3137e8) {
            ctx->pc = 0x31380Cu;
            goto label_31380c;
        }
    }
    ctx->pc = 0x3137F0u;
    // 0x3137f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3137f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3137f4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3137F4u;
    SET_GPR_U32(ctx, 31, 0x3137FCu);
    ctx->pc = 0x3137F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3137F4u;
    // 0x3137f8: 0x240615b0  addiu       $a2, $zero, 0x15B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3137F4u, 0x3137FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3137FCu;
label_3137fc:
    // 0x3137fc: 0xc09e73a  jal         func_279CE8
    ctx->pc = 0x3137FCu;
    SET_GPR_U32(ctx, 31, 0x313804u);
    ctx->pc = 0x313800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3137FCu;
    // 0x313800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279CE8u, 0x3137FCu, 0x313804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313804u;
label_313804:
    // 0x313804: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x313804u;
    {
        const bool branch_taken_0x313804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313804u;
        // 0x313808: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313804) {
            ctx->pc = 0x313814u;
            goto label_313814;
        }
    }
    ctx->pc = 0x31380Cu;
label_31380c:
    // 0x31380c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31380cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313810: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x313810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_313814:
    // 0x313814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313818: 0x3e00008  jr          $ra
    ctx->pc = 0x313818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313818u;
        // 0x31381c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313820u;
}
