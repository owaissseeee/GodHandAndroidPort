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

// Function: cSnd_SeCall_2CB8A0
// Address: 0x2cb8a0 - 0x2cb968
void cSnd_SeCall_2CB8A0_0x2cb8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_SeCall_2CB8A0_0x2cb8a0");
#endif

    switch (ctx->pc) {
        case 0x2cb8f0u: goto label_2cb8f0;
        case 0x2cb8f8u: goto label_2cb8f8;
        case 0x2cb908u: goto label_2cb908;
        case 0x2cb930u: goto label_2cb930;
        default: break;
    }

    ctx->pc = 0x2cb8a0u;

    // 0x2cb8a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2cb8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2cb8a4: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2cb8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2cb8a8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2cb8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2cb8ac: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x2cb8acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x2cb8b0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2cb8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2cb8b4: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x2cb8b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x2cb8b8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2cb8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2cb8bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cb8bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb8c0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2cb8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2cb8c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2cb8c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb8c8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2cb8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2cb8cc: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2cb8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2cb8d0: 0x69403  sra         $s2, $a2, 16
    ctx->pc = 0x2cb8d0u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 16));
    // 0x2cb8d4: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2cb8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x2cb8d8: 0x79c03  sra         $s3, $a3, 16
    ctx->pc = 0x2cb8d8u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 7), 16));
    // 0x2cb8dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cb8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cb8e0: 0x8a403  sra         $s4, $t0, 16
    ctx->pc = 0x2cb8e0u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 8), 16));
    // 0x2cb8e4: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x2cb8e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb8e8: 0xc0b312e  jal         func_2CC4B8
    ctx->pc = 0x2CB8E8u;
    SET_GPR_U32(ctx, 31, 0x2CB8F0u);
    ctx->pc = 0x2CB8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB8E8u;
    // 0x2cb8ec: 0x140b02d  daddu       $s6, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC4B8u, 0x2CB8E8u, 0x2CB8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB8F0u;
label_2cb8f0:
    // 0x2cb8f0: 0xc0b3f1a  jal         func_2CFC68
    ctx->pc = 0x2CB8F0u;
    SET_GPR_U32(ctx, 31, 0x2CB8F8u);
    ctx->pc = 0x2CB8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB8F0u;
    // 0x2cb8f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC68u, 0x2CB8F0u, 0x2CB8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB8F8u;
label_2cb8f8:
    // 0x2cb8f8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CB8F8u;
    {
        const bool branch_taken_0x2cb8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB8F8u;
        // 0x2cb8fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb8f8) {
            ctx->pc = 0x2CB93Cu;
            goto label_2cb93c;
        }
    }
    ctx->pc = 0x2CB900u;
    // 0x2cb900: 0xc0b2fb0  jal         func_2CBEC0
    ctx->pc = 0x2CB900u;
    SET_GPR_U32(ctx, 31, 0x2CB908u);
    ctx->pc = 0x2CB904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB900u;
    // 0x2cb904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBEC0u, 0x2CB900u, 0x2CB908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB908u;
label_2cb908:
    // 0x2cb908: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CB908u;
    {
        const bool branch_taken_0x2cb908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB908u;
        // 0x2cb90c: 0x112c00  sll         $a1, $s1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb908) {
            ctx->pc = 0x2CB938u;
            goto label_2cb938;
        }
    }
    ctx->pc = 0x2CB910u;
    // 0x2cb910: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cb910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb914: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x2cb914u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2cb918: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2cb918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb91c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2cb91cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb920: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2cb920u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb924: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x2cb924u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb928: 0xc0b37c6  jal         func_2CDF18
    ctx->pc = 0x2CB928u;
    SET_GPR_U32(ctx, 31, 0x2CB930u);
    ctx->pc = 0x2CB92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB928u;
    // 0x2cb92c: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDF18u, 0x2CB928u, 0x2CB930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB930u;
label_2cb930:
    // 0x2cb930: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CB930u;
    {
        const bool branch_taken_0x2cb930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB930u;
        // 0x2cb934: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb930) {
            ctx->pc = 0x2CB940u;
            goto label_2cb940;
        }
    }
    ctx->pc = 0x2CB938u;
label_2cb938:
    // 0x2cb938: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cb938u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cb93c:
    // 0x2cb93c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2cb93cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2cb940:
    // 0x2cb940: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2cb940u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cb944: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2cb944u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cb948: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2cb948u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cb94c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2cb94cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cb950: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2cb950u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb954: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2cb954u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb958: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cb958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb95c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB95Cu;
        // 0x2cb960: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB95Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB964u;
    // 0x2cb964: 0x0  nop
    ctx->pc = 0x2cb964u;
    // NOP
    ctx->pc = 0x2cb968u;
}
