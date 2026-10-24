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

// Function: func_001A47F8
// Address: 0x1a47f8 - 0x1a49a8
void func_001A47F8_0x1a47f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A47F8_0x1a47f8");
#endif

    switch (ctx->pc) {
        case 0x1a48b4u: goto label_1a48b4;
        case 0x1a48d4u: goto label_1a48d4;
        case 0x1a4918u: goto label_1a4918;
        case 0x1a4930u: goto label_1a4930;
        case 0x1a4970u: goto label_1a4970;
        default: break;
    }

    ctx->pc = 0x1a47f8u;

    // 0x1a47f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a47f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a47fc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a47fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a4800: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a4800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a4804: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a4804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4808: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a4808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a480c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1a480cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4810: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a4810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a4814: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1a4814u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1a4818: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x1a4818u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
    // 0x1a481c: 0x10720032  beq         $v1, $s2, . + 4 + (0x32 << 2)
    ctx->pc = 0x1A481Cu;
    {
        const bool branch_taken_0x1a481c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x1A4820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A481Cu;
        // 0x1a4820: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a481c) {
            ctx->pc = 0x1A48E8u;
            goto label_1a48e8;
        }
    }
    ctx->pc = 0x1A4824u;
    // 0x1a4824: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4824u;
    {
        const bool branch_taken_0x1a4824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4824) {
            ctx->pc = 0x1A4828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4824u;
            // 0x1a4828: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A483Cu;
            goto label_1a483c;
        }
    }
    ctx->pc = 0x1A482Cu;
    // 0x1a482c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A482Cu;
    {
        const bool branch_taken_0x1a482c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A482Cu;
        // 0x1a4830: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a482c) {
            ctx->pc = 0x1A4854u;
            goto label_1a4854;
        }
    }
    ctx->pc = 0x1A4834u;
    // 0x1a4834: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1A4834u;
    {
        const bool branch_taken_0x1a4834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4834u;
        // 0x1a4838: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4834) {
            ctx->pc = 0x1A4994u;
            goto label_1a4994;
        }
    }
    ctx->pc = 0x1A483Cu;
label_1a483c:
    // 0x1a483c: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1A483Cu;
    {
        const bool branch_taken_0x1a483c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A4840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A483Cu;
        // 0x1a4840: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a483c) {
            ctx->pc = 0x1A4928u;
            goto label_1a4928;
        }
    }
    ctx->pc = 0x1A4844u;
    // 0x1a4844: 0x10620045  beq         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1A4844u;
    {
        const bool branch_taken_0x1a4844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A4848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4844u;
        // 0x1a4848: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4844) {
            ctx->pc = 0x1A495Cu;
            goto label_1a495c;
        }
    }
    ctx->pc = 0x1A484Cu;
    // 0x1a484c: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1A484Cu;
    {
        const bool branch_taken_0x1a484c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A484Cu;
        // 0x1a4850: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a484c) {
            ctx->pc = 0x1A4994u;
            goto label_1a4994;
        }
    }
    ctx->pc = 0x1A4854u;
label_1a4854:
    // 0x1a4854: 0x92220761  lbu         $v0, 0x761($s1)
    ctx->pc = 0x1a4854u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1889)));
    // 0x1a4858: 0x1052004c  beq         $v0, $s2, . + 4 + (0x4C << 2)
    ctx->pc = 0x1A4858u;
    {
        const bool branch_taken_0x1a4858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1A485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4858u;
        // 0x1a485c: 0x26300600  addiu       $s0, $s1, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4858) {
            ctx->pc = 0x1A498Cu;
            goto label_1a498c;
        }
    }
    ctx->pc = 0x1A4860u;
    // 0x1a4860: 0xc6210798  lwc1        $f1, 0x798($s1)
    ctx->pc = 0x1a4860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4864: 0xc6200794  lwc1        $f0, 0x794($s1)
    ctx->pc = 0x1a4864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a486c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1a486cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1a4870: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a4870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4874: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1a4874u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1a4878: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a4878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a487c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a487cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a4880: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x1a4880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a4884: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a4884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4888: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1a4888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1a488c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a488cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1a4890: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a4890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a4894: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x1a4894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a4898: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1a4898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a489c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1a489cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a48a0: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x1a48a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1a48a4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1a48a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1a48a8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a48a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1a48ac: 0xc071a62  jal         func_1C6988
    ctx->pc = 0x1A48ACu;
    SET_GPR_U32(ctx, 31, 0x1A48B4u);
    ctx->pc = 0x1A48B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A48ACu;
    // 0x1a48b0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6988u, 0x1A48ACu, 0x1A48B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A48B4u;
label_1a48b4:
    // 0x1a48b4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1a48b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1a48b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a48b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a48bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a48bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a48c0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1a48c0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1a48c4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a48c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a48c8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1a48c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a48cc: 0xc071f54  jal         func_1C7D50
    ctx->pc = 0x1A48CCu;
    SET_GPR_U32(ctx, 31, 0x1A48D4u);
    ctx->pc = 0x1A48D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A48CCu;
    // 0x1a48d0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D50u, 0x1A48CCu, 0x1A48D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A48D4u;
