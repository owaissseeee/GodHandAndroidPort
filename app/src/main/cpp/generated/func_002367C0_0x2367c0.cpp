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

// Function: func_002367C0
// Address: 0x2367c0 - 0x236c60
void func_002367C0_0x2367c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002367C0_0x2367c0");
#endif

    switch (ctx->pc) {
        case 0x2367e0u: goto label_2367e0;
        case 0x2367f8u: goto label_2367f8;
        case 0x236850u: goto label_236850;
        case 0x23685cu: goto label_23685c;
        case 0x2368ecu: goto label_2368ec;
        case 0x23690cu: goto label_23690c;
        case 0x236918u: goto label_236918;
        case 0x236920u: goto label_236920;
        case 0x236998u: goto label_236998;
        case 0x2369d8u: goto label_2369d8;
        case 0x236a30u: goto label_236a30;
        case 0x236a74u: goto label_236a74;
        case 0x236a80u: goto label_236a80;
        case 0x236ad8u: goto label_236ad8;
        case 0x236af8u: goto label_236af8;
        case 0x236b24u: goto label_236b24;
        case 0x236b30u: goto label_236b30;
        case 0x236b68u: goto label_236b68;
        case 0x236b88u: goto label_236b88;
        case 0x236ba0u: goto label_236ba0;
        case 0x236c20u: goto label_236c20;
        case 0x236c34u: goto label_236c34;
        case 0x236c40u: goto label_236c40;
        default: break;
    }

    ctx->pc = 0x2367c0u;

    // 0x2367c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2367c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2367c4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2367c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2367c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2367c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2367cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2367ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2367d0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2367d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2367d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2367d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2367d8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2367D8u;
    SET_GPR_U32(ctx, 31, 0x2367E0u);
    ctx->pc = 0x2367DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2367D8u;
    // 0x2367dc: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2367D8u, 0x2367E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2367E0u;
label_2367e0:
    // 0x2367e0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2367e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x2367e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2367e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2367e8: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x2367e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x2367ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2367ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2367f0: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x2367F0u;
    SET_GPR_U32(ctx, 31, 0x2367F8u);
    ctx->pc = 0x2367F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2367F0u;
    // 0x2367f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x2367F0u, 0x2367F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2367F8u;
label_2367f8:
    // 0x2367f8: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x2367f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2367fc: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x2367fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x236800: 0x1040010f  beqz        $v0, . + 4 + (0x10F << 2)
    ctx->pc = 0x236800u;
    {
        const bool branch_taken_0x236800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236800u;
        // 0x236804: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236800) {
            ctx->pc = 0x236C40u;
            goto label_236c40;
        }
    }
    ctx->pc = 0x236808u;
    // 0x236808: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x236808u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23680c: 0x2442a280  addiu       $v0, $v0, -0x5D80
    ctx->pc = 0x23680cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943360));
    // 0x236810: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x236810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x236814: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x236814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x236818: 0x800008  jr          $a0
    ctx->pc = 0x236818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x236820u: goto label_236820;
            case 0x2368C0u: goto label_2368c0;
            case 0x236968u: goto label_236968;
            case 0x2369A4u: goto label_2369a4;
            case 0x236AA8u: goto label_236aa8;
            case 0x236AE4u: goto label_236ae4;
            case 0x236B38u: goto label_236b38;
            case 0x236B74u: goto label_236b74;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236818u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x236820u;
label_236820:
    // 0x236820: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x236820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x236824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236828: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x236828u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x23682c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23682cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236830: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x236830u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x236834: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x236834u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236838: 0x8c45100c  lw          $a1, 0x100C($v0)
    ctx->pc = 0x236838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4108)));
    // 0x23683c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23683cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236840: 0x8c461010  lw          $a2, 0x1010($v0)
    ctx->pc = 0x236840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4112)));
    // 0x236844: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x236844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x236848: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x236848u;
    SET_GPR_U32(ctx, 31, 0x236850u);
    ctx->pc = 0x23684Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236848u;
    // 0x23684c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x236848u, 0x236850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236850u;
label_236850:
    // 0x236850: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x236850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x236854: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x236854u;
    SET_GPR_U32(ctx, 31, 0x23685Cu);
    ctx->pc = 0x236858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236854u;
    // 0x236858: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x236854u, 0x23685Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23685Cu;
