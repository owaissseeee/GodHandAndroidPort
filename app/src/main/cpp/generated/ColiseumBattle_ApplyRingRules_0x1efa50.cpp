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

// Function: ColiseumBattle_ApplyRingRules
// Address: 0x1efa50 - 0x1efc48
void ColiseumBattle_ApplyRingRules_0x1efa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ColiseumBattle_ApplyRingRules_0x1efa50");
#endif

    switch (ctx->pc) {
        case 0x1efa74u: goto label_1efa74;
        case 0x1efa98u: goto label_1efa98;
        case 0x1efb34u: goto label_1efb34;
        case 0x1efb64u: goto label_1efb64;
        case 0x1efb84u: goto label_1efb84;
        case 0x1efbb4u: goto label_1efbb4;
        case 0x1efbd0u: goto label_1efbd0;
        case 0x1efbdcu: goto label_1efbdc;
        case 0x1efbf0u: goto label_1efbf0;
        case 0x1efbf8u: goto label_1efbf8;
        case 0x1efc18u: goto label_1efc18;
        case 0x1efc28u: goto label_1efc28;
        default: break;
    }

    ctx->pc = 0x1efa50u;

    // 0x1efa50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1efa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1efa54: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1efa54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1efa58: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1efa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1efa5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1efa5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efa60: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1efa60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1efa64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1efa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1efa68: 0x3c120057  lui         $s2, 0x57
    ctx->pc = 0x1efa68u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)87 << 16));
    // 0x1efa6c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1EFA6Cu;
    SET_GPR_U32(ctx, 31, 0x1EFA74u);
    ctx->pc = 0x1EFA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFA6Cu;
    // 0x1efa70: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1EFA6Cu, 0x1EFA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFA74u;
label_1efa74:
    // 0x1efa74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1efa74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efa78: 0x1200004e  beqz        $s0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1EFA78u;
    {
        const bool branch_taken_0x1efa78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFA78u;
        // 0x1efa7c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efa78) {
            ctx->pc = 0x1EFBB4u;
            goto label_1efbb4;
        }
    }
    ctx->pc = 0x1EFA80u;
    // 0x1efa80: 0x86230b74  lh          $v1, 0xB74($s1)
    ctx->pc = 0x1efa80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2932)));
    // 0x1efa84: 0x50620011  beql        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EFA84u;
    {
        const bool branch_taken_0x1efa84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1efa84) {
            ctx->pc = 0x1EFA88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EFA84u;
            // 0x1efa88: 0x86230b76  lh          $v1, 0xB76($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2934)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EFACCu;
            goto label_1efacc;
        }
    }
    ctx->pc = 0x1EFA8Cu;
    // 0x1efa8c: 0x92250b74  lbu         $a1, 0xB74($s1)
    ctx->pc = 0x1efa8cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2932)));
    // 0x1efa90: 0xc07eb56  jal         func_1FAD58
    ctx->pc = 0x1EFA90u;
    SET_GPR_U32(ctx, 31, 0x1EFA98u);
    ctx->pc = 0x1EFA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFA90u;
    // 0x1efa94: 0x26449b70  addiu       $a0, $s2, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAD58u, 0x1EFA90u, 0x1EFA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFA98u;
label_1efa98:
    // 0x1efa98: 0x86220b74  lh          $v0, 0xB74($s1)
    ctx->pc = 0x1efa98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2932)));
    // 0x1efa9c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1efa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1efaa0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1efaa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1efaa4: 0x24430064  addiu       $v1, $v0, 0x64
    ctx->pc = 0x1efaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1efaa8: 0xa6030548  sh          $v1, 0x548($s0)
    ctx->pc = 0x1efaa8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x1efaac: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x1efaacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1efab0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1efab0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1efab4: 0x86240b76  lh          $a0, 0xB76($s1)
    ctx->pc = 0x1efab4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2934)));
    // 0x1efab8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1efab8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1efabc: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1EFABCu;
    {
        const bool branch_taken_0x1efabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efabc) {
            ctx->pc = 0x1EFAC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EFABCu;
            // 0x1efac0: 0xa603054a  sh          $v1, 0x54A($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EFB18u;
            goto label_1efb18;
        }
    }
    ctx->pc = 0x1EFAC4u;
    // 0x1efac4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1EFAC4u;
    {
        const bool branch_taken_0x1efac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFAC4u;
        // 0x1efac8: 0xa604054a  sh          $a0, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efac4) {
            ctx->pc = 0x1EFB18u;
            goto label_1efb18;
        }
    }
    ctx->pc = 0x1EFACCu;
