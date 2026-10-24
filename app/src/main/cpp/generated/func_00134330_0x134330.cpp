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

// Function: func_00134330
// Address: 0x134330 - 0x1343a8
void func_00134330_0x134330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00134330_0x134330");
#endif

    switch (ctx->pc) {
        case 0x134378u: goto label_134378;
        case 0x13438cu: goto label_13438c;
        default: break;
    }

    ctx->pc = 0x134330u;

    // 0x134330: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x134330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x134334: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x134334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x134338: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x134338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13433c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x13433cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x134340: 0x24515558  addiu       $s1, $v0, 0x5558
    ctx->pc = 0x134340u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 21848));
    // 0x134344: 0x8c435558  lw          $v1, 0x5558($v0)
    ctx->pc = 0x134344u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x785558u));
    // 0x134348: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x134348u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13434c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x13434cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x134350: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x134350u;
    {
        const bool branch_taken_0x134350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x134354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134350u;
        // 0x134354: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134350) {
            ctx->pc = 0x13438Cu;
            goto label_13438c;
        }
    }
    ctx->pc = 0x134358u;
    // 0x134358: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x134358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x13435c: 0x8c620d10  lw          $v0, 0xD10($v1)
    ctx->pc = 0x13435cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x460D10u));
    // 0x134360: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x134360u;
    {
        const bool branch_taken_0x134360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x134364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134360u;
        // 0x134364: 0x24700d10  addiu       $s0, $v1, 0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134360) {
            ctx->pc = 0x134378u;
            goto label_134378;
        }
    }
    ctx->pc = 0x134368u;
    // 0x134368: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x134368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x13436c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13436cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134370: 0xc0c7bb2  jal         func_31EEC8
    ctx->pc = 0x134370u;
    SET_GPR_U32(ctx, 31, 0x134378u);
    ctx->pc = 0x134374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134370u;
    // 0x134374: 0x24a5d830  addiu       $a1, $a1, -0x27D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEC8u, 0x134370u, 0x134378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134378u;
label_134378:
    // 0x134378: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x134378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x13437c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13437cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134380: 0x24a5d860  addiu       $a1, $a1, -0x27A0
    ctx->pc = 0x134380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957152));
    // 0x134384: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x134384u;
    SET_GPR_U32(ctx, 31, 0x13438Cu);
    ctx->pc = 0x134388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134384u;
    // 0x134388: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x134384u, 0x13438Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13438Cu;
label_13438c:
    // 0x13438c: 0x26425558  addiu       $v0, $s2, 0x5558
    ctx->pc = 0x13438cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 21848));
    // 0x134390: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x134390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x134394: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x134394u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x134398: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x134398u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13439c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13439cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1343a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1343A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1343A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1343A0u;
        // 0x1343a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1343A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1343A8u;
}
