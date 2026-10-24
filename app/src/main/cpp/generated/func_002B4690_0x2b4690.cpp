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

// Function: func_002B4690
// Address: 0x2b4690 - 0x2b46f0
void func_002B4690_0x2b4690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B4690_0x2b4690");
#endif

    switch (ctx->pc) {
        case 0x2b46a8u: goto label_2b46a8;
        case 0x2b46d8u: goto label_2b46d8;
        default: break;
    }

    ctx->pc = 0x2b4690u;

    // 0x2b4690: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2b4690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2b4694: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b4694u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b4698: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x2b4698u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x2b469c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b469cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b46a0: 0xc0b1316  jal         func_2C4C58
    ctx->pc = 0x2B46A0u;
    SET_GPR_U32(ctx, 31, 0x2B46A8u);
    ctx->pc = 0x2C4C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4C58u, 0x2B46A0u, 0x2B46A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B46A8u;
label_2b46a8:
    // 0x2b46a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b46a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b46ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2b46acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2b46b0: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B46B0u;
    {
        const bool branch_taken_0x2b46b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B46B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B46B0u;
        // 0x2b46b4: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b46b0) {
            ctx->pc = 0x2B46E0u;
            goto label_2b46e0;
        }
    }
    ctx->pc = 0x2B46B8u;
    // 0x2b46b8: 0x8c62aff0  lw          $v0, -0x5010($v1)
    ctx->pc = 0x2b46b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946800)));
    // 0x2b46bc: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x2b46bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x2b46c0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2b46c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b46c4: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2b46c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b46c8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2b46c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2b46cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b46ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b46d0: 0xc0b6c34  jal         func_2DB0D0
    ctx->pc = 0x2B46D0u;
    SET_GPR_U32(ctx, 31, 0x2B46D8u);
    ctx->pc = 0x2B46D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B46D0u;
    // 0x2b46d4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB0D0u, 0x2B46D0u, 0x2B46D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B46D8u;
label_2b46d8:
    // 0x2b46d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B46D8u;
    {
        const bool branch_taken_0x2b46d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B46DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B46D8u;
        // 0x2b46dc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b46d8) {
            ctx->pc = 0x2B46E8u;
            goto label_2b46e8;
        }
    }
    ctx->pc = 0x2B46E0u;
label_2b46e0:
    // 0x2b46e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b46e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b46e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b46e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b46e8:
    // 0x2b46e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B46E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B46ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B46E8u;
        // 0x2b46ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B46E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B46F0u;
}
