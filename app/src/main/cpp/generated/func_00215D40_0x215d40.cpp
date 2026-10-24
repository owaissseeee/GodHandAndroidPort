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

// Function: func_00215D40
// Address: 0x215d40 - 0x216078
void func_00215D40_0x215d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00215D40_0x215d40");
#endif

    switch (ctx->pc) {
        case 0x215d90u: goto label_215d90;
        case 0x215db0u: goto label_215db0;
        case 0x215ddcu: goto label_215ddc;
        case 0x215e08u: goto label_215e08;
        case 0x215e10u: goto label_215e10;
        case 0x215e38u: goto label_215e38;
        case 0x215e44u: goto label_215e44;
        case 0x215e54u: goto label_215e54;
        case 0x215e80u: goto label_215e80;
        case 0x215e88u: goto label_215e88;
        case 0x215ebcu: goto label_215ebc;
        case 0x215ec4u: goto label_215ec4;
        case 0x215ed0u: goto label_215ed0;
        case 0x215f1cu: goto label_215f1c;
        case 0x215f28u: goto label_215f28;
        case 0x215f44u: goto label_215f44;
        case 0x215f90u: goto label_215f90;
        case 0x215fd8u: goto label_215fd8;
        case 0x215fe8u: goto label_215fe8;
        case 0x216014u: goto label_216014;
        case 0x216028u: goto label_216028;
        case 0x216038u: goto label_216038;
        case 0x21604cu: goto label_21604c;
        case 0x216058u: goto label_216058;
        case 0x216060u: goto label_216060;
        default: break;
    }

    ctx->pc = 0x215d40u;

    // 0x215d40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x215d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x215d44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x215d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x215d48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x215d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x215d4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x215d4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215d50: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x215d50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x215d54: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x215d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x215d58: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x215d58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x215d5c: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x215d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x215d60: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x215d60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x215d64: 0x106000bc  beqz        $v1, . + 4 + (0xBC << 2)
    ctx->pc = 0x215D64u;
    {
        const bool branch_taken_0x215d64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x215D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D64u;
        // 0x215d68: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215d64) {
            ctx->pc = 0x216058u;
            goto label_216058;
        }
    }
    ctx->pc = 0x215D6Cu;
    // 0x215d6c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x215d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x215d70: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x215d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x215d74: 0x24426510  addiu       $v0, $v0, 0x6510
    ctx->pc = 0x215d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25872));
    // 0x215d78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x215d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x215d7c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x215d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x215d80: 0x800008  jr          $a0
    ctx->pc = 0x215D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x215D88u: goto label_215d88;
            case 0x215DE8u: goto label_215de8;
            case 0x215E4Cu: goto label_215e4c;
            case 0x215E9Cu: goto label_215e9c;
            case 0x215FE0u: goto label_215fe0;
            case 0x216020u: goto label_216020;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215D80u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x215D88u;
label_215d88:
    // 0x215d88: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x215D88u;
    SET_GPR_U32(ctx, 31, 0x215D90u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x215D88u, 0x215D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215D90u;
label_215d90:
    // 0x215d90: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x215d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x215d94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215d98: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x215d98u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x215d9c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x215D9Cu;
    {
        const bool branch_taken_0x215d9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x215d9c) {
            ctx->pc = 0x215DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215D9Cu;
            // 0x215da0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x215DA4u;
            goto label_215da4;
        }
    }
    ctx->pc = 0x215DA4u;
label_215da4:
    // 0x215da4: 0x2810  mfhi        $a1
    ctx->pc = 0x215da4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x215da8: 0xc09d91a  jal         func_276468
    ctx->pc = 0x215DA8u;
    SET_GPR_U32(ctx, 31, 0x215DB0u);
    ctx->pc = 0x215DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215DA8u;
    // 0x215dac: 0xae0517d0  sw          $a1, 0x17D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 6096), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x215DA8u, 0x215DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215DB0u;
label_215db0:
    // 0x215db0: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x215db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x215db4: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x215db4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x215db8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x215db8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x215dbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215dc0: 0x8c651934  lw          $a1, 0x1934($v1)
    ctx->pc = 0x215dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6452)));
    // 0x215dc4: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x215dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x215dc8: 0x8c661938  lw          $a2, 0x1938($v1)
    ctx->pc = 0x215dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6456)));
    // 0x215dcc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x215dccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215dd0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x215dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x215dd4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x215DD4u;
    SET_GPR_U32(ctx, 31, 0x215DDCu);
    ctx->pc = 0x215DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215DD4u;
    // 0x215dd8: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x215DD4u, 0x215DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215DDCu;
