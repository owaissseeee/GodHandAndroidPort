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

// Function: func_0019BA08
// Address: 0x19ba08 - 0x19bb68
void func_0019BA08_0x19ba08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019BA08_0x19ba08");
#endif

    switch (ctx->pc) {
        case 0x19ba3cu: goto label_19ba3c;
        case 0x19ba4cu: goto label_19ba4c;
        case 0x19ba5cu: goto label_19ba5c;
        case 0x19ba6cu: goto label_19ba6c;
        case 0x19bae8u: goto label_19bae8;
        case 0x19baf8u: goto label_19baf8;
        default: break;
    }

    ctx->pc = 0x19ba08u;

    // 0x19ba08: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x19ba08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x19ba0c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x19ba0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x19ba10: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x19ba10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x19ba14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19ba14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba18: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x19ba18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x19ba1c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19ba1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba20: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x19ba20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba24: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x19ba24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x19ba28: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x19ba28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x19ba2c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19ba2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19ba30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19ba30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba34: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x19BA34u;
    SET_GPR_U32(ctx, 31, 0x19BA3Cu);
    ctx->pc = 0x19BA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BA34u;
    // 0x19ba38: 0x36110040  ori         $s1, $s0, 0x40 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)64);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x19BA34u, 0x19BA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BA3Cu;
label_19ba3c:
    // 0x19ba3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19ba3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19ba40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba44: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x19BA44u;
    SET_GPR_U32(ctx, 31, 0x19BA4Cu);
    ctx->pc = 0x19BA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BA44u;
    // 0x19ba48: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x19BA44u, 0x19BA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BA4Cu;
label_19ba4c:
    // 0x19ba4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19ba4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19ba50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba54: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x19BA54u;
    SET_GPR_U32(ctx, 31, 0x19BA5Cu);
    ctx->pc = 0x19BA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BA54u;
    // 0x19ba58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x19BA54u, 0x19BA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BA5Cu;
label_19ba5c:
    // 0x19ba5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19ba5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19ba60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba64: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x19BA64u;
    SET_GPR_U32(ctx, 31, 0x19BA6Cu);
    ctx->pc = 0x19BA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BA64u;
    // 0x19ba68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x19BA64u, 0x19BA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BA6Cu;
label_19ba6c:
    // 0x19ba6c: 0x8e420250  lw          $v0, 0x250($s2)
    ctx->pc = 0x19ba6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
    // 0x19ba70: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x19ba70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x19ba74: 0x264405c0  addiu       $a0, $s2, 0x5C0
    ctx->pc = 0x19ba74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1472));
    // 0x19ba78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19ba78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19ba7c: 0xae420250  sw          $v0, 0x250($s2)
    ctx->pc = 0x19ba7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 2));
    // 0x19ba80: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x19ba80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19ba84: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x19ba84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19ba88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19ba88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19ba8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19ba8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19ba90: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x19ba90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19ba94: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x19ba94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x19ba98: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x19ba98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x19ba9c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x19ba9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x19baa0: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x19baa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x19baa4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x19baa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x19baa8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x19baa8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x19baac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19baacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19bab0: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x19bab0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bab4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x19bab4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x19bab8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x19bab8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x19babc: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x19babcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19bac0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x19bac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19bac4: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x19bac4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x19bac8: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x19bac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x19bacc: 0x248358d8  addiu       $v1, $a0, 0x58D8
    ctx->pc = 0x19baccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 22744));
    // 0x19bad0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19bad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19bad4: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x19bad4u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19bad8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x19bad8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19badc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19BADCu;
    {
        const bool branch_taken_0x19badc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BADCu;
        // 0x19bae0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19badc) {
            ctx->pc = 0x19BAFCu;
            goto label_19bafc;
        }
    }
    ctx->pc = 0x19BAE4u;
    // 0x19bae4: 0x0  nop
    ctx->pc = 0x19bae4u;
    // NOP
label_19bae8:
    // 0x19bae8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19bae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19baec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19baecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19baf0: 0xc066de0  jal         func_19B780
    ctx->pc = 0x19BAF0u;
    SET_GPR_U32(ctx, 31, 0x19BAF8u);
    ctx->pc = 0x19BAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BAF0u;
    // 0x19baf4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B780u, 0x19BAF0u, 0x19BAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BAF8u;
label_19baf8:
    // 0x19baf8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19baf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_19bafc:
    // 0x19bafc: 0x262458d8  addiu       $a0, $s1, 0x58D8
    ctx->pc = 0x19bafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 22744));
    // 0x19bb00: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x19bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x19bb04: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x19bb04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19bb08: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x19bb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19bb0c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x19bb0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19bb10: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x19bb10u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x19bb14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19bb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19bb18: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x19bb18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19bb1c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x19BB1Cu;
    {
        const bool branch_taken_0x19bb1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bb1c) {
            ctx->pc = 0x19BB20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BB1Cu;
            // 0x19bb20: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BB34u;
            goto label_19bb34;
        }
    }
    ctx->pc = 0x19BB24u;
    // 0x19bb24: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x19bb24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x19bb28: 0x1450ffef  bne         $v0, $s0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x19BB28u;
    {
        const bool branch_taken_0x19bb28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x19BB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB28u;
        // 0x19bb2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb28) {
            ctx->pc = 0x19BAE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19bae8;
        }
    }
    ctx->pc = 0x19BB30u;
    // 0x19bb30: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x19bb30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_19bb34:
    // 0x19bb34: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x19bb34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19bb38: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x19bb38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19bb3c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x19bb3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bb40: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x19bb40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19bb44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19bb44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19bb48: 0x3e00008  jr          $ra
    ctx->pc = 0x19BB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB48u;
        // 0x19bb4c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BB50u;
    // 0x19bb50: 0x0  nop
    ctx->pc = 0x19bb50u;
    // NOP
    // 0x19bb54: 0x0  nop
    ctx->pc = 0x19bb54u;
    // NOP
    // 0x19bb58: 0x0  nop
    ctx->pc = 0x19bb58u;
    // NOP
    // 0x19bb5c: 0x0  nop
    ctx->pc = 0x19bb5cu;
    // NOP
    // 0x19bb60: 0x0  nop
    ctx->pc = 0x19bb60u;
    // NOP
    // 0x19bb64: 0x0  nop
    ctx->pc = 0x19bb64u;
    // NOP
    ctx->pc = 0x19bb68u;
}
