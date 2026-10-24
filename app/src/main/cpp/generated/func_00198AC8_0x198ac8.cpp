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

// Function: func_00198AC8
// Address: 0x198ac8 - 0x198c58
void func_00198AC8_0x198ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00198AC8_0x198ac8");
#endif

    switch (ctx->pc) {
        case 0x198b28u: goto label_198b28;
        case 0x198b38u: goto label_198b38;
        case 0x198b48u: goto label_198b48;
        case 0x198b58u: goto label_198b58;
        case 0x198bd0u: goto label_198bd0;
        case 0x198be8u: goto label_198be8;
        default: break;
    }

    ctx->pc = 0x198ac8u;

    // 0x198ac8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x198ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x198acc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x198accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x198ad0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x198ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x198ad4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x198ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x198ad8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x198ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198adc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x198adcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198ae0: 0x103942  srl         $a3, $s0, 5
    ctx->pc = 0x198ae0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x198ae4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x198ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x198ae8: 0x264309d0  addiu       $v1, $s2, 0x9D0
    ctx->pc = 0x198ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2512));
    // 0x198aec: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x198aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x198af0: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x198af0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x198af4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x198af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x198af8: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x198af8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x198afc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x198afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x198b00: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x198b00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x198b04: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x198b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x198b08: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x198b08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b0c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x198b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x198b10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x198b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x198b14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b18: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x198b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x198b1c: 0x36110040  ori         $s1, $s0, 0x40
    ctx->pc = 0x198b1cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)64);
    // 0x198b20: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x198B20u;
    SET_GPR_U32(ctx, 31, 0x198B28u);
    ctx->pc = 0x198B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198B20u;
    // 0x198b24: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x198B20u, 0x198B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198B28u;
label_198b28:
    // 0x198b28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x198b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x198b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b30: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x198B30u;
    SET_GPR_U32(ctx, 31, 0x198B38u);
    ctx->pc = 0x198B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198B30u;
    // 0x198b34: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x198B30u, 0x198B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198B38u;
label_198b38:
    // 0x198b38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x198b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x198b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b40: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x198B40u;
    SET_GPR_U32(ctx, 31, 0x198B48u);
    ctx->pc = 0x198B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198B40u;
    // 0x198b44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x198B40u, 0x198B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198B48u;
label_198b48:
    // 0x198b48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x198b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x198b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b50: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x198B50u;
    SET_GPR_U32(ctx, 31, 0x198B58u);
    ctx->pc = 0x198B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198B50u;
    // 0x198b54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x198B50u, 0x198B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198B58u;
label_198b58:
    // 0x198b58: 0x8e420250  lw          $v0, 0x250($s2)
    ctx->pc = 0x198b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
    // 0x198b5c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x198b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x198b60: 0x264405c0  addiu       $a0, $s2, 0x5C0
    ctx->pc = 0x198b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1472));
    // 0x198b64: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x198b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x198b68: 0xae420250  sw          $v0, 0x250($s2)
    ctx->pc = 0x198b68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 2));
    // 0x198b6c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x198b6cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x198b70: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x198b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x198b74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x198b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x198b78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x198b78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x198b7c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x198b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x198b80: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x198b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x198b84: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x198b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x198b88: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x198b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x198b8c: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x198b8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x198b90: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x198b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x198b94: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x198b94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x198b98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x198b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198b9c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x198b9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198ba0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x198ba0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x198ba4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x198ba4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x198ba8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x198ba8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x198bac: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x198bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x198bb0: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x198bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x198bb4: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x198bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x198bb8: 0x24834fe0  addiu       $v1, $a0, 0x4FE0
    ctx->pc = 0x198bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 20448));
    // 0x198bbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x198bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x198bc0: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x198bc0u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x198bc4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x198bc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198bc8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x198BC8u;
    {
        const bool branch_taken_0x198bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198BC8u;
        // 0x198bcc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198bc8) {
            ctx->pc = 0x198BE8u;
            goto label_198be8;
        }
    }
    ctx->pc = 0x198BD0u;
label_198bd0:
    // 0x198bd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x198bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198bd4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x198bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198bd8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x198bd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198bdc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x198bdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198be0: 0xc0661f4  jal         func_1987D0
    ctx->pc = 0x198BE0u;
    SET_GPR_U32(ctx, 31, 0x198BE8u);
    ctx->pc = 0x198BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198BE0u;
    // 0x198be4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1987D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1987D0u, 0x198BE0u, 0x198BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198BE8u;
label_198be8:
    // 0x198be8: 0x26244fe0  addiu       $a0, $s1, 0x4FE0
    ctx->pc = 0x198be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20448));
    // 0x198bec: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x198becu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x198bf0: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x198bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x198bf4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x198bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x198bf8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x198bf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x198bfc: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x198bfcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x198c00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x198c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x198c04: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x198c04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x198c08: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x198C08u;
    {
        const bool branch_taken_0x198c08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x198c08) {
            ctx->pc = 0x198C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198C08u;
            // 0x198c0c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198C20u;
            goto label_198c20;
        }
    }
    ctx->pc = 0x198C10u;
    // 0x198c10: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x198c10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x198c14: 0x1450ffee  bne         $v0, $s0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x198C14u;
    {
        const bool branch_taken_0x198c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x198C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C14u;
        // 0x198c18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c14) {
            ctx->pc = 0x198BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198bd0;
        }
    }
    ctx->pc = 0x198C1Cu;
    // 0x198c1c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x198c1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_198c20:
    // 0x198c20: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x198c20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x198c24: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x198c24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x198c28: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x198c28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x198c2c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x198c2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198c30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x198c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198c34: 0x3e00008  jr          $ra
    ctx->pc = 0x198C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C34u;
        // 0x198c38: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198C3Cu;
    // 0x198c3c: 0x0  nop
    ctx->pc = 0x198c3cu;
    // NOP
    // 0x198c40: 0x0  nop
    ctx->pc = 0x198c40u;
    // NOP
    // 0x198c44: 0x0  nop
    ctx->pc = 0x198c44u;
    // NOP
    // 0x198c48: 0x0  nop
    ctx->pc = 0x198c48u;
    // NOP
    // 0x198c4c: 0x0  nop
    ctx->pc = 0x198c4cu;
    // NOP
    // 0x198c50: 0x0  nop
    ctx->pc = 0x198c50u;
    // NOP
    // 0x198c54: 0x0  nop
    ctx->pc = 0x198c54u;
    // NOP
    ctx->pc = 0x198c58u;
}
