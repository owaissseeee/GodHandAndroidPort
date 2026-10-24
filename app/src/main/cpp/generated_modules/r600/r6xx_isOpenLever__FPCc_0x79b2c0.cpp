#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r600_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r600
{
// Function: r6xx_isOpenLever__FPCc
// Address: 0x79b2c0 - 0x79b340
void r6xx_isOpenLever__FPCc_0x79b2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("r6xx_isOpenLever__FPCc_0x79b2c0");
#endif

    switch (ctx->pc) {
        case 0x79b2e8u: goto label_79b2e8;
        case 0x79b318u: goto label_79b318;
        case 0x79b328u: goto label_79b328;
        default: break;
    }

    ctx->pc = 0x79b2c0u;

    // 0x79b2c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79b2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79b2c4: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x79b2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x79b2c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79b2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79b2cc: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x79b2ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x79b2d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b2d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b2d4: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x79b2d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79b2d8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x79B2D8u;
    {
        const bool branch_taken_0x79b2d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2D8u;
        // 0x79b2dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b2d8) {
            ctx->pc = 0x79B310u;
            goto label_79b310;
        }
    }
    ctx->pc = 0x79B2E0u;
    // 0x79b2e0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x79b2e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b2e4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79b2e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79b2e8:
    // 0x79b2e8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79b2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79b2ec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79b2ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79b2f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79b2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79b2f4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79b2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79b2f8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79b2f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79b2fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B2FCu;
    {
        const bool branch_taken_0x79b2fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2FCu;
        // 0x79b300: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b2fc) {
            ctx->pc = 0x79B310u;
            goto label_79b310;
        }
    }
    ctx->pc = 0x79B304u;
    // 0x79b304: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79b304u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79b308: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79B308u;
    {
        const bool branch_taken_0x79b308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b308) {
            ctx->pc = 0x79B30Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B308u;
            // 0x79b30c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B2E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b2e8;
        }
    }
    ctx->pc = 0x79B310u;
label_79b310:
    // 0x79b310: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79B310u;
    SET_GPR_U32(ctx, 31, 0x79B318u);
    ctx->pc = 0x79B314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B310u;
    // 0x79b314: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79B310u, 0x79B318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B318u;
label_79b318:
    // 0x79b318: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79B318u;
    {
        const bool branch_taken_0x79b318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b318) {
            ctx->pc = 0x79B31Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B318u;
            // 0x79b31c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B330u;
            goto label_79b330;
        }
    }
    ctx->pc = 0x79B320u;
    // 0x79b320: 0xc0693c4  jal         func_1A4F10
    ctx->pc = 0x79B320u;
    SET_GPR_U32(ctx, 31, 0x79B328u);
    ctx->pc = 0x79B324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B320u;
    // 0x79b324: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F10u, 0x79B320u, 0x79B328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B328u;
label_79b328:
    // 0x79b328: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79B328u;
    {
        const bool branch_taken_0x79b328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B328u;
        // 0x79b32c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b328) {
            ctx->pc = 0x79B334u;
            goto label_79b334;
        }
    }
    ctx->pc = 0x79B330u;
label_79b330:
    // 0x79b330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79b330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79b334:
    // 0x79b334: 0x3e00008  jr          $ra
    ctx->pc = 0x79B334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B334u;
        // 0x79b338: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B33Cu;
    // 0x79b33c: 0x0  nop
    ctx->pc = 0x79b33cu;
    // NOP
    ctx->pc = 0x79b340u;
}
} // namespace gh_r600