label_1efacc:
    // 0x1efacc: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1efaccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1efad0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1efad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1efad4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1efad4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1efad8: 0x0  nop
    ctx->pc = 0x1efad8u;
    // NOP
    // 0x1efadc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1efadcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1efae0: 0x86020548  lh          $v0, 0x548($s0)
    ctx->pc = 0x1efae0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
    // 0x1efae4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1efae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efae8: 0x0  nop
    ctx->pc = 0x1efae8u;
    // NOP
    // 0x1efaec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1efaecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1efaf0: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1efaf0u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x1efaf4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1efaf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1efaf8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1efaf8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1efafc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1efafcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1efb00: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1efb00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1efb04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EFB04u;
    {
        const bool branch_taken_0x1efb04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFB04u;
        // 0x1efb08: 0x96040548  lhu         $a0, 0x548($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efb04) {
            ctx->pc = 0x1EFB14u;
            goto label_1efb14;
        }
    }
    ctx->pc = 0x1EFB0Cu;
    // 0x1efb0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EFB0Cu;
    {
        const bool branch_taken_0x1efb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFB0Cu;
        // 0x1efb10: 0xa604054a  sh          $a0, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efb0c) {
            ctx->pc = 0x1EFB18u;
            goto label_1efb18;
        }
    }
    ctx->pc = 0x1EFB14u;
label_1efb14:
    // 0x1efb14: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x1efb14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
label_1efb18:
    // 0x1efb18: 0x86230b78  lh          $v1, 0xB78($s1)
    ctx->pc = 0x1efb18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2936)));
    // 0x1efb1c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1efb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1efb20: 0x5062001a  beql        $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1EFB20u;
    {
        const bool branch_taken_0x1efb20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1efb20) {
            ctx->pc = 0x1EFB24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EFB20u;
            // 0x1efb24: 0xc62c0b7c  lwc1        $f12, 0xB7C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EFB8Cu;
            goto label_1efb8c;
        }
    }
    ctx->pc = 0x1EFB28u;
    // 0x1efb28: 0x92250b78  lbu         $a1, 0xB78($s1)
    ctx->pc = 0x1efb28u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2936)));
    // 0x1efb2c: 0xc07eb70  jal         func_1FADC0
    ctx->pc = 0x1EFB2Cu;
    SET_GPR_U32(ctx, 31, 0x1EFB34u);
    ctx->pc = 0x1EFB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFB2Cu;
    // 0x1efb30: 0x26449b70  addiu       $a0, $s2, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FADC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FADC0u, 0x1EFB2Cu, 0x1EFB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFB34u;
label_1efb34:
    // 0x1efb34: 0x86220b78  lh          $v0, 0xB78($s1)
    ctx->pc = 0x1efb34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2936)));
    // 0x1efb38: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1efb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1efb3c: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x1efb3cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
    // 0x1efb40: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1efb40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1efb44: 0x2610b000  addiu       $s0, $s0, -0x5000
    ctx->pc = 0x1efb44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946816));
    // 0x1efb48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1efb48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efb4c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1efb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x1efb50: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1efb50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1efb54: 0x0  nop
    ctx->pc = 0x1efb54u;
    // NOP
    // 0x1efb58: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x1efb58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x1efb5c: 0xc0aa6fc  jal         func_2A9BF0
    ctx->pc = 0x1EFB5Cu;
    SET_GPR_U32(ctx, 31, 0x1EFB64u);
    ctx->pc = 0x1EFB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFB5Cu;
    // 0x1efb60: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9BF0u, 0x1EFB5Cu, 0x1EFB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFB64u;
label_1efb64:
    // 0x1efb64: 0xc62c0b7c  lwc1        $f12, 0xB7C($s1)
    ctx->pc = 0x1efb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1efb68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1efb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efb6c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1efb6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1efb70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1efb70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efb74: 0x0  nop
    ctx->pc = 0x1efb74u;
    // NOP
    // 0x1efb78: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x1efb78u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[0]);
    // 0x1efb7c: 0xc0aa716  jal         func_2A9C58
    ctx->pc = 0x1EFB7Cu;
    SET_GPR_U32(ctx, 31, 0x1EFB84u);
    ctx->pc = 0x1EFB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFB7Cu;
    // 0x1efb80: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9C58u, 0x1EFB7Cu, 0x1EFB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFB84u;
label_1efb84:
    // 0x1efb84: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1EFB84u;
    {
        const bool branch_taken_0x1efb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFB84u;
        // 0x1efb88: 0x86230b80  lh          $v1, 0xB80($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2944)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efb84) {
            ctx->pc = 0x1EFBB8u;
            goto label_1efbb8;
        }
    }
    ctx->pc = 0x1EFB8Cu;
label_1efb8c:
    // 0x1efb8c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1efb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1efb90: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1efb90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1efb94: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1efb94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1efb98: 0x2444b000  addiu       $a0, $v0, -0x5000
    ctx->pc = 0x1efb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946816));
    // 0x1efb9c: 0xc440b000  lwc1        $f0, -0x5000($v0)
    ctx->pc = 0x1efb9cu;
    { uint32_t bits = FAST_READ32(0x5CB000u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efba0: 0x0  nop
    ctx->pc = 0x1efba0u;
    // NOP
    // 0x1efba4: 0x0  nop
    ctx->pc = 0x1efba4u;
    // NOP
    // 0x1efba8: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x1efba8u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[1]);
    // 0x1efbac: 0xc0aa716  jal         func_2A9C58
    ctx->pc = 0x1EFBACu;
    SET_GPR_U32(ctx, 31, 0x1EFBB4u);
    ctx->pc = 0x1EFBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFBACu;
    // 0x1efbb0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9C58u, 0x1EFBACu, 0x1EFBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFBB4u;
label_1efbb4:
    // 0x1efbb4: 0x86230b80  lh          $v1, 0xB80($s1)
    ctx->pc = 0x1efbb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2944)));