label_23685c:
    // 0x23685c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x23685cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x236860: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x236860u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x236864: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x236864u;
    {
        const bool branch_taken_0x236864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236864u;
        // 0x236868: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236864) {
            ctx->pc = 0x236884u;
            goto label_236884;
        }
    }
    ctx->pc = 0x23686Cu;
    // 0x23686c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23686cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x236870: 0x2442a2a0  addiu       $v0, $v0, -0x5D60
    ctx->pc = 0x236870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943392));
    // 0x236874: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x236874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x236878: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x236878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23687c: 0x800008  jr          $a0
    ctx->pc = 0x23687Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x236884u: goto label_236884;
            case 0x23688Cu: goto label_23688c;
            case 0x236894u: goto label_236894;
            case 0x23689Cu: goto label_23689c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23687Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x236884u;
label_236884:
    // 0x236884: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x236884u;
    {
        const bool branch_taken_0x236884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236884u;
        // 0x236888: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236884) {
            ctx->pc = 0x2368A0u;
            goto label_2368a0;
        }
    }
    ctx->pc = 0x23688Cu;
label_23688c:
    // 0x23688c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23688Cu;
    {
        const bool branch_taken_0x23688c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23688Cu;
        // 0x236890: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23688c) {
            ctx->pc = 0x2368A0u;
            goto label_2368a0;
        }
    }
    ctx->pc = 0x236894u;
label_236894:
    // 0x236894: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x236894u;
    {
        const bool branch_taken_0x236894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236894u;
        // 0x236898: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236894) {
            ctx->pc = 0x2368A0u;
            goto label_2368a0;
        }
    }
    ctx->pc = 0x23689Cu;
label_23689c:
    // 0x23689c: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x23689cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_2368a0:
    // 0x2368a0: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x2368a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
    // 0x2368a4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2368a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2368a8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2368a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2368ac: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2368acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2368b0: 0xa603056a  sh          $v1, 0x56A($s0)
    ctx->pc = 0x2368b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 3));
    // 0x2368b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2368b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2368b8: 0xa604056e  sh          $a0, 0x56E($s0)
    ctx->pc = 0x2368b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 4));
    // 0x2368bc: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2368bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2368c0:
    // 0x2368c0: 0x26220550  addiu       $v0, $s1, 0x550
    ctx->pc = 0x2368c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x2368c4: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x2368c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2368c8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2368c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2368cc: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x2368ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2368d0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2368d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2368d4: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2368d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2368d8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2368d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2368dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2368dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2368e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2368e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2368e4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2368E4u;
    SET_GPR_U32(ctx, 31, 0x2368ECu);
    ctx->pc = 0x2368E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2368E4u;
    // 0x2368e8: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2368E4u, 0x2368ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2368ECu;
label_2368ec:
    // 0x2368ec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2368ECu;
    {
        const bool branch_taken_0x2368ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2368F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2368ECu;
        // 0x2368f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2368ec) {
            ctx->pc = 0x2368F8u;
            goto label_2368f8;
        }
    }
    ctx->pc = 0x2368F4u;
    // 0x2368f4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2368f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2368f8:
    // 0x2368f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2368f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2368fc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2368fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x236900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236904: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x236904u;
    SET_GPR_U32(ctx, 31, 0x23690Cu);
    ctx->pc = 0x236908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236904u;
    // 0x236908: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x236904u, 0x23690Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23690Cu;
label_23690c:
    // 0x23690c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x23690cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x236910: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x236910u;
    SET_GPR_U32(ctx, 31, 0x236918u);
    ctx->pc = 0x236914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236910u;
    // 0x236914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x236910u, 0x236918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236918u;
label_236918:
    // 0x236918: 0xc0b6ddc  jal         func_2DB770
    ctx->pc = 0x236918u;
    SET_GPR_U32(ctx, 31, 0x236920u);
    ctx->pc = 0x2DB770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB770u, 0x236918u, 0x236920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236920u;
