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

// Function: func_0014B9A0
// Address: 0x14b9a0 - 0x14bdb0
void func_0014B9A0_0x14b9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0014B9A0_0x14b9a0");
#endif

    switch (ctx->pc) {
        case 0x14ba14u: goto label_14ba14;
        case 0x14ba1cu: goto label_14ba1c;
        case 0x14ba80u: goto label_14ba80;
        case 0x14bad0u: goto label_14bad0;
        case 0x14baf8u: goto label_14baf8;
        case 0x14bb20u: goto label_14bb20;
        case 0x14bb48u: goto label_14bb48;
        case 0x14bb70u: goto label_14bb70;
        case 0x14bb98u: goto label_14bb98;
        case 0x14bbc8u: goto label_14bbc8;
        case 0x14bbfcu: goto label_14bbfc;
        case 0x14bc04u: goto label_14bc04;
        case 0x14bc40u: goto label_14bc40;
        case 0x14bcc0u: goto label_14bcc0;
        case 0x14bcf4u: goto label_14bcf4;
        case 0x14bd10u: goto label_14bd10;
        case 0x14bd30u: goto label_14bd30;
        case 0x14bd4cu: goto label_14bd4c;
        case 0x14bd68u: goto label_14bd68;
        case 0x14bd80u: goto label_14bd80;
        default: break;
    }

    ctx->pc = 0x14b9a0u;

    // 0x14b9a0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x14b9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x14b9a4: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x14b9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x14b9a8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x14b9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x14b9ac: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x14b9acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x14b9b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14b9b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b9b4: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x14b9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x14b9b8: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x14b9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x14b9bc: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x14b9bcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x14b9c0: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x14b9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x14b9c4: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x14b9c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x14b9c8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14b9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x14b9cc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x14b9ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b9d0: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x14b9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x14b9d4: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x14b9d4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14b9d8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x14b9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x14b9dc: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x14b9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x14b9e0: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x14b9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x14b9e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x14b9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14b9e8: 0x8c6476b0  lw          $a0, 0x76B0($v1)
    ctx->pc = 0x14b9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30384)));
    // 0x14b9ec: 0x8e420250  lw          $v0, 0x250($s2)
    ctx->pc = 0x14b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
    // 0x14b9f0: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x14b9f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x14b9f4: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x14b9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x14b9f8: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x14b9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
    // 0x14b9fc: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x14b9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x14ba00: 0xe2b00b  movn        $s6, $a3, $v0
    ctx->pc = 0x14ba00u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 7));
    // 0x14ba04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14ba04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba08: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x14ba08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x14ba0c: 0xc0556fa  jal         func_155BE8
    ctx->pc = 0x14BA0Cu;
    SET_GPR_U32(ctx, 31, 0x14BA14u);
    ctx->pc = 0x14BA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BA0Cu;
    // 0x14ba10: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155BE8u, 0x14BA0Cu, 0x14BA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BA14u;
label_14ba14:
    // 0x14ba14: 0xc056c3c  jal         func_15B0F0
    ctx->pc = 0x14BA14u;
    SET_GPR_U32(ctx, 31, 0x14BA1Cu);
    ctx->pc = 0x14BA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BA14u;
    // 0x14ba18: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0F0u, 0x14BA14u, 0x14BA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BA1Cu;
