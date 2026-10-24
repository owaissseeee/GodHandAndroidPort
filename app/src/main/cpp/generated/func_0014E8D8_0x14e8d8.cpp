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

// Function: func_0014E8D8
// Address: 0x14e8d8 - 0x14e928
void func_0014E8D8_0x14e8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0014E8D8_0x14e8d8");
#endif

    switch (ctx->pc) {
        case 0x14e8fcu: goto label_14e8fc;
        case 0x14e914u: goto label_14e914;
        default: break;
    }

    ctx->pc = 0x14e8d8u;

    // 0x14e8d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14e8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14e8dc: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x14e8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x14e8e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14e8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14e8e4: 0x8c6256e8  lw          $v0, 0x56E8($v1)
    ctx->pc = 0x14e8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7856E8u));
    // 0x14e8e8: 0x247056e8  addiu       $s0, $v1, 0x56E8
    ctx->pc = 0x14e8e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22248));
    // 0x14e8ec: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14E8ECu;
    {
        const bool branch_taken_0x14e8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E8ECu;
        // 0x14e8f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e8ec) {
            ctx->pc = 0x14E914u;
            goto label_14e914;
        }
    }
    ctx->pc = 0x14E8F4u;
    // 0x14e8f4: 0xc05394e  jal         func_14E538
    ctx->pc = 0x14E8F4u;
    SET_GPR_U32(ctx, 31, 0x14E8FCu);
    ctx->pc = 0x14E538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E538u, 0x14E8F4u, 0x14E8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E8FCu;
label_14e8fc:
    // 0x14e8fc: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x14e8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x14e900: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x14e900u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x14e904: 0x24a5eb60  addiu       $a1, $a1, -0x14A0
    ctx->pc = 0x14e904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962016));
    // 0x14e908: 0x24c656d8  addiu       $a2, $a2, 0x56D8
    ctx->pc = 0x14e908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22232));
    // 0x14e90c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x14E90Cu;
    SET_GPR_U32(ctx, 31, 0x14E914u);
    ctx->pc = 0x14E910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E90Cu;
    // 0x14e910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x14E90Cu, 0x14E914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E914u;
label_14e914:
    // 0x14e914: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14e914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14e918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e91c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14e91cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e920: 0x3e00008  jr          $ra
    ctx->pc = 0x14E920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E920u;
        // 0x14e924: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E928u;
}
