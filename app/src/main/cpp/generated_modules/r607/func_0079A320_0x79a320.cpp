#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r607_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r607
{
// Function: func_0079A320
// Address: 0x79a320 - 0x79a398
void func_0079A320_0x79a320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A320_0x79a320");
#endif

    switch (ctx->pc) {
        case 0x79a354u: goto label_79a354;
        case 0x79a37cu: goto label_79a37c;
        case 0x79a388u: goto label_79a388;
        default: break;
    }

    ctx->pc = 0x79a320u;

    // 0x79a320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79a320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79a324: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x79a324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x79a328: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79a328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79a32c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x79a32cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x79a330: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a334: 0x8c838658  lw          $v1, -0x79A8($a0)
    ctx->pc = 0x79a334u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x79a338: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79a338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79a33c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x79a33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x79a340: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A340u;
    {
        const bool branch_taken_0x79a340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A340u;
        // 0x79a344: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a340) {
            ctx->pc = 0x79A35Cu;
            goto label_79a35c;
        }
    }
    ctx->pc = 0x79A348u;
    // 0x79a348: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x79a348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x79a34c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A34Cu;
    SET_GPR_U32(ctx, 31, 0x79A354u);
    ctx->pc = 0x79A350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A34Cu;
    // 0x79a350: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A34Cu, 0x79A354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A354u;
label_79a354:
    // 0x79a354: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x79A354u;
    {
        const bool branch_taken_0x79a354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A354u;
        // 0x79a358: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a354) {
            ctx->pc = 0x79A38Cu;
            goto label_79a38c;
        }
    }
    ctx->pc = 0x79A35Cu;
label_79a35c:
    // 0x79a35c: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x79a35cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x79a360: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x79a360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x79a364: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79a364u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79a368: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a36c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a36cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a370: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79a370u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a374: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x79A374u;
    SET_GPR_U32(ctx, 31, 0x79A37Cu);
    ctx->pc = 0x79A378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A374u;
    // 0x79a378: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79A374u, 0x79A37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A37Cu;
label_79a37c:
    // 0x79a37c: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a380: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A380u;
    SET_GPR_U32(ctx, 31, 0x79A388u);
    ctx->pc = 0x79A384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A380u;
    // 0x79a384: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A380u, 0x79A388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A388u;
label_79a388:
    // 0x79a388: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79a388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_79a38c:
    // 0x79a38c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a390: 0x3e00008  jr          $ra
    ctx->pc = 0x79A390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A390u;
        // 0x79a394: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A398u;
}
} // namespace gh_r607
