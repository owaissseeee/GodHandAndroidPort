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

// Function: sync__8stdiobuf
// Address: 0x393770 - 0x3937d0
void sync__8stdiobuf_0x393770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sync__8stdiobuf_0x393770");
#endif

    switch (ctx->pc) {
        case 0x393790u: goto label_393790;
        case 0x3937b0u: goto label_3937b0;
        default: break;
    }

    ctx->pc = 0x393770u;

    // 0x393770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x393770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x393774: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x393774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x393778: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x393778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39377c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39377cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393780: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x393780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x393784: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x393784u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x393788: 0xc0e4aa0  jal         func_392A80
    ctx->pc = 0x393788u;
    SET_GPR_U32(ctx, 31, 0x393790u);
    ctx->pc = 0x39378Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393788u;
    // 0x39378c: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x392A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392A80u, 0x393788u, 0x393790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393790u;
label_393790:
    // 0x393790: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x393790u;
    {
        const bool branch_taken_0x393790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x393794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393790u;
        // 0x393794: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393790) {
            ctx->pc = 0x3937C0u;
            goto label_3937c0;
        }
    }
    ctx->pc = 0x393798u;
    // 0x393798: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x393798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x39379c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x39379cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x3937a0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3937A0u;
    {
        const bool branch_taken_0x3937a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3937a0) {
            ctx->pc = 0x3937A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3937A0u;
            // 0x3937a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3937C0u;
            goto label_3937c0;
        }
    }
    ctx->pc = 0x3937A8u;
    // 0x3937a8: 0xc0e9808  jal         func_3A6020
    ctx->pc = 0x3937A8u;
    SET_GPR_U32(ctx, 31, 0x3937B0u);
    ctx->pc = 0x3937ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3937A8u;
    // 0x3937ac: 0x8e040058  lw          $a0, 0x58($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6020u, 0x3937A8u, 0x3937B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3937B0u;
label_3937b0:
    // 0x3937b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3937b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3937b4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3937B4u;
    {
        const bool branch_taken_0x3937b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3937B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3937B4u;
        // 0x3937b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3937b4) {
            ctx->pc = 0x3937C0u;
            goto label_3937c0;
        }
    }
    ctx->pc = 0x3937BCu;
    // 0x3937bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3937bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3937c0:
    // 0x3937c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3937c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3937c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3937c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3937c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3937C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3937CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3937C8u;
        // 0x3937cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3937C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3937D0u;
}