label_1a48d4:
    // 0x1a48d4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1a48d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a48d8: 0xa23202f5  sb          $s2, 0x2F5($s1)
    ctx->pc = 0x1a48d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 18));
    // 0x1a48dc: 0xa622079c  sh          $v0, 0x79C($s1)
    ctx->pc = 0x1a48dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1948), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a48e0: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1a48e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a48e4: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1a48e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1a48e8:
    // 0x1a48e8: 0x8622079c  lh          $v0, 0x79C($s1)
    ctx->pc = 0x1a48e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1948)));
    // 0x1a48ec: 0x4430025  bgezl       $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1A48ECu;
    {
        const bool branch_taken_0x1a48ec = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x1a48ec) {
            ctx->pc = 0x1A48F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A48ECu;
            // 0x1a48f0: 0x9622079c  lhu         $v0, 0x79C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1948)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4984u;
            goto label_1a4984;
        }
    }
    ctx->pc = 0x1A48F4u;
    // 0x1a48f4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1a48f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1a48f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a48f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a48fc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1a48fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1a4900: 0x24060085  addiu       $a2, $zero, 0x85
    ctx->pc = 0x1a4900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    // 0x1a4904: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1a4904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a4908: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1a4908u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a490c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a490cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4910: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1A4910u;
    SET_GPR_U32(ctx, 31, 0x1A4918u);
    ctx->pc = 0x1A4914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4910u;
    // 0x1a4914: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1A4910u, 0x1A4918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4918u;
label_1a4918:
    // 0x1a4918: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a4918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a491c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1a491cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4920: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1A4920u;
    {
        const bool branch_taken_0x1a4920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4920u;
        // 0x1a4924: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4920) {
            ctx->pc = 0x1A497Cu;
            goto label_1a497c;
        }
    }
    ctx->pc = 0x1A4928u;
label_1a4928:
    // 0x1a4928: 0xc070fce  jal         func_1C3F38
    ctx->pc = 0x1A4928u;
    SET_GPR_U32(ctx, 31, 0x1A4930u);
    ctx->pc = 0x1A492Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4928u;
    // 0x1a492c: 0x26240600  addiu       $a0, $s1, 0x600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x1A4928u, 0x1A4930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4930u;
label_1a4930:
    // 0x1a4930: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A4930u;
    {
        const bool branch_taken_0x1a4930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4930u;
        // 0x1a4934: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4930) {
            ctx->pc = 0x1A4990u;
            goto label_1a4990;
        }
    }
    ctx->pc = 0x1A4938u;
    // 0x1a4938: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1a4938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a493c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a493cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a4940: 0xa2320761  sb          $s2, 0x761($s1)
    ctx->pc = 0x1a4940u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1889), (uint8_t)GPR_U32(ctx, 18));
    // 0x1a4944: 0xa622079c  sh          $v0, 0x79C($s1)
    ctx->pc = 0x1a4944u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1948), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a4948: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x1a4948u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a494c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1a494cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4950: 0xa2200760  sb          $zero, 0x760($s1)
    ctx->pc = 0x1a4950u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1888), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4954: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1A4954u;
    {
        const bool branch_taken_0x1a4954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4954u;
        // 0x1a4958: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4954) {
            ctx->pc = 0x1A4990u;
            goto label_1a4990;
        }
    }
    ctx->pc = 0x1A495Cu;
label_1a495c:
    // 0x1a495c: 0x8622079c  lh          $v0, 0x79C($s1)
    ctx->pc = 0x1a495cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1948)));
    // 0x1a4960: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A4960u;
    {
        const bool branch_taken_0x1a4960 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x1a4960) {
            ctx->pc = 0x1A4964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4960u;
            // 0x1a4964: 0x9622079c  lhu         $v0, 0x79C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1948)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4984u;
            goto label_1a4984;
        }
    }
    ctx->pc = 0x1A4968u;
    // 0x1a4968: 0xc06933e  jal         func_1A4CF8
    ctx->pc = 0x1A4968u;
    SET_GPR_U32(ctx, 31, 0x1A4970u);
    ctx->pc = 0x1A496Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4968u;
    // 0x1a496c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4CF8u, 0x1A4968u, 0x1A4970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4970u;
label_1a4970:
    // 0x1a4970: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x1a4970u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4974: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x1a4974u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4978: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1a4978u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_1a497c:
    // 0x1a497c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1a497cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4980: 0x9622079c  lhu         $v0, 0x79C($s1)
    ctx->pc = 0x1a4980u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1948)));
label_1a4984:
    // 0x1a4984: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a4984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a4988: 0xa622079c  sh          $v0, 0x79C($s1)
    ctx->pc = 0x1a4988u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1948), (uint16_t)GPR_U32(ctx, 2));
label_1a498c:
    // 0x1a498c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a498cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a4990:
    // 0x1a4990: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a4990u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a4994:
    // 0x1a4994: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a4994u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4998: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a499c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1a499cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a49a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A49A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A49A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49A0u;
        // 0x1a49a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A49A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A49A8u;
}