label_14ba1c:
    // 0x14ba1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14ba1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba20: 0x120000d7  beqz        $s0, . + 4 + (0xD7 << 2)
    ctx->pc = 0x14BA20u;
    {
        const bool branch_taken_0x14ba20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BA20u;
        // 0x14ba24: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ba20) {
            ctx->pc = 0x14BD80u;
            goto label_14bd80;
        }
    }
    ctx->pc = 0x14BA28u;
    // 0x14ba28: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x14ba28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x14ba2c: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x14ba2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x14ba30: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x14ba30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x14ba34: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x14ba34u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x14ba38: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x14ba38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x14ba3c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x14ba3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x14ba40: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x14ba40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x14ba44: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x14ba44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x14ba48: 0x3c026c0c  lui         $v0, 0x6C0C
    ctx->pc = 0x14ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27660 << 16));
    // 0x14ba4c: 0x344200c8  ori         $v0, $v0, 0xC8
    ctx->pc = 0x14ba4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)200);
    // 0x14ba50: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x14ba50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x14ba54: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x14ba54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x14ba58: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x14ba58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x14ba5c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14ba5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x14ba60: 0x2463d860  addiu       $v1, $v1, -0x27A0
    ctx->pc = 0x14ba60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957152));
    // 0x14ba64: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x14ba64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x14ba68: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x14ba68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x14ba6c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x14ba6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14ba70: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x14ba70u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x14ba74: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x14ba74u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x14ba78: 0x3c140075  lui         $s4, 0x75
    ctx->pc = 0x14ba78u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)117 << 16));
    // 0x14ba7c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14ba7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14ba80:
    // 0x14ba80: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x14ba80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ba84: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x14ba84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x14ba88: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x14ba88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x14ba8c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x14ba8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14ba90: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14BA90u;
    {
        const bool branch_taken_0x14ba90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x14BA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BA90u;
        // 0x14ba94: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ba90) {
            ctx->pc = 0x14BA80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ba80;
        }
    }
    ctx->pc = 0x14BA98u;
    // 0x14ba98: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x14ba98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x14ba9c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x14ba9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14baa0: 0x2543d870  addiu       $v1, $t2, -0x2790
    ctx->pc = 0x14baa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294957168));
    // 0x14baa4: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x14baa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x14baa8: 0x26070040  addiu       $a3, $s0, 0x40
    ctx->pc = 0x14baa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x14baac: 0x26090050  addiu       $t1, $s0, 0x50
    ctx->pc = 0x14baacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x14bab0: 0x260b0060  addiu       $t3, $s0, 0x60
    ctx->pc = 0x14bab0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x14bab4: 0x260c0070  addiu       $t4, $s0, 0x70
    ctx->pc = 0x14bab4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x14bab8: 0x260d0080  addiu       $t5, $s0, 0x80
    ctx->pc = 0x14bab8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x14babc: 0x26150090  addiu       $s5, $s0, 0x90
    ctx->pc = 0x14babcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x14bac0: 0x261e00c0  addiu       $fp, $s0, 0xC0
    ctx->pc = 0x14bac0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x14bac4: 0x261700d0  addiu       $s7, $s0, 0xD0
    ctx->pc = 0x14bac4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x14bac8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14bac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14bacc: 0x0  nop
    ctx->pc = 0x14baccu;
    // NOP
