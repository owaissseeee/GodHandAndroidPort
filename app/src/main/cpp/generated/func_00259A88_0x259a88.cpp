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

// Function: func_00259A88
// Address: 0x259a88 - 0x25a3e8
void func_00259A88_0x259a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00259A88_0x259a88");
#endif

    switch (ctx->pc) {
        case 0x259af0u: goto label_259af0;
        case 0x259b2cu: goto label_259b2c;
        case 0x259b40u: goto label_259b40;
        case 0x259b80u: goto label_259b80;
        case 0x259b90u: goto label_259b90;
        case 0x259bb0u: goto label_259bb0;
        case 0x259c6cu: goto label_259c6c;
        case 0x259c98u: goto label_259c98;
        case 0x259e78u: goto label_259e78;
        case 0x259e8cu: goto label_259e8c;
        case 0x259e9cu: goto label_259e9c;
        case 0x259eacu: goto label_259eac;
        case 0x259eb8u: goto label_259eb8;
        case 0x259f04u: goto label_259f04;
        case 0x259f34u: goto label_259f34;
        case 0x259f70u: goto label_259f70;
        case 0x259f98u: goto label_259f98;
        case 0x259fbcu: goto label_259fbc;
        case 0x259fd0u: goto label_259fd0;
        case 0x259fdcu: goto label_259fdc;
        case 0x25a02cu: goto label_25a02c;
        case 0x25a040u: goto label_25a040;
        case 0x25a050u: goto label_25a050;
        case 0x25a08cu: goto label_25a08c;
        case 0x25a0b8u: goto label_25a0b8;
        case 0x25a0d8u: goto label_25a0d8;
        case 0x25a0f8u: goto label_25a0f8;
        case 0x25a134u: goto label_25a134;
        case 0x25a148u: goto label_25a148;
        case 0x25a16cu: goto label_25a16c;
        case 0x25a18cu: goto label_25a18c;
        case 0x25a198u: goto label_25a198;
        case 0x25a1ccu: goto label_25a1cc;
        case 0x25a1e4u: goto label_25a1e4;
        case 0x25a1fcu: goto label_25a1fc;
        case 0x25a268u: goto label_25a268;
        case 0x25a294u: goto label_25a294;
        case 0x25a29cu: goto label_25a29c;
        case 0x25a2c0u: goto label_25a2c0;
        case 0x25a2ccu: goto label_25a2cc;
        case 0x25a2f8u: goto label_25a2f8;
        case 0x25a35cu: goto label_25a35c;
        case 0x25a370u: goto label_25a370;
        case 0x25a384u: goto label_25a384;
        case 0x25a3b4u: goto label_25a3b4;
        case 0x25a3c0u: goto label_25a3c0;
        default: break;
    }

    ctx->pc = 0x259a88u;

    // 0x259a88: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x259a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x259a8c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x259a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x259a90: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x259a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x259a94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x259a94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259a98: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x259a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x259a9c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x259a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x259aa0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x259aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x259aa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259aa8: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x259aa8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x259aac: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x259aacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x259ab0: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x259ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x259ab4: 0x2444fded  addiu       $a0, $v0, -0x213
    ctx->pc = 0x259ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966765));
    // 0x259ab8: 0x2c830048  sltiu       $v1, $a0, 0x48
    ctx->pc = 0x259ab8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)72) ? 1 : 0);
    // 0x259abc: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x259ABCu;
    {
        const bool branch_taken_0x259abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x259AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259ABCu;
        // 0x259ac0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259abc) {
            ctx->pc = 0x259B50u;
            goto label_259b50;
        }
    }
    ctx->pc = 0x259AC4u;
    // 0x259ac4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x259ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x259ac8: 0x24423010  addiu       $v0, $v0, 0x3010
    ctx->pc = 0x259ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12304));
    // 0x259acc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x259accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x259ad0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x259ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x259ad4: 0x800008  jr          $a0
    ctx->pc = 0x259AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259ADCu: goto label_259adc;
            case 0x259B14u: goto label_259b14;
            case 0x259B50u: goto label_259b50;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259AD4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x259ADCu;
label_259adc:
    // 0x259adc: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x259adcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x259ae0: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x259AE0u;
    {
        const bool branch_taken_0x259ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259ae0) {
            ctx->pc = 0x259AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259AE0u;
            // 0x259ae4: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259B54u;
            goto label_259b54;
        }
    }
    ctx->pc = 0x259AE8u;
    // 0x259ae8: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x259AE8u;
    SET_GPR_U32(ctx, 31, 0x259AF0u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x259AE8u, 0x259AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259AF0u;
label_259af0:
    // 0x259af0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x259af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x259af4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x259af4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x259af8: 0x0  nop
    ctx->pc = 0x259af8u;
    // NOP
    // 0x259afc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x259afcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x259b00: 0x0  nop
    ctx->pc = 0x259b00u;
    // NOP
    // 0x259b04: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x259B04u;
    {
        const bool branch_taken_0x259b04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x259B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259B04u;
        // 0x259b08: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259b04) {
            ctx->pc = 0x259B50u;
            goto label_259b50;
        }
    }
    ctx->pc = 0x259B0Cu;
    // 0x259b0c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x259B0Cu;
    {
        const bool branch_taken_0x259b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259B0Cu;
        // 0x259b10: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259b0c) {
            ctx->pc = 0x259B50u;
            goto label_259b50;
        }
    }
    ctx->pc = 0x259B14u;
label_259b14:
    // 0x259b14: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x259b14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x259b18: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x259B18u;
    {
        const bool branch_taken_0x259b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259b18) {
            ctx->pc = 0x259B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259B18u;
            // 0x259b1c: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259B54u;
            goto label_259b54;
        }
    }
    ctx->pc = 0x259B20u;
    // 0x259b20: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x259b20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x259b24: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x259B24u;
    SET_GPR_U32(ctx, 31, 0x259B2Cu);
    ctx->pc = 0x259B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259B24u;
    // 0x259b28: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x259B24u, 0x259B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259B2Cu;
label_259b2c:
    // 0x259b2c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x259b2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x259b30: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x259B30u;
    {
        const bool branch_taken_0x259b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259b30) {
            ctx->pc = 0x259B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259B30u;
            // 0x259b34: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259B54u;
            goto label_259b54;
        }
    }
    ctx->pc = 0x259B38u;
    // 0x259b38: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x259B38u;
    SET_GPR_U32(ctx, 31, 0x259B40u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x259B38u, 0x259B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259B40u;
label_259b40:
    // 0x259b40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x259b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x259b44: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x259B44u;
    {
        const bool branch_taken_0x259b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259B44u;
        // 0x259b48: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259b44) {
            ctx->pc = 0x259B50u;
            goto label_259b50;
        }
    }
    ctx->pc = 0x259B4Cu;
    // 0x259b4c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x259b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_259b50:
    // 0x259b50: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x259b50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_259b54:
    // 0x259b54: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x259b54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x259b58: 0x10400219  beqz        $v0, . + 4 + (0x219 << 2)
    ctx->pc = 0x259B58u;
    {
        const bool branch_taken_0x259b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259B58u;
        // 0x259b5c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259b58) {
            ctx->pc = 0x25A3C0u;
            goto label_25a3c0;
        }
    }
    ctx->pc = 0x259B60u;
    // 0x259b60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x259b60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x259b64: 0x24423130  addiu       $v0, $v0, 0x3130
    ctx->pc = 0x259b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12592));
    // 0x259b68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x259b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x259b6c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x259b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x259b70: 0x800008  jr          $a0
    ctx->pc = 0x259B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259B78u: goto label_259b78;
            case 0x259E84u: goto label_259e84;
            case 0x259ED8u: goto label_259ed8;
            case 0x259F1Cu: goto label_259f1c;
            case 0x259F44u: goto label_259f44;
            case 0x259F84u: goto label_259f84;
            case 0x25A000u: goto label_25a000;
            case 0x25A038u: goto label_25a038;
            case 0x25A058u: goto label_25a058;
            case 0x25A0F0u: goto label_25a0f0;
            case 0x25A108u: goto label_25a108;
            case 0x25A154u: goto label_25a154;
            case 0x25A1A0u: goto label_25a1a0;
            case 0x25A260u: goto label_25a260;
            case 0x25A330u: goto label_25a330;
            case 0x25A37Cu: goto label_25a37c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259B70u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x259B78u;
