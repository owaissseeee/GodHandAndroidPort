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

// Function: ResetNodeData_3733C8
// Address: 0x3733c8 - 0x373430
void ResetNodeData_3733C8_0x3733c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetNodeData_3733C8_0x3733c8");
#endif

    switch (ctx->pc) {
        case 0x3733dcu: goto label_3733dc;
        case 0x3733ecu: goto label_3733ec;
        case 0x373400u: goto label_373400;
        case 0x373410u: goto label_373410;
        case 0x373420u: goto label_373420;
        default: break;
    }

    ctx->pc = 0x3733c8u;

    // 0x3733c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3733c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3733cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3733ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3733d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3733d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3733d4: 0xc0dce94  jal         func_373A50
    ctx->pc = 0x3733D4u;
    SET_GPR_U32(ctx, 31, 0x3733DCu);
    ctx->pc = 0x3733D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3733D4u;
    // 0x3733d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A50u, 0x3733D4u, 0x3733DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3733DCu;
label_3733dc:
    // 0x3733dc: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x3733DCu;
    {
        const bool branch_taken_0x3733dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3733dc) {
            ctx->pc = 0x3733E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3733DCu;
            // 0x3733e0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x373424u;
            goto label_373424;
        }
    }
    ctx->pc = 0x3733E4u;
    // 0x3733e4: 0xc0dcec8  jal         func_373B20
    ctx->pc = 0x3733E4u;
    SET_GPR_U32(ctx, 31, 0x3733ECu);
    ctx->pc = 0x3733E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3733E4u;
    // 0x3733e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373B20u, 0x3733E4u, 0x3733ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3733ECu;
label_3733ec:
    // 0x3733ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3733ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3733f0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3733F0u;
    {
        const bool branch_taken_0x3733f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3733f0) {
            ctx->pc = 0x373408u;
            goto label_373408;
        }
    }
    ctx->pc = 0x3733F8u;
    // 0x3733f8: 0xc0dd0c6  jal         func_374318
    ctx->pc = 0x3733F8u;
    SET_GPR_U32(ctx, 31, 0x373400u);
    ctx->pc = 0x3733FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3733F8u;
    // 0x3733fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374318u, 0x3733F8u, 0x373400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373400u;
label_373400:
    // 0x373400: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x373400u;
    {
        const bool branch_taken_0x373400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373400u;
        // 0x373404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373400) {
            ctx->pc = 0x373414u;
            goto label_373414;
        }
    }
    ctx->pc = 0x373408u;
label_373408:
    // 0x373408: 0xc0dcf52  jal         func_373D48
    ctx->pc = 0x373408u;
    SET_GPR_U32(ctx, 31, 0x373410u);
    ctx->pc = 0x37340Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373408u;
    // 0x37340c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373D48u, 0x373408u, 0x373410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373410u;
label_373410:
    // 0x373410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x373410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_373414:
    // 0x373414: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x373414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373418: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x373418u;
    SET_GPR_U32(ctx, 31, 0x373420u);
    ctx->pc = 0x37341Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373418u;
    // 0x37341c: 0x24060084  addiu       $a2, $zero, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x373418u, 0x373420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373420u;
label_373420:
    // 0x373420: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x373420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_373424:
    // 0x373424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373428: 0x3e00008  jr          $ra
    ctx->pc = 0x373428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373428u;
        // 0x37342c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373430u;
}
