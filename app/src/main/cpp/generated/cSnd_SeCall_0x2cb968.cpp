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

// Function: cSnd_SeCall
// Address: 0x2cb968 - 0x2cba48
void cSnd_SeCall_0x2cb968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_SeCall_0x2cb968");
#endif

    switch (ctx->pc) {
        case 0x2cb9a8u: goto label_2cb9a8;
        case 0x2cb9b0u: goto label_2cb9b0;
        case 0x2cb9c0u: goto label_2cb9c0;
        case 0x2cb9f4u: goto label_2cb9f4;
        case 0x2cba24u: goto label_2cba24;
        default: break;
    }

    ctx->pc = 0x2cb968u;

    // 0x2cb968: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2cb968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2cb96c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2cb96cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2cb970: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2cb970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2cb974: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2cb974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2cb978: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2cb978u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb97c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2cb97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2cb980: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cb980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb984: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cb984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2cb988: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2cb988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2cb98c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2cb98cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb990: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2cb990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x2cb994: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2cb994u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb998: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cb998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cb99c: 0x6ac03  sra         $s5, $a2, 16
    ctx->pc = 0x2cb99cu;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 6), 16));
    // 0x2cb9a0: 0xc0b312e  jal         func_2CC4B8
    ctx->pc = 0x2CB9A0u;
    SET_GPR_U32(ctx, 31, 0x2CB9A8u);
    ctx->pc = 0x2CB9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB9A0u;
    // 0x2cb9a4: 0x120a02d  daddu       $s4, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC4B8u, 0x2CB9A0u, 0x2CB9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB9A8u;
label_2cb9a8:
    // 0x2cb9a8: 0xc0b3f1a  jal         func_2CFC68
    ctx->pc = 0x2CB9A8u;
    SET_GPR_U32(ctx, 31, 0x2CB9B0u);
    ctx->pc = 0x2CB9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB9A8u;
    // 0x2cb9ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC68u, 0x2CB9A8u, 0x2CB9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB9B0u;
label_2cb9b0:
    // 0x2cb9b0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2CB9B0u;
    {
        const bool branch_taken_0x2cb9b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB9B0u;
        // 0x2cb9b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb9b0) {
            ctx->pc = 0x2CBA24u;
            goto label_2cba24;
        }
    }
    ctx->pc = 0x2CB9B8u;
    // 0x2cb9b8: 0xc0b2fb0  jal         func_2CBEC0
    ctx->pc = 0x2CB9B8u;
    SET_GPR_U32(ctx, 31, 0x2CB9C0u);
    ctx->pc = 0x2CB9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB9B8u;
    // 0x2cb9bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBEC0u, 0x2CB9B8u, 0x2CB9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB9C0u;
label_2cb9c0:
    // 0x2cb9c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CB9C0u;
    {
        const bool branch_taken_0x2cb9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb9c0) {
            ctx->pc = 0x2CB9D0u;
            goto label_2cb9d0;
        }
    }
    ctx->pc = 0x2CB9C8u;
    // 0x2cb9c8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2CB9C8u;
    {
        const bool branch_taken_0x2cb9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB9C8u;
        // 0x2cb9cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb9c8) {
            ctx->pc = 0x2CBA24u;
            goto label_2cba24;
        }
    }
    ctx->pc = 0x2CB9D0u;
label_2cb9d0:
    // 0x2cb9d0: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x2CB9D0u;
    {
        const bool branch_taken_0x2cb9d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB9D0u;
        // 0x2cb9d4: 0x102c00  sll         $a1, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb9d0) {
            ctx->pc = 0x2CB9FCu;
            goto label_2cb9fc;
        }
    }
    ctx->pc = 0x2CB9D8u;
    // 0x2cb9d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cb9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb9dc: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x2cb9dcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2cb9e0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2cb9e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb9e4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2cb9e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb9e8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2cb9e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb9ec: 0xc0b378a  jal         func_2CDE28
    ctx->pc = 0x2CB9ECu;
    SET_GPR_U32(ctx, 31, 0x2CB9F4u);
    ctx->pc = 0x2CB9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB9ECu;
    // 0x2cb9f0: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDE28u, 0x2CB9ECu, 0x2CB9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB9F4u;
label_2cb9f4:
    // 0x2cb9f4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2CB9F4u;
    {
        const bool branch_taken_0x2cb9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB9F4u;
        // 0x2cb9f8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb9f4) {
            ctx->pc = 0x2CBA28u;
            goto label_2cba28;
        }
    }
    ctx->pc = 0x2CB9FCu;
label_2cb9fc:
    // 0x2cb9fc: 0x133c00  sll         $a3, $s3, 16
    ctx->pc = 0x2cb9fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x2cba00: 0x144400  sll         $t0, $s4, 16
    ctx->pc = 0x2cba00u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
    // 0x2cba04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cba04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba08: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x2cba08u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2cba0c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2cba0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba10: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x2cba10u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x2cba14: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x2cba14u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
    // 0x2cba18: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2cba18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba1c: 0xc0b37c6  jal         func_2CDF18
    ctx->pc = 0x2CBA1Cu;
    SET_GPR_U32(ctx, 31, 0x2CBA24u);
    ctx->pc = 0x2CBA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBA1Cu;
    // 0x2cba20: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDF18u, 0x2CBA1Cu, 0x2CBA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBA24u;
label_2cba24:
    // 0x2cba24: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2cba24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2cba28:
    // 0x2cba28: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2cba28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cba2c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2cba2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cba30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cba30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cba34: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2cba34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cba38: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2cba38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cba3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cba3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cba40: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBA40u;
        // 0x2cba44: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBA48u;
}