label_259b78:
    // 0x259b78: 0xc09d036  jal         func_2740D8
    ctx->pc = 0x259B78u;
    SET_GPR_U32(ctx, 31, 0x259B80u);
    ctx->pc = 0x259B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259B78u;
    // 0x259b7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2740D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2740D8u, 0x259B78u, 0x259B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259B80u;
label_259b80:
    // 0x259b80: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x259B80u;
    {
        const bool branch_taken_0x259b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259b80) {
            ctx->pc = 0x259BA8u;
            goto label_259ba8;
        }
    }
    ctx->pc = 0x259B88u;
    // 0x259b88: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x259B88u;
    SET_GPR_U32(ctx, 31, 0x259B90u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x259B88u, 0x259B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259B90u;
label_259b90:
    // 0x259b90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x259b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x259b94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x259B94u;
    {
        const bool branch_taken_0x259b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259B94u;
        // 0x259b98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259b94) {
            ctx->pc = 0x259BA4u;
            goto label_259ba4;
        }
    }
    ctx->pc = 0x259B9Cu;
    // 0x259b9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x259B9Cu;
    {
        const bool branch_taken_0x259b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259B9Cu;
        // 0x259ba0: 0xa22217c3  sb          $v0, 0x17C3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 6083), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259b9c) {
            ctx->pc = 0x259BA8u;
            goto label_259ba8;
        }
    }
    ctx->pc = 0x259BA4u;
label_259ba4:
    // 0x259ba4: 0xa22017c3  sb          $zero, 0x17C3($s1)
    ctx->pc = 0x259ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6083), (uint8_t)GPR_U32(ctx, 0));
label_259ba8:
    // 0x259ba8: 0xc09d91a  jal         func_276468
    ctx->pc = 0x259BA8u;
    SET_GPR_U32(ctx, 31, 0x259BB0u);
    ctx->pc = 0x259BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259BA8u;
    // 0x259bac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x259BA8u, 0x259BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259BB0u;
label_259bb0:
    // 0x259bb0: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x259bb0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x259bb4: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x259bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x259bb8: 0x2444fdfb  addiu       $a0, $v0, -0x205
    ctx->pc = 0x259bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966779));
    // 0x259bbc: 0x2c830075  sltiu       $v1, $a0, 0x75
    ctx->pc = 0x259bbcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)117) ? 1 : 0);
    // 0x259bc0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x259BC0u;
    {
        const bool branch_taken_0x259bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x259BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259BC0u;
        // 0x259bc4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259bc0) {
            ctx->pc = 0x259BE0u;
            goto label_259be0;
        }
    }
    ctx->pc = 0x259BC8u;
    // 0x259bc8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x259bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x259bcc: 0x24423170  addiu       $v0, $v0, 0x3170
    ctx->pc = 0x259bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12656));
    // 0x259bd0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x259bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x259bd4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x259bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x259bd8: 0x800008  jr          $a0
    ctx->pc = 0x259BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259BE0u: goto label_259be0;
            case 0x259C08u: goto label_259c08;
            case 0x259C30u: goto label_259c30;
            case 0x259CA0u: goto label_259ca0;
            case 0x259CC8u: goto label_259cc8;
            case 0x259CF0u: goto label_259cf0;
            case 0x259D18u: goto label_259d18;
            case 0x259D40u: goto label_259d40;
            case 0x259D68u: goto label_259d68;
            case 0x259D90u: goto label_259d90;
            case 0x259DB8u: goto label_259db8;
            case 0x259DE0u: goto label_259de0;
            case 0x259E08u: goto label_259e08;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259BD8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x259BE0u;
label_259be0:
    // 0x259be0: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x259be0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x259be4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x259be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x259be8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259BE8u;
    {
        const bool branch_taken_0x259be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259BE8u;
        // 0x259bec: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259be8) {
            ctx->pc = 0x259BFCu;
            goto label_259bfc;
        }
    }
    ctx->pc = 0x259BF0u;
    // 0x259bf0: 0x8c430618  lw          $v1, 0x618($v0)
    ctx->pc = 0x259bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1560)));
    // 0x259bf4: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x259BF4u;
    {
        const bool branch_taken_0x259bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259BF4u;
        // 0x259bf8: 0x8c44061c  lw          $a0, 0x61C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259bf4) {
            ctx->pc = 0x259E2Cu;
            goto label_259e2c;
        }
    }
    ctx->pc = 0x259BFCu;
label_259bfc:
    // 0x259bfc: 0x8c430620  lw          $v1, 0x620($v0)
    ctx->pc = 0x259bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1568)));
    // 0x259c00: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x259C00u;
    {
        const bool branch_taken_0x259c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259C00u;
        // 0x259c04: 0x8c440624  lw          $a0, 0x624($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1572)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259c00) {
            ctx->pc = 0x259E2Cu;
            goto label_259e2c;
        }
    }
    ctx->pc = 0x259C08u;
label_259c08:
    // 0x259c08: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x259c08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x259c0c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x259c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x259c10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259C10u;
    {
        const bool branch_taken_0x259c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259C10u;
        // 0x259c14: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259c10) {
            ctx->pc = 0x259C24u;
            goto label_259c24;
        }
    }
    ctx->pc = 0x259C18u;
    // 0x259c18: 0x8c430b2c  lw          $v1, 0xB2C($v0)
    ctx->pc = 0x259c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2860)));
    // 0x259c1c: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x259C1Cu;
    {
        const bool branch_taken_0x259c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259C1Cu;
        // 0x259c20: 0x8c440b30  lw          $a0, 0xB30($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259c1c) {
            ctx->pc = 0x259E2Cu;
            goto label_259e2c;
        }
    }
    ctx->pc = 0x259C24u;
label_259c24:
    // 0x259c24: 0x8c430b34  lw          $v1, 0xB34($v0)
    ctx->pc = 0x259c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2868)));
    // 0x259c28: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x259C28u;
    {
        const bool branch_taken_0x259c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259C28u;
        // 0x259c2c: 0x8c440b38  lw          $a0, 0xB38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259c28) {
            ctx->pc = 0x259E2Cu;
            goto label_259e2c;
        }
    }
    ctx->pc = 0x259C30u;
