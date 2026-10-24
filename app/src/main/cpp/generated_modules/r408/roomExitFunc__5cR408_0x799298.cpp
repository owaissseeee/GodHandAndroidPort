#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r408_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r408
{
// Function: roomExitFunc__5cR408
// Address: 0x799298 - 0x7992e0
void roomExitFunc__5cR408_0x799298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("roomExitFunc__5cR408_0x799298");
#endif

    switch (ctx->pc) {
        case 0x7992c0u: goto label_7992c0;
        case 0x7992d4u: goto label_7992d4;
        default: break;
    }

    ctx->pc = 0x799298u;

    // 0x799298: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79929c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79929cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x7992a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7992a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7992a4: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x7992a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x7992a8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x7992a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7992ac: 0x480000a  bltz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x7992ACu;
    {
        const bool branch_taken_0x7992ac = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x7992B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992ACu;
        // 0x7992b0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992ac) {
            ctx->pc = 0x7992D8u;
            goto label_7992d8;
        }
    }
    ctx->pc = 0x7992B4u;
    // 0x7992b4: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x7992b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x7992b8: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x7992B8u;
    SET_GPR_U32(ctx, 31, 0x7992C0u);
    ctx->pc = 0x7992BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992B8u;
    // 0x7992bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x7992B8u, 0x7992C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992C0u;
label_7992c0:
    // 0x7992c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7992C0u;
    {
        const bool branch_taken_0x7992c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7992C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992C0u;
        // 0x7992c4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992c0) {
            ctx->pc = 0x7992D8u;
            goto label_7992d8;
        }
    }
    ctx->pc = 0x7992C8u;
    // 0x7992c8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x7992c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x7992cc: 0xc07efba  jal         func_1FBEE8
    ctx->pc = 0x7992CCu;
    SET_GPR_U32(ctx, 31, 0x7992D4u);
    ctx->pc = 0x7992D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992CCu;
    // 0x7992d0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBEE8u, 0x7992CCu, 0x7992D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992D4u;
label_7992d4:
    // 0x7992d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7992d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_7992d8:
    // 0x7992d8: 0x3e00008  jr          $ra
    ctx->pc = 0x7992D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7992DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992D8u;
        // 0x7992dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7992D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7992E0u;
}
} // namespace gh_r408
