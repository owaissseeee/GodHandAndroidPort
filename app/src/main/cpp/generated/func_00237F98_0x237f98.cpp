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

// Function: func_00237F98
// Address: 0x237f98 - 0x2380d0
void func_00237F98_0x237f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00237F98_0x237f98");
#endif

    switch (ctx->pc) {
        case 0x237fc0u: goto label_237fc0;
        case 0x238018u: goto label_238018;
        case 0x23806cu: goto label_23806c;
        case 0x2380acu: goto label_2380ac;
        case 0x2380b8u: goto label_2380b8;
        default: break;
    }

    ctx->pc = 0x237f98u;

    // 0x237f98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x237f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x237f9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x237f9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237fa0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x237fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x237fa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x237fa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237fa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x237fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x237fac: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x237facu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x237fb0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x237fb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x237fb4: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x237fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x237fb8: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x237FB8u;
    SET_GPR_U32(ctx, 31, 0x237FC0u);
    ctx->pc = 0x237FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237FB8u;
    // 0x237fbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x237FB8u, 0x237FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237FC0u;
label_237fc0:
    // 0x237fc0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x237fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x237fc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x237fc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x237fc8: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x237fc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x237fcc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x237FCCu;
    {
        const bool branch_taken_0x237fcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x237FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237FCCu;
        // 0x237fd0: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x237fcc) {
            ctx->pc = 0x237FE8u;
            goto label_237fe8;
        }
    }
    ctx->pc = 0x237FD4u;
    // 0x237fd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x237fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237fd8: 0x5062001f  beql        $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x237FD8u;
    {
        const bool branch_taken_0x237fd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x237fd8) {
            ctx->pc = 0x237FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237FD8u;
            // 0x237fdc: 0x8e0216d0  lw          $v0, 0x16D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238058u;
            goto label_238058;
        }
    }
    ctx->pc = 0x237FE0u;
    // 0x237fe0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x237FE0u;
    {
        const bool branch_taken_0x237fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237FE0u;
        // 0x237fe4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237fe0) {
            ctx->pc = 0x2380BCu;
            goto label_2380bc;
        }
    }
    ctx->pc = 0x237FE8u;
label_237fe8:
    // 0x237fe8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x237fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x237fec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237ff0: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x237ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x237ff4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x237ff4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237ff8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x237ff8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x237ffc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x237ffcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238000: 0x8c45146c  lw          $a1, 0x146C($v0)
    ctx->pc = 0x238000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5228)));
    // 0x238004: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x238004u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238008: 0x8c461470  lw          $a2, 0x1470($v0)
    ctx->pc = 0x238008u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5232)));
    // 0x23800c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x23800cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x238010: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x238010u;
    SET_GPR_U32(ctx, 31, 0x238018u);
    ctx->pc = 0x238014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238010u;
    // 0x238014: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x238010u, 0x238018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238018u;
label_238018:
    // 0x238018: 0xc6010114  lwc1        $f1, 0x114($s0)
    ctx->pc = 0x238018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23801c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23801cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x238020: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x238020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238024: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x238024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x238028: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x238028u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x23802c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x23802cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x238030: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x238030u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x238034: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x238034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x238038: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x238038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23803c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x23803cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x238040: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x238040u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x238044: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x238044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x238048: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x238048u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x23804c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23804cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x238050: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x238050u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x238054: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x238054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
label_238058:
    // 0x238058: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x238058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x23805c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23805cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238060: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x238060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x238064: 0xc055f06  jal         func_157C18
    ctx->pc = 0x238064u;
    SET_GPR_U32(ctx, 31, 0x23806Cu);
    ctx->pc = 0x238068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238064u;
    // 0x238068: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x238064u, 0x23806Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23806Cu;
label_23806c:
    // 0x23806c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23806Cu;
    {
        const bool branch_taken_0x23806c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23806Cu;
        // 0x238070: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23806c) {
            ctx->pc = 0x238098u;
            goto label_238098;
        }
    }
    ctx->pc = 0x238074u;
    // 0x238074: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x238074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x238078: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x238078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x23807c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x23807cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x238080: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x238080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x238084: 0xa20402f5  sb          $a0, 0x2F5($s0)
    ctx->pc = 0x238084u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 4));
    // 0x238088: 0xae0216d0  sw          $v0, 0x16D0($s0)
    ctx->pc = 0x238088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    // 0x23808c: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x23808cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x238090: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x238090u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x238094: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x238094u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_238098:
    // 0x238098: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x238098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23809c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23809cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2380a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2380a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2380a4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2380A4u;
    SET_GPR_U32(ctx, 31, 0x2380ACu);
    ctx->pc = 0x2380A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2380A4u;
    // 0x2380a8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2380A4u, 0x2380ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2380ACu;
label_2380ac:
    // 0x2380ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2380acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2380b0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2380B0u;
    SET_GPR_U32(ctx, 31, 0x2380B8u);
    ctx->pc = 0x2380B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2380B0u;
    // 0x2380b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2380B0u, 0x2380B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2380B8u;
label_2380b8:
    // 0x2380b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2380b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2380bc:
    // 0x2380bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2380bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2380c0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2380c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2380c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2380C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2380C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2380C4u;
        // 0x2380c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2380C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2380CCu;
    // 0x2380cc: 0x0  nop
    ctx->pc = 0x2380ccu;
    // NOP
    ctx->pc = 0x2380d0u;
}
