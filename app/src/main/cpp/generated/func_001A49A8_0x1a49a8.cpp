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

// Function: func_001A49A8
// Address: 0x1a49a8 - 0x1a4b70
void func_001A49A8_0x1a49a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A49A8_0x1a49a8");
#endif

    switch (ctx->pc) {
        case 0x1a4a78u: goto label_1a4a78;
        case 0x1a4a98u: goto label_1a4a98;
        case 0x1a4adcu: goto label_1a4adc;
        case 0x1a4af4u: goto label_1a4af4;
        case 0x1a4b34u: goto label_1a4b34;
        default: break;
    }

    ctx->pc = 0x1a49a8u;

    // 0x1a49a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a49a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a49ac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a49acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a49b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a49b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a49b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a49b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a49b8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a49b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a49bc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1a49bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a49c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a49c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a49c4: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1a49c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1a49c8: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x1a49c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
    // 0x1a49cc: 0x10720037  beq         $v1, $s2, . + 4 + (0x37 << 2)
    ctx->pc = 0x1A49CCu;
    {
        const bool branch_taken_0x1a49cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x1A49D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49CCu;
        // 0x1a49d0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a49cc) {
            ctx->pc = 0x1A4AACu;
            goto label_1a4aac;
        }
    }
    ctx->pc = 0x1A49D4u;
    // 0x1a49d4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A49D4u;
    {
        const bool branch_taken_0x1a49d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a49d4) {
            ctx->pc = 0x1A49D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A49D4u;
            // 0x1a49d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A49ECu;
            goto label_1a49ec;
        }
    }
    ctx->pc = 0x1A49DCu;
    // 0x1a49dc: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A49DCu;
    {
        const bool branch_taken_0x1a49dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A49E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49DCu;
        // 0x1a49e0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a49dc) {
            ctx->pc = 0x1A4A04u;
            goto label_1a4a04;
        }
    }
    ctx->pc = 0x1A49E4u;
    // 0x1a49e4: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1A49E4u;
    {
        const bool branch_taken_0x1a49e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A49E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49E4u;
        // 0x1a49e8: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a49e4) {
            ctx->pc = 0x1A4B58u;
            goto label_1a4b58;
        }
    }
    ctx->pc = 0x1A49ECu;
label_1a49ec:
    // 0x1a49ec: 0x1062003f  beq         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1A49ECu;
    {
        const bool branch_taken_0x1a49ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A49F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49ECu;
        // 0x1a49f0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a49ec) {
            ctx->pc = 0x1A4AECu;
            goto label_1a4aec;
        }
    }
    ctx->pc = 0x1A49F4u;
    // 0x1a49f4: 0x1062004a  beq         $v1, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1A49F4u;
    {
        const bool branch_taken_0x1a49f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A49F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49F4u;
        // 0x1a49f8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a49f4) {
            ctx->pc = 0x1A4B20u;
            goto label_1a4b20;
        }
    }
    ctx->pc = 0x1A49FCu;
    // 0x1a49fc: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1A49FCu;
    {
        const bool branch_taken_0x1a49fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49FCu;
        // 0x1a4a00: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a49fc) {
            ctx->pc = 0x1A4B58u;
            goto label_1a4b58;
        }
    }
    ctx->pc = 0x1A4A04u;
label_1a4a04:
    // 0x1a4a04: 0x92220761  lbu         $v0, 0x761($s1)
    ctx->pc = 0x1a4a04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1889)));
    // 0x1a4a08: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A4A08u;
    {
        const bool branch_taken_0x1a4a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4a08) {
            ctx->pc = 0x1A4A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4A08u;
            // 0x1a4a0c: 0xc6210794  lwc1        $f1, 0x794($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4A24u;
            goto label_1a4a24;
        }
    }
    ctx->pc = 0x1A4A10u;
    // 0x1a4a10: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1a4a10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4a14: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x1a4a14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4a18: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x1a4a18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4a1c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1A4A1Cu;
    {
        const bool branch_taken_0x1a4a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4A1Cu;
        // 0x1a4a20: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4a1c) {
            ctx->pc = 0x1A4B50u;
            goto label_1a4b50;
        }
    }
    ctx->pc = 0x1A4A24u;
label_1a4a24:
    // 0x1a4a24: 0x26300600  addiu       $s0, $s1, 0x600
    ctx->pc = 0x1a4a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1536));
    // 0x1a4a28: 0xc6200798  lwc1        $f0, 0x798($s1)
    ctx->pc = 0x1a4a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4a2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4a30: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1a4a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1a4a34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a4a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4a38: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1a4a38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1a4a3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a4a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a4a40: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a4a40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a4a44: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x1a4a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a4a48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a4a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4a4c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1a4a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1a4a50: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a4a50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1a4a54: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a4a54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a4a58: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x1a4a58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a4a5c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1a4a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a4a60: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1a4a60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4a64: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x1a4a64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1a4a68: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1a4a68u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1a4a6c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a4a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1a4a70: 0xc071a62  jal         func_1C6988
    ctx->pc = 0x1A4A70u;
    SET_GPR_U32(ctx, 31, 0x1A4A78u);
    ctx->pc = 0x1A4A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4A70u;
    // 0x1a4a74: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6988u, 0x1A4A70u, 0x1A4A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4A78u;
label_1a4a78:
    // 0x1a4a78: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1a4a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1a4a7c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a4a7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a4a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4a84: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1a4a84u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1a4a88: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a4a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a4a8c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1a4a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a4a90: 0xc071f54  jal         func_1C7D50
    ctx->pc = 0x1A4A90u;
    SET_GPR_U32(ctx, 31, 0x1A4A98u);
    ctx->pc = 0x1A4A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4A90u;
    // 0x1a4a94: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D50u, 0x1A4A90u, 0x1A4A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4A98u;
