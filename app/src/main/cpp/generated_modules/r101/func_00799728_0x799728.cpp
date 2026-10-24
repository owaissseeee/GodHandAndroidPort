#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r101_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r101
{
// Function: func_00799728
// Address: 0x799728 - 0x799768
void func_00799728_0x799728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799728_0x799728");
#endif

    switch (ctx->pc) {
        case 0x79974cu: goto label_79974c;
        case 0x799758u: goto label_799758;
        default: break;
    }

    ctx->pc = 0x799728u;

    // 0x799728: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79972c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x79972cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x799730: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x799730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x799734: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x799738: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79973c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79973cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799740: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x799740u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x799744: 0xc0a578e  jal         func_295E38
    ctx->pc = 0x799744u;
    SET_GPR_U32(ctx, 31, 0x79974Cu);
    ctx->pc = 0x799748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799744u;
    // 0x799748: 0x240503e3  addiu       $a1, $zero, 0x3E3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 995));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x799744u, 0x79974Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79974Cu;
label_79974c:
    // 0x79974c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x79974cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799750: 0xc0a578e  jal         func_295E38
    ctx->pc = 0x799750u;
    SET_GPR_U32(ctx, 31, 0x799758u);
    ctx->pc = 0x799754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799750u;
    // 0x799754: 0x240503e3  addiu       $a1, $zero, 0x3E3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 995));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x799750u, 0x799758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799758u;
label_799758:
    // 0x799758: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x799758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79975c: 0x3e00008  jr          $ra
    ctx->pc = 0x79975Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79975Cu;
        // 0x799760: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79975Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799764u;
    // 0x799764: 0x0  nop
    ctx->pc = 0x799764u;
    // NOP
    ctx->pc = 0x799768u;
}
} // namespace gh_r101
