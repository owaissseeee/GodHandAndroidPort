#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_003077E8
// Address: 0x3077e8 - 0x307840
void func_003077E8_0x3077e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003077E8_0x3077e8");
#endif

    switch (ctx->pc) {
        case 0x307814u: goto label_307814;
        default: break;
    }

    ctx->pc = 0x3077e8u;

    // 0x3077e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3077e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3077ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3077ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3077f0: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x3077f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x3077f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3077f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3077f8: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3077f8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3077fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3077fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307800: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x307800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x307804: 0x24847a80  addiu       $a0, $a0, 0x7A80
    ctx->pc = 0x307804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31360));
    // 0x307808: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x307808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30780c: 0xc0c1e1e  jal         func_307878
    ctx->pc = 0x30780Cu;
    SET_GPR_U32(ctx, 31, 0x307814u);
    ctx->pc = 0x307878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307878u, 0x30780Cu, 0x307814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307814u;
label_307814:
    // 0x307814: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x307814u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307818: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x307818u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30781c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x30781Cu;
    {
        const bool branch_taken_0x30781c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30781c) {
            ctx->pc = 0x307824u;
            goto label_307824;
        }
    }
    ctx->pc = 0x307824u;
label_307824:
    // 0x307824: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x307824u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307828: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x307828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30782c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x30782cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x307830: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x307830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x307834: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x307834u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x307838: 0x3e00008  jr          $ra
    ctx->pc = 0x307838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307840u;
}
