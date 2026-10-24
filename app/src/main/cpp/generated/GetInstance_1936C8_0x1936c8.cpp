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

// Function: GetInstance_1936C8
// Address: 0x1936c8 - 0x193718
void GetInstance_1936C8_0x1936c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetInstance_1936C8_0x1936c8");
#endif

    switch (ctx->pc) {
        case 0x1936ecu: goto label_1936ec;
        case 0x193704u: goto label_193704;
        default: break;
    }

    ctx->pc = 0x1936c8u;

    // 0x1936c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1936c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1936cc: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1936ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1936d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1936d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1936d4: 0x8c625c78  lw          $v0, 0x5C78($v1)
    ctx->pc = 0x1936d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785C78u));
    // 0x1936d8: 0x24705c78  addiu       $s0, $v1, 0x5C78
    ctx->pc = 0x1936d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23672));
    // 0x1936dc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1936DCu;
    {
        const bool branch_taken_0x1936dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1936E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1936DCu;
        // 0x1936e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1936dc) {
            ctx->pc = 0x193704u;
            goto label_193704;
        }
    }
    ctx->pc = 0x1936E4u;
    // 0x1936e4: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x1936E4u;
    SET_GPR_U32(ctx, 31, 0x1936ECu);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x1936E4u, 0x1936ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1936ECu;
label_1936ec:
    // 0x1936ec: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1936ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1936f0: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1936f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1936f4: 0x24a54860  addiu       $a1, $a1, 0x4860
    ctx->pc = 0x1936f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18528));
    // 0x1936f8: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x1936f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x1936fc: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1936FCu;
    SET_GPR_U32(ctx, 31, 0x193704u);
    ctx->pc = 0x193700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1936FCu;
    // 0x193700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1936FCu, 0x193704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193704u;
label_193704:
    // 0x193704: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x193704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19370c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19370cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193710: 0x3e00008  jr          $ra
    ctx->pc = 0x193710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193710u;
        // 0x193714: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193718u;
}