label_14bad0:
    // 0x14bad0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x14bad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14bad4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x14bad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x14bad8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x14bad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x14badc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x14badcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14bae0: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14BAE0u;
    {
        const bool branch_taken_0x14bae0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x14BAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BAE0u;
        // 0x14bae4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bae0) {
            ctx->pc = 0x14BAD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14bad0;
        }
    }
    ctx->pc = 0x14BAE8u;
    // 0x14bae8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x14bae8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14baec: 0x2544d870  addiu       $a0, $t2, -0x2790
    ctx->pc = 0x14baecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 4294957168));
    // 0x14baf0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x14baf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14baf4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14baf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14baf8:
    // 0x14baf8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x14baf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14bafc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14bafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14bb00: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x14bb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x14bb04: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x14bb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14bb08: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14BB08u;
    {
        const bool branch_taken_0x14bb08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x14BB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BB08u;
        // 0x14bb0c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bb08) {
            ctx->pc = 0x14BAF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14baf8;
        }
    }
    ctx->pc = 0x14BB10u;
    // 0x14bb10: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x14bb10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bb14: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x14bb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14bb18: 0x2503d880  addiu       $v1, $t0, -0x2780
    ctx->pc = 0x14bb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957184));
    // 0x14bb1c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14bb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14bb20:
    // 0x14bb20: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x14bb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14bb24: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x14bb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x14bb28: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x14bb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x14bb2c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x14bb2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14bb30: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14BB30u;
    {
        const bool branch_taken_0x14bb30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x14BB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BB30u;
        // 0x14bb34: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bb30) {
            ctx->pc = 0x14BB20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14bb20;
        }
    }
    ctx->pc = 0x14BB38u;
    // 0x14bb38: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x14bb38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bb3c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x14bb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14bb40: 0x2503d880  addiu       $v1, $t0, -0x2780
    ctx->pc = 0x14bb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957184));
    // 0x14bb44: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14bb44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14bb48:
    // 0x14bb48: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x14bb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14bb4c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x14bb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x14bb50: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x14bb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x14bb54: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x14bb54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14bb58: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14BB58u;
    {
        const bool branch_taken_0x14bb58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x14BB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BB58u;
        // 0x14bb5c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bb58) {
            ctx->pc = 0x14BB48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14bb48;
        }
    }
    ctx->pc = 0x14BB60u;
    // 0x14bb60: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x14bb60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bb64: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x14bb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14bb68: 0x2503d880  addiu       $v1, $t0, -0x2780
    ctx->pc = 0x14bb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957184));
    // 0x14bb6c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14bb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14bb70:
    // 0x14bb70: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x14bb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14bb74: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x14bb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x14bb78: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x14bb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x14bb7c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x14bb7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14bb80: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14BB80u;
    {
        const bool branch_taken_0x14bb80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x14BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BB80u;
        // 0x14bb84: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bb80) {
            ctx->pc = 0x14BB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14bb70;
        }
    }
    ctx->pc = 0x14BB88u;
    // 0x14bb88: 0x180102d  daddu       $v0, $t4, $zero
    ctx->pc = 0x14bb88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bb8c: 0x2504d880  addiu       $a0, $t0, -0x2780
    ctx->pc = 0x14bb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957184));
    // 0x14bb90: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x14bb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14bb94: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14bb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14bb98:
    // 0x14bb98: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x14bb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14bb9c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14bb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14bba0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x14bba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x14bba4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x14bba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14bba8: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14BBA8u;
    {
        const bool branch_taken_0x14bba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x14BBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BBA8u;
        // 0x14bbac: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bba8) {
            ctx->pc = 0x14BB98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14bb98;
        }
    }
    ctx->pc = 0x14BBB0u;
    // 0x14bbb0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x14bbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x14bbb4: 0x1a0182d  daddu       $v1, $t5, $zero
    ctx->pc = 0x14bbb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bbb8: 0x2442d890  addiu       $v0, $v0, -0x2770
    ctx->pc = 0x14bbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957200));
    // 0x14bbbc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x14bbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14bbc0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14bbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14bbc4: 0x0  nop
    ctx->pc = 0x14bbc4u;
    // NOP
label_14bbc8:
    // 0x14bbc8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x14bbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14bbcc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x14bbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x14bbd0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x14bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x14bbd4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x14bbd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x14bbd8: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14BBD8u;
    {
        const bool branch_taken_0x14bbd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x14BBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BBD8u;
        // 0x14bbdc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bbd8) {
            ctx->pc = 0x14BBC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14bbc8;
        }
    }
    ctx->pc = 0x14BBE0u;
    // 0x14bbe0: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x14bbe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x14bbe4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14bbe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14bbe8: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x14bbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
    // 0x14bbec: 0x24a56940  addiu       $a1, $a1, 0x6940
    ctx->pc = 0x14bbecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26944));
    // 0x14bbf0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14bbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bbf4: 0xc0c2952  jal         func_30A548
    ctx->pc = 0x14BBF4u;
    SET_GPR_U32(ctx, 31, 0x14BBFCu);
    ctx->pc = 0x14BBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BBF4u;
    // 0x14bbf8: 0xe600002c  swc1        $f0, 0x2C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A548u, 0x14BBF4u, 0x14BBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BBFCu;
label_14bbfc:
    // 0x14bbfc: 0xc0c2968  jal         func_30A5A0
    ctx->pc = 0x14BBFCu;
    SET_GPR_U32(ctx, 31, 0x14BC04u);
    ctx->pc = 0x14BC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BBFCu;
    // 0x14bc00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A5A0u, 0x14BBFCu, 0x14BC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BC04u;
label_14bc04:
    // 0x14bc04: 0xc660038c  lwc1        $f0, 0x38C($s3)
    ctx->pc = 0x14bc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14bc08: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x14bc08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14bc0c: 0xc6610390  lwc1        $f1, 0x390($s3)
    ctx->pc = 0x14bc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14bc10: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x14bc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bc14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14bc14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14bc18: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14bc18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14bc1c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x14bc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14bc20: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x14bc20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x14bc24: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x14bc24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bc28: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x14bc28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x14bc2c: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x14bc2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x14bc30: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x14bc30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x14bc34: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x14bc34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14bc38: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x14bc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x14bc3c: 0x0  nop
    ctx->pc = 0x14bc3cu;
    // NOP
