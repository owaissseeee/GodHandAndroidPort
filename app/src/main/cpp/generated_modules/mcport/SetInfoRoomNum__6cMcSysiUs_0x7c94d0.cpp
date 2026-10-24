#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: SetInfoRoomNum__6cMcSysiUs
// Address: 0x7c94d0 - 0x7c94f8
void SetInfoRoomNum__6cMcSysiUs_0x7c94d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetInfoRoomNum__6cMcSysiUs_0x7c94d0");
#endif

    switch (ctx->pc) {
        case 0x7c94e4u: goto label_7c94e4;
        default: break;
    }

    ctx->pc = 0x7c94d0u;

    // 0x7c94d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c94d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c94d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7c94d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7c94d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c94d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c94dc: 0xc1f23d2  jal         func_7C8F48
    ctx->pc = 0x7C94DCu;
    SET_GPR_U32(ctx, 31, 0x7C94E4u);
    ctx->pc = 0x7C94E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C94DCu;
    // 0x7c94e0: 0x30d0ffff  andi        $s0, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8F48u, 0x7C94DCu, 0x7C94E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C94E4u;
label_7c94e4:
    // 0x7c94e4: 0xa450000c  sh          $s0, 0xC($v0)
    ctx->pc = 0x7c94e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 16));
    // 0x7c94e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7c94e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c94ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c94ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c94f0: 0x3e00008  jr          $ra
    ctx->pc = 0x7C94F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C94F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C94F0u;
        // 0x7c94f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C94F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C94F8u;
}
} // namespace gh_mcport
