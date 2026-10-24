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

// Function: func_00244708
// Address: 0x244708 - 0x2448e0
void func_00244708_0x244708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00244708_0x244708");
#endif

    switch (ctx->pc) {
        case 0x244730u: goto label_244730;
        case 0x24474cu: goto label_24474c;
        case 0x244780u: goto label_244780;
        case 0x2447acu: goto label_2447ac;
        case 0x2447d4u: goto label_2447d4;
        case 0x2447e8u: goto label_2447e8;
        case 0x24481cu: goto label_24481c;
        case 0x24485cu: goto label_24485c;
        case 0x244864u: goto label_244864;
        case 0x244874u: goto label_244874;
        case 0x244888u: goto label_244888;
        case 0x244894u: goto label_244894;
        case 0x2448b4u: goto label_2448b4;
        case 0x2448c4u: goto label_2448c4;
        default: break;
    }

    ctx->pc = 0x244708u;

    // 0x244708: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x244708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x24470c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x24470cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x244710: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x244710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x244714: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x244714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244718: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x244718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24471c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x24471cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x244720: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x244720u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x244724: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x244724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x244728: 0xc0a5232  jal         func_2948C8
    ctx->pc = 0x244728u;
    SET_GPR_U32(ctx, 31, 0x244730u);
    ctx->pc = 0x24472Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244728u;
    // 0x24472c: 0x920517b1  lbu         $a1, 0x17B1($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6065)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2948C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2948C8u, 0x244728u, 0x244730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244730u;
label_244730:
    // 0x244730: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x244730u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244734: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x244734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x244738: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x244738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x24473c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24473cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244740: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x244740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x244744: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x244744u;
    SET_GPR_U32(ctx, 31, 0x24474Cu);
    ctx->pc = 0x244748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244744u;
    // 0x244748: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x244744u, 0x24474Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24474Cu;
label_24474c:
    // 0x24474c: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x24474cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x244750: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x244750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x244754: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x244754u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x244758: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x244758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24475c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24475Cu;
    {
        const bool branch_taken_0x24475c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x244760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24475Cu;
        // 0x244760: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24475c) {
            ctx->pc = 0x244778u;
            goto label_244778;
        }
    }
    ctx->pc = 0x244764u;
    // 0x244764: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x244764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244768: 0x1082001d  beq         $a0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x244768u;
    {
        const bool branch_taken_0x244768 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x244768) {
            ctx->pc = 0x2447E0u;
            goto label_2447e0;
        }
    }
    ctx->pc = 0x244770u;
    // 0x244770: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x244770u;
    {
        const bool branch_taken_0x244770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244770u;
        // 0x244774: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244770) {
            ctx->pc = 0x244898u;
            goto label_244898;
        }
    }
    ctx->pc = 0x244778u;
label_244778:
    // 0x244778: 0xc09d91a  jal         func_276468
    ctx->pc = 0x244778u;
    SET_GPR_U32(ctx, 31, 0x244780u);
    ctx->pc = 0x24477Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244778u;
    // 0x24477c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x244778u, 0x244780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244780u;
label_244780:
    // 0x244780: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x244780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x244784: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x244784u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x244788: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x244788u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24478c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24478cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244790: 0x8c6504fc  lw          $a1, 0x4FC($v1)
    ctx->pc = 0x244790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1276)));
    // 0x244794: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x244794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x244798: 0x8c660500  lw          $a2, 0x500($v1)
    ctx->pc = 0x244798u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1280)));
    // 0x24479c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24479cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2447a0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2447a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2447a4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2447A4u;
    SET_GPR_U32(ctx, 31, 0x2447ACu);
    ctx->pc = 0x2447A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2447A4u;
    // 0x2447a8: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2447A4u, 0x2447ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2447ACu;
label_2447ac:
    // 0x2447ac: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2447acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2447b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2447b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2447b4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x2447b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x2447b8: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2447b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2447bc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2447bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2447c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2447c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2447c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2447c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2447c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2447c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2447cc: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x2447CCu;
    SET_GPR_U32(ctx, 31, 0x2447D4u);
    ctx->pc = 0x2447D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2447CCu;
    // 0x2447d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x2447CCu, 0x2447D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2447D4u;
label_2447d4:
    // 0x2447d4: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x2447d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2447d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2447d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2447dc: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x2447dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_2447e0:
    // 0x2447e0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2447E0u;
    SET_GPR_U32(ctx, 31, 0x2447E8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2447E0u, 0x2447E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2447E8u;
label_2447e8:
    // 0x2447e8: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x2447e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2447ec: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2447ECu;
    {
        const bool branch_taken_0x2447ec = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x2447ec) {
            ctx->pc = 0x24480Cu;
            goto label_24480c;
        }
    }
    ctx->pc = 0x2447F4u;
    // 0x2447f4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2447f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2447f8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2447f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2447fc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2447fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244800: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x244800u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x244804: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x244804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244808: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x244808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_24480c:
    // 0x24480c: 0x5220000c  beql        $s1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x24480Cu;
    {
        const bool branch_taken_0x24480c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x24480c) {
            ctx->pc = 0x244810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24480Cu;
            // 0x244810: 0xc60005a8  lwc1        $f0, 0x5A8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x244840u;
            goto label_244840;
        }
    }
    ctx->pc = 0x244814u;
    // 0x244814: 0xc06e1c8  jal         func_1B8720
    ctx->pc = 0x244814u;
    SET_GPR_U32(ctx, 31, 0x24481Cu);
    ctx->pc = 0x244818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244814u;
    // 0x244818: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8720u, 0x244814u, 0x24481Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24481Cu;
