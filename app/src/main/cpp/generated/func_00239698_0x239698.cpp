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

// Function: func_00239698
// Address: 0x239698 - 0x2397c0
void func_00239698_0x239698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00239698_0x239698");
#endif

    switch (ctx->pc) {
        case 0x2396b4u: goto label_2396b4;
        case 0x2396ccu: goto label_2396cc;
        case 0x239718u: goto label_239718;
        case 0x23976cu: goto label_23976c;
        case 0x239798u: goto label_239798;
        case 0x2397a4u: goto label_2397a4;
        default: break;
    }

    ctx->pc = 0x239698u;

    // 0x239698: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x239698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23969c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23969cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2396a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2396a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2396a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2396a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2396a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2396a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2396ac: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2396ACu;
    SET_GPR_U32(ctx, 31, 0x2396B4u);
    ctx->pc = 0x2396B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2396ACu;
    // 0x2396b0: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2396ACu, 0x2396B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2396B4u;
label_2396b4:
    // 0x2396b4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2396b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x2396b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2396b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2396bc: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x2396bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x2396c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2396c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2396c4: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x2396C4u;
    SET_GPR_U32(ctx, 31, 0x2396CCu);
    ctx->pc = 0x2396C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2396C4u;
    // 0x2396c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x2396C4u, 0x2396CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2396CCu;
label_2396cc:
    // 0x2396cc: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x2396ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2396d0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2396D0u;
    {
        const bool branch_taken_0x2396d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2396D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2396D0u;
        // 0x2396d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2396d0) {
            ctx->pc = 0x2396E8u;
            goto label_2396e8;
        }
    }
    ctx->pc = 0x2396D8u;
    // 0x2396d8: 0x50620015  beql        $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2396D8u;
    {
        const bool branch_taken_0x2396d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2396d8) {
            ctx->pc = 0x2396DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2396D8u;
            // 0x2396dc: 0x8602056e  lh          $v0, 0x56E($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239730u;
            goto label_239730;
        }
    }
    ctx->pc = 0x2396E0u;
    // 0x2396e0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2396E0u;
    {
        const bool branch_taken_0x2396e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2396E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2396E0u;
        // 0x2396e4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2396e0) {
            ctx->pc = 0x2397A8u;
            goto label_2397a8;
        }
    }
    ctx->pc = 0x2396E8u;
label_2396e8:
    // 0x2396e8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2396e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2396ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2396ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2396f0: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x2396f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x2396f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2396f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2396f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2396f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2396fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2396fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239700: 0x8c451484  lw          $a1, 0x1484($v0)
    ctx->pc = 0x239700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5252)));
    // 0x239704: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x239704u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239708: 0x8c461488  lw          $a2, 0x1488($v0)
    ctx->pc = 0x239708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5256)));
    // 0x23970c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x23970cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x239710: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x239710u;
    SET_GPR_U32(ctx, 31, 0x239718u);
    ctx->pc = 0x239714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239710u;
    // 0x239714: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x239710u, 0x239718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239718u;
label_239718:
    // 0x239718: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x239718u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x23971c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x23971cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x239720: 0xa603056e  sh          $v1, 0x56E($s0)
    ctx->pc = 0x239720u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x239724: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x239724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x239728: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x239728u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x23972c: 0x8602056e  lh          $v0, 0x56E($s0)
    ctx->pc = 0x23972cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
label_239730:
    // 0x239730: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x239730u;
    {
        const bool branch_taken_0x239730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239730u;
        // 0x239734: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239730) {
            ctx->pc = 0x239758u;
            goto label_239758;
        }
    }
    ctx->pc = 0x239738u;
    // 0x239738: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x239738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x23973c: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x23973cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x239740: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x239740u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x239744: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x239744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x239748: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x239748u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23974c: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x23974cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x239750: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x239750u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x239754: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x239754u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_239758:
    // 0x239758: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x239758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x23975c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23975cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239764: 0xc055f06  jal         func_157C18
    ctx->pc = 0x239764u;
    SET_GPR_U32(ctx, 31, 0x23976Cu);
    ctx->pc = 0x239768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239764u;
    // 0x239768: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x239764u, 0x23976Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23976Cu;
label_23976c:
    // 0x23976c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23976Cu;
    {
        const bool branch_taken_0x23976c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23976Cu;
        // 0x239770: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23976c) {
            ctx->pc = 0x239784u;
            goto label_239784;
        }
    }
    ctx->pc = 0x239774u;
    // 0x239774: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x239774u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x239778: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x239778u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x23977c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x23977cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x239780: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x239780u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_239784:
    // 0x239784: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x239784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x239788: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x239788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23978c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23978cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239790: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x239790u;
    SET_GPR_U32(ctx, 31, 0x239798u);
    ctx->pc = 0x239794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239790u;
    // 0x239794: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x239790u, 0x239798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239798u;
label_239798:
    // 0x239798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23979c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x23979Cu;
    SET_GPR_U32(ctx, 31, 0x2397A4u);
    ctx->pc = 0x2397A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23979Cu;
    // 0x2397a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x23979Cu, 0x2397A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2397A4u;
label_2397a4:
    // 0x2397a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2397a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2397a8:
    // 0x2397a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2397a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2397ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2397acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2397b0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2397b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2397b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2397B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2397B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2397B4u;
        // 0x2397b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2397B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2397BCu;
    // 0x2397bc: 0x0  nop
    ctx->pc = 0x2397bcu;
    // NOP
    ctx->pc = 0x2397c0u;
}
