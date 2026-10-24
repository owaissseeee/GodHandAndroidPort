#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r303_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r303
{
// Function: func_00799300
// Address: 0x799300 - 0x799328
void func_00799300_0x799300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799300_0x799300");
#endif

    switch (ctx->pc) {
        case 0x799318u: goto label_799318;
        default: break;
    }

    ctx->pc = 0x799300u;

    // 0x799300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x799304: 0x240503d9  addiu       $a1, $zero, 0x3D9
    ctx->pc = 0x799304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 985));
    // 0x799308: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79930c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79930cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799310: 0xc0a578e  jal         func_295E38
    ctx->pc = 0x799310u;
    SET_GPR_U32(ctx, 31, 0x799318u);
    ctx->pc = 0x799314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799310u;
    // 0x799314: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x799310u, 0x799318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799318u;
label_799318:
    // 0x799318: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79931c: 0x3e00008  jr          $ra
    ctx->pc = 0x79931Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79931Cu;
        // 0x799320: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79931Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799324u;
    // 0x799324: 0x0  nop
    ctx->pc = 0x799324u;
    // NOP
    ctx->pc = 0x799328u;
}
} // namespace gh_r303
