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

// Function: cModel_setMeshDisplay
// Address: 0x14a338 - 0x14a398
void cModel_setMeshDisplay_0x14a338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cModel_setMeshDisplay_0x14a338");
#endif

    switch (ctx->pc) {
        case 0x14a34cu: goto label_14a34c;
        default: break;
    }

    ctx->pc = 0x14a338u;

    // 0x14a338: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14a338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14a33c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14a33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14a340: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14a340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14a344: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x14A344u;
    SET_GPR_U32(ctx, 31, 0x14A34Cu);
    ctx->pc = 0x14A348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A344u;
    // 0x14a348: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x14A344u, 0x14A34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A34Cu;
label_14a34c:
    // 0x14a34c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14a34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a350: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x14A350u;
    {
        const bool branch_taken_0x14a350 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A350u;
        // 0x14a354: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a350) {
            ctx->pc = 0x14A384u;
            goto label_14a384;
        }
    }
    ctx->pc = 0x14A358u;
    // 0x14a358: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x14A358u;
    {
        const bool branch_taken_0x14a358 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a358) {
            ctx->pc = 0x14A35Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A358u;
            // 0x14a35c: 0x8c820380  lw          $v0, 0x380($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A378u;
            goto label_14a378;
        }
    }
    ctx->pc = 0x14A360u;
    // 0x14a360: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x14a360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x14a364: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x14a364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x14a368: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x14a368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x14a36c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x14a36cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14a370: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14A370u;
    {
        const bool branch_taken_0x14a370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A370u;
        // 0x14a374: 0xac830380  sw          $v1, 0x380($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a370) {
            ctx->pc = 0x14A380u;
            goto label_14a380;
        }
    }
    ctx->pc = 0x14A378u;
label_14a378:
    // 0x14a378: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x14a378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x14a37c: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x14a37cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_14a380:
    // 0x14a380: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14a380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14a384:
    // 0x14a384: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14a384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14a388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a38c: 0x3e00008  jr          $ra
    ctx->pc = 0x14A38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A38Cu;
        // 0x14a390: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A38Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A394u;
    // 0x14a394: 0x0  nop
    ctx->pc = 0x14a394u;
    // NOP
    ctx->pc = 0x14a398u;
}