label_1a4a98:
    // 0x1a4a98: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1a4a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a4a9c: 0xa23202f5  sb          $s2, 0x2F5($s1)
    ctx->pc = 0x1a4a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 18));
    // 0x1a4aa0: 0xa622079c  sh          $v0, 0x79C($s1)
    ctx->pc = 0x1a4aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1948), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a4aa4: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1a4aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4aa8: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1a4aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1a4aac:
    // 0x1a4aac: 0x8622079c  lh          $v0, 0x79C($s1)
    ctx->pc = 0x1a4aacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1948)));
    // 0x1a4ab0: 0x4430025  bgezl       $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1A4AB0u;
    {
        const bool branch_taken_0x1a4ab0 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x1a4ab0) {
            ctx->pc = 0x1A4AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4AB0u;
            // 0x1a4ab4: 0x9622079c  lhu         $v0, 0x79C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1948)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4B48u;
            goto label_1a4b48;
        }
    }
    ctx->pc = 0x1A4AB8u;
    // 0x1a4ab8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1a4ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1a4abc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a4abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a4ac0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1a4ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1a4ac4: 0x24060085  addiu       $a2, $zero, 0x85
    ctx->pc = 0x1a4ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    // 0x1a4ac8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1a4ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a4acc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1a4accu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a4ad0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a4ad0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4ad4: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1A4AD4u;
    SET_GPR_U32(ctx, 31, 0x1A4ADCu);
    ctx->pc = 0x1A4AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4AD4u;
    // 0x1a4ad8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1A4AD4u, 0x1A4ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4ADCu;
label_1a4adc:
    // 0x1a4adc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a4adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a4ae0: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1a4ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4ae4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1A4AE4u;
    {
        const bool branch_taken_0x1a4ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4AE4u;
        // 0x1a4ae8: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ae4) {
            ctx->pc = 0x1A4B40u;
            goto label_1a4b40;
        }
    }
    ctx->pc = 0x1A4AECu;
label_1a4aec:
    // 0x1a4aec: 0xc070fce  jal         func_1C3F38
    ctx->pc = 0x1A4AECu;
    SET_GPR_U32(ctx, 31, 0x1A4AF4u);
    ctx->pc = 0x1A4AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4AECu;
    // 0x1a4af0: 0x26240600  addiu       $a0, $s1, 0x600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x1A4AECu, 0x1A4AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4AF4u;
label_1a4af4:
    // 0x1a4af4: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A4AF4u;
    {
        const bool branch_taken_0x1a4af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4AF4u;
        // 0x1a4af8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4af4) {
            ctx->pc = 0x1A4B54u;
            goto label_1a4b54;
        }
    }
    ctx->pc = 0x1A4AFCu;
    // 0x1a4afc: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1a4afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a4b00: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a4b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a4b04: 0xa622079c  sh          $v0, 0x79C($s1)
    ctx->pc = 0x1a4b04u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1948), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a4b08: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x1a4b08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a4b0c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1a4b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4b10: 0xa2200761  sb          $zero, 0x761($s1)
    ctx->pc = 0x1a4b10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1889), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4b14: 0xa2200760  sb          $zero, 0x760($s1)
    ctx->pc = 0x1a4b14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1888), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4b18: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1A4B18u;
    {
        const bool branch_taken_0x1a4b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B18u;
        // 0x1a4b1c: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4b18) {
            ctx->pc = 0x1A4B54u;
            goto label_1a4b54;
        }
    }
    ctx->pc = 0x1A4B20u;
label_1a4b20:
    // 0x1a4b20: 0x8622079c  lh          $v0, 0x79C($s1)
    ctx->pc = 0x1a4b20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1948)));
    // 0x1a4b24: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A4B24u;
    {
        const bool branch_taken_0x1a4b24 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x1a4b24) {
            ctx->pc = 0x1A4B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4B24u;
            // 0x1a4b28: 0x9622079c  lhu         $v0, 0x79C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1948)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4B48u;
            goto label_1a4b48;
        }
    }
    ctx->pc = 0x1A4B2Cu;
    // 0x1a4b2c: 0xc06933e  jal         func_1A4CF8
    ctx->pc = 0x1A4B2Cu;
    SET_GPR_U32(ctx, 31, 0x1A4B34u);
    ctx->pc = 0x1A4B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4B2Cu;
    // 0x1a4b30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4CF8u, 0x1A4B2Cu, 0x1A4B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4B34u;
label_1a4b34:
    // 0x1a4b34: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x1a4b34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4b38: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x1a4b38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4b3c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1a4b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_1a4b40:
    // 0x1a4b40: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1a4b40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4b44: 0x9622079c  lhu         $v0, 0x79C($s1)
    ctx->pc = 0x1a4b44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1948)));
label_1a4b48:
    // 0x1a4b48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a4b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a4b4c: 0xa622079c  sh          $v0, 0x79C($s1)
    ctx->pc = 0x1a4b4cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1948), (uint16_t)GPR_U32(ctx, 2));
label_1a4b50:
    // 0x1a4b50: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a4b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a4b54:
    // 0x1a4b54: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a4b54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a4b58:
    // 0x1a4b58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a4b58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4b5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4b60: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1a4b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a4b64: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B64u;
        // 0x1a4b68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4B6Cu;
    // 0x1a4b6c: 0x0  nop
    ctx->pc = 0x1a4b6cu;
    // NOP
    ctx->pc = 0x1a4b70u;
}
