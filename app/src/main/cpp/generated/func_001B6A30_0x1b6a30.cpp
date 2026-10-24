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

// Function: func_001B6A30
// Address: 0x1b6a30 - 0x1b6e10
void func_001B6A30_0x1b6a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B6A30_0x1b6a30");
#endif

    switch (ctx->pc) {
        case 0x1b6b30u: goto label_1b6b30;
        case 0x1b6b54u: goto label_1b6b54;
        case 0x1b6b74u: goto label_1b6b74;
        case 0x1b6b84u: goto label_1b6b84;
        case 0x1b6b98u: goto label_1b6b98;
        case 0x1b6ba4u: goto label_1b6ba4;
        case 0x1b6bccu: goto label_1b6bcc;
        case 0x1b6c00u: goto label_1b6c00;
        case 0x1b6ca0u: goto label_1b6ca0;
        case 0x1b6d10u: goto label_1b6d10;
        case 0x1b6d34u: goto label_1b6d34;
        case 0x1b6d48u: goto label_1b6d48;
        case 0x1b6d5cu: goto label_1b6d5c;
        case 0x1b6d94u: goto label_1b6d94;
        case 0x1b6da8u: goto label_1b6da8;
        default: break;
    }

    ctx->pc = 0x1b6a30u;

    // 0x1b6a30: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1b6a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1b6a34: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1b6a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1b6a38: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1b6a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1b6a3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b6a3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a40: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1b6a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1b6a44: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1b6a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1b6a48: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1b6a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1b6a4c: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x1b6a4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1b6a50: 0x8e22062c  lw          $v0, 0x62C($s1)
    ctx->pc = 0x1b6a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1580)));
    // 0x1b6a54: 0x4420007  bltzl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B6A54u;
    {
        const bool branch_taken_0x1b6a54 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x1b6a54) {
            ctx->pc = 0x1B6A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6A54u;
            // 0x1b6a58: 0x922302f5  lbu         $v1, 0x2F5($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6A74u;
            goto label_1b6a74;
        }
    }
    ctx->pc = 0x1B6A5Cu;
    // 0x1b6a5c: 0x8e230250  lw          $v1, 0x250($s1)
    ctx->pc = 0x1b6a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x1b6a60: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1b6a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1b6a64: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x1b6a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x1b6a68: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1b6a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1b6a6c: 0xae230250  sw          $v1, 0x250($s1)
    ctx->pc = 0x1b6a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 3));
    // 0x1b6a70: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x1b6a70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
label_1b6a74:
    // 0x1b6a74: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1b6a74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1b6a78: 0x104000dc  beqz        $v0, . + 4 + (0xDC << 2)
    ctx->pc = 0x1B6A78u;
    {
        const bool branch_taken_0x1b6a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A78u;
        // 0x1b6a7c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6a78) {
            ctx->pc = 0x1B6DECu;
            goto label_1b6dec;
        }
    }
    ctx->pc = 0x1B6A80u;
    // 0x1b6a80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b6a80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b6a84: 0x24428910  addiu       $v0, $v0, -0x76F0
    ctx->pc = 0x1b6a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936848));
    // 0x1b6a88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b6a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b6a8c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1b6a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b6a90: 0x800008  jr          $a0
    ctx->pc = 0x1B6A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B6A98u: goto label_1b6a98;
            case 0x1B6AD8u: goto label_1b6ad8;
            case 0x1B6BF4u: goto label_1b6bf4;
            case 0x1B6D78u: goto label_1b6d78;
            case 0x1B6DB0u: goto label_1b6db0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6A90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1B6A98u;