label_259c30:
    // 0x259c30: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x259c30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x259c34: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x259c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x259c38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259C38u;
    {
        const bool branch_taken_0x259c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259C38u;
        // 0x259c3c: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259c38) {
            ctx->pc = 0x259C4Cu;
            goto label_259c4c;
        }
    }
    ctx->pc = 0x259C40u;
    // 0x259c40: 0x8c430b2c  lw          $v1, 0xB2C($v0)
    ctx->pc = 0x259c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2860)));
    // 0x259c44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x259C44u;
    {
        const bool branch_taken_0x259c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259C44u;
        // 0x259c48: 0x8c440b30  lw          $a0, 0xB30($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259c44) {
            ctx->pc = 0x259C54u;
            goto label_259c54;
        }
    }
    ctx->pc = 0x259C4Cu;
label_259c4c:
    // 0x259c4c: 0x8c430b34  lw          $v1, 0xB34($v0)
    ctx->pc = 0x259c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2868)));
    // 0x259c50: 0x8c440b38  lw          $a0, 0xB38($v0)
    ctx->pc = 0x259c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2872)));
label_259c54:
    // 0x259c54: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x259c54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x259c58: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x259c58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x259c5c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x259c5cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x259c60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x259c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259c64: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x259C64u;
    SET_GPR_U32(ctx, 31, 0x259C6Cu);
    ctx->pc = 0x259C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259C64u;
    // 0x259c68: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x259C64u, 0x259C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259C6Cu;
label_259c6c:
    // 0x259c6c: 0x24420023  addiu       $v0, $v0, 0x23
    ctx->pc = 0x259c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
    // 0x259c70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x259c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259c74: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x259c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x259c78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x259c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x259c7c: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x259c7cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x259c80: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x259c80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259c84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x259c84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259c88: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x259c88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259c8c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x259c8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259c90: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x259C90u;
    SET_GPR_U32(ctx, 31, 0x259C98u);
    ctx->pc = 0x259C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259C90u;
    // 0x259c94: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x259C90u, 0x259C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259C98u;
label_259c98:
    // 0x259c98: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x259C98u;
    {
        const bool branch_taken_0x259c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259c98) {
            ctx->pc = 0x259E34u;
            goto label_259e34;
        }
    }
    ctx->pc = 0x259CA0u;
label_259ca0:
    // 0x259ca0: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x259ca0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x259ca4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x259ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x259ca8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259CA8u;
    {
        const bool branch_taken_0x259ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259CA8u;
        // 0x259cac: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259ca8) {
            ctx->pc = 0x259CBCu;
            goto label_259cbc;
        }
    }
    ctx->pc = 0x259CB0u;
    // 0x259cb0: 0x8c430b2c  lw          $v1, 0xB2C($v0)
    ctx->pc = 0x259cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2860)));
    // 0x259cb4: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x259CB4u;
    {
        const bool branch_taken_0x259cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259CB4u;
        // 0x259cb8: 0x8c440b30  lw          $a0, 0xB30($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259cb4) {
            ctx->pc = 0x259E2Cu;
            goto label_259e2c;
        }
    }
    ctx->pc = 0x259CBCu;
label_259cbc:
    // 0x259cbc: 0x8c430b34  lw          $v1, 0xB34($v0)
    ctx->pc = 0x259cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2868)));
    // 0x259cc0: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x259CC0u;
    {
        const bool branch_taken_0x259cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259CC0u;
        // 0x259cc4: 0x8c440b38  lw          $a0, 0xB38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259cc0) {
            ctx->pc = 0x259E2Cu;
            goto label_259e2c;
        }
    }
    ctx->pc = 0x259CC8u;
label_259cc8:
    // 0x259cc8: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x259cc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x259ccc: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x259cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x259cd0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259CD0u;
    {
        const bool branch_taken_0x259cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259CD0u;
        // 0x259cd4: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259cd0) {
            ctx->pc = 0x259CE4u;
            goto label_259ce4;
        }
    }
    ctx->pc = 0x259CD8u;
    // 0x259cd8: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x259cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x259cdc: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x259CDCu;
    {
        const bool branch_taken_0x259cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259CDCu;
        // 0x259ce0: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259cdc) {
            ctx->pc = 0x259E2Cu;
            goto label_259e2c;
        }
    }
    ctx->pc = 0x259CE4u;
label_259ce4:
    // 0x259ce4: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x259ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x259ce8: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x259CE8u;
    {
        const bool branch_taken_0x259ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259CE8u;
        // 0x259cec: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259ce8) {
            ctx->pc = 0x259E2Cu;
            goto label_259e2c;
        }
    }
    ctx->pc = 0x259CF0u;
label_259cf0:
    // 0x259cf0: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x259cf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x259cf4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x259cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x259cf8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259CF8u;
    {
        const bool branch_taken_0x259cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259CF8u;
        // 0x259cfc: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259cf8) {
            ctx->pc = 0x259D0Cu;
            goto label_259d0c;
        }
    }
    ctx->pc = 0x259D00u;
    // 0x259d00: 0x8c433818  lw          $v1, 0x3818($v0)
    ctx->pc = 0x259d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14360)));
    // 0x259d04: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x259D04u;
    {
        const bool branch_taken_0x259d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D04u;
        // 0x259d08: 0x8c44381c  lw          $a0, 0x381C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259d04) {
            ctx->pc = 0x259E2Cu;
            goto label_259e2c;
        }
    }
    ctx->pc = 0x259D0Cu;
label_259d0c:
    // 0x259d0c: 0x8c433818  lw          $v1, 0x3818($v0)
    ctx->pc = 0x259d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14360)));
    // 0x259d10: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x259D10u;
    {
        const bool branch_taken_0x259d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D10u;
        // 0x259d14: 0x8c44381c  lw          $a0, 0x381C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259d10) {
            ctx->pc = 0x259E2Cu;
            goto label_259e2c;
        }
    }
    ctx->pc = 0x259D18u;
label_259d18:
    // 0x259d18: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x259d18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x259d1c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x259d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x259d20: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259D20u;
    {
        const bool branch_taken_0x259d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D20u;
        // 0x259d24: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259d20) {
            ctx->pc = 0x259D34u;
            goto label_259d34;
        }
    }
    ctx->pc = 0x259D28u;
    // 0x259d28: 0x8c4317a8  lw          $v1, 0x17A8($v0)
    ctx->pc = 0x259d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6056)));
    // 0x259d2c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x259D2Cu;
    {
        const bool branch_taken_0x259d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D2Cu;
        // 0x259d30: 0x8c4417ac  lw          $a0, 0x17AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6060)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259d2c) {
            ctx->pc = 0x259E2Cu;
            goto label_259e2c;
        }
    }
    ctx->pc = 0x259D34u;
label_259d34:
    // 0x259d34: 0x8c4317a8  lw          $v1, 0x17A8($v0)
    ctx->pc = 0x259d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6056)));
    // 0x259d38: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x259D38u;
    {
        const bool branch_taken_0x259d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D38u;
        // 0x259d3c: 0x8c4417ac  lw          $a0, 0x17AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6060)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259d38) {
            ctx->pc = 0x259E2Cu;
            goto label_259e2c;
        }
    }
    ctx->pc = 0x259D40u;
label_259d40:
    // 0x259d40: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x259d40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x259d44: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x259d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x259d48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259D48u;
    {
        const bool branch_taken_0x259d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D48u;
        // 0x259d4c: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259d48) {
            ctx->pc = 0x259D5Cu;
            goto label_259d5c;
        }
    }
    ctx->pc = 0x259D50u;
    // 0x259d50: 0x8c433aec  lw          $v1, 0x3AEC($v0)
    ctx->pc = 0x259d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15084)));
    // 0x259d54: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x259D54u;
    {
        const bool branch_taken_0x259d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D54u;
        // 0x259d58: 0x8c443af0  lw          $a0, 0x3AF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259d54) {
            ctx->pc = 0x259E2Cu;
            goto label_259e2c;
        }
    }
    ctx->pc = 0x259D5Cu;
