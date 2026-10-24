#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r503_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r503
{
// Function: R503Init__Fv
// Address: 0x7992c8 - 0x799300
void R503Init__Fv_0x7992c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R503Init__Fv_0x7992c8");
#endif

    switch (ctx->pc) {
        case 0x7992e0u: goto label_7992e0;
        case 0x7992e8u: goto label_7992e8;
        default: break;
    }

    ctx->pc = 0x7992c8u;

    // 0x7992c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7992c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7992cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x7992ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7992d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7992d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7992d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7992d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7992d8: 0xc1e6460  jal         func_799180
    ctx->pc = 0x7992D8u;
    SET_GPR_U32(ctx, 31, 0x7992E0u);
    ctx->pc = 0x7992DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992D8u;
    // 0x7992dc: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x7992D8u, 0x7992E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992E0u;
label_7992e0:
    // 0x7992e0: 0xc1e64ca  jal         func_799328
    ctx->pc = 0x7992E0u;
    SET_GPR_U32(ctx, 31, 0x7992E8u);
    ctx->pc = 0x7992E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992E0u;
    // 0x7992e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799328u, 0x7992E0u, 0x7992E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992E8u;
label_7992e8:
    // 0x7992e8: 0xae02a044  sw          $v0, -0x5FBC($s0)
    ctx->pc = 0x7992e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294942788), GPR_U32(ctx, 2));
    // 0x7992ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7992ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7992f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7992f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7992f4: 0x3e00008  jr          $ra
    ctx->pc = 0x7992F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7992F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992F4u;
        // 0x7992f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7992F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7992FCu;
    // 0x7992fc: 0x0  nop
    ctx->pc = 0x7992fcu;
    // NOP
    ctx->pc = 0x799300u;
}
} // namespace gh_r503
