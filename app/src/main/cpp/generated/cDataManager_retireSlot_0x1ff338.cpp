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

// Function: cDataManager_retireSlot
// Address: 0x1ff338 - 0x1ff3a0
void cDataManager_retireSlot_0x1ff338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDataManager_retireSlot_0x1ff338");
#endif

    switch (ctx->pc) {
        case 0x1ff378u: goto label_1ff378;
        case 0x1ff388u: goto label_1ff388;
        default: break;
    }

    ctx->pc = 0x1ff338u;

    // 0x1ff338: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff33c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ff33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ff340: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ff344: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ff344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff348: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ff348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ff34c: 0x442000f  bltzl       $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FF34Cu;
    {
        const bool branch_taken_0x1ff34c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x1ff34c) {
            ctx->pc = 0x1FF350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF34Cu;
            // 0x1ff350: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF38Cu;
            goto label_1ff38c;
        }
    }
    ctx->pc = 0x1FF354u;
    // 0x1ff354: 0x1c40000d  bgtz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FF354u;
    {
        const bool branch_taken_0x1ff354 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x1FF358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF354u;
        // 0x1ff358: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff354) {
            ctx->pc = 0x1FF38Cu;
            goto label_1ff38c;
        }
    }
    ctx->pc = 0x1FF35Cu;
    // 0x1ff35c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1ff35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ff360: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x1ff360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x1ff364: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ff364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ff368: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FF368u;
    {
        const bool branch_taken_0x1ff368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF368u;
        // 0x1ff36c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff368) {
            ctx->pc = 0x1FF38Cu;
            goto label_1ff38c;
        }
    }
    ctx->pc = 0x1FF370u;
    // 0x1ff370: 0xc07fd8e  jal         func_1FF638
    ctx->pc = 0x1FF370u;
    SET_GPR_U32(ctx, 31, 0x1FF378u);
    ctx->pc = 0x1FF374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF370u;
    // 0x1ff374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF638u, 0x1FF370u, 0x1FF378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF378u;
label_1ff378:
    // 0x1ff378: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF378u;
    {
        const bool branch_taken_0x1ff378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF378u;
        // 0x1ff37c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff378) {
            ctx->pc = 0x1FF38Cu;
            goto label_1ff38c;
        }
    }
    ctx->pc = 0x1FF380u;
    // 0x1ff380: 0xc07fce8  jal         func_1FF3A0
    ctx->pc = 0x1FF380u;
    SET_GPR_U32(ctx, 31, 0x1FF388u);
    ctx->pc = 0x1FF384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF380u;
    // 0x1ff384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF3A0u, 0x1FF380u, 0x1FF388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF388u;
label_1ff388:
    // 0x1ff388: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ff38c:
    // 0x1ff38c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ff38cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff390: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff394: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF394u;
        // 0x1ff398: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF39Cu;
    // 0x1ff39c: 0x0  nop
    ctx->pc = 0x1ff39cu;
    // NOP
    ctx->pc = 0x1ff3a0u;
}