label_24481c:
    // 0x24481c: 0x53a20008  beql        $sp, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24481Cu;
    {
        const bool branch_taken_0x24481c = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x24481c) {
            ctx->pc = 0x244820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24481Cu;
            // 0x244820: 0xc60005a8  lwc1        $f0, 0x5A8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x244840u;
            goto label_244840;
        }
    }
    ctx->pc = 0x244824u;
    // 0x244824: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x244824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244828: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x244828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x24482c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24482cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244830: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x244830u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x244834: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x244834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244838: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x244838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x24483c: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x24483cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244840:
    // 0x244840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244844: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x244844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x244848: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x244848u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x24484c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x24484cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x244850: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x244850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244854: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x244854u;
    SET_GPR_U32(ctx, 31, 0x24485Cu);
    ctx->pc = 0x244858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244854u;
    // 0x244858: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x244854u, 0x24485Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24485Cu;
label_24485c:
    // 0x24485c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x24485Cu;
    SET_GPR_U32(ctx, 31, 0x244864u);
    ctx->pc = 0x244860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24485Cu;
    // 0x244860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x24485Cu, 0x244864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244864u;
label_244864:
    // 0x244864: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x244864u;
    {
        const bool branch_taken_0x244864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244864) {
            ctx->pc = 0x244874u;
            goto label_244874;
        }
    }
    ctx->pc = 0x24486Cu;
    // 0x24486c: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x24486Cu;
    SET_GPR_U32(ctx, 31, 0x244874u);
    ctx->pc = 0x244870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24486Cu;
    // 0x244870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x24486Cu, 0x244874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244874u;
label_244874:
    // 0x244874: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x244874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x244878: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x244878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24487c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24487cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244880: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x244880u;
    SET_GPR_U32(ctx, 31, 0x244888u);
    ctx->pc = 0x244884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244880u;
    // 0x244884: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x244880u, 0x244888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244888u;
label_244888:
    // 0x244888: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x244888u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x24488c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x24488Cu;
    SET_GPR_U32(ctx, 31, 0x244894u);
    ctx->pc = 0x244890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24488Cu;
    // 0x244890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x24488Cu, 0x244894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244894u;
label_244894:
    // 0x244894: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x244894u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_244898:
    // 0x244898: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x244898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24489c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24489Cu;
    {
        const bool branch_taken_0x24489c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2448A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24489Cu;
        // 0x2448a0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24489c) {
            ctx->pc = 0x2448C8u;
            goto label_2448c8;
        }
    }
    ctx->pc = 0x2448A4u;
    // 0x2448a4: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2448A4u;
    {
        const bool branch_taken_0x2448a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2448a4) {
            ctx->pc = 0x2448A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2448A4u;
            // 0x2448a8: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2448CCu;
            goto label_2448cc;
        }
    }
    ctx->pc = 0x2448ACu;
    // 0x2448ac: 0xc06e190  jal         func_1B8640
    ctx->pc = 0x2448ACu;
    SET_GPR_U32(ctx, 31, 0x2448B4u);
    ctx->pc = 0x2448B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2448ACu;
    // 0x2448b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8640u, 0x2448ACu, 0x2448B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2448B4u;
label_2448b4:
    // 0x2448b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2448B4u;
    {
        const bool branch_taken_0x2448b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2448B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448B4u;
        // 0x2448b8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2448b4) {
            ctx->pc = 0x2448C8u;
            goto label_2448c8;
        }
    }
    ctx->pc = 0x2448BCu;
    // 0x2448bc: 0xc06e120  jal         func_1B8480
    ctx->pc = 0x2448BCu;
    SET_GPR_U32(ctx, 31, 0x2448C4u);
    ctx->pc = 0x2448C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2448BCu;
    // 0x2448c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8480u, 0x2448BCu, 0x2448C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2448C4u;
label_2448c4:
    // 0x2448c4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2448c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2448c8:
    // 0x2448c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2448c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2448cc:
    // 0x2448cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2448ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2448d0: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2448d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2448d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2448D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2448D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448D4u;
        // 0x2448d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2448D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2448DCu;
    // 0x2448dc: 0x0  nop
    ctx->pc = 0x2448dcu;
    // NOP
    ctx->pc = 0x2448e0u;
}