label_1b6a98:
    // 0x1b6a98: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x1b6a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b6a9c: 0x26220600  addiu       $v0, $s1, 0x600
    ctx->pc = 0x1b6a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1536));
    // 0x1b6aa0: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B6AA0u;
    {
        const bool branch_taken_0x1b6aa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b6aa0) {
            ctx->pc = 0x1B6AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6AA0u;
            // 0x1b6aa4: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6AC4u;
            goto label_1b6ac4;
        }
    }
    ctx->pc = 0x1B6AA8u;
    // 0x1b6aa8: 0xc6200600  lwc1        $f0, 0x600($s1)
    ctx->pc = 0x1b6aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6aac: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1b6aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1b6ab0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b6ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6ab4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1b6ab4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1b6ab8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1b6ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6abc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1b6abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1b6ac0: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1b6ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1b6ac4:
    // 0x1b6ac4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b6ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6ac8: 0xa6220628  sh          $v0, 0x628($s1)
    ctx->pc = 0x1b6ac8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1576), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b6acc: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x1b6accu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b6ad0: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1b6ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b6ad4: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1b6ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1b6ad8:
    // 0x1b6ad8: 0x9e2205b8  lwu         $v0, 0x5B8($s1)
    ctx->pc = 0x1b6ad8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x1b6adc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b6adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b6ae0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B6AE0u;
    {
        const bool branch_taken_0x1b6ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6ae0) {
            ctx->pc = 0x1B6AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6AE0u;
            // 0x1b6ae4: 0x86220628  lh          $v0, 0x628($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1576)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6B00u;
            goto label_1b6b00;
        }
    }
    ctx->pc = 0x1B6AE8u;
    // 0x1b6ae8: 0x8e22062c  lw          $v0, 0x62C($s1)
    ctx->pc = 0x1b6ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1580)));
    // 0x1b6aec: 0x44100c0  bgez        $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x1B6AECu;
    {
        const bool branch_taken_0x1b6aec = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1B6AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6AECu;
        // 0x1b6af0: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6aec) {
            ctx->pc = 0x1B6DF0u;
            goto label_1b6df0;
        }
    }
    ctx->pc = 0x1B6AF4u;
    // 0x1b6af4: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x1b6af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x1b6af8: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x1B6AF8u;
    {
        const bool branch_taken_0x1b6af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6AF8u;
        // 0x1b6afc: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6af8) {
            ctx->pc = 0x1B6DE8u;
            goto label_1b6de8;
        }
    }
    ctx->pc = 0x1B6B00u;
label_1b6b00:
    // 0x1b6b00: 0x1c400039  bgtz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1B6B00u;
    {
        const bool branch_taken_0x1b6b00 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x1B6B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B00u;
        // 0x1b6b04: 0x96230628  lhu         $v1, 0x628($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b00) {
            ctx->pc = 0x1B6BE8u;
            goto label_1b6be8;
        }
    }
    ctx->pc = 0x1B6B08u;
    // 0x1b6b08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b6b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b6b0c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b6b0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b6b10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b6b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6b14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b6b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6b18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b6b18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6b1c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b6b1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1b6b20: 0x26270600  addiu       $a3, $s1, 0x600
    ctx->pc = 0x1b6b20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1536));
    // 0x1b6b24: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1b6b24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b6b28: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x1B6B28u;
    SET_GPR_U32(ctx, 31, 0x1B6B30u);
    ctx->pc = 0x1B6B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6B28u;
    // 0x1b6b2c: 0x26300610  addiu       $s0, $s1, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1B6B28u, 0x1B6B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B30u;
label_1b6b30:
    // 0x1b6b30: 0x26320100  addiu       $s2, $s1, 0x100
    ctx->pc = 0x1b6b30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1b6b34: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1b6b34u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1b6b38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b6b38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6b3c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1b6b3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6b40: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x1b6b40u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x1b6b44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b6b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6b48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b6b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b6b4c: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1B6B4Cu;
    SET_GPR_U32(ctx, 31, 0x1B6B54u);
    ctx->pc = 0x1B6B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6B4Cu;
    // 0x1b6b50: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1B6B4Cu, 0x1B6B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B54u;
label_1b6b54:
    // 0x1b6b54: 0xae200610  sw          $zero, 0x610($s1)
    ctx->pc = 0x1b6b54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1552), GPR_U32(ctx, 0));
    // 0x1b6b58: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1b6b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b6b5c: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x1b6b5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1b6b60: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b6b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6b64: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1b6b64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1b6b68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b6b68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6b6c: 0xc051dca  jal         func_147728
    ctx->pc = 0x1B6B6Cu;
    SET_GPR_U32(ctx, 31, 0x1B6B74u);
    ctx->pc = 0x1B6B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6B6Cu;
    // 0x1b6b70: 0xe6140008  swc1        $f20, 0x8($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x1B6B6Cu, 0x1B6B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B74u;
label_1b6b74:
    // 0x1b6b74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b6b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6b78: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1b6b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b6b7c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x1B6B7Cu;
    SET_GPR_U32(ctx, 31, 0x1B6B84u);
    ctx->pc = 0x1B6B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6B7Cu;
    // 0x1b6b80: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1B6B7Cu, 0x1B6B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B84u;
label_1b6b84:
    // 0x1b6b84: 0x8e240620  lw          $a0, 0x620($s1)
    ctx->pc = 0x1b6b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1568)));
    // 0x1b6b88: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B6B88u;
    {
        const bool branch_taken_0x1b6b88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6b88) {
            ctx->pc = 0x1B6B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6B88u;
            // 0x1b6b8c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6BA8u;
            goto label_1b6ba8;
        }
    }
    ctx->pc = 0x1B6B90u;
    // 0x1b6b90: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1B6B90u;
    SET_GPR_U32(ctx, 31, 0x1B6B98u);
    ctx->pc = 0x1B6B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6B90u;
    // 0x1b6b94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1B6B90u, 0x1B6B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B98u;
