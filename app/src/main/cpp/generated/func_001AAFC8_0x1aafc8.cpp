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

// Function: func_001AAFC8
// Address: 0x1aafc8 - 0x1ab168
void func_001AAFC8_0x1aafc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001AAFC8_0x1aafc8");
#endif

    switch (ctx->pc) {
        case 0x1ab060u: goto label_1ab060;
        case 0x1ab074u: goto label_1ab074;
        case 0x1ab0b0u: goto label_1ab0b0;
        case 0x1ab0bcu: goto label_1ab0bc;
        case 0x1ab0f0u: goto label_1ab0f0;
        case 0x1ab0f8u: goto label_1ab0f8;
        case 0x1ab104u: goto label_1ab104;
        case 0x1ab110u: goto label_1ab110;
        case 0x1ab144u: goto label_1ab144;
        default: break;
    }

    ctx->pc = 0x1aafc8u;

    // 0x1aafc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aafc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aafcc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1aafccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1aafd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aafd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aafd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aafd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aafd8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1aafd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1aafdc: 0x8e0209d4  lw          $v0, 0x9D4($s0)
    ctx->pc = 0x1aafdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2516)));
    // 0x1aafe0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AAFE0u;
    {
        const bool branch_taken_0x1aafe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAFE0u;
        // 0x1aafe4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aafe0) {
            ctx->pc = 0x1AAFECu;
            goto label_1aafec;
        }
    }
    ctx->pc = 0x1AAFE8u;
    // 0x1aafe8: 0xae0209d4  sw          $v0, 0x9D4($s0)
    ctx->pc = 0x1aafe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2516), GPR_U32(ctx, 2));
label_1aafec:
    // 0x1aafec: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x1aafecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1aaff0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aaff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aaff4: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1AAFF4u;
    {
        const bool branch_taken_0x1aaff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AAFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAFF4u;
        // 0x1aaff8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaff4) {
            ctx->pc = 0x1AB06Cu;
            goto label_1ab06c;
        }
    }
    ctx->pc = 0x1AAFFCu;
    // 0x1aaffc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AAFFCu;
    {
        const bool branch_taken_0x1aaffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aaffc) {
            ctx->pc = 0x1AB000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AAFFCu;
            // 0x1ab000: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB014u;
            goto label_1ab014;
        }
    }
    ctx->pc = 0x1AB004u;
    // 0x1ab004: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AB004u;
    {
        const bool branch_taken_0x1ab004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab004) {
            ctx->pc = 0x1AB008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB004u;
            // 0x1ab008: 0x8e0309d0  lw          $v1, 0x9D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB024u;
            goto label_1ab024;
        }
    }
    ctx->pc = 0x1AB00Cu;
    // 0x1ab00c: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1AB00Cu;
    {
        const bool branch_taken_0x1ab00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB00Cu;
        // 0x1ab010: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab00c) {
            ctx->pc = 0x1AB154u;
            goto label_1ab154;
        }
    }
    ctx->pc = 0x1AB014u;
label_1ab014:
    // 0x1ab014: 0x5062002b  beql        $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1AB014u;
    {
        const bool branch_taken_0x1ab014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ab014) {
            ctx->pc = 0x1AB018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB014u;
            // 0x1ab018: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB0C4u;
            goto label_1ab0c4;
        }
    }
    ctx->pc = 0x1AB01Cu;
    // 0x1ab01c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1AB01Cu;
    {
        const bool branch_taken_0x1ab01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB01Cu;
        // 0x1ab020: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab01c) {
            ctx->pc = 0x1AB154u;
            goto label_1ab154;
        }
    }
    ctx->pc = 0x1AB024u;
label_1ab024:
    // 0x1ab024: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x1ab024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x1ab028: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ab028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ab02c: 0x8e0a0304  lw          $t2, 0x304($s0)
    ctx->pc = 0x1ab02cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1ab030: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1ab030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ab034: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ab034u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ab038: 0xae0309d0  sw          $v1, 0x9D0($s0)
    ctx->pc = 0x1ab038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2512), GPR_U32(ctx, 3));
    // 0x1ab03c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab040: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1ab040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ab044: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ab044u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab048: 0x8d45000c  lw          $a1, 0xC($t2)
    ctx->pc = 0x1ab048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x1ab04c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ab04cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab050: 0x8d46006c  lw          $a2, 0x6C($t2)
    ctx->pc = 0x1ab050u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 108)));
    // 0x1ab054: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x1ab054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x1ab058: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1AB058u;
    SET_GPR_U32(ctx, 31, 0x1AB060u);
    ctx->pc = 0x1AB05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB058u;
    // 0x1ab05c: 0xca3021  addu        $a2, $a2, $t2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1AB058u, 0x1AB060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB060u;
label_1ab060:
    // 0x1ab060: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1ab060u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1ab064: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ab064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ab068: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1ab068u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_1ab06c:
    // 0x1ab06c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1AB06Cu;
    SET_GPR_U32(ctx, 31, 0x1AB074u);
    ctx->pc = 0x1AB070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB06Cu;
    // 0x1ab070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1AB06Cu, 0x1AB074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB074u;
