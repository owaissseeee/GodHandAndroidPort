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

// Function: func_00217310
// Address: 0x217310 - 0x217560
void func_00217310_0x217310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00217310_0x217310");
#endif

    switch (ctx->pc) {
        case 0x21734cu: goto label_21734c;
        case 0x217378u: goto label_217378;
        case 0x21738cu: goto label_21738c;
        case 0x217438u: goto label_217438;
        case 0x21745cu: goto label_21745c;
        case 0x217474u: goto label_217474;
        case 0x21748cu: goto label_21748c;
        case 0x217498u: goto label_217498;
        case 0x2174a8u: goto label_2174a8;
        case 0x2174bcu: goto label_2174bc;
        case 0x2174c8u: goto label_2174c8;
        case 0x2174f8u: goto label_2174f8;
        case 0x217524u: goto label_217524;
        default: break;
    }

    ctx->pc = 0x217310u;

    // 0x217310: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x217310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x217314: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x217314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x217318: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x217318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x21731c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21731cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217320: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217324: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x217324u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x217328: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x217328u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x21732c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21732Cu;
    {
        const bool branch_taken_0x21732c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x217330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21732Cu;
        // 0x217330: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21732c) {
            ctx->pc = 0x217344u;
            goto label_217344;
        }
    }
    ctx->pc = 0x217334u;
    // 0x217334: 0x5062003b  beql        $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x217334u;
    {
        const bool branch_taken_0x217334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x217334) {
            ctx->pc = 0x217338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217334u;
            // 0x217338: 0x8e2205f0  lw          $v0, 0x5F0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217424u;
            goto label_217424;
        }
    }
    ctx->pc = 0x21733Cu;
    // 0x21733c: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x21733Cu;
    {
        const bool branch_taken_0x21733c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21733Cu;
        // 0x217340: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21733c) {
            ctx->pc = 0x2174CCu;
            goto label_2174cc;
        }
    }
    ctx->pc = 0x217344u;
label_217344:
    // 0x217344: 0xc09d91a  jal         func_276468
    ctx->pc = 0x217344u;
    SET_GPR_U32(ctx, 31, 0x21734Cu);
    ctx->pc = 0x217348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217344u;
    // 0x217348: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x217344u, 0x21734Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21734Cu;
label_21734c:
    // 0x21734c: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x21734cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x217350: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x217350u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x217354: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x217354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x217358: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21735c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x21735cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x217360: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x217360u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217364: 0x8c4501d4  lw          $a1, 0x1D4($v0)
    ctx->pc = 0x217364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 468)));
    // 0x217368: 0x8c4601d8  lw          $a2, 0x1D8($v0)
    ctx->pc = 0x217368u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 472)));
    // 0x21736c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x21736cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x217370: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x217370u;
    SET_GPR_U32(ctx, 31, 0x217378u);
    ctx->pc = 0x217374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217370u;
    // 0x217374: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x217370u, 0x217378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217378u;
label_217378:
    // 0x217378: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x217378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x21737c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x21737cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x217380: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x217380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    // 0x217384: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x217384u;
    SET_GPR_U32(ctx, 31, 0x21738Cu);
    ctx->pc = 0x217388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217384u;
    // 0x217388: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x217384u, 0x21738Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21738Cu;
label_21738c:
    // 0x21738c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x21738cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x217390: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x217390u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x217394: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x217394u;
    {
        const bool branch_taken_0x217394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217394u;
        // 0x217398: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217394) {
            ctx->pc = 0x2173B4u;
            goto label_2173b4;
        }
    }
    ctx->pc = 0x21739Cu;
    // 0x21739c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21739cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2173a0: 0x244265e0  addiu       $v0, $v0, 0x65E0
    ctx->pc = 0x2173a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26080));
    // 0x2173a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2173a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2173a8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2173a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2173ac: 0x800008  jr          $a0
    ctx->pc = 0x2173ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2173B4u: goto label_2173b4;
            case 0x2173CCu: goto label_2173cc;
            case 0x2173E8u: goto label_2173e8;
            case 0x21740Cu: goto label_21740c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2173ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2173B4u;
