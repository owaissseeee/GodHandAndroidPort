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

// Function: func_0026AA30
// Address: 0x26aa30 - 0x26ab20
void func_0026AA30_0x26aa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0026AA30_0x26aa30");
#endif

    switch (ctx->pc) {
        case 0x26aa30u: goto label_26aa30;
        case 0x26aa34u: goto label_26aa34;
        case 0x26aa38u: goto label_26aa38;
        case 0x26aa3cu: goto label_26aa3c;
        case 0x26aa40u: goto label_26aa40;
        case 0x26aa44u: goto label_26aa44;
        case 0x26aa48u: goto label_26aa48;
        case 0x26aa4cu: goto label_26aa4c;
        case 0x26aa50u: goto label_26aa50;
        case 0x26aa54u: goto label_26aa54;
        case 0x26aa58u: goto label_26aa58;
        case 0x26aa5cu: goto label_26aa5c;
        case 0x26aa60u: goto label_26aa60;
        case 0x26aa64u: goto label_26aa64;
        case 0x26aa68u: goto label_26aa68;
        case 0x26aa6cu: goto label_26aa6c;
        case 0x26aa70u: goto label_26aa70;
        case 0x26aa74u: goto label_26aa74;
        case 0x26aa78u: goto label_26aa78;
        case 0x26aa7cu: goto label_26aa7c;
        case 0x26aa80u: goto label_26aa80;
        case 0x26aa84u: goto label_26aa84;
        case 0x26aa88u: goto label_26aa88;
        case 0x26aa8cu: goto label_26aa8c;
        case 0x26aa90u: goto label_26aa90;
        case 0x26aa94u: goto label_26aa94;
        case 0x26aa98u: goto label_26aa98;
        case 0x26aa9cu: goto label_26aa9c;
        case 0x26aaa0u: goto label_26aaa0;
        case 0x26aaa4u: goto label_26aaa4;
        case 0x26aaa8u: goto label_26aaa8;
        case 0x26aaacu: goto label_26aaac;
        case 0x26aab0u: goto label_26aab0;
        case 0x26aab4u: goto label_26aab4;
        case 0x26aab8u: goto label_26aab8;
        case 0x26aabcu: goto label_26aabc;
        case 0x26aac0u: goto label_26aac0;
        case 0x26aac4u: goto label_26aac4;
        case 0x26aac8u: goto label_26aac8;
        case 0x26aaccu: goto label_26aacc;
        case 0x26aad0u: goto label_26aad0;
        case 0x26aad4u: goto label_26aad4;
        case 0x26aad8u: goto label_26aad8;
        case 0x26aadcu: goto label_26aadc;
        case 0x26aae0u: goto label_26aae0;
        case 0x26aae4u: goto label_26aae4;
        case 0x26aae8u: goto label_26aae8;
        case 0x26aaecu: goto label_26aaec;
        case 0x26aaf0u: goto label_26aaf0;
        case 0x26aaf4u: goto label_26aaf4;
        case 0x26aaf8u: goto label_26aaf8;
        case 0x26aafcu: goto label_26aafc;
        case 0x26ab00u: goto label_26ab00;
        case 0x26ab04u: goto label_26ab04;
        case 0x26ab08u: goto label_26ab08;
        case 0x26ab0cu: goto label_26ab0c;
        case 0x26ab10u: goto label_26ab10;
        case 0x26ab14u: goto label_26ab14;
        case 0x26ab18u: goto label_26ab18;
        case 0x26ab1cu: goto label_26ab1c;
        default: break;
    }

    ctx->pc = 0x26aa30u;

label_26aa30:
    // 0x26aa30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26aa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_26aa34:
    // 0x26aa34: 0x24a3fc9f  addiu       $v1, $a1, -0x361
    ctx->pc = 0x26aa34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966431));
label_26aa38:
    // 0x26aa38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26aa38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_26aa3c:
    // 0x26aa3c: 0x2c620057  sltiu       $v0, $v1, 0x57
    ctx->pc = 0x26aa3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)87) ? 1 : 0);
