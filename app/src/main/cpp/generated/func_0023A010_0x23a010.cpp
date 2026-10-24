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

// Function: func_0023A010
// Address: 0x23a010 - 0x23a138
void func_0023A010_0x23a010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0023A010_0x23a010");
#endif

    switch (ctx->pc) {
        case 0x23a02cu: goto label_23a02c;
        case 0x23a044u: goto label_23a044;
        case 0x23a09cu: goto label_23a09c;
        case 0x23a0e4u: goto label_23a0e4;
        case 0x23a110u: goto label_23a110;
        case 0x23a11cu: goto label_23a11c;
        default: break;
    }

    ctx->pc = 0x23a010u;

    // 0x23a010: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23a010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23a014: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23a014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23a018: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23a018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a01c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23a01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23a020: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23a020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23a024: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x23A024u;
    SET_GPR_U32(ctx, 31, 0x23A02Cu);
    ctx->pc = 0x23A028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A024u;
    // 0x23a028: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x23A024u, 0x23A02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A02Cu;
label_23a02c:
    // 0x23a02c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x23a02cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x23a030: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23a030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a034: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x23a034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x23a038: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23a038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a03c: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x23A03Cu;
    SET_GPR_U32(ctx, 31, 0x23A044u);
    ctx->pc = 0x23A040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A03Cu;
    // 0x23a040: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x23A03Cu, 0x23A044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A044u;
label_23a044:
    // 0x23a044: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x23a044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x23a048: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23a048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a04c: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x23a04cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x23a050: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x23A050u;
    {
        const bool branch_taken_0x23a050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A050u;
        // 0x23a054: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a050) {
            ctx->pc = 0x23A06Cu;
            goto label_23a06c;
        }
    }
    ctx->pc = 0x23A058u;
    // 0x23a058: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23a058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a05c: 0x50620015  beql        $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x23A05Cu;
    {
        const bool branch_taken_0x23a05c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23a05c) {
            ctx->pc = 0x23A060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A05Cu;
            // 0x23a060: 0x8602056e  lh          $v0, 0x56E($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A0B4u;
            goto label_23a0b4;
        }
    }
    ctx->pc = 0x23A064u;
    // 0x23a064: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x23A064u;
    {
        const bool branch_taken_0x23a064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A064u;
        // 0x23a068: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a064) {
            ctx->pc = 0x23A120u;
            goto label_23a120;
        }
    }
    ctx->pc = 0x23A06Cu;
label_23a06c:
    // 0x23a06c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23a070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a074: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x23a074u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x23a078: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23a078u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a07c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23a07cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23a080: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23a080u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a084: 0x8c451054  lw          $a1, 0x1054($v0)
    ctx->pc = 0x23a084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4180)));
    // 0x23a088: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23a088u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a08c: 0x8c461058  lw          $a2, 0x1058($v0)
    ctx->pc = 0x23a08cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4184)));
    // 0x23a090: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x23a090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x23a094: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23A094u;
    SET_GPR_U32(ctx, 31, 0x23A09Cu);
    ctx->pc = 0x23A098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A094u;
    // 0x23a098: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23A094u, 0x23A09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A09Cu;
label_23a09c:
    // 0x23a09c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x23a09cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x23a0a0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x23a0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x23a0a4: 0xa603056e  sh          $v1, 0x56E($s0)
    ctx->pc = 0x23a0a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x23a0a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23a0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23a0ac: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x23a0acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x23a0b0: 0x8602056e  lh          $v0, 0x56E($s0)
    ctx->pc = 0x23a0b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
label_23a0b4:
    // 0x23a0b4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23A0B4u;
    {
        const bool branch_taken_0x23a0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A0B4u;
        // 0x23a0b8: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a0b4) {
            ctx->pc = 0x23A0DCu;
            goto label_23a0dc;
        }
    }
    ctx->pc = 0x23A0BCu;
    // 0x23a0bc: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x23a0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x23a0c0: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x23a0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x23a0c4: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x23a0c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x23a0c8: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x23a0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x23a0cc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x23a0ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23a0d0: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x23a0d0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23a0d4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x23a0d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x23a0d8: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x23a0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_23a0dc:
    // 0x23a0dc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x23A0DCu;
    SET_GPR_U32(ctx, 31, 0x23A0E4u);
    ctx->pc = 0x23A0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A0DCu;
    // 0x23a0e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23A0DCu, 0x23A0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A0E4u;
label_23a0e4:
    // 0x23a0e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23A0E4u;
    {
        const bool branch_taken_0x23a0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A0E4u;
        // 0x23a0e8: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a0e4) {
            ctx->pc = 0x23A0FCu;
            goto label_23a0fc;
        }
    }
    ctx->pc = 0x23A0ECu;
    // 0x23a0ec: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x23a0ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x23a0f0: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x23a0f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x23a0f4: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x23a0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x23a0f8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x23a0f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_23a0fc:
    // 0x23a0fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23a0fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23a100: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23a100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23a104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23a104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a108: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x23A108u;
    SET_GPR_U32(ctx, 31, 0x23A110u);
    ctx->pc = 0x23A10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A108u;
    // 0x23a10c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x23A108u, 0x23A110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A110u;
label_23a110:
    // 0x23a110: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23a110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a114: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x23A114u;
    SET_GPR_U32(ctx, 31, 0x23A11Cu);
    ctx->pc = 0x23A118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A114u;
    // 0x23a118: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x23A114u, 0x23A11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A11Cu;
label_23a11c:
    // 0x23a11c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23a11cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23a120:
    // 0x23a120: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23a120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23a124: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23a124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a128: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x23a128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23a12c: 0x3e00008  jr          $ra
    ctx->pc = 0x23A12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A12Cu;
        // 0x23a130: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A134u;
    // 0x23a134: 0x0  nop
    ctx->pc = 0x23a134u;
    // NOP
    ctx->pc = 0x23a138u;
}
