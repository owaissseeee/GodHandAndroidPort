#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r402_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r402
{
// Function: func_00799320
// Address: 0x799320 - 0x799368
void func_00799320_0x799320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799320_0x799320");
#endif

    switch (ctx->pc) {
        case 0x79934cu: goto label_79934c;
        case 0x799358u: goto label_799358;
        default: break;
    }

    ctx->pc = 0x799320u;

    // 0x799320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x799324: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x799324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x799328: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x799328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79932c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79932cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799330: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x799330u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x799334: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799338: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799338u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79933c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79933cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799340: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799340u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799344: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x799344u;
    SET_GPR_U32(ctx, 31, 0x79934Cu);
    ctx->pc = 0x799348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799344u;
    // 0x799348: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x799344u, 0x79934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79934Cu;
label_79934c:
    // 0x79934c: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79934cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799350: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799350u;
    SET_GPR_U32(ctx, 31, 0x799358u);
    ctx->pc = 0x799354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799350u;
    // 0x799354: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799350u, 0x799358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799358u;
label_799358:
    // 0x799358: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x799358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79935c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79935cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799360: 0x3e00008  jr          $ra
    ctx->pc = 0x799360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799360u;
        // 0x799364: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799368u;
}
} // namespace gh_r402