label_215ddc:
    // 0x215ddc: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x215ddcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x215de0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x215de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x215de4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x215de4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_215de8:
    // 0x215de8: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x215de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215dec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215df0: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x215df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x215df4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x215df4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x215df8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x215df8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x215dfc: 0x260516a0  addiu       $a1, $s0, 0x16A0
    ctx->pc = 0x215dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5792));
    // 0x215e00: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x215E00u;
    SET_GPR_U32(ctx, 31, 0x215E08u);
    ctx->pc = 0x215E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215E00u;
    // 0x215e04: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x215E00u, 0x215E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215E08u;
label_215e08:
    // 0x215e08: 0xc055f06  jal         func_157C18
    ctx->pc = 0x215E08u;
    SET_GPR_U32(ctx, 31, 0x215E10u);
    ctx->pc = 0x215E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215E08u;
    // 0x215e0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x215E08u, 0x215E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215E10u;
label_215e10:
    // 0x215e10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x215E10u;
    {
        const bool branch_taken_0x215e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x215e10) {
            ctx->pc = 0x215E24u;
            goto label_215e24;
        }
    }
    ctx->pc = 0x215E18u;
    // 0x215e18: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x215e18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x215e1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x215e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x215e20: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x215e20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_215e24:
    // 0x215e24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x215e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x215e28: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x215e28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x215e2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215e30: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x215E30u;
    SET_GPR_U32(ctx, 31, 0x215E38u);
    ctx->pc = 0x215E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215E30u;
    // 0x215e34: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x215E30u, 0x215E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215E38u;
label_215e38:
    // 0x215e38: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x215e38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x215e3c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x215E3Cu;
    SET_GPR_U32(ctx, 31, 0x215E44u);
    ctx->pc = 0x215E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215E3Cu;
    // 0x215e40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x215E3Cu, 0x215E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215E44u;
label_215e44:
    // 0x215e44: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x215E44u;
    {
        const bool branch_taken_0x215e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x215e44) {
            ctx->pc = 0x216058u;
            goto label_216058;
        }
    }
    ctx->pc = 0x215E4Cu;
label_215e4c:
    // 0x215e4c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x215E4Cu;
    SET_GPR_U32(ctx, 31, 0x215E54u);
    ctx->pc = 0x215E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215E4Cu;
    // 0x215e50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x215E4Cu, 0x215E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215E54u;
label_215e54:
    // 0x215e54: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x215e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x215e58: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x215e58u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x215e5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x215e5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x215e60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215e64: 0x8c65193c  lw          $a1, 0x193C($v1)
    ctx->pc = 0x215e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6460)));
    // 0x215e68: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x215e68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x215e6c: 0x8c661940  lw          $a2, 0x1940($v1)
    ctx->pc = 0x215e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6464)));
    // 0x215e70: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x215e70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215e74: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x215e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x215e78: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x215E78u;
    SET_GPR_U32(ctx, 31, 0x215E80u);
    ctx->pc = 0x215E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215E78u;
    // 0x215e7c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x215E78u, 0x215E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215E80u;
label_215e80:
    // 0x215e80: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x215E80u;
    SET_GPR_U32(ctx, 31, 0x215E88u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x215E80u, 0x215E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215E88u;
label_215e88:
    // 0x215e88: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x215e88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x215e8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x215e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x215e90: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x215e90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x215e94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x215e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x215e98: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x215e98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_215e9c:
    // 0x215e9c: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x215e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215ea0: 0x260516a0  addiu       $a1, $s0, 0x16A0
    ctx->pc = 0x215ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5792));
    // 0x215ea4: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x215ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x215ea8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x215ea8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x215eac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x215eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x215eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215eb4: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x215EB4u;
    SET_GPR_U32(ctx, 31, 0x215EBCu);
    ctx->pc = 0x215EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215EB4u;
    // 0x215eb8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x215EB4u, 0x215EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215EBCu;
label_215ebc:
    // 0x215ebc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x215EBCu;
    SET_GPR_U32(ctx, 31, 0x215EC4u);
    ctx->pc = 0x215EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215EBCu;
    // 0x215ec0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x215EBCu, 0x215EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215EC4u;