label_236920:
    // 0x236920: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x236920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x236924: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x236924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x236928: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x236928u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7474A8u));
    // 0x23692c: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x23692cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x236930: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x236930u;
    {
        const bool branch_taken_0x236930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236930) {
            ctx->pc = 0x236934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236930u;
            // 0x236934: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236948u;
            goto label_236948;
        }
    }
    ctx->pc = 0x236938u;
    // 0x236938: 0x96020568  lhu         $v0, 0x568($s0)
    ctx->pc = 0x236938u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x23693c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23693cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x236940: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x236940u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
    // 0x236944: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x236944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_236948:
    // 0x236948: 0x3c0300f0  lui         $v1, 0xF0
    ctx->pc = 0x236948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)240 << 16));
    // 0x23694c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23694cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x236950: 0x504000bc  beql        $v0, $zero, . + 4 + (0xBC << 2)
    ctx->pc = 0x236950u;
    {
        const bool branch_taken_0x236950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236950) {
            ctx->pc = 0x236954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236950u;
            // 0x236954: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236C44u;
            goto label_236c44;
        }
    }
    ctx->pc = 0x236958u;
    // 0x236958: 0x96020568  lhu         $v0, 0x568($s0)
    ctx->pc = 0x236958u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x23695c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x23695cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x236960: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x236960u;
    {
        const bool branch_taken_0x236960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236960u;
        // 0x236964: 0xa6020568  sh          $v0, 0x568($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236960) {
            ctx->pc = 0x236C40u;
            goto label_236c40;
        }
    }
    ctx->pc = 0x236968u;
label_236968:
    // 0x236968: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x236968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23696c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23696cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236970: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x236970u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x236974: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x236974u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236978: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x236978u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23697c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23697cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236980: 0x8c450ff4  lw          $a1, 0xFF4($v0)
    ctx->pc = 0x236980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4084)));
    // 0x236984: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x236984u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236988: 0x8c460ff8  lw          $a2, 0xFF8($v0)
    ctx->pc = 0x236988u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4088)));
    // 0x23698c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x23698cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x236990: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x236990u;
    SET_GPR_U32(ctx, 31, 0x236998u);
    ctx->pc = 0x236994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236990u;
    // 0x236994: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x236990u, 0x236998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236998u;
label_236998:
    // 0x236998: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x236998u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x23699c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23699cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2369a0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2369a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2369a4:
    // 0x2369a4: 0x8602056e  lh          $v0, 0x56E($s0)
    ctx->pc = 0x2369a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
    // 0x2369a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2369A8u;
    {
        const bool branch_taken_0x2369a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2369ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2369A8u;
        // 0x2369ac: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2369a8) {
            ctx->pc = 0x2369D0u;
            goto label_2369d0;
        }
    }
    ctx->pc = 0x2369B0u;
    // 0x2369b0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2369b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2369b4: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x2369b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2369b8: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x2369b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x2369bc: 0x26230550  addiu       $v1, $s1, 0x550
    ctx->pc = 0x2369bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x2369c0: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2369c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2369c4: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x2369c4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2369c8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2369c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2369cc: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2369ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_2369d0:
    // 0x2369d0: 0xc0b6ddc  jal         func_2DB770
    ctx->pc = 0x2369D0u;
    SET_GPR_U32(ctx, 31, 0x2369D8u);
    ctx->pc = 0x2DB770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB770u, 0x2369D0u, 0x2369D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2369D8u;
label_2369d8:
    // 0x2369d8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2369d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2369dc: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x2369dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x2369e0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2369e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7474A8u));
    // 0x2369e4: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x2369e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x2369e8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2369E8u;
    {
        const bool branch_taken_0x2369e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2369e8) {
            ctx->pc = 0x2369ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2369E8u;
            // 0x2369ec: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236A00u;
            goto label_236a00;
        }
    }
    ctx->pc = 0x2369F0u;
    // 0x2369f0: 0x96020568  lhu         $v0, 0x568($s0)
    ctx->pc = 0x2369f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x2369f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2369f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2369f8: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x2369f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
    // 0x2369fc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2369fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_236a00:
    // 0x236a00: 0x3c0300f0  lui         $v1, 0xF0
    ctx->pc = 0x236a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)240 << 16));
    // 0x236a04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x236a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x236a08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x236A08u;
    {
        const bool branch_taken_0x236a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236a08) {
            ctx->pc = 0x236A1Cu;
            goto label_236a1c;
        }
    }
    ctx->pc = 0x236A10u;
    // 0x236a10: 0x96020568  lhu         $v0, 0x568($s0)
    ctx->pc = 0x236a10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x236a14: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x236a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x236a18: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x236a18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
