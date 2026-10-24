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

// Function: func_001228D8
// Address: 0x1228d8 - 0x122a50
void func_001228D8_0x1228d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001228D8_0x1228d8");
#endif

    switch (ctx->pc) {
        case 0x122914u: goto label_122914;
        case 0x122920u: goto label_122920;
        case 0x122988u: goto label_122988;
        case 0x12299cu: goto label_12299c;
        case 0x1229e8u: goto label_1229e8;
        case 0x1229f0u: goto label_1229f0;
        case 0x122a04u: goto label_122a04;
        case 0x122a28u: goto label_122a28;
        case 0x122a34u: goto label_122a34;
        default: break;
    }

    ctx->pc = 0x1228d8u;

    // 0x1228d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1228d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1228dc: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1228dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1228e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1228e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1228e4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1228e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1228e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1228e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1228ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1228ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1228f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1228f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1228f4: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1228f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1228f8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1228f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1228fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1228fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x122900: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x122900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x122904: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x122904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x122908: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x122908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12290c: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x12290Cu;
    SET_GPR_U32(ctx, 31, 0x122914u);
    ctx->pc = 0x122910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12290Cu;
    // 0x122910: 0x8e110694  lw          $s1, 0x694($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1684)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x12290Cu, 0x122914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122914u;
label_122914:
    // 0x122914: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x122914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x122918: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x122918u;
    SET_GPR_U32(ctx, 31, 0x122920u);
    ctx->pc = 0x12291Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122918u;
    // 0x12291c: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x122918u, 0x122920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122920u;
label_122920:
    // 0x122920: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x122920u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x122924: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x122924u;
    {
        const bool branch_taken_0x122924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x122928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122924u;
        // 0x122928: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122924) {
            ctx->pc = 0x12293Cu;
            goto label_12293c;
        }
    }
    ctx->pc = 0x12292Cu;
    // 0x12292c: 0x50620021  beql        $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x12292Cu;
    {
        const bool branch_taken_0x12292c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12292c) {
            ctx->pc = 0x122930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12292Cu;
            // 0x122930: 0x8602056e  lh          $v0, 0x56E($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1229B4u;
            goto label_1229b4;
        }
    }
    ctx->pc = 0x122934u;
    // 0x122934: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x122934u;
    {
        const bool branch_taken_0x122934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122934u;
        // 0x122938: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122934) {
            ctx->pc = 0x122A38u;
            goto label_122a38;
        }
    }
    ctx->pc = 0x12293Cu;
label_12293c:
    // 0x12293c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x12293cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x122940: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x122940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122944: 0x3c013f04  lui         $at, 0x3F04
    ctx->pc = 0x122944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16132 << 16));
    // 0x122948: 0x34217454  ori         $at, $at, 0x7454
    ctx->pc = 0x122948u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29780);
    // 0x12294c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12294cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x122950: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x122950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122954: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x122954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x122958: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x122958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12295c: 0x3c013f07  lui         $at, 0x3F07
    ctx->pc = 0x12295cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16135 << 16));
    // 0x122960: 0x3421c1be  ori         $at, $at, 0xC1BE
    ctx->pc = 0x122960u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49598);
    // 0x122964: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x122964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x122968: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x122968u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12296c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12296cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x122970: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x122970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x122974: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x122974u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x122978: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x122978u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x12297c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x12297cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x122980: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x122980u;
    SET_GPR_U32(ctx, 31, 0x122988u);
    ctx->pc = 0x122984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122980u;
    // 0x122984: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x122980u, 0x122988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122988u;
label_122988:
    // 0x122988: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x122988u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x12298c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12298cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122990: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x122990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122994: 0xc0a2584  jal         func_289610
    ctx->pc = 0x122994u;
    SET_GPR_U32(ctx, 31, 0x12299Cu);
    ctx->pc = 0x122998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122994u;
    // 0x122998: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x289610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289610u, 0x122994u, 0x12299Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12299Cu;
label_12299c:
    // 0x12299c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x12299cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1229a0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1229a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1229a4: 0xa603056e  sh          $v1, 0x56E($s0)
    ctx->pc = 0x1229a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x1229a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1229a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1229ac: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1229acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x1229b0: 0x8602056e  lh          $v0, 0x56E($s0)
    ctx->pc = 0x1229b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
label_1229b4:
    // 0x1229b4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1229B4u;
    {
        const bool branch_taken_0x1229b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1229B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1229B4u;
        // 0x1229b8: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1229b4) {
            ctx->pc = 0x1229E0u;
            goto label_1229e0;
        }
    }
    ctx->pc = 0x1229BCu;
    // 0x1229bc: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1229BCu;
    {
        const bool branch_taken_0x1229bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1229C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1229BCu;
        // 0x1229c0: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1229bc) {
            ctx->pc = 0x1229E0u;
            goto label_1229e0;
        }
    }
    ctx->pc = 0x1229C4u;
    // 0x1229c4: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x1229c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x1229c8: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x1229c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x1229cc: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x1229ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1229d0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1229d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1229d4: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x1229d4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1229d8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1229d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1229dc: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1229dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1229e0:
    // 0x1229e0: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x1229E0u;
    SET_GPR_U32(ctx, 31, 0x1229E8u);
    ctx->pc = 0x1229E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1229E0u;
    // 0x1229e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x1229E0u, 0x1229E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1229E8u;
label_1229e8:
    // 0x1229e8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1229E8u;
    SET_GPR_U32(ctx, 31, 0x1229F0u);
    ctx->pc = 0x1229ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1229E8u;
    // 0x1229ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1229E8u, 0x1229F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1229F0u;
label_1229f0:
    // 0x1229f0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1229F0u;
    {
        const bool branch_taken_0x1229f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1229F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1229F0u;
        // 0x1229f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1229f0) {
            ctx->pc = 0x122A14u;
            goto label_122a14;
        }
    }
    ctx->pc = 0x1229F8u;
    // 0x1229f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1229f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1229fc: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x1229FCu;
    SET_GPR_U32(ctx, 31, 0x122A04u);
    ctx->pc = 0x122A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1229FCu;
    // 0x122a00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x1229FCu, 0x122A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A04u;
label_122a04:
    // 0x122a04: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x122a04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x122a08: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x122a08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x122a0c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x122a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x122a10: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x122a10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_122a14:
    // 0x122a14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x122a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x122a18: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x122a18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x122a1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x122a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a20: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x122A20u;
    SET_GPR_U32(ctx, 31, 0x122A28u);
    ctx->pc = 0x122A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122A20u;
    // 0x122a24: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x122A20u, 0x122A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A28u;
label_122a28:
    // 0x122a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x122a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a2c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x122A2Cu;
    SET_GPR_U32(ctx, 31, 0x122A34u);
    ctx->pc = 0x122A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122A2Cu;
    // 0x122a30: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x122A2Cu, 0x122A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A34u;
label_122a34:
    // 0x122a34: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x122a34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_122a38:
    // 0x122a38: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x122a38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122a3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x122a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122a40: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x122a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x122a44: 0x3e00008  jr          $ra
    ctx->pc = 0x122A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A44u;
        // 0x122a48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122A4Cu;
    // 0x122a4c: 0x0  nop
    ctx->pc = 0x122a4cu;
    // NOP
    ctx->pc = 0x122a50u;
}