label_1b6b98:
    // 0x1b6b98: 0x8e240620  lw          $a0, 0x620($s1)
    ctx->pc = 0x1b6b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1568)));
    // 0x1b6b9c: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1B6B9Cu;
    SET_GPR_U32(ctx, 31, 0x1B6BA4u);
    ctx->pc = 0x1B6BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6B9Cu;
    // 0x1b6ba0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1B6B9Cu, 0x1B6BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6BA4u;
label_1b6ba4:
    // 0x1b6ba4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1b6ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1b6ba8:
    // 0x1b6ba8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b6ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b6bac: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1b6bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1b6bb0: 0x24060046  addiu       $a2, $zero, 0x46
    ctx->pc = 0x1b6bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1b6bb4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b6bb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6bb8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b6bb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6bbc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b6bbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6bc0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b6bc0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6bc4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1B6BC4u;
    SET_GPR_U32(ctx, 31, 0x1B6BCCu);
    ctx->pc = 0x1B6BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6BC4u;
    // 0x1b6bc8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1B6BC4u, 0x1B6BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6BCCu;
label_1b6bcc:
    // 0x1b6bcc: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x1b6bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1b6bd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b6bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b6bd4: 0xa6230628  sh          $v1, 0x628($s1)
    ctx->pc = 0x1b6bd4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1576), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b6bd8: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x1b6bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b6bdc: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1b6bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b6be0: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x1B6BE0u;
    {
        const bool branch_taken_0x1b6be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6BE0u;
        // 0x1b6be4: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6be0) {
            ctx->pc = 0x1B6DECu;
            goto label_1b6dec;
        }
    }
    ctx->pc = 0x1B6BE8u;
label_1b6be8:
    // 0x1b6be8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1b6be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b6bec: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x1B6BECu;
    {
        const bool branch_taken_0x1b6bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6BECu;
        // 0x1b6bf0: 0xa6220628  sh          $v0, 0x628($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1576), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6bec) {
            ctx->pc = 0x1B6DECu;
            goto label_1b6dec;
        }
    }
    ctx->pc = 0x1B6BF4u;
label_1b6bf4:
    // 0x1b6bf4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1b6bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1b6bf8: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1B6BF8u;
    SET_GPR_U32(ctx, 31, 0x1B6C00u);
    ctx->pc = 0x1B6BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6BF8u;
    // 0x1b6bfc: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1B6BF8u, 0x1B6C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6C00u;
label_1b6c00:
    // 0x1b6c00: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1b6c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b6c04: 0x26220610  addiu       $v0, $s1, 0x610
    ctx->pc = 0x1b6c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1552));
    // 0x1b6c08: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b6c08u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b6c0c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1b6c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b6c10: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1b6c10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6c14: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1b6c14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b6c18: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b6c18u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b6c1c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b6c1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b6c20: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1b6c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b6c24: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1b6c24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b6c28: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1b6c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b6c2c: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1b6c2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b6c30: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x1b6c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b6c34: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1b6c34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b6c38: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x1b6c38u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b6c3c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1b6c3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b6c40: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1b6c40u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b6c44: 0x96220628  lhu         $v0, 0x628($s1)
    ctx->pc = 0x1b6c44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1576)));
    // 0x1b6c48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b6c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b6c4c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1b6c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1b6c50: 0x4600044  bltz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x1B6C50u;
    {
        const bool branch_taken_0x1b6c50 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x1B6C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C50u;
        // 0x1b6c54: 0xa6220628  sh          $v0, 0x628($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1576), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6c50) {
            ctx->pc = 0x1B6D64u;
            goto label_1b6d64;
        }
    }
    ctx->pc = 0x1B6C58u;
    // 0x1b6c58: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1b6c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b6c5c: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x1b6c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b6c60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b6c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6c64: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1b6c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1b6c68: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b6c68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6c6c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b6c6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6c70: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b6c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b6c74: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1b6c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1b6c78: 0x26240490  addiu       $a0, $s1, 0x490
    ctx->pc = 0x1b6c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
    // 0x1b6c7c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1b6c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1b6c80: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b6c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6c84: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b6c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b6c88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b6c88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6c8c: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x1b6c8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6c90: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b6c90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6c94: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b6c94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6c98: 0xc04c784  jal         func_131E10
    ctx->pc = 0x1B6C98u;
    SET_GPR_U32(ctx, 31, 0x1B6CA0u);
    ctx->pc = 0x1B6C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6C98u;
    // 0x1b6c9c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x1B6C98u, 0x1B6CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6CA0u;
