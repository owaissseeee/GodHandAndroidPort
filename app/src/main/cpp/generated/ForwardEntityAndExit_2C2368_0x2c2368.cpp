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

// Function: ForwardEntityAndExit_2C2368
// Address: 0x2c2368 - 0x2c23e0
void ForwardEntityAndExit_2C2368_0x2c2368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardEntityAndExit_2C2368_0x2c2368");
#endif

    switch (ctx->pc) {
        case 0x2c239cu: goto label_2c239c;
        case 0x2c23c0u: goto label_2c23c0;
        case 0x2c23ccu: goto label_2c23cc;
        default: break;
    }

    ctx->pc = 0x2c2368u;

    // 0x2c2368: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c2368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c236c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c236cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c2370: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2c2370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2c2374: 0x2491005c  addiu       $s1, $a0, 0x5C
    ctx->pc = 0x2c2374u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
    // 0x2c2378: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c2378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c237c: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x2c237cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2c2380: 0x2c621000  sltiu       $v0, $v1, 0x1000
    ctx->pc = 0x2c2380u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4096) ? 1 : 0);
    // 0x2c2384: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C2384u;
    {
        const bool branch_taken_0x2c2384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2384u;
        // 0x2c2388: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2384) {
            ctx->pc = 0x2C23A0u;
            goto label_2c23a0;
        }
    }
    ctx->pc = 0x2C238Cu;
    // 0x2c238c: 0x9485005c  lhu         $a1, 0x5C($a0)
    ctx->pc = 0x2c238cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2c2390: 0x8c4423a4  lw          $a0, 0x23A4($v0)
    ctx->pc = 0x2c2390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9124)));
    // 0x2c2394: 0xc0abad4  jal         func_2AEB50
    ctx->pc = 0x2C2394u;
    SET_GPR_U32(ctx, 31, 0x2C239Cu);
    ctx->pc = 0x2C2398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2394u;
    // 0x2c2398: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEB50u, 0x2C2394u, 0x2C239Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C239Cu;
label_2c239c:
    // 0x2c239c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c239cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c23a0:
    // 0x2c23a0: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2c23a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2c23a4: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x2c23a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2c23a8: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x2c23a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x2c23ac: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2c23acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c23b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c23b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c23b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c23b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c23b8: 0xc0b1054  jal         func_2C4150
    ctx->pc = 0x2C23B8u;
    SET_GPR_U32(ctx, 31, 0x2C23C0u);
    ctx->pc = 0x2C23BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C23B8u;
    // 0x2c23bc: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4150u, 0x2C23B8u, 0x2C23C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C23C0u;
label_2c23c0:
    // 0x2c23c0: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x2c23c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x2c23c4: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x2C23C4u;
    SET_GPR_U32(ctx, 31, 0x2C23CCu);
    ctx->pc = 0x2C23C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C23C4u;
    // 0x2c23c8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x2C23C4u, 0x2C23CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C23CCu;
label_2c23cc:
    // 0x2c23cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2c23ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c23d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c23d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c23d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c23d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c23d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C23D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C23DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C23D8u;
        // 0x2c23dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C23D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C23E0u;
}