label_14bc40:
    // 0x14bc40: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x14bc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14bc44: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x14bc44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x14bc48: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x14bc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x14bc4c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x14bc4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x14bc50: 0x14a6fffb  bne         $a1, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14BC50u;
    {
        const bool branch_taken_0x14bc50 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x14BC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC50u;
        // 0x14bc54: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bc50) {
            ctx->pc = 0x14BC40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14bc40;
        }
    }
    ctx->pc = 0x14BC58u;
    // 0x14bc58: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x14bc58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bc5c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x14bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x14bc60: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x14bc60u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x14bc64: 0x240300b0  addiu       $v1, $zero, 0xB0
    ctx->pc = 0x14bc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x14bc68: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x14bc68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x14bc6c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x14bc6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bc70: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x14bc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x14bc74: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x14bc74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x14bc78: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x14bc78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x14bc7c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x14bc7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x14bc80: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x14bc80u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x14bc84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14bc84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bc88: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x14bc88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x14bc8c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x14bc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x14bc90: 0x931821  addu        $v1, $a0, $s3
    ctx->pc = 0x14bc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x14bc94: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x14bc94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x14bc98: 0xdc620090  ld          $v0, 0x90($v1)
    ctx->pc = 0x14bc98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x14bc9c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x14bc9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bca0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x14bca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x14bca4: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x14bca4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x14bca8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x14bca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x14bcac: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x14bcacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x14bcb0: 0xfe000000  sd          $zero, 0x0($s0)
    ctx->pc = 0x14bcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 0));
    // 0x14bcb4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x14bcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x14bcb8: 0xc05571a  jal         func_155C68
    ctx->pc = 0x14BCB8u;
    SET_GPR_U32(ctx, 31, 0x14BCC0u);
    ctx->pc = 0x14BCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BCB8u;
    // 0x14bcbc: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155C68u, 0x14BCB8u, 0x14BCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BCC0u;
label_14bcc0:
    // 0x14bcc0: 0x8e4502c0  lw          $a1, 0x2C0($s2)
    ctx->pc = 0x14bcc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 704)));
    // 0x14bcc4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x14bcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14bcc8: 0x14a20022  bne         $a1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x14BCC8u;
    {
        const bool branch_taken_0x14bcc8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x14BCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BCC8u;
        // 0x14bccc: 0x8e630380  lw          $v1, 0x380($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bcc8) {
            ctx->pc = 0x14BD54u;
            goto label_14bd54;
        }
    }
    ctx->pc = 0x14BCD0u;
    // 0x14bcd0: 0x30624080  andi        $v0, $v1, 0x4080
    ctx->pc = 0x14bcd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16512);
    // 0x14bcd4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14BCD4u;
    {
        const bool branch_taken_0x14bcd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bcd4) {
            ctx->pc = 0x14BD18u;
            goto label_14bd18;
        }
    }
    ctx->pc = 0x14BCDCu;
    // 0x14bcdc: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14BCDCu;
    {
        const bool branch_taken_0x14bcdc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x14BCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BCDCu;
        // 0x14bce0: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bcdc) {
            ctx->pc = 0x14BCFCu;
            goto label_14bcfc;
        }
    }
    ctx->pc = 0x14BCE4u;
    // 0x14bce4: 0x26844c80  addiu       $a0, $s4, 0x4C80
    ctx->pc = 0x14bce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 19584));
    // 0x14bce8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x14bce8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bcec: 0xc0c6980  jal         func_31A600
    ctx->pc = 0x14BCECu;
    SET_GPR_U32(ctx, 31, 0x14BCF4u);
    ctx->pc = 0x14BCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BCECu;
    // 0x14bcf0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A600u, 0x14BCECu, 0x14BCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BCF4u;
label_14bcf4:
    // 0x14bcf4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x14BCF4u;
    {
        const bool branch_taken_0x14bcf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BCF4u;
        // 0x14bcf8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bcf4) {
            ctx->pc = 0x14BD84u;
            goto label_14bd84;
        }
    }
    ctx->pc = 0x14BCFCu;
label_14bcfc:
    // 0x14bcfc: 0x26844c80  addiu       $a0, $s4, 0x4C80
    ctx->pc = 0x14bcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 19584));
    // 0x14bd00: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x14bd00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bd04: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x14bd04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bd08: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x14BD08u;
    SET_GPR_U32(ctx, 31, 0x14BD10u);
    ctx->pc = 0x14BD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BD08u;
    // 0x14bd0c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x14BD08u, 0x14BD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BD10u;