label_215ec4:
    // 0x215ec4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x215ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x215ec8: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x215EC8u;
    SET_GPR_U32(ctx, 31, 0x215ED0u);
    ctx->pc = 0x215ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215EC8u;
    // 0x215ecc: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x215EC8u, 0x215ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215ED0u;
label_215ed0:
    // 0x215ed0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x215ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x215ed4: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x215ED4u;
    {
        const bool branch_taken_0x215ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x215ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215ED4u;
        // 0x215ed8: 0xc60005a8  lwc1        $f0, 0x5A8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x215ed4) {
            ctx->pc = 0x215EF0u;
            goto label_215ef0;
        }
    }
    ctx->pc = 0x215EDCu;
    // 0x215edc: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x215edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x215ee0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x215ee0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x215ee4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x215ee4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x215ee8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x215EE8u;
    {
        const bool branch_taken_0x215ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215EE8u;
        // 0x215eec: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215ee8) {
            ctx->pc = 0x215F04u;
            goto label_215f04;
        }
    }
    ctx->pc = 0x215EF0u;
label_215ef0:
    // 0x215ef0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x215ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x215ef4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x215ef4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x215ef8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x215ef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x215efc: 0x0  nop
    ctx->pc = 0x215efcu;
    // NOP
    // 0x215f00: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x215f00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_215f04:
    // 0x215f04: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x215f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x215f08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x215f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x215f0c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x215f0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x215f10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215f14: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x215F14u;
    SET_GPR_U32(ctx, 31, 0x215F1Cu);
    ctx->pc = 0x215F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215F14u;
    // 0x215f18: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x215F14u, 0x215F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215F1Cu;
label_215f1c:
    // 0x215f1c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x215f1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x215f20: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x215F20u;
    SET_GPR_U32(ctx, 31, 0x215F28u);
    ctx->pc = 0x215F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215F20u;
    // 0x215f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x215F20u, 0x215F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215F28u;
label_215f28:
    // 0x215f28: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x215f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x215f2c: 0x26051690  addiu       $a1, $s0, 0x1690
    ctx->pc = 0x215f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5776));
    // 0x215f30: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x215f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x215f34: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x215f34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x215f38: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x215f38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x215f3c: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x215F3Cu;
    SET_GPR_U32(ctx, 31, 0x215F44u);
    ctx->pc = 0x215F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215F3Cu;
    // 0x215f40: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x215F3Cu, 0x215F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215F44u;
label_215f44:
    // 0x215f44: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x215f44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x215f48: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x215f48u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x215f4c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x215f4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215f50: 0x0  nop
    ctx->pc = 0x215f50u;
    // NOP
    // 0x215f54: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x215F54u;
    {
        const bool branch_taken_0x215f54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x215f54) {
            ctx->pc = 0x215F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215F54u;
            // 0x215f58: 0x4600a507  neg.s       $f20, $f20 (Delay Slot)
            ctx->f[20] = FPU_NEG_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x215F5Cu;
            goto label_215f5c;
        }
    }
    ctx->pc = 0x215F5Cu;
label_215f5c:
    // 0x215f5c: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x215f5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x215f60: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x215F60u;
    {
        const bool branch_taken_0x215f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x215f60) {
            ctx->pc = 0x215F90u;
            goto label_215f90;
        }
    }
    ctx->pc = 0x215F68u;
    // 0x215f68: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x215f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215f6c: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x215f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x215f70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215f70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215f74: 0x0  nop
    ctx->pc = 0x215f74u;
    // NOP
    // 0x215f78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x215f78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215f7c: 0x0  nop
    ctx->pc = 0x215f7cu;
    // NOP
    // 0x215f80: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x215F80u;
    {
        const bool branch_taken_0x215f80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x215f80) {
            ctx->pc = 0x215F90u;
            goto label_215f90;
        }
    }
    ctx->pc = 0x215F88u;
    // 0x215f88: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x215F88u;
    SET_GPR_U32(ctx, 31, 0x215F90u);
    ctx->pc = 0x215F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215F88u;
    // 0x215f8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x215F88u, 0x215F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215F90u;