label_236a1c:
    // 0x236a1c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x236a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x236a20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x236a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x236a24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236a28: 0xc055f06  jal         func_157C18
    ctx->pc = 0x236A28u;
    SET_GPR_U32(ctx, 31, 0x236A30u);
    ctx->pc = 0x236A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236A28u;
    // 0x236a2c: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x236A28u, 0x236A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236A30u;
label_236a30:
    // 0x236a30: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x236A30u;
    {
        const bool branch_taken_0x236a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236A30u;
        // 0x236a34: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236a30) {
            ctx->pc = 0x236A60u;
            goto label_236a60;
        }
    }
    ctx->pc = 0x236A38u;
    // 0x236a38: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x236a38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x236a3c: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x236a3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x236a40: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x236A40u;
    {
        const bool branch_taken_0x236a40 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x236A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236A40u;
        // 0x236a44: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236a40) {
            ctx->pc = 0x236A50u;
            goto label_236a50;
        }
    }
    ctx->pc = 0x236A48u;
    // 0x236a48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x236A48u;
    {
        const bool branch_taken_0x236a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236A48u;
        // 0x236a4c: 0xa22302f6  sb          $v1, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236a48) {
            ctx->pc = 0x236A60u;
            goto label_236a60;
        }
    }
    ctx->pc = 0x236A50u;
label_236a50:
    // 0x236a50: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x236a50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x236a54: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x236a54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x236a58: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x236a58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x236a5c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x236a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_236a60:
    // 0x236a60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x236a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x236a64: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x236a64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x236a68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236a6c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x236A6Cu;
    SET_GPR_U32(ctx, 31, 0x236A74u);
    ctx->pc = 0x236A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236A6Cu;
    // 0x236a70: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x236A6Cu, 0x236A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236A74u;
label_236a74:
    // 0x236a74: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x236a74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x236a78: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x236A78u;
    SET_GPR_U32(ctx, 31, 0x236A80u);
    ctx->pc = 0x236A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236A78u;
    // 0x236a7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x236A78u, 0x236A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236A80u;
label_236a80:
    // 0x236a80: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x236a80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x236a84: 0x5840006f  blezl       $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x236A84u;
    {
        const bool branch_taken_0x236a84 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x236a84) {
            ctx->pc = 0x236A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236A84u;
            // 0x236a88: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236C44u;
            goto label_236c44;
        }
    }
    ctx->pc = 0x236A8Cu;
    // 0x236a8c: 0x86020568  lh          $v0, 0x568($s0)
    ctx->pc = 0x236a8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x236a90: 0x5c40006c  bgtzl       $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x236A90u;
    {
        const bool branch_taken_0x236a90 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x236a90) {
            ctx->pc = 0x236A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236A90u;
            // 0x236a94: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236C44u;
            goto label_236c44;
        }
    }
    ctx->pc = 0x236A98u;
    // 0x236a98: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x236a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x236a9c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x236a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x236aa0: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x236AA0u;
    {
        const bool branch_taken_0x236aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236AA0u;
        // 0x236aa4: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236aa0) {
            ctx->pc = 0x236C40u;
            goto label_236c40;
        }
    }
    ctx->pc = 0x236AA8u;
label_236aa8:
    // 0x236aa8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x236aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x236aac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236ab0: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x236ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x236ab4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x236ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x236ab8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x236ab8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x236abc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x236abcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236ac0: 0x8c451004  lw          $a1, 0x1004($v0)
    ctx->pc = 0x236ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    // 0x236ac4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x236ac4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236ac8: 0x8c461008  lw          $a2, 0x1008($v0)
    ctx->pc = 0x236ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4104)));
    // 0x236acc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x236accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x236ad0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x236AD0u;
    SET_GPR_U32(ctx, 31, 0x236AD8u);
    ctx->pc = 0x236AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236AD0u;
    // 0x236ad4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x236AD0u, 0x236AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236AD8u;