label_14bd10:
    // 0x14bd10: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x14BD10u;
    {
        const bool branch_taken_0x14bd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD10u;
        // 0x14bd14: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd10) {
            ctx->pc = 0x14BD84u;
            goto label_14bd84;
        }
    }
    ctx->pc = 0x14BD18u;
label_14bd18:
    // 0x14bd18: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14BD18u;
    {
        const bool branch_taken_0x14bd18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x14BD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD18u;
        // 0x14bd1c: 0x26844c80  addiu       $a0, $s4, 0x4C80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 19584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd18) {
            ctx->pc = 0x14BD38u;
            goto label_14bd38;
        }
    }
    ctx->pc = 0x14BD20u;
    // 0x14bd20: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x14bd20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bd24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14bd24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14bd28: 0xc0c6980  jal         func_31A600
    ctx->pc = 0x14BD28u;
    SET_GPR_U32(ctx, 31, 0x14BD30u);
    ctx->pc = 0x14BD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BD28u;
    // 0x14bd2c: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A600u, 0x14BD28u, 0x14BD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BD30u;
label_14bd30:
    // 0x14bd30: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x14BD30u;
    {
        const bool branch_taken_0x14bd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD30u;
        // 0x14bd34: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd30) {
            ctx->pc = 0x14BD84u;
            goto label_14bd84;
        }
    }
    ctx->pc = 0x14BD38u;
label_14bd38:
    // 0x14bd38: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x14bd38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bd3c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x14bd3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bd40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14bd40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14bd44: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x14BD44u;
    SET_GPR_U32(ctx, 31, 0x14BD4Cu);
    ctx->pc = 0x14BD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BD44u;
    // 0x14bd48: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x14BD44u, 0x14BD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BD4Cu;
label_14bd4c:
    // 0x14bd4c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14BD4Cu;
    {
        const bool branch_taken_0x14bd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD4Cu;
        // 0x14bd50: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd4c) {
            ctx->pc = 0x14BD84u;
            goto label_14bd84;
        }
    }
    ctx->pc = 0x14BD54u;
label_14bd54:
    // 0x14bd54: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14BD54u;
    {
        const bool branch_taken_0x14bd54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x14BD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD54u;
        // 0x14bd58: 0x864602ac  lh          $a2, 0x2AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd54) {
            ctx->pc = 0x14BD70u;
            goto label_14bd70;
        }
    }
    ctx->pc = 0x14BD5Cu;
    // 0x14bd5c: 0x26844c80  addiu       $a0, $s4, 0x4C80
    ctx->pc = 0x14bd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 19584));
    // 0x14bd60: 0xc0c6980  jal         func_31A600
    ctx->pc = 0x14BD60u;
    SET_GPR_U32(ctx, 31, 0x14BD68u);
    ctx->pc = 0x14BD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BD60u;
    // 0x14bd64: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A600u, 0x14BD60u, 0x14BD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BD68u;
label_14bd68:
    // 0x14bd68: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14BD68u;
    {
        const bool branch_taken_0x14bd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD68u;
        // 0x14bd6c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd68) {
            ctx->pc = 0x14BD84u;
            goto label_14bd84;
        }
    }
    ctx->pc = 0x14BD70u;
label_14bd70:
    // 0x14bd70: 0x26844c80  addiu       $a0, $s4, 0x4C80
    ctx->pc = 0x14bd70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 19584));
    // 0x14bd74: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x14bd74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bd78: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x14BD78u;
    SET_GPR_U32(ctx, 31, 0x14BD80u);
    ctx->pc = 0x14BD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BD78u;
    // 0x14bd7c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x14BD78u, 0x14BD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BD80u;
label_14bd80:
    // 0x14bd80: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x14bd80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_14bd84:
    // 0x14bd84: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x14bd84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x14bd88: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x14bd88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14bd8c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x14bd8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14bd90: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x14bd90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14bd94: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x14bd94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14bd98: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x14bd98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14bd9c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x14bd9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14bda0: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x14bda0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14bda4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14bda4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14bda8: 0x3e00008  jr          $ra
    ctx->pc = 0x14BDA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BDA8u;
        // 0x14bdac: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BDA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BDB0u;
}