label_215f90:
    // 0x215f90: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x215f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x215f94: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x215f94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x215f98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215f98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215f9c: 0x0  nop
    ctx->pc = 0x215f9cu;
    // NOP
    // 0x215fa0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x215fa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215fa4: 0x0  nop
    ctx->pc = 0x215fa4u;
    // NOP
    // 0x215fa8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x215FA8u;
    {
        const bool branch_taken_0x215fa8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x215fa8) {
            ctx->pc = 0x215FD0u;
            goto label_215fd0;
        }
    }
    ctx->pc = 0x215FB0u;
    // 0x215fb0: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x215fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215fb4: 0x3c0140c8  lui         $at, 0x40C8
    ctx->pc = 0x215fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16584 << 16));
    // 0x215fb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215fb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215fbc: 0x0  nop
    ctx->pc = 0x215fbcu;
    // NOP
    // 0x215fc0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x215fc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215fc4: 0x0  nop
    ctx->pc = 0x215fc4u;
    // NOP
    // 0x215fc8: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x215FC8u;
    {
        const bool branch_taken_0x215fc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x215fc8) {
            ctx->pc = 0x216058u;
            goto label_216058;
        }
    }
    ctx->pc = 0x215FD0u;
label_215fd0:
    // 0x215fd0: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x215FD0u;
    SET_GPR_U32(ctx, 31, 0x215FD8u);
    ctx->pc = 0x215FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215FD0u;
    // 0x215fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x215FD0u, 0x215FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215FD8u;
label_215fd8:
    // 0x215fd8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x215FD8u;
    {
        const bool branch_taken_0x215fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x215fd8) {
            ctx->pc = 0x216058u;
            goto label_216058;
        }
    }
    ctx->pc = 0x215FE0u;
label_215fe0:
    // 0x215fe0: 0xc09d91a  jal         func_276468
    ctx->pc = 0x215FE0u;
    SET_GPR_U32(ctx, 31, 0x215FE8u);
    ctx->pc = 0x215FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215FE0u;
    // 0x215fe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x215FE0u, 0x215FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215FE8u;
label_215fe8:
    // 0x215fe8: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x215fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x215fec: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x215fecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x215ff0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x215ff0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x215ff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215ff8: 0x8c651944  lw          $a1, 0x1944($v1)
    ctx->pc = 0x215ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6468)));
    // 0x215ffc: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x215ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x216000: 0x8c661948  lw          $a2, 0x1948($v1)
    ctx->pc = 0x216000u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6472)));
    // 0x216004: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x216004u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216008: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x216008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x21600c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x21600Cu;
    SET_GPR_U32(ctx, 31, 0x216014u);
    ctx->pc = 0x216010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21600Cu;
    // 0x216010: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x21600Cu, 0x216014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216014u;
label_216014:
    // 0x216014: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x216014u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x216018: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x216018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21601c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x21601cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_216020:
    // 0x216020: 0xc055f06  jal         func_157C18
    ctx->pc = 0x216020u;
    SET_GPR_U32(ctx, 31, 0x216028u);
    ctx->pc = 0x216024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216020u;
    // 0x216024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x216020u, 0x216028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216028u;
label_216028:
    // 0x216028: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x216028u;
    {
        const bool branch_taken_0x216028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216028) {
            ctx->pc = 0x216038u;
            goto label_216038;
        }
    }
    ctx->pc = 0x216030u;
    // 0x216030: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x216030u;
    SET_GPR_U32(ctx, 31, 0x216038u);
    ctx->pc = 0x216034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216030u;
    // 0x216034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x216030u, 0x216038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216038u;
label_216038:
    // 0x216038: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x216038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21603c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x21603cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x216040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x216040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216044: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x216044u;
    SET_GPR_U32(ctx, 31, 0x21604Cu);
    ctx->pc = 0x216048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216044u;
    // 0x216048: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x216044u, 0x21604Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21604Cu;
label_21604c:
    // 0x21604c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x21604cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x216050: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x216050u;
    SET_GPR_U32(ctx, 31, 0x216058u);
    ctx->pc = 0x216054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216050u;
    // 0x216054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x216050u, 0x216058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216058u;
label_216058:
    // 0x216058: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x216058u;
    SET_GPR_U32(ctx, 31, 0x216060u);
    ctx->pc = 0x21605Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216058u;
    // 0x21605c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x216058u, 0x216060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216060u;
label_216060:
    // 0x216060: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x216060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216064: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x216064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216068: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x216068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21606c: 0x3e00008  jr          $ra
    ctx->pc = 0x21606Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21606Cu;
        // 0x216070: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21606Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216074u;
    // 0x216074: 0x0  nop
    ctx->pc = 0x216074u;
    // NOP
    ctx->pc = 0x216078u;
}
