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

// Function: func_00239570
// Address: 0x239570 - 0x239698
void func_00239570_0x239570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00239570_0x239570");
#endif

    switch (ctx->pc) {
        case 0x23958cu: goto label_23958c;
        case 0x2395a4u: goto label_2395a4;
        case 0x2395f0u: goto label_2395f0;
        case 0x239644u: goto label_239644;
        case 0x239670u: goto label_239670;
        case 0x23967cu: goto label_23967c;
        default: break;
    }

    ctx->pc = 0x239570u;

    // 0x239570: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x239570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x239574: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x239574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x239578: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x239578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23957c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23957cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x239580: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x239580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x239584: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x239584u;
    SET_GPR_U32(ctx, 31, 0x23958Cu);
    ctx->pc = 0x239588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239584u;
    // 0x239588: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x239584u, 0x23958Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23958Cu;
label_23958c:
    // 0x23958c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x23958cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x239590: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x239590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239594: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x239594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x239598: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x239598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23959c: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x23959Cu;
    SET_GPR_U32(ctx, 31, 0x2395A4u);
    ctx->pc = 0x2395A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23959Cu;
    // 0x2395a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x23959Cu, 0x2395A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2395A4u;
label_2395a4:
    // 0x2395a4: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x2395a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2395a8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2395A8u;
    {
        const bool branch_taken_0x2395a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2395ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2395A8u;
        // 0x2395ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2395a8) {
            ctx->pc = 0x2395C0u;
            goto label_2395c0;
        }
    }
    ctx->pc = 0x2395B0u;
    // 0x2395b0: 0x50620015  beql        $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2395B0u;
    {
        const bool branch_taken_0x2395b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2395b0) {
            ctx->pc = 0x2395B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2395B0u;
            // 0x2395b4: 0x8602056e  lh          $v0, 0x56E($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239608u;
            goto label_239608;
        }
    }
    ctx->pc = 0x2395B8u;
    // 0x2395b8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2395B8u;
    {
        const bool branch_taken_0x2395b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2395BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2395B8u;
        // 0x2395bc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2395b8) {
            ctx->pc = 0x239680u;
            goto label_239680;
        }
    }
    ctx->pc = 0x2395C0u;
label_2395c0:
    // 0x2395c0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2395c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2395c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2395c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2395c8: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x2395c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x2395cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2395ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2395d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2395d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2395d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2395d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2395d8: 0x8c453b38  lw          $a1, 0x3B38($v0)
    ctx->pc = 0x2395d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15160)));
    // 0x2395dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2395dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2395e0: 0x8c463b3c  lw          $a2, 0x3B3C($v0)
    ctx->pc = 0x2395e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15164)));
    // 0x2395e4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2395e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2395e8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2395E8u;
    SET_GPR_U32(ctx, 31, 0x2395F0u);
    ctx->pc = 0x2395ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2395E8u;
    // 0x2395ec: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2395E8u, 0x2395F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2395F0u;
label_2395f0:
    // 0x2395f0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2395f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2395f4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2395f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2395f8: 0xa603056e  sh          $v1, 0x56E($s0)
    ctx->pc = 0x2395f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x2395fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2395fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x239600: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x239600u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x239604: 0x8602056e  lh          $v0, 0x56E($s0)
    ctx->pc = 0x239604u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
label_239608:
    // 0x239608: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x239608u;
    {
        const bool branch_taken_0x239608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239608u;
        // 0x23960c: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239608) {
            ctx->pc = 0x239630u;
            goto label_239630;
        }
    }
    ctx->pc = 0x239610u;
    // 0x239610: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x239610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x239614: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x239614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x239618: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x239618u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x23961c: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x23961cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x239620: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x239620u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x239624: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x239624u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x239628: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x239628u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x23962c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x23962cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_239630:
    // 0x239630: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x239630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x239634: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x239634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23963c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x23963Cu;
    SET_GPR_U32(ctx, 31, 0x239644u);
    ctx->pc = 0x239640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23963Cu;
    // 0x239640: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23963Cu, 0x239644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239644u;
label_239644:
    // 0x239644: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x239644u;
    {
        const bool branch_taken_0x239644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239644u;
        // 0x239648: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239644) {
            ctx->pc = 0x23965Cu;
            goto label_23965c;
        }
    }
    ctx->pc = 0x23964Cu;
    // 0x23964c: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x23964cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x239650: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x239650u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x239654: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x239654u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x239658: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x239658u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_23965c:
    // 0x23965c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23965cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x239660: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x239660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x239664: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239668: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x239668u;
    SET_GPR_U32(ctx, 31, 0x239670u);
    ctx->pc = 0x23966Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239668u;
    // 0x23966c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x239668u, 0x239670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239670u;
label_239670:
    // 0x239670: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239674: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x239674u;
    SET_GPR_U32(ctx, 31, 0x23967Cu);
    ctx->pc = 0x239678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239674u;
    // 0x239678: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x239674u, 0x23967Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23967Cu;
label_23967c:
    // 0x23967c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23967cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_239680:
    // 0x239680: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x239680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239684: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x239684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239688: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x239688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23968c: 0x3e00008  jr          $ra
    ctx->pc = 0x23968Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23968Cu;
        // 0x239690: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23968Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239694u;
    // 0x239694: 0x0  nop
    ctx->pc = 0x239694u;
    // NOP
    ctx->pc = 0x239698u;
}
