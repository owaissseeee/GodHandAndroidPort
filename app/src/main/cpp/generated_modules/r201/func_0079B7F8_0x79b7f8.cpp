#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r201_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r201
{
// Function: func_0079B7F8
// Address: 0x79b7f8 - 0x79b830
void func_0079B7F8_0x79b7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B7F8_0x79b7f8");
#endif

    switch (ctx->pc) {
        case 0x79b824u: goto label_79b824;
        default: break;
    }

    ctx->pc = 0x79b7f8u;

    // 0x79b7f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79b7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79b7fc: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79b7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79b800: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79b800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79b804: 0x8c43bd80  lw          $v1, -0x4280($v0)
    ctx->pc = 0x79b804u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x79BD80u));
    // 0x79b808: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79b808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79b80c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79B80Cu;
    {
        const bool branch_taken_0x79b80c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B80Cu;
        // 0x79b810: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b80c) {
            ctx->pc = 0x79B824u;
            goto label_79b824;
        }
    }
    ctx->pc = 0x79B814u;
    // 0x79b814: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79b814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b818: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79b818u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79b81c: 0xc0a578e  jal         func_295E38
    ctx->pc = 0x79B81Cu;
    SET_GPR_U32(ctx, 31, 0x79B824u);
    ctx->pc = 0x79B820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B81Cu;
    // 0x79b820: 0x240503d9  addiu       $a1, $zero, 0x3D9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 985));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x79B81Cu, 0x79B824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B824u;
label_79b824:
    // 0x79b824: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79b824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b828: 0x3e00008  jr          $ra
    ctx->pc = 0x79B828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B828u;
        // 0x79b82c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B830u;
}
} // namespace gh_r201