label_259d5c:
    // 0x259d5c: 0x8c433aec  lw          $v1, 0x3AEC($v0)
    ctx->pc = 0x259d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15084)));
    // 0x259d60: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x259D60u;
    {
        const bool branch_taken_0x259d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D60u;
        // 0x259d64: 0x8c443af0  lw          $a0, 0x3AF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259d60) {
            ctx->pc = 0x259E2Cu;
            goto label_259e2c;
        }
    }
    ctx->pc = 0x259D68u;
label_259d68:
    // 0x259d68: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x259d68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x259d6c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x259d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x259d70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259D70u;
    {
        const bool branch_taken_0x259d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D70u;
        // 0x259d74: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259d70) {
            ctx->pc = 0x259D84u;
            goto label_259d84;
        }
    }
    ctx->pc = 0x259D78u;
    // 0x259d78: 0x8c4317a8  lw          $v1, 0x17A8($v0)
    ctx->pc = 0x259d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6056)));
    // 0x259d7c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x259D7Cu;
    {
        const bool branch_taken_0x259d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D7Cu;
        // 0x259d80: 0x8c4417ac  lw          $a0, 0x17AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6060)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259d7c) {
            ctx->pc = 0x259E2Cu;
            goto label_259e2c;
        }
    }
    ctx->pc = 0x259D84u;
label_259d84:
    // 0x259d84: 0x8c4317a8  lw          $v1, 0x17A8($v0)
    ctx->pc = 0x259d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6056)));
    // 0x259d88: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x259D88u;
    {
        const bool branch_taken_0x259d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D88u;
        // 0x259d8c: 0x8c4417ac  lw          $a0, 0x17AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6060)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259d88) {
            ctx->pc = 0x259E2Cu;
            goto label_259e2c;
        }
    }
    ctx->pc = 0x259D90u;
label_259d90:
    // 0x259d90: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x259d90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x259d94: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x259d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x259d98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259D98u;
    {
        const bool branch_taken_0x259d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D98u;
        // 0x259d9c: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259d98) {
            ctx->pc = 0x259DACu;
            goto label_259dac;
        }
    }
    ctx->pc = 0x259DA0u;
    // 0x259da0: 0x8c430f54  lw          $v1, 0xF54($v0)
    ctx->pc = 0x259da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3924)));
    // 0x259da4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x259DA4u;
    {
        const bool branch_taken_0x259da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259DA4u;
        // 0x259da8: 0x8c440f58  lw          $a0, 0xF58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259da4) {
            ctx->pc = 0x259E2Cu;
            goto label_259e2c;
        }
    }
    ctx->pc = 0x259DACu;
label_259dac:
    // 0x259dac: 0x8c430f5c  lw          $v1, 0xF5C($v0)
    ctx->pc = 0x259dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3932)));
    // 0x259db0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x259DB0u;
    {
        const bool branch_taken_0x259db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259DB0u;
        // 0x259db4: 0x8c440f60  lw          $a0, 0xF60($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259db0) {
            ctx->pc = 0x259E2Cu;
            goto label_259e2c;
        }
    }
    ctx->pc = 0x259DB8u;
label_259db8:
    // 0x259db8: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x259db8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x259dbc: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x259dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x259dc0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259DC0u;
    {
        const bool branch_taken_0x259dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259DC0u;
        // 0x259dc4: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259dc0) {
            ctx->pc = 0x259DD4u;
            goto label_259dd4;
        }
    }
    ctx->pc = 0x259DC8u;
    // 0x259dc8: 0x8c430618  lw          $v1, 0x618($v0)
    ctx->pc = 0x259dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1560)));
    // 0x259dcc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x259DCCu;
    {
        const bool branch_taken_0x259dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259DCCu;
        // 0x259dd0: 0x8c44061c  lw          $a0, 0x61C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259dcc) {
            ctx->pc = 0x259E2Cu;
            goto label_259e2c;
        }
    }
    ctx->pc = 0x259DD4u;
label_259dd4:
    // 0x259dd4: 0x8c430618  lw          $v1, 0x618($v0)
    ctx->pc = 0x259dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1560)));
    // 0x259dd8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x259DD8u;
    {
        const bool branch_taken_0x259dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259DD8u;
        // 0x259ddc: 0x8c44061c  lw          $a0, 0x61C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259dd8) {
            ctx->pc = 0x259E2Cu;
            goto label_259e2c;
        }
    }
    ctx->pc = 0x259DE0u;
label_259de0:
    // 0x259de0: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x259de0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x259de4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x259de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x259de8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259DE8u;
    {
        const bool branch_taken_0x259de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259DE8u;
        // 0x259dec: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259de8) {
            ctx->pc = 0x259DFCu;
            goto label_259dfc;
        }
    }
    ctx->pc = 0x259DF0u;
    // 0x259df0: 0x8c432e7c  lw          $v1, 0x2E7C($v0)
    ctx->pc = 0x259df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11900)));
    // 0x259df4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x259DF4u;
    {
        const bool branch_taken_0x259df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259DF4u;
        // 0x259df8: 0x8c442e80  lw          $a0, 0x2E80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11904)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259df4) {
            ctx->pc = 0x259E2Cu;
            goto label_259e2c;
        }
    }
    ctx->pc = 0x259DFCu;
label_259dfc:
    // 0x259dfc: 0x8c432e7c  lw          $v1, 0x2E7C($v0)
    ctx->pc = 0x259dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11900)));
    // 0x259e00: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x259E00u;
    {
        const bool branch_taken_0x259e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E00u;
        // 0x259e04: 0x8c442e80  lw          $a0, 0x2E80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11904)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259e00) {
            ctx->pc = 0x259E2Cu;
            goto label_259e2c;
        }
    }
    ctx->pc = 0x259E08u;
label_259e08:
    // 0x259e08: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x259e08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x259e0c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x259e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x259e10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259E10u;
    {
        const bool branch_taken_0x259e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E10u;
        // 0x259e14: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259e10) {
            ctx->pc = 0x259E24u;
            goto label_259e24;
        }
    }
    ctx->pc = 0x259E18u;
    // 0x259e18: 0x8c431380  lw          $v1, 0x1380($v0)
    ctx->pc = 0x259e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4992)));
    // 0x259e1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x259E1Cu;
    {
        const bool branch_taken_0x259e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E1Cu;
        // 0x259e20: 0x8c441384  lw          $a0, 0x1384($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4996)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259e1c) {
            ctx->pc = 0x259E2Cu;
            goto label_259e2c;
        }
    }
    ctx->pc = 0x259E24u;
label_259e24:
    // 0x259e24: 0x8c431388  lw          $v1, 0x1388($v0)
    ctx->pc = 0x259e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5000)));
    // 0x259e28: 0x8c44138c  lw          $a0, 0x138C($v0)
    ctx->pc = 0x259e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5004)));
label_259e2c:
    // 0x259e2c: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x259e2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x259e30: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x259e30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_259e34:
    // 0x259e34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x259e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x259e38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x259e38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x259e3c: 0x922217c1  lbu         $v0, 0x17C1($s1)
    ctx->pc = 0x259e3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6081)));
    // 0x259e40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x259E40u;
    {
        const bool branch_taken_0x259e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E40u;
        // 0x259e44: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x259e40) {
            ctx->pc = 0x259E58u;
            goto label_259e58;
        }
    }
    ctx->pc = 0x259E48u;
    // 0x259e48: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x259e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x259e4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x259e4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x259e50: 0x0  nop
    ctx->pc = 0x259e50u;
    // NOP
    // 0x259e54: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x259e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
