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

// Function: GetSingleton7863E8_2E6318
// Address: 0x2e6318 - 0x2e6368
void GetSingleton7863E8_2E6318_0x2e6318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSingleton7863E8_2E6318_0x2e6318");
#endif

    switch (ctx->pc) {
        case 0x2e633cu: goto label_2e633c;
        case 0x2e6354u: goto label_2e6354;
        default: break;
    }

    ctx->pc = 0x2e6318u;

    // 0x2e6318: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e6318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e631c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2e631cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2e6320: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e6320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e6324: 0x8c6263e8  lw          $v0, 0x63E8($v1)
    ctx->pc = 0x2e6324u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7863E8u));
    // 0x2e6328: 0x247063e8  addiu       $s0, $v1, 0x63E8
    ctx->pc = 0x2e6328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25576));
    // 0x2e632c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E632Cu;
    {
        const bool branch_taken_0x2e632c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E632Cu;
        // 0x2e6330: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e632c) {
            ctx->pc = 0x2E6354u;
            goto label_2e6354;
        }
    }
    ctx->pc = 0x2E6334u;
    // 0x2e6334: 0xc0bbe98  jal         func_2EFA60
    ctx->pc = 0x2E6334u;
    SET_GPR_U32(ctx, 31, 0x2E633Cu);
    ctx->pc = 0x2EFA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFA60u, 0x2E6334u, 0x2E633Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E633Cu;
label_2e633c:
    // 0x2e633c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2e633cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2e6340: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x2e6340u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x2e6344: 0x24a5e398  addiu       $a1, $a1, -0x1C68
    ctx->pc = 0x2e6344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960024));
    // 0x2e6348: 0x24c663f8  addiu       $a2, $a2, 0x63F8
    ctx->pc = 0x2e6348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25592));
    // 0x2e634c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2E634Cu;
    SET_GPR_U32(ctx, 31, 0x2E6354u);
    ctx->pc = 0x2E6350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E634Cu;
    // 0x2e6350: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2E634Cu, 0x2E6354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6354u;
label_2e6354:
    // 0x2e6354: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e6354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e6358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e635c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e635cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e6360: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6360u;
        // 0x2e6364: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6368u;
}