label_2173b4:
    // 0x2173b4: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x2173b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2173b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2173b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2173bc: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2173bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2173c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2173c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2173c4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2173C4u;
    {
        const bool branch_taken_0x2173c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2173C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2173C4u;
        // 0x2173c8: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2173c4) {
            ctx->pc = 0x217404u;
            goto label_217404;
        }
    }
    ctx->pc = 0x2173CCu;
label_2173cc:
    // 0x2173cc: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x2173ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2173d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2173d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2173d4: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2173d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x2173d8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2173d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2173dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2173dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2173e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2173E0u;
    {
        const bool branch_taken_0x2173e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2173E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2173E0u;
        // 0x2173e4: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2173e0) {
            ctx->pc = 0x217404u;
            goto label_217404;
        }
    }
    ctx->pc = 0x2173E8u;
label_2173e8:
    // 0x2173e8: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x2173e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2173ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2173ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2173f0: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x2173f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x2173f4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2173f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x2173f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2173f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2173fc: 0x0  nop
    ctx->pc = 0x2173fcu;
    // NOP
    // 0x217400: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x217400u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_217404:
    // 0x217404: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x217404u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x217408: 0xe62105f0  swc1        $f1, 0x5F0($s1)
    ctx->pc = 0x217408u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1520), bits); }
label_21740c:
    // 0x21740c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x21740cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x217410: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x217410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217414: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x217414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x217418: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x217418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x21741c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x21741cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x217420: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x217420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
label_217424:
    // 0x217424: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x217424u;
    {
        const bool branch_taken_0x217424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217424u;
        // 0x217428: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217424) {
            ctx->pc = 0x217490u;
            goto label_217490;
        }
    }
    ctx->pc = 0x21742Cu;
    // 0x21742c: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x21742cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x217430: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x217430u;
    SET_GPR_U32(ctx, 31, 0x217438u);
    ctx->pc = 0x217434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217430u;
    // 0x217434: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x217430u, 0x217438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217438u;
label_217438:
    // 0x217438: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x217438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21743c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21743cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217440: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x217440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x217444: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x217444u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x217448: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x217448u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x21744c: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x21744cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x217450: 0x460d0342  mul.s       $f13, $f0, $f13
    ctx->pc = 0x217450u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x217454: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x217454u;
    SET_GPR_U32(ctx, 31, 0x21745Cu);
    ctx->pc = 0x217458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217454u;
    // 0x217458: 0xc62c0600  lwc1        $f12, 0x600($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x217454u, 0x21745Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21745Cu;
label_21745c:
    // 0x21745c: 0xc6210600  lwc1        $f1, 0x600($s1)
    ctx->pc = 0x21745cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x217460: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x217460u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x217464: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x217464u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x217468: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x217468u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x21746c: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x21746Cu;
    SET_GPR_U32(ctx, 31, 0x217474u);
    ctx->pc = 0x217470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21746Cu;
    // 0x217470: 0xe6210600  swc1        $f1, 0x600($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x21746Cu, 0x217474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217474u;
label_217474:
    // 0x217474: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x217474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x217478: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x217478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x21747c: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x21747cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x217480: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x217480u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x217484: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x217484u;
    SET_GPR_U32(ctx, 31, 0x21748Cu);
    ctx->pc = 0x217488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217484u;
    // 0x217488: 0xe6210104  swc1        $f1, 0x104($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x217484u, 0x21748Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21748Cu;
label_21748c:
    // 0x21748c: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x21748cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
label_217490:
    // 0x217490: 0xc055f06  jal         func_157C18
    ctx->pc = 0x217490u;
    SET_GPR_U32(ctx, 31, 0x217498u);
    ctx->pc = 0x217494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217490u;
    // 0x217494: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x217490u, 0x217498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217498u;