label_236ad8:
    // 0x236ad8: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x236ad8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x236adc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x236adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x236ae0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x236ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_236ae4:
    // 0x236ae4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x236ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x236ae8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x236ae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x236aec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236af0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x236AF0u;
    SET_GPR_U32(ctx, 31, 0x236AF8u);
    ctx->pc = 0x236AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236AF0u;
    // 0x236af4: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x236AF0u, 0x236AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236AF8u;
label_236af8:
    // 0x236af8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x236AF8u;
    {
        const bool branch_taken_0x236af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236AF8u;
        // 0x236afc: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236af8) {
            ctx->pc = 0x236B10u;
            goto label_236b10;
        }
    }
    ctx->pc = 0x236B00u;
    // 0x236b00: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x236b00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x236b04: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x236b04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x236b08: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x236b08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x236b0c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x236b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_236b10:
    // 0x236b10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x236b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x236b14: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x236b14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x236b18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236b1c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x236B1Cu;
    SET_GPR_U32(ctx, 31, 0x236B24u);
    ctx->pc = 0x236B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236B1Cu;
    // 0x236b20: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x236B1Cu, 0x236B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236B24u;
label_236b24:
    // 0x236b24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236b28: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x236B28u;
    SET_GPR_U32(ctx, 31, 0x236B30u);
    ctx->pc = 0x236B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236B28u;
    // 0x236b2c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x236B28u, 0x236B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236B30u;
label_236b30:
    // 0x236b30: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x236B30u;
    {
        const bool branch_taken_0x236b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236B30u;
        // 0x236b34: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236b30) {
            ctx->pc = 0x236C44u;
            goto label_236c44;
        }
    }
    ctx->pc = 0x236B38u;
label_236b38:
    // 0x236b38: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x236b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x236b3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236b40: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x236b40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x236b44: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x236b44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x236b48: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x236b48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x236b4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x236b4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236b50: 0x8c450ffc  lw          $a1, 0xFFC($v0)
    ctx->pc = 0x236b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4092)));
    // 0x236b54: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x236b54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236b58: 0x8c461000  lw          $a2, 0x1000($v0)
    ctx->pc = 0x236b58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4096)));
    // 0x236b5c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x236b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x236b60: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x236B60u;
    SET_GPR_U32(ctx, 31, 0x236B68u);
    ctx->pc = 0x236B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236B60u;
    // 0x236b64: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x236B60u, 0x236B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236B68u;
label_236b68:
    // 0x236b68: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x236b68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x236b6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x236b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x236b70: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x236b70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_236b74:
    // 0x236b74: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x236b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x236b78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x236b78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x236b7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236b80: 0xc055f06  jal         func_157C18
    ctx->pc = 0x236B80u;
    SET_GPR_U32(ctx, 31, 0x236B88u);
    ctx->pc = 0x236B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236B80u;
    // 0x236b84: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x236B80u, 0x236B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236B88u;
label_236b88:
    // 0x236b88: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x236B88u;
    {
        const bool branch_taken_0x236b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236B88u;
        // 0x236b8c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236b88) {
            ctx->pc = 0x236C20u;
            goto label_236c20;
        }
    }
    ctx->pc = 0x236B90u;
    // 0x236b90: 0x8611054a  lh          $s1, 0x54A($s0)
    ctx->pc = 0x236b90u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x236b94: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x236b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x236b98: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x236B98u;
    SET_GPR_U32(ctx, 31, 0x236BA0u);
    ctx->pc = 0x236B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236B98u;
    // 0x236b9c: 0x24120014  addiu       $s2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x236B98u, 0x236BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236BA0u;
label_236ba0:
    // 0x236ba0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x236ba0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236ba4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x236ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x236ba8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x236BA8u;
    {
        const bool branch_taken_0x236ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x236BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236BA8u;
        // 0x236bac: 0x28620005  slti        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x236ba8) {
            ctx->pc = 0x236BCCu;
            goto label_236bcc;
        }
    }
    ctx->pc = 0x236BB0u;
    // 0x236bb0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x236BB0u;
    {
        const bool branch_taken_0x236bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236bb0) {
            ctx->pc = 0x236BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236BB0u;
            // 0x236bb4: 0x2328823  subu        $s1, $s1, $s2 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236BD4u;
            goto label_236bd4;
        }
    }
    ctx->pc = 0x236BB8u;
    // 0x236bb8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x236bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x236bbc: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x236BBCu;
    {
        const bool branch_taken_0x236bbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x236bbc) {
            ctx->pc = 0x236BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236BBCu;
            // 0x236bc0: 0x2412000f  addiu       $s2, $zero, 0xF (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236BD0u;
            goto label_236bd0;
        }
    }
    ctx->pc = 0x236BC4u;
    // 0x236bc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x236BC4u;
    {
        const bool branch_taken_0x236bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236BC4u;
        // 0x236bc8: 0x2328823  subu        $s1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236bc4) {
            ctx->pc = 0x236BD4u;
            goto label_236bd4;
        }
    }
    ctx->pc = 0x236BCCu;