label_1b6ca0:
    // 0x1b6ca0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6CA0u;
    {
        const bool branch_taken_0x1b6ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6CA0u;
        // 0x1b6ca4: 0x8e220620  lw          $v0, 0x620($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6ca0) {
            ctx->pc = 0x1B6CB0u;
            goto label_1b6cb0;
        }
    }
    ctx->pc = 0x1B6CA8u;
    // 0x1b6ca8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1b6ca8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6cac: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1b6cacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6cb0:
    // 0x1b6cb0: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B6CB0u;
    {
        const bool branch_taken_0x1b6cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6cb0) {
            ctx->pc = 0x1B6CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6CB0u;
            // 0x1b6cb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6CF8u;
            goto label_1b6cf8;
        }
    }
    ctx->pc = 0x1B6CB8u;
    // 0x1b6cb8: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1b6cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1b6cbc: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1B6CBCu;
    {
        const bool branch_taken_0x1b6cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6cbc) {
            ctx->pc = 0x1B6CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6CBCu;
            // 0x1b6cc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6CF8u;
            goto label_1b6cf8;
        }
    }
    ctx->pc = 0x1B6CC4u;
    // 0x1b6cc4: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1b6cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1b6cc8: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B6CC8u;
    {
        const bool branch_taken_0x1b6cc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B6CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6CC8u;
        // 0x1b6ccc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6cc8) {
            ctx->pc = 0x1B6CE8u;
            goto label_1b6ce8;
        }
    }
    ctx->pc = 0x1B6CD0u;
    // 0x1b6cd0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1b6cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6cd4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1b6cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1b6cd8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b6cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6cdc: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1b6cdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b6ce0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1b6ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6ce4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1b6ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1b6ce8:
    // 0x1b6ce8: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1b6ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b6cec: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1b6cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6cf0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1b6cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1b6cf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b6cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6cf8:
    // 0x1b6cf8: 0x1642003d  bne         $s2, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1B6CF8u;
    {
        const bool branch_taken_0x1b6cf8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B6CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6CF8u;
        // 0x1b6cfc: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6cf8) {
            ctx->pc = 0x1B6DF0u;
            goto label_1b6df0;
        }
    }
    ctx->pc = 0x1B6D00u;
    // 0x1b6d00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6d04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b6d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6d08: 0xc0c1880  jal         func_306200
    ctx->pc = 0x1B6D08u;
    SET_GPR_U32(ctx, 31, 0x1B6D10u);
    ctx->pc = 0x1B6D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6D08u;
    // 0x1b6d0c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x1B6D08u, 0x1B6D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D10u;
label_1b6d10:
    // 0x1b6d10: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B6D10u;
    {
        const bool branch_taken_0x1b6d10 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6D10u;
        // 0x1b6d14: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6d10) {
            ctx->pc = 0x1B6D34u;
            goto label_1b6d34;
        }
    }
    ctx->pc = 0x1B6D18u;
    // 0x1b6d18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b6d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b6d1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b6d1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b6d20: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b6d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b6d24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b6d24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6d28: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x1b6d28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b6d2c: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x1B6D2Cu;
    SET_GPR_U32(ctx, 31, 0x1B6D34u);
    ctx->pc = 0x1B6D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6D2Cu;
    // 0x1b6d30: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1B6D2Cu, 0x1B6D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D34u;
label_1b6d34:
    // 0x1b6d34: 0x8e240620  lw          $a0, 0x620($s1)
    ctx->pc = 0x1b6d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1568)));
    // 0x1b6d38: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6D38u;
    {
        const bool branch_taken_0x1b6d38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6d38) {
            ctx->pc = 0x1B6D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6D38u;
            // 0x1b6d3c: 0x8e240624  lw          $a0, 0x624($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1572)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6D4Cu;
            goto label_1b6d4c;
        }
    }
    ctx->pc = 0x1B6D40u;
    // 0x1b6d40: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1B6D40u;
    SET_GPR_U32(ctx, 31, 0x1B6D48u);
    ctx->pc = 0x1B6D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6D40u;
    // 0x1b6d44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1B6D40u, 0x1B6D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D48u;
label_1b6d48:
    // 0x1b6d48: 0x8e240624  lw          $a0, 0x624($s1)
    ctx->pc = 0x1b6d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1572)));
