#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r601_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r601
{
// Function: r6xx_isOpenLever__FPCc
// Address: 0x79b548 - 0x79b5c8
void r6xx_isOpenLever__FPCc_0x79b548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("r6xx_isOpenLever__FPCc_0x79b548");
#endif

    switch (ctx->pc) {
        case 0x79b570u: goto label_79b570;
        case 0x79b5a0u: goto label_79b5a0;
        case 0x79b5b0u: goto label_79b5b0;
        default: break;
    }

    ctx->pc = 0x79b548u;

    // 0x79b548: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79b548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79b54c: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x79b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x79b550: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79b550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79b554: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x79b554u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x79b558: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b55c: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x79b55cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79b560: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x79B560u;
    {
        const bool branch_taken_0x79b560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B560u;
        // 0x79b564: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b560) {
            ctx->pc = 0x79B598u;
            goto label_79b598;
        }
    }
    ctx->pc = 0x79B568u;
    // 0x79b568: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x79b568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b56c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79b56cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79b570:
    // 0x79b570: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79b570u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79b574: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79b574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79b578: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79b578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79b57c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79b57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79b580: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79b580u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79b584: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B584u;
    {
        const bool branch_taken_0x79b584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B584u;
        // 0x79b588: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b584) {
            ctx->pc = 0x79B598u;
            goto label_79b598;
        }
    }
    ctx->pc = 0x79B58Cu;
    // 0x79b58c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79b58cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79b590: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79B590u;
    {
        const bool branch_taken_0x79b590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b590) {
            ctx->pc = 0x79B594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B590u;
            // 0x79b594: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b570;
        }
    }
    ctx->pc = 0x79B598u;
label_79b598:
    // 0x79b598: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79B598u;
    SET_GPR_U32(ctx, 31, 0x79B5A0u);
    ctx->pc = 0x79B59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B598u;
    // 0x79b59c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79B598u, 0x79B5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B5A0u;
label_79b5a0:
    // 0x79b5a0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79B5A0u;
    {
        const bool branch_taken_0x79b5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b5a0) {
            ctx->pc = 0x79B5A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B5A0u;
            // 0x79b5a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B5B8u;
            goto label_79b5b8;
        }
    }
    ctx->pc = 0x79B5A8u;
    // 0x79b5a8: 0xc0693c4  jal         func_1A4F10
    ctx->pc = 0x79B5A8u;
    SET_GPR_U32(ctx, 31, 0x79B5B0u);
    ctx->pc = 0x79B5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B5A8u;
    // 0x79b5ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F10u, 0x79B5A8u, 0x79B5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B5B0u;
label_79b5b0:
    // 0x79b5b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79B5B0u;
    {
        const bool branch_taken_0x79b5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B5B0u;
        // 0x79b5b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b5b0) {
            ctx->pc = 0x79B5BCu;
            goto label_79b5bc;
        }
    }
    ctx->pc = 0x79B5B8u;
label_79b5b8:
    // 0x79b5b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79b5b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79b5bc:
    // 0x79b5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x79B5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B5BCu;
        // 0x79b5c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B5C4u;
    // 0x79b5c4: 0x0  nop
    ctx->pc = 0x79b5c4u;
    // NOP
    ctx->pc = 0x79b5c8u;
}
} // namespace gh_r601
