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

// Function: func_00387270
// Address: 0x387270 - 0x387328
void func_00387270_0x387270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00387270_0x387270");
#endif

    switch (ctx->pc) {
        case 0x3872c0u: goto label_3872c0;
        case 0x3872d4u: goto label_3872d4;
        case 0x387308u: goto label_387308;
        default: break;
    }

    ctx->pc = 0x387270u;

    // 0x387270: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x387270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x387274: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x387274u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x387278: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x387278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x38727c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x38727cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x387280: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x387280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x387284: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x387284u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x387288: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x387288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x38728c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x38728cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x387290: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x387290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x387294: 0x58c03  sra         $s1, $a1, 16
    ctx->pc = 0x387294u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 5), 16));
    // 0x387298: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x387298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x38729c: 0x69403  sra         $s2, $a2, 16
    ctx->pc = 0x38729cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 16));
    // 0x3872a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3872a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3872a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3872a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3872a8: 0x14820013  bne         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3872A8u;
    {
        const bool branch_taken_0x3872a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3872ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3872A8u;
        // 0x3872ac: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3872a8) {
            ctx->pc = 0x3872F8u;
            goto label_3872f8;
        }
    }
    ctx->pc = 0x3872B0u;
    // 0x3872b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3872b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3872b4: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x3872b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3872b8: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x3872b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x3872bc: 0x0  nop
    ctx->pc = 0x3872bcu;
    // NOP
label_3872c0:
    // 0x3872c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3872c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3872c4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x3872c4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x3872c8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3872c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3872cc: 0xc0e1cca  jal         func_387328
    ctx->pc = 0x3872CCu;
    SET_GPR_U32(ctx, 31, 0x3872D4u);
    ctx->pc = 0x3872D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3872CCu;
    // 0x3872d0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387328u, 0x3872CCu, 0x3872D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3872D4u;
label_3872d4:
    // 0x3872d4: 0x10540006  beq         $v0, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x3872D4u;
    {
        const bool branch_taken_0x3872d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x3872D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3872D4u;
        // 0x3872d8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3872d4) {
            ctx->pc = 0x3872F0u;
            goto label_3872f0;
        }
    }
    ctx->pc = 0x3872DCu;
    // 0x3872dc: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x3872dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3872e0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3872E0u;
    {
        const bool branch_taken_0x3872e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3872E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3872E0u;
        // 0x3872e4: 0x102400  sll         $a0, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3872e0) {
            ctx->pc = 0x3872C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3872c0;
        }
    }
    ctx->pc = 0x3872E8u;
    // 0x3872e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3872E8u;
    {
        const bool branch_taken_0x3872e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3872ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3872E8u;
        // 0x3872ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3872e8) {
            ctx->pc = 0x387308u;
            goto label_387308;
        }
    }
    ctx->pc = 0x3872F0u;
label_3872f0:
    // 0x3872f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3872F0u;
    {
        const bool branch_taken_0x3872f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3872F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3872F0u;
        // 0x3872f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3872f0) {
            ctx->pc = 0x387308u;
            goto label_387308;
        }
    }
    ctx->pc = 0x3872F8u;
label_3872f8:
    // 0x3872f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3872f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3872fc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3872fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387300: 0xc0e1cca  jal         func_387328
    ctx->pc = 0x387300u;
    SET_GPR_U32(ctx, 31, 0x387308u);
    ctx->pc = 0x387304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387300u;
    // 0x387304: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387328u, 0x387300u, 0x387308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387308u;
label_387308:
    // 0x387308: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x387308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38730c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x38730cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x387310: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x387310u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x387314: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x387314u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x387318: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x387318u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38731c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38731cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x387320: 0x3e00008  jr          $ra
    ctx->pc = 0x387320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387320u;
        // 0x387324: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387328u;
}
