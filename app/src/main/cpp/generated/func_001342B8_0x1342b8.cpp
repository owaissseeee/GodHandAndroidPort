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

// Function: func_001342B8
// Address: 0x1342b8 - 0x134330
void func_001342B8_0x1342b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001342B8_0x1342b8");
#endif

    switch (ctx->pc) {
        case 0x134300u: goto label_134300;
        case 0x134314u: goto label_134314;
        default: break;
    }

    ctx->pc = 0x1342b8u;

    // 0x1342b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1342b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1342bc: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x1342bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x1342c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1342c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1342c4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1342c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1342c8: 0x24515548  addiu       $s1, $v0, 0x5548
    ctx->pc = 0x1342c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 21832));
    // 0x1342cc: 0x8c435548  lw          $v1, 0x5548($v0)
    ctx->pc = 0x1342ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x785548u));
    // 0x1342d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1342d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1342d4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1342d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1342d8: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1342D8u;
    {
        const bool branch_taken_0x1342d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1342DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1342D8u;
        // 0x1342dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1342d8) {
            ctx->pc = 0x134314u;
            goto label_134314;
        }
    }
    ctx->pc = 0x1342E0u;
    // 0x1342e0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1342e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1342e4: 0x8c620d10  lw          $v0, 0xD10($v1)
    ctx->pc = 0x1342e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x460D10u));
    // 0x1342e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1342E8u;
    {
        const bool branch_taken_0x1342e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1342ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1342E8u;
        // 0x1342ec: 0x24700d10  addiu       $s0, $v1, 0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1342e8) {
            ctx->pc = 0x134300u;
            goto label_134300;
        }
    }
    ctx->pc = 0x1342F0u;
    // 0x1342f0: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1342f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1342f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1342f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1342f8: 0xc0c7bb2  jal         func_31EEC8
    ctx->pc = 0x1342F8u;
    SET_GPR_U32(ctx, 31, 0x134300u);
    ctx->pc = 0x1342FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1342F8u;
    // 0x1342fc: 0x24a5d830  addiu       $a1, $a1, -0x27D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEC8u, 0x1342F8u, 0x134300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134300u;
label_134300:
    // 0x134300: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x134300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x134304: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x134304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134308: 0x24a5d848  addiu       $a1, $a1, -0x27B8
    ctx->pc = 0x134308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957128));
    // 0x13430c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x13430Cu;
    SET_GPR_U32(ctx, 31, 0x134314u);
    ctx->pc = 0x134310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13430Cu;
    // 0x134310: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x13430Cu, 0x134314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134314u;
label_134314:
    // 0x134314: 0x26425548  addiu       $v0, $s2, 0x5548
    ctx->pc = 0x134314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 21832));
    // 0x134318: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x134318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13431c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13431cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x134320: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x134320u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134324: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x134324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134328: 0x3e00008  jr          $ra
    ctx->pc = 0x134328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134328u;
        // 0x13432c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134330u;
}