label_1b6d4c:
    // 0x1b6d4c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6D4Cu;
    {
        const bool branch_taken_0x1b6d4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6D4Cu;
        // 0x1b6d50: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6d4c) {
            ctx->pc = 0x1B6D68u;
            goto label_1b6d68;
        }
    }
    ctx->pc = 0x1B6D54u;
    // 0x1b6d54: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1B6D54u;
    SET_GPR_U32(ctx, 31, 0x1B6D5Cu);
    ctx->pc = 0x1B6D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6D54u;
    // 0x1b6d58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1B6D54u, 0x1B6D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D5Cu;
label_1b6d5c:
    // 0x1b6d5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B6D5Cu;
    {
        const bool branch_taken_0x1b6d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6D5Cu;
        // 0x1b6d60: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6d5c) {
            ctx->pc = 0x1B6D68u;
            goto label_1b6d68;
        }
    }
    ctx->pc = 0x1B6D64u;
label_1b6d64:
    // 0x1b6d64: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b6d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b6d68:
    // 0x1b6d68: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1b6d68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b6d6c: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x1b6d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b6d70: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1B6D70u;
    {
        const bool branch_taken_0x1b6d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6D70u;
        // 0x1b6d74: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6d70) {
            ctx->pc = 0x1B6DECu;
            goto label_1b6dec;
        }
    }
    ctx->pc = 0x1B6D78u;
label_1b6d78:
    // 0x1b6d78: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x1b6d78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b6d7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6d80: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1b6d80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b6d84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b6d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6d88: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1b6d88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b6d8c: 0xc0c1880  jal         func_306200
    ctx->pc = 0x1B6D8Cu;
    SET_GPR_U32(ctx, 31, 0x1B6D94u);
    ctx->pc = 0x1B6D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6D8Cu;
    // 0x1b6d90: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x1B6D8Cu, 0x1B6D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D94u;
label_1b6d94:
    // 0x1b6d94: 0x8e240620  lw          $a0, 0x620($s1)
    ctx->pc = 0x1b6d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1568)));
    // 0x1b6d98: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B6D98u;
    {
        const bool branch_taken_0x1b6d98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6D98u;
        // 0x1b6d9c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6d98) {
            ctx->pc = 0x1B6DF0u;
            goto label_1b6df0;
        }
    }
    ctx->pc = 0x1B6DA0u;
    // 0x1b6da0: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1B6DA0u;
    SET_GPR_U32(ctx, 31, 0x1B6DA8u);
    ctx->pc = 0x1B6DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6DA0u;
    // 0x1b6da4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1B6DA0u, 0x1B6DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6DA8u;
label_1b6da8:
    // 0x1b6da8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1B6DA8u;
    {
        const bool branch_taken_0x1b6da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6DA8u;
        // 0x1b6dac: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6da8) {
            ctx->pc = 0x1B6DF0u;
            goto label_1b6df0;
        }
    }
    ctx->pc = 0x1B6DB0u;
label_1b6db0:
    // 0x1b6db0: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x1b6db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x1b6db4: 0x96230628  lhu         $v1, 0x628($s1)
    ctx->pc = 0x1b6db4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1576)));
    // 0x1b6db8: 0x34440002  ori         $a0, $v0, 0x2
    ctx->pc = 0x1b6db8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1b6dbc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b6dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b6dc0: 0xae240250  sw          $a0, 0x250($s1)
    ctx->pc = 0x1b6dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 4));
    // 0x1b6dc4: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x1b6dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1b6dc8: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B6DC8u;
    {
        const bool branch_taken_0x1b6dc8 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1B6DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6DC8u;
        // 0x1b6dcc: 0xa6230628  sh          $v1, 0x628($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1576), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6dc8) {
            ctx->pc = 0x1B6DECu;
            goto label_1b6dec;
        }
    }
    ctx->pc = 0x1B6DD0u;
    // 0x1b6dd0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1b6dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1b6dd4: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x1b6dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b6dd8: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x1b6dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x1b6ddc: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1b6ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b6de0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1b6de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1b6de4: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1b6de4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1b6de8:
    // 0x1b6de8: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x1b6de8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
label_1b6dec:
    // 0x1b6dec: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1b6decu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1b6df0:
    // 0x1b6df0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1b6df0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b6df4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1b6df4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b6df8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1b6df8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b6dfc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1b6dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b6e00: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1b6e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b6e04: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6E04u;
        // 0x1b6e08: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6E0Cu;
    // 0x1b6e0c: 0x0  nop
    ctx->pc = 0x1b6e0cu;
    // NOP
    ctx->pc = 0x1b6e10u;
}
