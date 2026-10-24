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

// Function: GetTypeDesc_19D2F0
// Address: 0x19d2f0 - 0x19d340
void GetTypeDesc_19D2F0_0x19d2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetTypeDesc_19D2F0_0x19d2f0");
#endif

    switch (ctx->pc) {
        case 0x19d314u: goto label_19d314;
        case 0x19d32cu: goto label_19d32c;
        default: break;
    }

    ctx->pc = 0x19d2f0u;

    // 0x19d2f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19d2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19d2f4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x19d2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x19d2f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19d2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19d2fc: 0x8c625de8  lw          $v0, 0x5DE8($v1)
    ctx->pc = 0x19d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785DE8u));
    // 0x19d300: 0x24705de8  addiu       $s0, $v1, 0x5DE8
    ctx->pc = 0x19d300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24040));
    // 0x19d304: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19D304u;
    {
        const bool branch_taken_0x19d304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D304u;
        // 0x19d308: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d304) {
            ctx->pc = 0x19D32Cu;
            goto label_19d32c;
        }
    }
    ctx->pc = 0x19D30Cu;
    // 0x19d30c: 0xc0723cc  jal         func_1C8F30
    ctx->pc = 0x19D30Cu;
    SET_GPR_U32(ctx, 31, 0x19D314u);
    ctx->pc = 0x1C8F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8F30u, 0x19D30Cu, 0x19D314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D314u;
label_19d314:
    // 0x19d314: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x19d314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x19d318: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x19d318u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x19d31c: 0x24a55d30  addiu       $a1, $a1, 0x5D30
    ctx->pc = 0x19d31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23856));
    // 0x19d320: 0x24c658b8  addiu       $a2, $a2, 0x58B8
    ctx->pc = 0x19d320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22712));
    // 0x19d324: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x19D324u;
    SET_GPR_U32(ctx, 31, 0x19D32Cu);
    ctx->pc = 0x19D328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D324u;
    // 0x19d328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x19D324u, 0x19D32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D32Cu;
label_19d32c:
    // 0x19d32c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19d32cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d334: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19d334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d338: 0x3e00008  jr          $ra
    ctx->pc = 0x19D338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D338u;
        // 0x19d33c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D340u;
}