label_1ab074:
    // 0x1ab074: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AB074u;
    {
        const bool branch_taken_0x1ab074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab074) {
            ctx->pc = 0x1AB09Cu;
            goto label_1ab09c;
        }
    }
    ctx->pc = 0x1AB07Cu;
    // 0x1ab07c: 0x8e0209d0  lw          $v0, 0x9D0($s0)
    ctx->pc = 0x1ab07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2512)));
    // 0x1ab080: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AB080u;
    {
        const bool branch_taken_0x1ab080 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x1ab080) {
            ctx->pc = 0x1AB09Cu;
            goto label_1ab09c;
        }
    }
    ctx->pc = 0x1AB088u;
    // 0x1ab088: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1ab088u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1ab08c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1ab08cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ab090: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ab090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ab094: 0xae0009e4  sw          $zero, 0x9E4($s0)
    ctx->pc = 0x1ab094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2532), GPR_U32(ctx, 0));
    // 0x1ab098: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1ab098u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_1ab09c:
    // 0x1ab09c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ab09cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ab0a0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ab0a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ab0a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab0a8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x1AB0A8u;
    SET_GPR_U32(ctx, 31, 0x1AB0B0u);
    ctx->pc = 0x1AB0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB0A8u;
    // 0x1ab0ac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x1AB0A8u, 0x1AB0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB0B0u;
label_1ab0b0:
    // 0x1ab0b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab0b4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x1AB0B4u;
    SET_GPR_U32(ctx, 31, 0x1AB0BCu);
    ctx->pc = 0x1AB0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB0B4u;
    // 0x1ab0b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x1AB0B4u, 0x1AB0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB0BCu;
label_1ab0bc:
    // 0x1ab0bc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1AB0BCu;
    {
        const bool branch_taken_0x1ab0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB0BCu;
        // 0x1ab0c0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab0bc) {
            ctx->pc = 0x1AB154u;
            goto label_1ab154;
        }
    }
    ctx->pc = 0x1AB0C4u;
label_1ab0c4:
    // 0x1ab0c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ab0c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab0c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ab0c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ab0cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ab0ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab0d0: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1ab0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1ab0d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ab0d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab0d8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1ab0d8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1ab0dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab0e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ab0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ab0e4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ab0e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ab0e8: 0xc055d5a  jal         func_157568
    ctx->pc = 0x1AB0E8u;
    SET_GPR_U32(ctx, 31, 0x1AB0F0u);
    ctx->pc = 0x1AB0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB0E8u;
    // 0x1ab0ec: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157568u, 0x1AB0E8u, 0x1AB0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB0F0u;
label_1ab0f0:
    // 0x1ab0f0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1AB0F0u;
    SET_GPR_U32(ctx, 31, 0x1AB0F8u);
    ctx->pc = 0x1AB0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB0F0u;
    // 0x1ab0f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1AB0F0u, 0x1AB0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB0F8u;
label_1ab0f8:
    // 0x1ab0f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab0fc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x1AB0FCu;
    SET_GPR_U32(ctx, 31, 0x1AB104u);
    ctx->pc = 0x1AB100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB0FCu;
    // 0x1ab100: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x1AB0FCu, 0x1AB104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB104u;
label_1ab104:
    // 0x1ab104: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1ab104u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1ab108: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x1AB108u;
    SET_GPR_U32(ctx, 31, 0x1AB110u);
    ctx->pc = 0x1AB10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB108u;
    // 0x1ab10c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x1AB108u, 0x1AB110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB110u;
label_1ab110:
    // 0x1ab110: 0x8e0209e4  lw          $v0, 0x9E4($s0)
    ctx->pc = 0x1ab110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2532)));
    // 0x1ab114: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ab114u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab118: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ab118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ab11c: 0x2863012c  slti        $v1, $v1, 0x12C
    ctx->pc = 0x1ab11cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)300) ? 1 : 0);
    // 0x1ab120: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1AB120u;
    {
        const bool branch_taken_0x1ab120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB120u;
        // 0x1ab124: 0xae0209e4  sw          $v0, 0x9E4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2532), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab120) {
            ctx->pc = 0x1AB150u;
            goto label_1ab150;
        }
    }
    ctx->pc = 0x1AB128u;
    // 0x1ab128: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x1ab128u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x1ab12c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AB12Cu;
    {
        const bool branch_taken_0x1ab12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab12c) {
            ctx->pc = 0x1AB130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB12Cu;
            // 0x1ab130: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB154u;
            goto label_1ab154;
        }
    }
    ctx->pc = 0x1AB134u;
    // 0x1ab134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab138: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1ab138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ab13c: 0xc0c1880  jal         func_306200
    ctx->pc = 0x1AB13Cu;
    SET_GPR_U32(ctx, 31, 0x1AB144u);
    ctx->pc = 0x1AB140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB13Cu;
    // 0x1ab140: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x1AB13Cu, 0x1AB144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB144u;
label_1ab144:
    // 0x1ab144: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x1ab144u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x1ab148: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ab148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ab14c: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x1ab14cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
label_1ab150:
    // 0x1ab150: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ab150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ab154:
    // 0x1ab154: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab158: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1ab158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ab15c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB15Cu;
        // 0x1ab160: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB15Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB164u;
    // 0x1ab164: 0x0  nop
    ctx->pc = 0x1ab164u;
    // NOP
    ctx->pc = 0x1ab168u;
}
