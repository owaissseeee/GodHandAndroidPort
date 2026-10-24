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

// Function: GetObjClassDesc_19E670
// Address: 0x19e670 - 0x19e6c0
void GetObjClassDesc_19E670_0x19e670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetObjClassDesc_19E670_0x19e670");
#endif

    switch (ctx->pc) {
        case 0x19e694u: goto label_19e694;
        case 0x19e6acu: goto label_19e6ac;
        default: break;
    }

    ctx->pc = 0x19e670u;

    // 0x19e670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19e670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19e674: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x19e674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x19e678: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19e678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19e67c: 0x8c625e68  lw          $v0, 0x5E68($v1)
    ctx->pc = 0x19e67cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785E68u));
    // 0x19e680: 0x24705e68  addiu       $s0, $v1, 0x5E68
    ctx->pc = 0x19e680u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24168));
    // 0x19e684: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19E684u;
    {
        const bool branch_taken_0x19e684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E684u;
        // 0x19e688: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e684) {
            ctx->pc = 0x19E6ACu;
            goto label_19e6ac;
        }
    }
    ctx->pc = 0x19E68Cu;
    // 0x19e68c: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x19E68Cu;
    SET_GPR_U32(ctx, 31, 0x19E694u);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x19E68Cu, 0x19E694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E694u;
label_19e694:
    // 0x19e694: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x19e694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x19e698: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x19e698u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x19e69c: 0x24a56420  addiu       $a1, $a1, 0x6420
    ctx->pc = 0x19e69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25632));
    // 0x19e6a0: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x19e6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x19e6a4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x19E6A4u;
    SET_GPR_U32(ctx, 31, 0x19E6ACu);
    ctx->pc = 0x19E6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E6A4u;
    // 0x19e6a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x19E6A4u, 0x19E6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E6ACu;
label_19e6ac:
    // 0x19e6ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19e6acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e6b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e6b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19e6b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x19E6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6B8u;
        // 0x19e6bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E6C0u;
}