label_259e58:
    // 0x259e58: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x259e58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x259e5c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x259e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259e60: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x259e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259e64: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x259e64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259e68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x259e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259e6c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x259e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x259e70: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x259E70u;
    SET_GPR_U32(ctx, 31, 0x259E78u);
    ctx->pc = 0x259E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259E70u;
    // 0x259e74: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x259E70u, 0x259E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259E78u;
label_259e78:
    // 0x259e78: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x259e78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x259e7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x259e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x259e80: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x259e80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_259e84:
    // 0x259e84: 0xc055f06  jal         func_157C18
    ctx->pc = 0x259E84u;
    SET_GPR_U32(ctx, 31, 0x259E8Cu);
    ctx->pc = 0x259E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259E84u;
    // 0x259e88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x259E84u, 0x259E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259E8Cu;
label_259e8c:
    // 0x259e8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x259E8Cu;
    {
        const bool branch_taken_0x259e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259e8c) {
            ctx->pc = 0x259E9Cu;
            goto label_259e9c;
        }
    }
    ctx->pc = 0x259E94u;
    // 0x259e94: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x259E94u;
    SET_GPR_U32(ctx, 31, 0x259E9Cu);
    ctx->pc = 0x259E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259E94u;
    // 0x259e98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x259E94u, 0x259E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259E9Cu;
label_259e9c:
    // 0x259e9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x259e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x259ea0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x259ea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x259ea4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x259EA4u;
    SET_GPR_U32(ctx, 31, 0x259EACu);
    ctx->pc = 0x259EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259EA4u;
    // 0x259ea8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x259EA4u, 0x259EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259EACu;
label_259eac:
    // 0x259eac: 0xc62c0600  lwc1        $f12, 0x600($s1)
    ctx->pc = 0x259eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x259eb0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x259EB0u;
    SET_GPR_U32(ctx, 31, 0x259EB8u);
    ctx->pc = 0x259EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259EB0u;
    // 0x259eb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x259EB0u, 0x259EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259EB8u;
label_259eb8:
    // 0x259eb8: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x259eb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x259ebc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x259ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x259ec0: 0x10400140  beqz        $v0, . + 4 + (0x140 << 2)
    ctx->pc = 0x259EC0u;
    {
        const bool branch_taken_0x259ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259EC0u;
        // 0x259ec4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259ec0) {
            ctx->pc = 0x25A3C4u;
            goto label_25a3c4;
        }
    }
    ctx->pc = 0x259EC8u;
    // 0x259ec8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x259ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x259ecc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x259eccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x259ed0: 0x1000013c  b           . + 4 + (0x13C << 2)
    ctx->pc = 0x259ED0u;
    {
        const bool branch_taken_0x259ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259ED0u;
        // 0x259ed4: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x259ed0) {
            ctx->pc = 0x25A3C4u;
            goto label_25a3c4;
        }
    }
    ctx->pc = 0x259ED8u;
label_259ed8:
    // 0x259ed8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x259ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x259edc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x259edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259ee0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x259ee0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x259ee4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x259ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x259ee8: 0x8c451400  lw          $a1, 0x1400($v0)
    ctx->pc = 0x259ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5120)));
    // 0x259eec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x259eecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259ef0: 0x8c461404  lw          $a2, 0x1404($v0)
    ctx->pc = 0x259ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5124)));
    // 0x259ef4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x259ef4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259ef8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x259ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x259efc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x259EFCu;
    SET_GPR_U32(ctx, 31, 0x259F04u);
    ctx->pc = 0x259F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259EFCu;
    // 0x259f00: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x259EFCu, 0x259F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259F04u;
label_259f04:
    // 0x259f04: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x259f04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x259f08: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x259f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x259f0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x259f0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x259f10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x259f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x259f14: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x259f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x259f18: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x259f18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_259f1c:
    // 0x259f1c: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x259f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x259f20: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x259f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x259f24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x259f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259f28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x259f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x259f2c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x259F2Cu;
    SET_GPR_U32(ctx, 31, 0x259F34u);
    ctx->pc = 0x259F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259F2Cu;
    // 0x259f30: 0xae2216d4  sw          $v0, 0x16D4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x259F2Cu, 0x259F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259F34u;
label_259f34:
    // 0x259f34: 0x10400090  beqz        $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x259F34u;
    {
        const bool branch_taken_0x259f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F34u;
        // 0x259f38: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259f34) {
            ctx->pc = 0x25A178u;
            goto label_25a178;
        }
    }
    ctx->pc = 0x259F3Cu;
    // 0x259f3c: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x259F3Cu;
    {
        const bool branch_taken_0x259f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F3Cu;
        // 0x259f40: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259f3c) {
            ctx->pc = 0x25A178u;
            goto label_25a178;
        }
    }
    ctx->pc = 0x259F44u;
label_259f44:
    // 0x259f44: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x259f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x259f48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x259f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259f4c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x259f4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x259f50: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x259f50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x259f54: 0x8c451408  lw          $a1, 0x1408($v0)
    ctx->pc = 0x259f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5128)));
    // 0x259f58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x259f58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259f5c: 0x8c46140c  lw          $a2, 0x140C($v0)
    ctx->pc = 0x259f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5132)));
    // 0x259f60: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x259f60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259f64: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x259f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x259f68: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x259F68u;
    SET_GPR_U32(ctx, 31, 0x259F70u);
    ctx->pc = 0x259F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259F68u;
    // 0x259f6c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x259F68u, 0x259F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259F70u;
label_259f70:
    // 0x259f70: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x259f70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x259f74: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x259f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x259f78: 0xa6230568  sh          $v1, 0x568($s1)
    ctx->pc = 0x259f78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 3));
    // 0x259f7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x259f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x259f80: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x259f80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_259f84:
    // 0x259f84: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x259f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x259f88: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x259f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x259f8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x259f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x259f90: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x259F90u;
    SET_GPR_U32(ctx, 31, 0x259F98u);
    ctx->pc = 0x259F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259F90u;
    // 0x259f94: 0xae2216d4  sw          $v0, 0x16D4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x259F90u, 0x259F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259F98u;
label_259f98:
    // 0x259f98: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x259f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259f9c: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x259f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x259fa0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x259fa0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x259fa4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x259fa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x259fa8: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x259fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x259fac: 0x460d0342  mul.s       $f13, $f0, $f13
    ctx->pc = 0x259facu;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x259fb0: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x259fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x259fb4: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x259FB4u;
    SET_GPR_U32(ctx, 31, 0x259FBCu);
    ctx->pc = 0x259FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259FB4u;
    // 0x259fb8: 0x8e2500f0  lw          $a1, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x259FB4u, 0x259FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259FBCu;
label_259fbc:
    // 0x259fbc: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x259fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x259fc0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x259fc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x259fc4: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x259fc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x259fc8: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x259FC8u;
    SET_GPR_U32(ctx, 31, 0x259FD0u);
    ctx->pc = 0x259FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259FC8u;
    // 0x259fcc: 0xe6210104  swc1        $f1, 0x104($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x259FC8u, 0x259FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259FD0u;