label_1efbb8:
    // 0x1efbb8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1efbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1efbbc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EFBBCu;
    {
        const bool branch_taken_0x1efbbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EFBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFBBCu;
        // 0x1efbc0: 0x26449b70  addiu       $a0, $s2, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efbbc) {
            ctx->pc = 0x1EFBD4u;
            goto label_1efbd4;
        }
    }
    ctx->pc = 0x1EFBC4u;
    // 0x1efbc4: 0x92250b80  lbu         $a1, 0xB80($s1)
    ctx->pc = 0x1efbc4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2944)));
    // 0x1efbc8: 0xc07eb8a  jal         func_1FAE28
    ctx->pc = 0x1EFBC8u;
    SET_GPR_U32(ctx, 31, 0x1EFBD0u);
    ctx->pc = 0x1EFBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFBC8u;
    // 0x1efbcc: 0x26449b70  addiu       $a0, $s2, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAE28u, 0x1EFBC8u, 0x1EFBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFBD0u;
label_1efbd0:
    // 0x1efbd0: 0x26449b70  addiu       $a0, $s2, -0x6490
    ctx->pc = 0x1efbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
label_1efbd4:
    // 0x1efbd4: 0xc07eaca  jal         func_1FAB28
    ctx->pc = 0x1EFBD4u;
    SET_GPR_U32(ctx, 31, 0x1EFBDCu);
    ctx->pc = 0x1EFBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFBD4u;
    // 0x1efbd8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAB28u, 0x1EFBD4u, 0x1EFBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFBDCu;
label_1efbdc:
    // 0x1efbdc: 0x92220b82  lbu         $v0, 0xB82($s1)
    ctx->pc = 0x1efbdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2946)));
    // 0x1efbe0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1EFBE0u;
    {
        const bool branch_taken_0x1efbe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efbe0) {
            ctx->pc = 0x1EFBE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EFBE0u;
            // 0x1efbe4: 0x86250b68  lh          $a1, 0xB68($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2920)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EFC10u;
            goto label_1efc10;
        }
    }
    ctx->pc = 0x1EFBE8u;
    // 0x1efbe8: 0x26449b70  addiu       $a0, $s2, -0x6490
    ctx->pc = 0x1efbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
    // 0x1efbec: 0x0  nop
    ctx->pc = 0x1efbecu;
    // NOP
label_1efbf0:
    // 0x1efbf0: 0xc07ead4  jal         func_1FAB50
    ctx->pc = 0x1EFBF0u;
    SET_GPR_U32(ctx, 31, 0x1EFBF8u);
    ctx->pc = 0x1EFBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFBF0u;
    // 0x1efbf4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAB50u, 0x1EFBF0u, 0x1EFBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFBF8u;
label_1efbf8:
    // 0x1efbf8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1efbf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1efbfc: 0x92220b82  lbu         $v0, 0xB82($s1)
    ctx->pc = 0x1efbfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2946)));
    // 0x1efc00: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1efc00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1efc04: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1EFC04u;
    {
        const bool branch_taken_0x1efc04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1efc04) {
            ctx->pc = 0x1EFC08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EFC04u;
            // 0x1efc08: 0x26449b70  addiu       $a0, $s2, -0x6490 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EFBF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1efbf0;
        }
    }
    ctx->pc = 0x1EFC0Cu;
    // 0x1efc0c: 0x86250b68  lh          $a1, 0xB68($s1)
    ctx->pc = 0x1efc0cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2920)));
label_1efc10:
    // 0x1efc10: 0xc07e852  jal         func_1FA148
    ctx->pc = 0x1EFC10u;
    SET_GPR_U32(ctx, 31, 0x1EFC18u);
    ctx->pc = 0x1EFC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFC10u;
    // 0x1efc14: 0x26449b70  addiu       $a0, $s2, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA148u, 0x1EFC10u, 0x1EFC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFC18u;
label_1efc18:
    // 0x1efc18: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1efc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1efc1c: 0x8c44d6e8  lw          $a0, -0x2918($v0)
    ctx->pc = 0x1efc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3BD6E8u));
    // 0x1efc20: 0xc050d2a  jal         func_1434A8
    ctx->pc = 0x1EFC20u;
    SET_GPR_U32(ctx, 31, 0x1EFC28u);
    ctx->pc = 0x1EFC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFC20u;
    // 0x1efc24: 0x24840460  addiu       $a0, $a0, 0x460 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1434A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1434A8u, 0x1EFC20u, 0x1EFC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFC28u;
label_1efc28:
    // 0x1efc28: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1efc28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1efc2c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1efc2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1efc30: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1efc30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1efc34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1efc34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1efc38: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1efc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1efc3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFC3Cu;
        // 0x1efc40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFC3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFC44u;
    // 0x1efc44: 0x0  nop
    ctx->pc = 0x1efc44u;
    // NOP
    ctx->pc = 0x1efc48u;
}
