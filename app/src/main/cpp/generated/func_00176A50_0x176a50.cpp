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

// Function: func_00176A50
// Address: 0x176a50 - 0x176be0
void func_00176A50_0x176a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00176A50_0x176a50");
#endif

    switch (ctx->pc) {
        case 0x176ab0u: goto label_176ab0;
        case 0x176ac0u: goto label_176ac0;
        case 0x176ad0u: goto label_176ad0;
        case 0x176ae0u: goto label_176ae0;
        case 0x176b58u: goto label_176b58;
        case 0x176b70u: goto label_176b70;
        default: break;
    }

    ctx->pc = 0x176a50u;

    // 0x176a50: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x176a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x176a54: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x176a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x176a58: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x176a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x176a5c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x176a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x176a60: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x176a60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176a64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x176a64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176a68: 0x103942  srl         $a3, $s0, 5
    ctx->pc = 0x176a68u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x176a6c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x176a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x176a70: 0x26430d30  addiu       $v1, $s2, 0xD30
    ctx->pc = 0x176a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 3376));
    // 0x176a74: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x176a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x176a78: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x176a78u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x176a7c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x176a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x176a80: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x176a80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x176a84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x176a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x176a88: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x176a88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x176a8c: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x176a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x176a90: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x176a90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176a94: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x176a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x176a98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x176a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176a9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x176a9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176aa0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x176aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x176aa4: 0x36110040  ori         $s1, $s0, 0x40
    ctx->pc = 0x176aa4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)64);
    // 0x176aa8: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x176AA8u;
    SET_GPR_U32(ctx, 31, 0x176AB0u);
    ctx->pc = 0x176AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176AA8u;
    // 0x176aac: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x176AA8u, 0x176AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176AB0u;
label_176ab0:
    // 0x176ab0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x176ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176ab4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x176ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176ab8: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x176AB8u;
    SET_GPR_U32(ctx, 31, 0x176AC0u);
    ctx->pc = 0x176ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176AB8u;
    // 0x176abc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x176AB8u, 0x176AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176AC0u;
label_176ac0:
    // 0x176ac0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x176ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176ac4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x176ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176ac8: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x176AC8u;
    SET_GPR_U32(ctx, 31, 0x176AD0u);
    ctx->pc = 0x176ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176AC8u;
    // 0x176acc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x176AC8u, 0x176AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176AD0u;
label_176ad0:
    // 0x176ad0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x176ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176ad4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x176ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176ad8: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x176AD8u;
    SET_GPR_U32(ctx, 31, 0x176AE0u);
    ctx->pc = 0x176ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176AD8u;
    // 0x176adc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x176AD8u, 0x176AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176AE0u;
label_176ae0:
    // 0x176ae0: 0x8e420250  lw          $v0, 0x250($s2)
    ctx->pc = 0x176ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
    // 0x176ae4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x176ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x176ae8: 0x264405c0  addiu       $a0, $s2, 0x5C0
    ctx->pc = 0x176ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1472));
    // 0x176aec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x176aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x176af0: 0xae420250  sw          $v0, 0x250($s2)
    ctx->pc = 0x176af0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 2));
    // 0x176af4: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x176af4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x176af8: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x176af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x176afc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x176afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x176b00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x176b00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x176b04: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x176b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x176b08: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x176b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x176b0c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x176b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x176b10: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x176b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x176b14: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x176b14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x176b18: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x176b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x176b1c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x176b1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x176b20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x176b20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176b24: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x176b24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176b28: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x176b28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x176b2c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x176b2cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x176b30: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x176b30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x176b34: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x176b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x176b38: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x176b38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x176b3c: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x176b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x176b40: 0x24831290  addiu       $v1, $a0, 0x1290
    ctx->pc = 0x176b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4752));
    // 0x176b44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176b48: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x176b48u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176b4c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x176b4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176b50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x176B50u;
    {
        const bool branch_taken_0x176b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B50u;
        // 0x176b54: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176b50) {
            ctx->pc = 0x176B70u;
            goto label_176b70;
        }
    }
    ctx->pc = 0x176B58u;
label_176b58:
    // 0x176b58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x176b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176b5c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x176b5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176b60: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x176b60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176b64: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x176b64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176b68: 0xc05d9d6  jal         func_176758
    ctx->pc = 0x176B68u;
    SET_GPR_U32(ctx, 31, 0x176B70u);
    ctx->pc = 0x176B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176B68u;
    // 0x176b6c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176758u, 0x176B68u, 0x176B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176B70u;
label_176b70:
    // 0x176b70: 0x26241290  addiu       $a0, $s1, 0x1290
    ctx->pc = 0x176b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4752));
    // 0x176b74: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x176b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x176b78: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x176b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x176b7c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x176b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x176b80: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x176b80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176b84: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x176b84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x176b88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176b8c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x176b8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x176b90: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x176B90u;
    {
        const bool branch_taken_0x176b90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x176b90) {
            ctx->pc = 0x176B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x176B90u;
            // 0x176b94: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x176BA8u;
            goto label_176ba8;
        }
    }
    ctx->pc = 0x176B98u;
    // 0x176b98: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x176b98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x176b9c: 0x1450ffee  bne         $v0, $s0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x176B9Cu;
    {
        const bool branch_taken_0x176b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x176BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B9Cu;
        // 0x176ba0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176b9c) {
            ctx->pc = 0x176B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176b58;
        }
    }
    ctx->pc = 0x176BA4u;
    // 0x176ba4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x176ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_176ba8:
    // 0x176ba8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x176ba8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x176bac: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x176bacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x176bb0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x176bb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x176bb4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x176bb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x176bb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x176bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x176BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176BBCu;
        // 0x176bc0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176BC4u;
    // 0x176bc4: 0x0  nop
    ctx->pc = 0x176bc4u;
    // NOP
    // 0x176bc8: 0x0  nop
    ctx->pc = 0x176bc8u;
    // NOP
    // 0x176bcc: 0x0  nop
    ctx->pc = 0x176bccu;
    // NOP
    // 0x176bd0: 0x0  nop
    ctx->pc = 0x176bd0u;
    // NOP
    // 0x176bd4: 0x0  nop
    ctx->pc = 0x176bd4u;
    // NOP
    // 0x176bd8: 0x0  nop
    ctx->pc = 0x176bd8u;
    // NOP
    // 0x176bdc: 0x0  nop
    ctx->pc = 0x176bdcu;
    // NOP
    ctx->pc = 0x176be0u;
}