label_259fd0:
    // 0x259fd0: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x259fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x259fd4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x259FD4u;
    SET_GPR_U32(ctx, 31, 0x259FDCu);
    ctx->pc = 0x259FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259FD4u;
    // 0x259fd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x259FD4u, 0x259FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259FDCu;
label_259fdc:
    // 0x259fdc: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x259FDCu;
    {
        const bool branch_taken_0x259fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259fdc) {
            ctx->pc = 0x25A178u;
            goto label_25a178;
        }
    }
    ctx->pc = 0x259FE4u;
    // 0x259fe4: 0x96220568  lhu         $v0, 0x568($s1)
    ctx->pc = 0x259fe4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x259fe8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x259fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x259fec: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x259fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x259ff0: 0x1c600061  bgtz        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x259FF0u;
    {
        const bool branch_taken_0x259ff0 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x259FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259FF0u;
        // 0x259ff4: 0xa6220568  sh          $v0, 0x568($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259ff0) {
            ctx->pc = 0x25A178u;
            goto label_25a178;
        }
    }
    ctx->pc = 0x259FF8u;
    // 0x259ff8: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x259FF8u;
    {
        const bool branch_taken_0x259ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259FF8u;
        // 0x259ffc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259ff8) {
            ctx->pc = 0x25A174u;
            goto label_25a174;
        }
    }
    ctx->pc = 0x25A000u;
label_25a000:
    // 0x25a000: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x25a000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x25a004: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a008: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25a008u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25a00c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x25a00cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25a010: 0x8c451410  lw          $a1, 0x1410($v0)
    ctx->pc = 0x25a010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5136)));
    // 0x25a014: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25a014u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a018: 0x8c461414  lw          $a2, 0x1414($v0)
    ctx->pc = 0x25a018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5140)));
    // 0x25a01c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25a01cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a020: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25a020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25a024: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x25A024u;
    SET_GPR_U32(ctx, 31, 0x25A02Cu);
    ctx->pc = 0x25A028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A024u;
    // 0x25a028: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25A024u, 0x25A02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A02Cu;
label_25a02c:
    // 0x25a02c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x25a02cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x25a030: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25a030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25a034: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x25a034u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_25a038:
    // 0x25a038: 0xc055f06  jal         func_157C18
    ctx->pc = 0x25A038u;
    SET_GPR_U32(ctx, 31, 0x25A040u);
    ctx->pc = 0x25A03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A038u;
    // 0x25a03c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25A038u, 0x25A040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A040u;
label_25a040:
    // 0x25a040: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x25A040u;
    {
        const bool branch_taken_0x25a040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a040) {
            ctx->pc = 0x25A178u;
            goto label_25a178;
        }
    }
    ctx->pc = 0x25A048u;
    // 0x25a048: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x25A048u;
    SET_GPR_U32(ctx, 31, 0x25A050u);
    ctx->pc = 0x25A04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A048u;
    // 0x25a04c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x25A048u, 0x25A050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A050u;
label_25a050:
    // 0x25a050: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x25A050u;
    {
        const bool branch_taken_0x25a050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a050) {
            ctx->pc = 0x25A178u;
            goto label_25a178;
        }
    }
    ctx->pc = 0x25A058u;
label_25a058:
    // 0x25a058: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x25a058u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x25a05c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x25a05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x25a060: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25A060u;
    {
        const bool branch_taken_0x25a060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A060u;
        // 0x25a064: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a060) {
            ctx->pc = 0x25A094u;
            goto label_25a094;
        }
    }
    ctx->pc = 0x25A068u;
    // 0x25a068: 0x8e270708  lw          $a3, 0x708($s1)
    ctx->pc = 0x25a068u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1800)));
    // 0x25a06c: 0x8c432f74  lw          $v1, 0x2F74($v0)
    ctx->pc = 0x25a06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12148)));
    // 0x25a070: 0x8c442f78  lw          $a0, 0x2F78($v0)
    ctx->pc = 0x25a070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12152)));
    // 0x25a074: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x25a074u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25a078: 0x10e0000f  beqz        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x25A078u;
    {
        const bool branch_taken_0x25a078 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A078u;
        // 0x25a07c: 0x829021  addu        $s2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a078) {
            ctx->pc = 0x25A0B8u;
            goto label_25a0b8;
        }
    }
    ctx->pc = 0x25A080u;
    // 0x25a080: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25a080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a084: 0xc0741a6  jal         func_1D0698
    ctx->pc = 0x25A084u;
    SET_GPR_U32(ctx, 31, 0x25A08Cu);
    ctx->pc = 0x25A088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A084u;
    // 0x25a088: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0698u, 0x25A084u, 0x25A08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A08Cu;
label_25a08c:
    // 0x25a08c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25A08Cu;
    {
        const bool branch_taken_0x25a08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a08c) {
            ctx->pc = 0x25A0B8u;
            goto label_25a0b8;
        }
    }
    ctx->pc = 0x25A094u;
label_25a094:
    // 0x25a094: 0x8e270708  lw          $a3, 0x708($s1)
    ctx->pc = 0x25a094u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1800)));
    // 0x25a098: 0x8c432f7c  lw          $v1, 0x2F7C($v0)
    ctx->pc = 0x25a098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12156)));
    // 0x25a09c: 0x8c442f80  lw          $a0, 0x2F80($v0)
    ctx->pc = 0x25a09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12160)));
    // 0x25a0a0: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x25a0a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25a0a4: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x25A0A4u;
    {
        const bool branch_taken_0x25a0a4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A0A4u;
        // 0x25a0a8: 0x829021  addu        $s2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a0a4) {
            ctx->pc = 0x25A0B8u;
            goto label_25a0b8;
        }
    }
    ctx->pc = 0x25A0ACu;
    // 0x25a0ac: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25a0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a0b0: 0xc0741a6  jal         func_1D0698
    ctx->pc = 0x25A0B0u;
    SET_GPR_U32(ctx, 31, 0x25A0B8u);
    ctx->pc = 0x25A0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A0B0u;
    // 0x25a0b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0698u, 0x25A0B0u, 0x25A0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A0B8u;
label_25a0b8:
    // 0x25a0b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25a0b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25a0bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25a0bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a0c0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x25a0c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a0c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a0c8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x25a0c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25a0cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25a0ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a0d0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x25A0D0u;
    SET_GPR_U32(ctx, 31, 0x25A0D8u);
    ctx->pc = 0x25A0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A0D0u;
    // 0x25a0d4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25A0D0u, 0x25A0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A0D8u;
label_25a0d8:
    // 0x25a0d8: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x25a0d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x25a0dc: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x25a0dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x25a0e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25a0e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25a0e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25a0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25a0e8: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x25a0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x25a0ec: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x25a0ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_25a0f0:
    // 0x25a0f0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x25A0F0u;
    SET_GPR_U32(ctx, 31, 0x25A0F8u);
    ctx->pc = 0x25A0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A0F0u;
    // 0x25a0f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25A0F0u, 0x25A0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A0F8u;
label_25a0f8:
    // 0x25a0f8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x25A0F8u;
    {
        const bool branch_taken_0x25a0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A0F8u;
        // 0x25a0fc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a0f8) {
            ctx->pc = 0x25A178u;
            goto label_25a178;
        }
    }
    ctx->pc = 0x25A100u;
    // 0x25a100: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x25A100u;
    {
        const bool branch_taken_0x25a100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A100u;
        // 0x25a104: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a100) {
            ctx->pc = 0x25A178u;
            goto label_25a178;
        }
    }
    ctx->pc = 0x25A108u;
