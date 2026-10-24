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
// Function: r6xx_isActiveLever__FPCc
// Address: 0x79b198 - 0x79b218
void r6xx_isActiveLever__FPCc_0x79b198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("r6xx_isActiveLever__FPCc_0x79b198");
#endif

    switch (ctx->pc) {
        case 0x79b1c0u: goto label_79b1c0;
        case 0x79b1f0u: goto label_79b1f0;
        case 0x79b200u: goto label_79b200;
        default: break;
    }

    ctx->pc = 0x79b198u;

    // 0x79b198: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79b198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79b19c: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x79b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x79b1a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79b1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79b1a4: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x79b1a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x79b1a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b1ac: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x79b1acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79b1b0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x79B1B0u;
    {
        const bool branch_taken_0x79b1b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1B0u;
        // 0x79b1b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b1b0) {
            ctx->pc = 0x79B1E8u;
            goto label_79b1e8;
        }
    }
    ctx->pc = 0x79B1B8u;
    // 0x79b1b8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x79b1b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b1bc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79b1bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79b1c0:
    // 0x79b1c0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79b1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79b1c4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79b1c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79b1c8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79b1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79b1cc: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79b1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79b1d0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79b1d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79b1d4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B1D4u;
    {
        const bool branch_taken_0x79b1d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1D4u;
        // 0x79b1d8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b1d4) {
            ctx->pc = 0x79B1E8u;
            goto label_79b1e8;
        }
    }
    ctx->pc = 0x79B1DCu;
    // 0x79b1dc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79b1dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79b1e0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79B1E0u;
    {
        const bool branch_taken_0x79b1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b1e0) {
            ctx->pc = 0x79B1E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B1E0u;
            // 0x79b1e4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B1C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b1c0;
        }
    }
    ctx->pc = 0x79B1E8u;
label_79b1e8:
    // 0x79b1e8: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79B1E8u;
    SET_GPR_U32(ctx, 31, 0x79B1F0u);
    ctx->pc = 0x79B1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B1E8u;
    // 0x79b1ec: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79B1E8u, 0x79B1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1F0u;
label_79b1f0:
    // 0x79b1f0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79B1F0u;
    {
        const bool branch_taken_0x79b1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b1f0) {
            ctx->pc = 0x79B1F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B1F0u;
            // 0x79b1f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B208u;
            goto label_79b208;
        }
    }
    ctx->pc = 0x79B1F8u;
    // 0x79b1f8: 0xc0693c6  jal         func_1A4F18
    ctx->pc = 0x79B1F8u;
    SET_GPR_U32(ctx, 31, 0x79B200u);
    ctx->pc = 0x79B1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B1F8u;
    // 0x79b1fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F18u, 0x79B1F8u, 0x79B200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B200u;
label_79b200:
    // 0x79b200: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79B200u;
    {
        const bool branch_taken_0x79b200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B200u;
        // 0x79b204: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b200) {
            ctx->pc = 0x79B20Cu;
            goto label_79b20c;
        }
    }
    ctx->pc = 0x79B208u;
label_79b208:
    // 0x79b208: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79b208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79b20c:
    // 0x79b20c: 0x3e00008  jr          $ra
    ctx->pc = 0x79B20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B20Cu;
        // 0x79b210: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B214u;
    // 0x79b214: 0x0  nop
    ctx->pc = 0x79b214u;
    // NOP
    ctx->pc = 0x79b218u;
}
} // namespace gh_r607
