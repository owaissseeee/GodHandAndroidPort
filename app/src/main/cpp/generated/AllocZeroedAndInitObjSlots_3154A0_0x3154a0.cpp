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

// Function: AllocZeroedAndInitObjSlots_3154A0
// Address: 0x3154a0 - 0x315510
void AllocZeroedAndInitObjSlots_3154A0_0x3154a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocZeroedAndInitObjSlots_3154A0_0x3154a0");
#endif

    switch (ctx->pc) {
        case 0x3154d4u: goto label_3154d4;
        case 0x3154ecu: goto label_3154ec;
        case 0x3154f4u: goto label_3154f4;
        default: break;
    }

    ctx->pc = 0x3154a0u;

    // 0x3154a0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x3154a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x3154a4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3154a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3154a8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x3154a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x3154ac: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3154acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3154b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3154b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3154b4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3154b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3154b8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3154B8u;
    {
        const bool branch_taken_0x3154b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3154BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3154B8u;
        // 0x3154bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3154b8) {
            ctx->pc = 0x3154FCu;
            goto label_3154fc;
        }
    }
    ctx->pc = 0x3154C0u;
    // 0x3154c0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x3154c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x3154c4: 0x24040860  addiu       $a0, $zero, 0x860
    ctx->pc = 0x3154c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2144));
    // 0x3154c8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x3154c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x3154cc: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x3154CCu;
    SET_GPR_U32(ctx, 31, 0x3154D4u);
    ctx->pc = 0x3154D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3154CCu;
    // 0x3154d0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x3154CCu, 0x3154D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3154D4u;
label_3154d4:
    // 0x3154d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3154d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3154d8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3154D8u;
    {
        const bool branch_taken_0x3154d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3154DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3154D8u;
        // 0x3154dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3154d8) {
            ctx->pc = 0x3154FCu;
            goto label_3154fc;
        }
    }
    ctx->pc = 0x3154E0u;
    // 0x3154e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3154e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3154e4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3154E4u;
    SET_GPR_U32(ctx, 31, 0x3154ECu);
    ctx->pc = 0x3154E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3154E4u;
    // 0x3154e8: 0x24060860  addiu       $a2, $zero, 0x860 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3154E4u, 0x3154ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3154ECu;
label_3154ec:
    // 0x3154ec: 0xc067b8c  jal         func_19EE30
    ctx->pc = 0x3154ECu;
    SET_GPR_U32(ctx, 31, 0x3154F4u);
    ctx->pc = 0x3154F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3154ECu;
    // 0x3154f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE30u, 0x3154ECu, 0x3154F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3154F4u;
label_3154f4:
    // 0x3154f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3154F4u;
    {
        const bool branch_taken_0x3154f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3154F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3154F4u;
        // 0x3154f8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3154f4) {
            ctx->pc = 0x315504u;
            goto label_315504;
        }
    }
    ctx->pc = 0x3154FCu;
label_3154fc:
    // 0x3154fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3154fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315500: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x315500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_315504:
    // 0x315504: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x315504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315508: 0x3e00008  jr          $ra
    ctx->pc = 0x315508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315508u;
        // 0x31550c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315510u;
}
