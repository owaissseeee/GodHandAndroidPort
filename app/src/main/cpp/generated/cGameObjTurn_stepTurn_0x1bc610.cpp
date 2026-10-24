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

// Function: cGameObjTurn_stepTurn
// Address: 0x1bc610 - 0x1bc6e8
void cGameObjTurn_stepTurn_0x1bc610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cGameObjTurn_stepTurn_0x1bc610");
#endif

    switch (ctx->pc) {
        case 0x1bc678u: goto label_1bc678;
        case 0x1bc69cu: goto label_1bc69c;
        case 0x1bc6b0u: goto label_1bc6b0;
        default: break;
    }

    ctx->pc = 0x1bc610u;

    // 0x1bc610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bc610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bc614: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bc614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bc618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bc618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bc61c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bc61cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc620: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x1bc620u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1bc624: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC624u;
    {
        const bool branch_taken_0x1bc624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC624u;
        // 0x1bc628: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc624) {
            ctx->pc = 0x1BC63Cu;
            goto label_1bc63c;
        }
    }
    ctx->pc = 0x1BC62Cu;
    // 0x1bc62c: 0x50620016  beql        $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1BC62Cu;
    {
        const bool branch_taken_0x1bc62c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bc62c) {
            ctx->pc = 0x1BC630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC62Cu;
            // 0x1bc630: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC688u;
            goto label_1bc688;
        }
    }
    ctx->pc = 0x1BC634u;
    // 0x1bc634: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1BC634u;
    {
        const bool branch_taken_0x1bc634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC634u;
        // 0x1bc638: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc634) {
            ctx->pc = 0x1BC6D8u;
            goto label_1bc6d8;
        }
    }
    ctx->pc = 0x1BC63Cu;
label_1bc63c:
    // 0x1bc63c: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x1bc63cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x1bc640: 0x24020314  addiu       $v0, $zero, 0x314
    ctx->pc = 0x1bc640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 788));
    // 0x1bc644: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BC644u;
    {
        const bool branch_taken_0x1bc644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BC648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC644u;
        // 0x1bc648: 0x24020354  addiu       $v0, $zero, 0x354 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 852));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc644) {
            ctx->pc = 0x1BC678u;
            goto label_1bc678;
        }
    }
    ctx->pc = 0x1BC64Cu;
    // 0x1bc64c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BC64Cu;
    {
        const bool branch_taken_0x1bc64c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BC650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC64Cu;
        // 0x1bc650: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc64c) {
            ctx->pc = 0x1BC678u;
            goto label_1bc678;
        }
    }
    ctx->pc = 0x1BC654u;
    // 0x1bc654: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1bc654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bc658: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1bc658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1bc65c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1bc65cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bc660: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1bc660u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc664: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bc664u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc668: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1bc668u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc66c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1bc66cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc670: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1BC670u;
    SET_GPR_U32(ctx, 31, 0x1BC678u);
    ctx->pc = 0x1BC674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC670u;
    // 0x1bc674: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1BC670u, 0x1BC678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC678u;
label_1bc678:
    // 0x1bc678: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bc678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc67c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1bc67cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bc680: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1bc680u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bc684: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x1bc684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bc688:
    // 0x1bc688: 0x3c013e0e  lui         $at, 0x3E0E
    ctx->pc = 0x1bc688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15886 << 16));
    // 0x1bc68c: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x1bc68cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x1bc690: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1bc690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1bc694: 0xc0b687e  jal         func_2DA1F8
    ctx->pc = 0x1BC694u;
    SET_GPR_U32(ctx, 31, 0x1BC69Cu);
    ctx->pc = 0x1BC698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC694u;
    // 0x1bc698: 0xc60d0638  lwc1        $f13, 0x638($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA1F8u, 0x1BC694u, 0x1BC69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC69Cu;
label_1bc69c:
    // 0x1bc69c: 0xc6010104  lwc1        $f1, 0x104($s0)
    ctx->pc = 0x1bc69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc6a0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1bc6a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1bc6a4: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x1bc6a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x1bc6a8: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1BC6A8u;
    SET_GPR_U32(ctx, 31, 0x1BC6B0u);
    ctx->pc = 0x1BC6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC6A8u;
    // 0x1bc6ac: 0xe6010104  swc1        $f1, 0x104($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1BC6A8u, 0x1BC6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC6B0u;
label_1bc6b0:
    // 0x1bc6b0: 0xc6010638  lwc1        $f1, 0x638($s0)
    ctx->pc = 0x1bc6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc6b4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1bc6b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bc6b8: 0x0  nop
    ctx->pc = 0x1bc6b8u;
    // NOP
    // 0x1bc6bc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC6BCu;
    {
        const bool branch_taken_0x1bc6bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BC6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC6BCu;
        // 0x1bc6c0: 0xe6000104  swc1        $f0, 0x104($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc6bc) {
            ctx->pc = 0x1BC6D4u;
            goto label_1bc6d4;
        }
    }
    ctx->pc = 0x1BC6C4u;
    // 0x1bc6c4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1bc6c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bc6c8: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1bc6c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bc6cc: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1bc6ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bc6d0: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1bc6d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1bc6d4:
    // 0x1bc6d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bc6d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bc6d8:
    // 0x1bc6d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bc6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc6dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC6DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC6DCu;
        // 0x1bc6e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC6DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC6E4u;
    // 0x1bc6e4: 0x0  nop
    ctx->pc = 0x1bc6e4u;
    // NOP
    ctx->pc = 0x1bc6e8u;
}