label_25a108:
    // 0x25a108: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x25a108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x25a10c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a110: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25a110u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25a114: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x25a114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25a118: 0x8c452f94  lw          $a1, 0x2F94($v0)
    ctx->pc = 0x25a118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12180)));
    // 0x25a11c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25a11cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a120: 0x8c462f98  lw          $a2, 0x2F98($v0)
    ctx->pc = 0x25a120u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12184)));
    // 0x25a124: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25a124u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a128: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25a128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25a12c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x25A12Cu;
    SET_GPR_U32(ctx, 31, 0x25A134u);
    ctx->pc = 0x25A130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A12Cu;
    // 0x25a130: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25A12Cu, 0x25A134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A134u;
label_25a134:
    // 0x25a134: 0x8e240708  lw          $a0, 0x708($s1)
    ctx->pc = 0x25a134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1800)));
    // 0x25a138: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25A138u;
    {
        const bool branch_taken_0x25a138 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a138) {
            ctx->pc = 0x25A13Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A138u;
            // 0x25a13c: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A14Cu;
            goto label_25a14c;
        }
    }
    ctx->pc = 0x25A140u;
    // 0x25a140: 0xc0741be  jal         func_1D06F8
    ctx->pc = 0x25A140u;
    SET_GPR_U32(ctx, 31, 0x25A148u);
    ctx->pc = 0x1D06F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06F8u, 0x25A140u, 0x25A148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A148u;
label_25a148:
    // 0x25a148: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x25a148u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_25a14c:
    // 0x25a14c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25a14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25a150: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x25a150u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_25a154:
    // 0x25a154: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x25a154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x25a158: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x25a158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x25a15c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a160: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25a160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25a164: 0xc055f06  jal         func_157C18
    ctx->pc = 0x25A164u;
    SET_GPR_U32(ctx, 31, 0x25A16Cu);
    ctx->pc = 0x25A168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A164u;
    // 0x25a168: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25A164u, 0x25A16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A16Cu;
label_25a16c:
    // 0x25a16c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25A16Cu;
    {
        const bool branch_taken_0x25a16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A16Cu;
        // 0x25a170: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a16c) {
            ctx->pc = 0x25A178u;
            goto label_25a178;
        }
    }
    ctx->pc = 0x25A174u;
label_25a174:
    // 0x25a174: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x25a174u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_25a178:
    // 0x25a178: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25a178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25a17c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25a17cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25a180: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a184: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x25A184u;
    SET_GPR_U32(ctx, 31, 0x25A18Cu);
    ctx->pc = 0x25A188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A184u;
    // 0x25a188: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25A184u, 0x25A18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A18Cu;
label_25a18c:
    // 0x25a18c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a190: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x25A190u;
    SET_GPR_U32(ctx, 31, 0x25A198u);
    ctx->pc = 0x25A194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A190u;
    // 0x25a194: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25A190u, 0x25A198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A198u;
label_25a198:
    // 0x25a198: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x25A198u;
    {
        const bool branch_taken_0x25a198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A198u;
        // 0x25a19c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a198) {
            ctx->pc = 0x25A3C4u;
            goto label_25a3c4;
        }
    }
    ctx->pc = 0x25A1A0u;
label_25a1a0:
    // 0x25a1a0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x25a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x25a1a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a1a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25a1a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25a1ac: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x25a1acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25a1b0: 0x8c452f84  lw          $a1, 0x2F84($v0)
    ctx->pc = 0x25a1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x25a1b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25a1b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a1b8: 0x8c462f88  lw          $a2, 0x2F88($v0)
    ctx->pc = 0x25a1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12168)));
    // 0x25a1bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25a1bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a1c0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25a1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25a1c4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x25A1C4u;
    SET_GPR_U32(ctx, 31, 0x25A1CCu);
    ctx->pc = 0x25A1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A1C4u;
    // 0x25a1c8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25A1C4u, 0x25A1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A1CCu;
label_25a1cc:
    // 0x25a1cc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x25a1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x25a1d0: 0x8e240708  lw          $a0, 0x708($s1)
    ctx->pc = 0x25a1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1800)));
    // 0x25a1d4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25A1D4u;
    {
        const bool branch_taken_0x25a1d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A1D4u;
        // 0x25a1d8: 0xa6220568  sh          $v0, 0x568($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a1d4) {
            ctx->pc = 0x25A1E4u;
            goto label_25a1e4;
        }
    }
    ctx->pc = 0x25A1DCu;
    // 0x25a1dc: 0xc0741ae  jal         func_1D06B8
    ctx->pc = 0x25A1DCu;
    SET_GPR_U32(ctx, 31, 0x25A1E4u);
    ctx->pc = 0x1D06B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06B8u, 0x25A1DCu, 0x25A1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A1E4u;
label_25a1e4:
    // 0x25a1e4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x25a1e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x25a1e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25a1e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25a1ec: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25a1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25a1f0: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x25a1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x25a1f4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x25A1F4u;
    SET_GPR_U32(ctx, 31, 0x25A1FCu);
    ctx->pc = 0x25A1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A1F4u;
    // 0x25a1f8: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x25A1F4u, 0x25A1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A1FCu;
label_25a1fc:
    // 0x25a1fc: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x25a1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x25a200: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x25a200u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x25a204: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25A204u;
    {
        const bool branch_taken_0x25a204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A204u;
        // 0x25a208: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a204) {
            ctx->pc = 0x25A224u;
            goto label_25a224;
        }
    }
    ctx->pc = 0x25A20Cu;
    // 0x25a20c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25a20cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25a210: 0x24423350  addiu       $v0, $v0, 0x3350
    ctx->pc = 0x25a210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13136));
    // 0x25a214: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25a214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25a218: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25a218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a21c: 0x800008  jr          $a0
    ctx->pc = 0x25A21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25A224u: goto label_25a224;
            case 0x25A234u: goto label_25a234;
            case 0x25A244u: goto label_25a244;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A21Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25A224u;
label_25a224:
    // 0x25a224: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x25a224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x25a228: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25a228u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25a22c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x25A22Cu;
    {
        const bool branch_taken_0x25a22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A22Cu;
        // 0x25a230: 0xe6200604  swc1        $f0, 0x604($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a22c) {
            ctx->pc = 0x25A254u;
            goto label_25a254;
        }
    }
    ctx->pc = 0x25A234u;
label_25a234:
    // 0x25a234: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x25a234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x25a238: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25a238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25a23c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25A23Cu;
    {
        const bool branch_taken_0x25a23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A23Cu;
        // 0x25a240: 0xe6200604  swc1        $f0, 0x604($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a23c) {
            ctx->pc = 0x25A254u;
            goto label_25a254;
        }
    }
    ctx->pc = 0x25A244u;
label_25a244:
    // 0x25a244: 0x3c0142f0  lui         $at, 0x42F0
    ctx->pc = 0x25a244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17136 << 16));
    // 0x25a248: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25a248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25a24c: 0x0  nop
    ctx->pc = 0x25a24cu;
    // NOP
    // 0x25a250: 0xe6200604  swc1        $f0, 0x604($s1)
    ctx->pc = 0x25a250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