label_26aa40:
    // 0x26aa40: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x26aa40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_26aa44:
    // 0x26aa44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26aa44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26aa48:
    // 0x26aa48: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_26aa4c:
    if (ctx->pc == 0x26AA4Cu) {
        ctx->pc = 0x26AA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA48u;
        // 0x26aa4c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AA50u;
        goto label_26aa50;
    }
    ctx->pc = 0x26AA48u;
    {
        const bool branch_taken_0x26aa48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA48u;
        // 0x26aa4c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aa48) {
            ctx->pc = 0x26AB04u;
            goto label_26ab04;
        }
    }
    ctx->pc = 0x26AA50u;
label_26aa50:
    // 0x26aa50: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x26aa50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_26aa54:
    // 0x26aa54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26aa54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_26aa58:
    // 0x26aa58: 0x244252e0  addiu       $v0, $v0, 0x52E0
    ctx->pc = 0x26aa58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21216));
label_26aa5c:
    // 0x26aa5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26aa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_26aa60:
    // 0x26aa60: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26aa60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_26aa64:
    // 0x26aa64: 0x800008  jr          $a0
label_26aa68:
    if (ctx->pc == 0x26AA68u) {
        ctx->pc = 0x26AA6Cu;
        goto label_26aa6c;
    }
    ctx->pc = 0x26AA64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AA6Cu: goto label_26aa6c;
            case 0x26AB04u: goto label_26ab04;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AA64u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26AA6Cu;
label_26aa6c:
    // 0x26aa6c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x26aa6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_26aa70:
    // 0x26aa70: 0xc0c3ea6  jal         func_30FA98
label_26aa74:
    if (ctx->pc == 0x26AA74u) {
        ctx->pc = 0x26AA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA70u;
        // 0x26aa74: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AA78u;
        goto label_26aa78;
    }
    ctx->pc = 0x26AA70u;
    SET_GPR_U32(ctx, 31, 0x26AA78u);
    ctx->pc = 0x26AA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AA70u;
    // 0x26aa74: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x26AA70u, 0x26AA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AA78u;
label_26aa78:
    // 0x26aa78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26aa78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26aa7c:
    // 0x26aa7c: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
label_26aa80:
    if (ctx->pc == 0x26AA80u) {
        ctx->pc = 0x26AA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA7Cu;
        // 0x26aa80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AA84u;
        goto label_26aa84;
    }
    ctx->pc = 0x26AA7Cu;
    {
        const bool branch_taken_0x26aa7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA7Cu;
        // 0x26aa80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aa7c) {
            ctx->pc = 0x26AB08u;
            goto label_26ab08;
        }
    }
    ctx->pc = 0x26AA84u;
label_26aa84:
    // 0x26aa84: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x26aa84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_26aa88:
    // 0x26aa88: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x26aa88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_26aa8c:
    // 0x26aa8c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x26aa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_26aa90:
    // 0x26aa90: 0x40f809  jalr        $v0
label_26aa94:
    if (ctx->pc == 0x26AA94u) {
        ctx->pc = 0x26AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA90u;
        // 0x26aa94: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AA98u;
        goto label_26aa98;
    }
    ctx->pc = 0x26AA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26AA98u);
        ctx->pc = 0x26AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA90u;
        // 0x26aa94: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AA90u, 0x26AA98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26AA98u;
label_26aa98:
    // 0x26aa98: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_26aa9c:
    if (ctx->pc == 0x26AA9Cu) {
        ctx->pc = 0x26AA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA98u;
        // 0x26aa9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AAA0u;
        goto label_26aaa0;
    }
    ctx->pc = 0x26AA98u;
    {
        const bool branch_taken_0x26aa98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA98u;
        // 0x26aa9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aa98) {
            ctx->pc = 0x26AB08u;
            goto label_26ab08;
        }
    }
    ctx->pc = 0x26AAA0u;