label_236bcc:
    // 0x236bcc: 0x24120012  addiu       $s2, $zero, 0x12
    ctx->pc = 0x236bccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_236bd0:
    // 0x236bd0: 0x2328823  subu        $s1, $s1, $s2
    ctx->pc = 0x236bd0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_236bd4:
    // 0x236bd4: 0x86020548  lh          $v0, 0x548($s0)
    ctx->pc = 0x236bd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
    // 0x236bd8: 0x11182a  slt         $v1, $zero, $s1
    ctx->pc = 0x236bd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x236bdc: 0x3880a  movz        $s1, $zero, $v1
    ctx->pc = 0x236bdcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x236be0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x236be0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x236be4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x236BE4u;
    {
        const bool branch_taken_0x236be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236BE4u;
        // 0x236be8: 0x96040548  lhu         $a0, 0x548($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236be4) {
            ctx->pc = 0x236BF4u;
            goto label_236bf4;
        }
    }
    ctx->pc = 0x236BECu;
    // 0x236bec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x236BECu;
    {
        const bool branch_taken_0x236bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236BECu;
        // 0x236bf0: 0xa604054a  sh          $a0, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236bec) {
            ctx->pc = 0x236BF8u;
            goto label_236bf8;
        }
    }
    ctx->pc = 0x236BF4u;
label_236bf4:
    // 0x236bf4: 0xa611054a  sh          $s1, 0x54A($s0)
    ctx->pc = 0x236bf4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 17));
label_236bf8:
    // 0x236bf8: 0x1e200007  bgtz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x236BF8u;
    {
        const bool branch_taken_0x236bf8 = (GPR_S64(ctx, 17) > 0);
        ctx->pc = 0x236BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236BF8u;
        // 0x236bfc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236bf8) {
            ctx->pc = 0x236C18u;
            goto label_236c18;
        }
    }
    ctx->pc = 0x236C00u;
    // 0x236c00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x236c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x236c04: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x236c04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x236c08: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x236c08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x236c0c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x236c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x236c10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x236C10u;
    {
        const bool branch_taken_0x236c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C10u;
        // 0x236c14: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236c10) {
            ctx->pc = 0x236C20u;
            goto label_236c20;
        }
    }
    ctx->pc = 0x236C18u;
label_236c18:
    // 0x236c18: 0xc09d3fa  jal         func_274FE8
    ctx->pc = 0x236C18u;
    SET_GPR_U32(ctx, 31, 0x236C20u);
    ctx->pc = 0x236C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236C18u;
    // 0x236c1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274FE8u, 0x236C18u, 0x236C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236C20u;
label_236c20:
    // 0x236c20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x236c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x236c24: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x236c24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x236c28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236c2c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x236C2Cu;
    SET_GPR_U32(ctx, 31, 0x236C34u);
    ctx->pc = 0x236C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236C2Cu;
    // 0x236c30: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x236C2Cu, 0x236C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236C34u;
label_236c34:
    // 0x236c34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236c38: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x236C38u;
    SET_GPR_U32(ctx, 31, 0x236C40u);
    ctx->pc = 0x236C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236C38u;
    // 0x236c3c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x236C38u, 0x236C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236C40u;
label_236c40:
    // 0x236c40: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x236c40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_236c44:
    // 0x236c44: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x236c44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x236c48: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x236c48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236c4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x236c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236c50: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x236c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x236c54: 0x3e00008  jr          $ra
    ctx->pc = 0x236C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C54u;
        // 0x236c58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236C5Cu;
    // 0x236c5c: 0x0  nop
    ctx->pc = 0x236c5cu;
    // NOP
    ctx->pc = 0x236c60u;
}
