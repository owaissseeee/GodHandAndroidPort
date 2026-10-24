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

// Function: func_0019A4A8
// Address: 0x19a4a8 - 0x19a530
void func_0019A4A8_0x19a4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019A4A8_0x19a4a8");
#endif

    switch (ctx->pc) {
        case 0x19a4d0u: goto label_19a4d0;
        case 0x19a4e0u: goto label_19a4e0;
        case 0x19a500u: goto label_19a500;
        default: break;
    }

    ctx->pc = 0x19a4a8u;

    // 0x19a4a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19a4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19a4ac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19a4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x19a4b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19a4b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a4b4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19a4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x19a4b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19a4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19a4bc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x19a4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x19a4c0: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x19a4c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19a4c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19a4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19a4c8: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x19A4C8u;
    SET_GPR_U32(ctx, 31, 0x19A4D0u);
    ctx->pc = 0x19A4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A4C8u;
    // 0x19a4cc: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x19A4C8u, 0x19A4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A4D0u;
label_19a4d0:
    // 0x19a4d0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x19a4d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19a4d4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19a4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x19a4d8: 0x24425460  addiu       $v0, $v0, 0x5460
    ctx->pc = 0x19a4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21600));
    // 0x19a4dc: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x19a4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_19a4e0:
    // 0x19a4e0: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x19a4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19a4e4: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x19a4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19a4e8: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x19a4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19a4ec: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x19a4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19a4f0: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x19a4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19a4f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a4f8: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x19A4F8u;
    SET_GPR_U32(ctx, 31, 0x19A500u);
    ctx->pc = 0x19A4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A4F8u;
    // 0x19a4fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x19A4F8u, 0x19A500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A500u;
label_19a500:
    // 0x19a500: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x19a500u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x19a504: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x19A504u;
    {
        const bool branch_taken_0x19a504 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x19A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A504u;
        // 0x19a508: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a504) {
            ctx->pc = 0x19A4E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a4e0;
        }
    }
    ctx->pc = 0x19A50Cu;
    // 0x19a50c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19a50cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a510: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19a510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19a514: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19a514u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19a518: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19a518u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a51c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x19a51cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19a520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a524: 0x3e00008  jr          $ra
    ctx->pc = 0x19A524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A524u;
        // 0x19a528: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A52Cu;
    // 0x19a52c: 0x0  nop
    ctx->pc = 0x19a52cu;
    // NOP
    ctx->pc = 0x19a530u;
}
