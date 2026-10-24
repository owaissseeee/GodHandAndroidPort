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

// Function: func_0012CAE0
// Address: 0x12cae0 - 0x12cc00
void func_0012CAE0_0x12cae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012CAE0_0x12cae0");
#endif

    switch (ctx->pc) {
        case 0x12cb50u: goto label_12cb50;
        case 0x12cb9cu: goto label_12cb9c;
        default: break;
    }

    ctx->pc = 0x12cae0u;

    // 0x12cae0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12cae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12cae4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x12cae4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12cae8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x12cae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x12caec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x12caecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x12caf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12caf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12caf4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x12caf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x12caf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12caf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12cafc: 0xc60015d0  lwc1        $f0, 0x15D0($s0)
    ctx->pc = 0x12cafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12cb00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12cb00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12cb04: 0x0  nop
    ctx->pc = 0x12cb04u;
    // NOP
    // 0x12cb08: 0x45010037  bc1t        . + 4 + (0x37 << 2)
    ctx->pc = 0x12CB08u;
    {
        const bool branch_taken_0x12cb08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB08u;
        // 0x12cb0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb08) {
            ctx->pc = 0x12CBE8u;
            goto label_12cbe8;
        }
    }
    ctx->pc = 0x12CB10u;
    // 0x12cb10: 0xc600054c  lwc1        $f0, 0x54C($s0)
    ctx->pc = 0x12cb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12cb14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12cb14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12cb18: 0x0  nop
    ctx->pc = 0x12cb18u;
    // NOP
    // 0x12cb1c: 0x45030033  bc1tl       . + 4 + (0x33 << 2)
    ctx->pc = 0x12CB1Cu;
    {
        const bool branch_taken_0x12cb1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12cb1c) {
            ctx->pc = 0x12CB20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CB1Cu;
            // 0x12cb20: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CBECu;
            goto label_12cbec;
        }
    }
    ctx->pc = 0x12CB24u;
    // 0x12cb24: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x12cb24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x12cb28: 0x8c627a2c  lw          $v0, 0x7A2C($v1)
    ctx->pc = 0x12cb28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A2Cu));
    // 0x12cb2c: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x12cb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x12cb30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12cb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x12cb34: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x12CB34u;
    {
        const bool branch_taken_0x12cb34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB34u;
        // 0x12cb38: 0x24727a2c  addiu       $s2, $v1, 0x7A2C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 31276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb34) {
            ctx->pc = 0x12CBE4u;
            goto label_12cbe4;
        }
    }
    ctx->pc = 0x12CB3Cu;
    // 0x12cb3c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x12cb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x12cb40: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x12cb40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x12cb44: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x12cb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x12cb48: 0xc0b0924  jal         func_2C2490
    ctx->pc = 0x12CB48u;
    SET_GPR_U32(ctx, 31, 0x12CB50u);
    ctx->pc = 0x12CB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CB48u;
    // 0x12cb4c: 0x260615e0  addiu       $a2, $s0, 0x15E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 5600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2490u, 0x12CB48u, 0x12CB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CB50u;
label_12cb50:
    // 0x12cb50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12cb50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12cb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12cb58: 0x16220023  bne         $s1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x12CB58u;
    {
        const bool branch_taken_0x12cb58 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x12CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB58u;
        // 0x12cb5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb58) {
            ctx->pc = 0x12CBE8u;
            goto label_12cbe8;
        }
    }
    ctx->pc = 0x12CB60u;
    // 0x12cb60: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x12cb60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x12cb64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12cb64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12cb68: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x12cb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12cb6c: 0xe60015d0  swc1        $f0, 0x15D0($s0)
    ctx->pc = 0x12cb6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5584), bits); }
    // 0x12cb70: 0x92420025  lbu         $v0, 0x25($s2)
    ctx->pc = 0x12cb70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 37)));
    // 0x12cb74: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x12CB74u;
    {
        const bool branch_taken_0x12cb74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x12cb74) {
            ctx->pc = 0x12CB78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CB74u;
            // 0x12cb78: 0x8602054a  lh          $v0, 0x54A($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CBA0u;
            goto label_12cba0;
        }
    }
    ctx->pc = 0x12CB7Cu;
    // 0x12cb7c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x12cb7cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x12cb80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12cb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb84: 0x2405004b  addiu       $a1, $zero, 0x4B
    ctx->pc = 0x12cb84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x12cb88: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12cb88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12cb8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb90: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x12cb90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12cb94: 0xc0c194a  jal         func_306528
    ctx->pc = 0x12CB94u;
    SET_GPR_U32(ctx, 31, 0x12CB9Cu);
    ctx->pc = 0x12CB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CB94u;
    // 0x12cb98: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x12CB94u, 0x12CB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CB9Cu;
label_12cb9c:
    // 0x12cb9c: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x12cb9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_12cba0:
    // 0x12cba0: 0x2842000b  slti        $v0, $v0, 0xB
    ctx->pc = 0x12cba0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x12cba4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12CBA4u;
    {
        const bool branch_taken_0x12cba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CBA4u;
        // 0x12cba8: 0x9603054a  lhu         $v1, 0x54A($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cba4) {
            ctx->pc = 0x12CBC4u;
            goto label_12cbc4;
        }
    }
    ctx->pc = 0x12CBACu;
    // 0x12cbac: 0x2462ffe7  addiu       $v0, $v1, -0x19
    ctx->pc = 0x12cbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
    // 0x12cbb0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x12cbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x12cbb4: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12CBB4u;
    {
        const bool branch_taken_0x12cbb4 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x12CBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CBB4u;
        // 0x12cbb8: 0xa602054a  sh          $v0, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cbb4) {
            ctx->pc = 0x12CBC8u;
            goto label_12cbc8;
        }
    }
    ctx->pc = 0x12CBBCu;
    // 0x12cbbc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12CBBCu;
    {
        const bool branch_taken_0x12cbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CBBCu;
        // 0x12cbc0: 0xa611054a  sh          $s1, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cbbc) {
            ctx->pc = 0x12CBC8u;
            goto label_12cbc8;
        }
    }
    ctx->pc = 0x12CBC4u;
label_12cbc4:
    // 0x12cbc4: 0xa600054a  sh          $zero, 0x54A($s0)
    ctx->pc = 0x12cbc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 0));
label_12cbc8:
    // 0x12cbc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12cbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12cbcc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x12cbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x12cbd0: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x12cbd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x12cbd4: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x12cbd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x12cbd8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x12cbd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x12cbdc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12CBDCu;
    {
        const bool branch_taken_0x12cbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CBDCu;
        // 0x12cbe0: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cbdc) {
            ctx->pc = 0x12CBE8u;
            goto label_12cbe8;
        }
    }
    ctx->pc = 0x12CBE4u;
label_12cbe4:
    // 0x12cbe4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12cbe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12cbe8:
    // 0x12cbe8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x12cbe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_12cbec:
    // 0x12cbec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x12cbecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12cbf0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x12cbf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12cbf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12cbf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12cbf8: 0x3e00008  jr          $ra
    ctx->pc = 0x12CBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CBF8u;
        // 0x12cbfc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CBF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CC00u;
}