label_26aaa0:
    // 0x26aaa0: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x26aaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_26aaa4:
    // 0x26aaa4: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x26aaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_26aaa8:
    // 0x26aaa8: 0x10440008  beq         $v0, $a0, . + 4 + (0x8 << 2)
label_26aaac:
    if (ctx->pc == 0x26AAACu) {
        ctx->pc = 0x26AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AAA8u;
        // 0x26aaac: 0x26030490  addiu       $v1, $s0, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AAB0u;
        goto label_26aab0;
    }
    ctx->pc = 0x26AAA8u;
    {
        const bool branch_taken_0x26aaa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x26AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AAA8u;
        // 0x26aaac: 0x26030490  addiu       $v1, $s0, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aaa8) {
            ctx->pc = 0x26AACCu;
            goto label_26aacc;
        }
    }
    ctx->pc = 0x26AAB0u;
label_26aab0:
    // 0x26aab0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x26aab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26aab4:
    // 0x26aab4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x26aab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_26aab8:
    // 0x26aab8: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x26aab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26aabc:
    // 0x26aabc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x26aabcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_26aac0:
    // 0x26aac0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x26aac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26aac4:
    // 0x26aac4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x26aac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_26aac8:
    // 0x26aac8: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x26aac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_26aacc:
    // 0x26aacc: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_26aad0:
    if (ctx->pc == 0x26AAD0u) {
        ctx->pc = 0x26AAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AACCu;
        // 0x26aad0: 0x26030100  addiu       $v1, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AAD4u;
        goto label_26aad4;
    }
    ctx->pc = 0x26AACCu;
    {
        const bool branch_taken_0x26aacc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26aacc) {
            ctx->pc = 0x26AAD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26AACCu;
            // 0x26aad0: 0x26030100  addiu       $v1, $s0, 0x100 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26AAF0u;
            goto label_26aaf0;
        }
    }
    ctx->pc = 0x26AAD4u;
label_26aad4:
    // 0x26aad4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26aad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26aad8:
    // 0x26aad8: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x26aad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
label_26aadc:
    // 0x26aadc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26aadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26aae0:
    // 0x26aae0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x26aae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_26aae4:
    // 0x26aae4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x26aae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26aae8:
    // 0x26aae8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x26aae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_26aaec:
    // 0x26aaec: 0x26030100  addiu       $v1, $s0, 0x100
    ctx->pc = 0x26aaecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_26aaf0:
    // 0x26aaf0: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x26aaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
label_26aaf4:
    // 0x26aaf4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x26aaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_26aaf8:
    // 0x26aaf8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x26aaf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26aafc:
    // 0x26aafc: 0x10000002  b           . + 4 + (0x2 << 2)
label_26ab00:
    if (ctx->pc == 0x26AB00u) {
        ctx->pc = 0x26AB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AAFCu;
        // 0x26ab00: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AB04u;
        goto label_26ab04;
    }
    ctx->pc = 0x26AAFCu;
    {
        const bool branch_taken_0x26aafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AAFCu;
        // 0x26ab00: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aafc) {
            ctx->pc = 0x26AB08u;
            goto label_26ab08;
        }
    }
    ctx->pc = 0x26AB04u;
label_26ab04:
    // 0x26ab04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26ab04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26ab08:
    // 0x26ab08: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x26ab08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26ab0c:
    // 0x26ab0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26ab0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26ab10:
    // 0x26ab10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26ab10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26ab14:
    // 0x26ab14: 0x3e00008  jr          $ra
label_26ab18:
    if (ctx->pc == 0x26AB18u) {
        ctx->pc = 0x26AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB14u;
        // 0x26ab18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AB1Cu;
        goto label_26ab1c;
    }
    ctx->pc = 0x26AB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB14u;
        // 0x26ab18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AB14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26AB1Cu;
label_26ab1c:
    // 0x26ab1c: 0x0  nop
    ctx->pc = 0x26ab1cu;
    // NOP
    ctx->pc = 0x26ab20u;
}