label_25a254:
    // 0x25a254: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x25a254u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x25a258: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25a258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25a25c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x25a25cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_25a260:
    // 0x25a260: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x25A260u;
    SET_GPR_U32(ctx, 31, 0x25A268u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x25A260u, 0x25A268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A268u;
label_25a268:
    // 0x25a268: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25a268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25a26c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25a26cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25a270: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x25a270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a274: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a278: 0x3c013d49  lui         $at, 0x3D49
    ctx->pc = 0x25a278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15689 << 16));
    // 0x25a27c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25a27cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x25a280: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25a280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25a284: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x25a284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x25a288: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x25a288u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x25a28c: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x25A28Cu;
    SET_GPR_U32(ctx, 31, 0x25A294u);
    ctx->pc = 0x25A290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A28Cu;
    // 0x25a290: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x25A28Cu, 0x25A294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A294u;
label_25a294:
    // 0x25a294: 0xc055f06  jal         func_157C18
    ctx->pc = 0x25A294u;
    SET_GPR_U32(ctx, 31, 0x25A29Cu);
    ctx->pc = 0x25A298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A294u;
    // 0x25a298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25A294u, 0x25A29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A29Cu;
label_25a29c:
    // 0x25a29c: 0x3c01bd4c  lui         $at, 0xBD4C
    ctx->pc = 0x25a29cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48460 << 16));
    // 0x25a2a0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x25a2a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x25a2a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25a2a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25a2a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a2ac: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x25a2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a2b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25a2b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x25a2b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25a2b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25a2b8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x25A2B8u;
    SET_GPR_U32(ctx, 31, 0x25A2C0u);
    ctx->pc = 0x25A2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A2B8u;
    // 0x25a2bc: 0xe6200338  swc1        $f0, 0x338($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25A2B8u, 0x25A2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A2C0u;
label_25a2c0:
    // 0x25a2c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25a2c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x25a2c4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x25A2C4u;
    SET_GPR_U32(ctx, 31, 0x25A2CCu);
    ctx->pc = 0x25A2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A2C4u;
    // 0x25a2c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25A2C4u, 0x25A2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A2CCu;
label_25a2cc:
    // 0x25a2cc: 0xc6200600  lwc1        $f0, 0x600($s1)
    ctx->pc = 0x25a2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a2d0: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x25a2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25a2d4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25a2d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25a2d8: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x25a2d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25a2dc: 0x0  nop
    ctx->pc = 0x25a2dcu;
    // NOP
    // 0x25a2e0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x25A2E0u;
    {
        const bool branch_taken_0x25a2e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25A2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A2E0u;
        // 0x25a2e4: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a2e0) {
            ctx->pc = 0x25A308u;
            goto label_25a308;
        }
    }
    ctx->pc = 0x25A2E8u;
    // 0x25a2e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a2ec: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x25a2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x25a2f0: 0xc09afbc  jal         func_26BEF0
    ctx->pc = 0x25A2F0u;
    SET_GPR_U32(ctx, 31, 0x25A2F8u);
    ctx->pc = 0x25A2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A2F0u;
    // 0x25a2f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEF0u, 0x25A2F0u, 0x25A2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A2F8u;
label_25a2f8:
    // 0x25a2f8: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x25a2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x25a2fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25a2fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25a300: 0x0  nop
    ctx->pc = 0x25a300u;
    // NOP
    // 0x25a304: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x25a304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
label_25a308:
    // 0x25a308: 0xc6200604  lwc1        $f0, 0x604($s1)
    ctx->pc = 0x25a308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a30c: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x25a30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25a310: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25a310u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25a314: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x25a314u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25a318: 0x0  nop
    ctx->pc = 0x25a318u;
    // NOP
    // 0x25a31c: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x25A31Cu;
    {
        const bool branch_taken_0x25a31c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A31Cu;
        // 0x25a320: 0xe6200604  swc1        $f0, 0x604($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a31c) {
            ctx->pc = 0x25A3C0u;
            goto label_25a3c0;
        }
    }
    ctx->pc = 0x25A324u;
    // 0x25a324: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x25a324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x25a328: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x25A328u;
    {
        const bool branch_taken_0x25a328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A328u;
        // 0x25a32c: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a328) {
            ctx->pc = 0x25A3C0u;
            goto label_25a3c0;
        }
    }
    ctx->pc = 0x25A330u;
label_25a330:
    // 0x25a330: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x25a330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x25a334: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a338: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25a338u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25a33c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x25a33cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25a340: 0x8c452f8c  lw          $a1, 0x2F8C($v0)
    ctx->pc = 0x25a340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12172)));
    // 0x25a344: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25a344u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a348: 0x8c462f90  lw          $a2, 0x2F90($v0)
    ctx->pc = 0x25a348u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12176)));
    // 0x25a34c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25a34cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a350: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25a350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25a354: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x25A354u;
    SET_GPR_U32(ctx, 31, 0x25A35Cu);
    ctx->pc = 0x25A358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A354u;
    // 0x25a358: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25A354u, 0x25A35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A35Cu;
label_25a35c:
    // 0x25a35c: 0x8e240708  lw          $a0, 0x708($s1)
    ctx->pc = 0x25a35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1800)));
    // 0x25a360: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25A360u;
    {
        const bool branch_taken_0x25a360 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a360) {
            ctx->pc = 0x25A364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A360u;
            // 0x25a364: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A374u;
            goto label_25a374;
        }
    }
    ctx->pc = 0x25A368u;
    // 0x25a368: 0xc0741b6  jal         func_1D06D8
    ctx->pc = 0x25A368u;
    SET_GPR_U32(ctx, 31, 0x25A370u);
    ctx->pc = 0x1D06D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06D8u, 0x25A368u, 0x25A370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A370u;
label_25a370:
    // 0x25a370: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x25a370u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_25a374:
    // 0x25a374: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25a374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25a378: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x25a378u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_25a37c:
    // 0x25a37c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x25A37Cu;
    SET_GPR_U32(ctx, 31, 0x25A384u);
    ctx->pc = 0x25A380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A37Cu;
    // 0x25a380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25A37Cu, 0x25A384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A384u;
label_25a384:
    // 0x25a384: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25A384u;
    {
        const bool branch_taken_0x25a384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A384u;
        // 0x25a388: 0x24020049  addiu       $v0, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a384) {
            ctx->pc = 0x25A3A0u;
            goto label_25a3a0;
        }
    }
    ctx->pc = 0x25A38Cu;
    // 0x25a38c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x25a38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25a390: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x25a390u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x25a394: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x25a394u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x25a398: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x25a398u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x25a39c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x25a39cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_25a3a0:
    // 0x25a3a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25a3a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25a3a4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25a3a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25a3a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a3ac: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x25A3ACu;
    SET_GPR_U32(ctx, 31, 0x25A3B4u);
    ctx->pc = 0x25A3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A3ACu;
    // 0x25a3b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25A3ACu, 0x25A3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A3B4u;
label_25a3b4:
    // 0x25a3b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a3b8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x25A3B8u;
    SET_GPR_U32(ctx, 31, 0x25A3C0u);
    ctx->pc = 0x25A3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A3B8u;
    // 0x25a3bc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25A3B8u, 0x25A3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A3C0u;
label_25a3c0:
    // 0x25a3c0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x25a3c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25a3c4:
    // 0x25a3c4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x25a3c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25a3c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x25a3c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25a3cc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x25a3ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a3d0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x25a3d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a3d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25a3d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a3d8: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x25a3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25a3dc: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x25a3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25a3e0: 0x3e00008  jr          $ra
    ctx->pc = 0x25A3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A3E0u;
        // 0x25a3e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A3E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A3E8u;
}