label_217498:
    // 0x217498: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x217498u;
    {
        const bool branch_taken_0x217498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217498) {
            ctx->pc = 0x2174A8u;
            goto label_2174a8;
        }
    }
    ctx->pc = 0x2174A0u;
    // 0x2174a0: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x2174A0u;
    SET_GPR_U32(ctx, 31, 0x2174A8u);
    ctx->pc = 0x2174A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2174A0u;
    // 0x2174a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x2174A0u, 0x2174A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2174A8u;
label_2174a8:
    // 0x2174a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2174a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2174ac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2174acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2174b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2174b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2174b4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2174B4u;
    SET_GPR_U32(ctx, 31, 0x2174BCu);
    ctx->pc = 0x2174B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2174B4u;
    // 0x2174b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2174B4u, 0x2174BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2174BCu;
label_2174bc:
    // 0x2174bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2174bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2174c0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2174C0u;
    SET_GPR_U32(ctx, 31, 0x2174C8u);
    ctx->pc = 0x2174C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2174C0u;
    // 0x2174c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2174C0u, 0x2174C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2174C8u;
label_2174c8:
    // 0x2174c8: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x2174c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_2174cc:
    // 0x2174cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2174ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2174d0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2174D0u;
    {
        const bool branch_taken_0x2174d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2174D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2174D0u;
        // 0x2174d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2174d0) {
            ctx->pc = 0x217544u;
            goto label_217544;
        }
    }
    ctx->pc = 0x2174D8u;
    // 0x2174d8: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x2174d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x2174dc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2174dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2174e0: 0x3463fff7  ori         $v1, $v1, 0xFFF7
    ctx->pc = 0x2174e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65527);
    // 0x2174e4: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x2174e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x2174e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2174e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2174ec: 0x24a565a8  addiu       $a1, $a1, 0x65A8
    ctx->pc = 0x2174ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26024));
    // 0x2174f0: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x2174F0u;
    SET_GPR_U32(ctx, 31, 0x2174F8u);
    ctx->pc = 0x2174F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2174F0u;
    // 0x2174f4: 0xae2216d4  sw          $v0, 0x16D4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x2174F0u, 0x2174F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2174F8u;
label_2174f8:
    // 0x2174f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2174f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2174fc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2174FCu;
    {
        const bool branch_taken_0x2174fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x217500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2174FCu;
        // 0x217500: 0x3c050043  lui         $a1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2174fc) {
            ctx->pc = 0x217518u;
            goto label_217518;
        }
    }
    ctx->pc = 0x217504u;
    // 0x217504: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x217504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x217508: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x217508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21750c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x21750cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x217510: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x217510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x217514: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x217514u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
label_217518:
    // 0x217518: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21751c: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x21751Cu;
    SET_GPR_U32(ctx, 31, 0x217524u);
    ctx->pc = 0x217520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21751Cu;
    // 0x217520: 0x24a565b0  addiu       $a1, $a1, 0x65B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x21751Cu, 0x217524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217524u;
label_217524:
    // 0x217524: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x217524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217528: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x217528u;
    {
        const bool branch_taken_0x217528 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217528u;
        // 0x21752c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217528) {
            ctx->pc = 0x217548u;
            goto label_217548;
        }
    }
    ctx->pc = 0x217530u;
    // 0x217530: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x217530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x217534: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x217534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x217538: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x217538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x21753c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x21753cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x217540: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x217540u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
label_217544:
    // 0x217544: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x217544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_217548:
    // 0x217548: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x217548u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21754c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21754cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217550: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x217550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x217554: 0x3e00008  jr          $ra
    ctx->pc = 0x217554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217554u;
        // 0x217558: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21755Cu;
    // 0x21755c: 0x0  nop
    ctx->pc = 0x21755cu;
    // NOP
    ctx->pc = 0x217560u;
}
