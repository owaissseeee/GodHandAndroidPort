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

// Function: func_00114460
// Address: 0x114460 - 0x114608
void func_00114460_0x114460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00114460_0x114460");
#endif

    switch (ctx->pc) {
        case 0x1144a0u: goto label_1144a0;
        case 0x1144e0u: goto label_1144e0;
        case 0x1144fcu: goto label_1144fc;
        case 0x114528u: goto label_114528;
        case 0x114534u: goto label_114534;
        case 0x114588u: goto label_114588;
        case 0x11459cu: goto label_11459c;
        case 0x1145bcu: goto label_1145bc;
        case 0x1145c8u: goto label_1145c8;
        case 0x1145e4u: goto label_1145e4;
        case 0x1145f0u: goto label_1145f0;
        default: break;
    }

    ctx->pc = 0x114460u;

    // 0x114460: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x114460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x114464: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x114464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x114468: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x114468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11446c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11446cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114470: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x114470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x114474: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x114474u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x114478: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x114478u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x11447c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11447Cu;
    {
        const bool branch_taken_0x11447c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x114480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11447Cu;
        // 0x114480: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11447c) {
            ctx->pc = 0x114494u;
            goto label_114494;
        }
    }
    ctx->pc = 0x114484u;
    // 0x114484: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x114484u;
    {
        const bool branch_taken_0x114484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x114488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114484u;
        // 0x114488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114484) {
            ctx->pc = 0x1144F4u;
            goto label_1144f4;
        }
    }
    ctx->pc = 0x11448Cu;
    // 0x11448c: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x11448Cu;
    {
        const bool branch_taken_0x11448c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11448c) {
            ctx->pc = 0x1145E8u;
            goto label_1145e8;
        }
    }
    ctx->pc = 0x114494u;
label_114494:
    // 0x114494: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x114494u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x114498: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x114498u;
    SET_GPR_U32(ctx, 31, 0x1144A0u);
    ctx->pc = 0x11449Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114498u;
    // 0x11449c: 0xa60005e2  sh          $zero, 0x5E2($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1506), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x114498u, 0x1144A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1144A0u;
label_1144a0:
    // 0x1144a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1144a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1144a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1144A4u;
    {
        const bool branch_taken_0x1144a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1144A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1144A4u;
        // 0x1144a8: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1144a4) {
            ctx->pc = 0x1144B8u;
            goto label_1144b8;
        }
    }
    ctx->pc = 0x1144ACu;
    // 0x1144ac: 0x8c430230  lw          $v1, 0x230($v0)
    ctx->pc = 0x1144acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 560)));
    // 0x1144b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1144B0u;
    {
        const bool branch_taken_0x1144b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1144B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1144B0u;
        // 0x1144b4: 0x8c440234  lw          $a0, 0x234($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1144b0) {
            ctx->pc = 0x1144C0u;
            goto label_1144c0;
        }
    }
    ctx->pc = 0x1144B8u;
label_1144b8:
    // 0x1144b8: 0x8c4308a0  lw          $v1, 0x8A0($v0)
    ctx->pc = 0x1144b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2208)));
    // 0x1144bc: 0x8c4408a4  lw          $a0, 0x8A4($v0)
    ctx->pc = 0x1144bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2212)));
label_1144c0:
    // 0x1144c0: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1144c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1144c4: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x1144c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1144c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1144c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1144cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1144ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1144d0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1144d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1144d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1144d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1144d8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1144D8u;
    SET_GPR_U32(ctx, 31, 0x1144E0u);
    ctx->pc = 0x1144DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1144D8u;
    // 0x1144dc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1144D8u, 0x1144E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1144E0u;
label_1144e0:
    // 0x1144e0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1144e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1144e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1144e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1144e8: 0xa6030568  sh          $v1, 0x568($s0)
    ctx->pc = 0x1144e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 3));
    // 0x1144ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1144ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1144f0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1144f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_1144f4:
    // 0x1144f4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1144F4u;
    SET_GPR_U32(ctx, 31, 0x1144FCu);
    ctx->pc = 0x1144F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1144F4u;
    // 0x1144f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1144F4u, 0x1144FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1144FCu;
label_1144fc:
    // 0x1144fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1144FCu;
    {
        const bool branch_taken_0x1144fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1144fc) {
            ctx->pc = 0x114514u;
            goto label_114514;
        }
    }
    ctx->pc = 0x114504u;
    // 0x114504: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x114504u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x114508: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x114508u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x11450c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x11450cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x114510: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x114510u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_114514:
    // 0x114514: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x114514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x114518: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x114518u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11451c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11451cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114520: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x114520u;
    SET_GPR_U32(ctx, 31, 0x114528u);
    ctx->pc = 0x114524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114520u;
    // 0x114524: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x114520u, 0x114528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114528u;
label_114528:
    // 0x114528: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x114528u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11452c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11452Cu;
    SET_GPR_U32(ctx, 31, 0x114534u);
    ctx->pc = 0x114530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11452Cu;
    // 0x114530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11452Cu, 0x114534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114534u;
label_114534:
    // 0x114534: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x114534u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x114538: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x114538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11453c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x11453Cu;
    {
        const bool branch_taken_0x11453c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11453Cu;
        // 0x114540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11453c) {
            ctx->pc = 0x1145E8u;
            goto label_1145e8;
        }
    }
    ctx->pc = 0x114544u;
    // 0x114544: 0x86020568  lh          $v0, 0x568($s0)
    ctx->pc = 0x114544u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x114548: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x114548u;
    {
        const bool branch_taken_0x114548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114548) {
            ctx->pc = 0x1145E8u;
            goto label_1145e8;
        }
    }
    ctx->pc = 0x114550u;
    // 0x114550: 0xa6000568  sh          $zero, 0x568($s0)
    ctx->pc = 0x114550u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 0));
    // 0x114554: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x114554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x114558: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x114558u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11455c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x11455cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x114560: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x114560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x114564: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x114564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x114568: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x114568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x11456c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x11456cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x114570: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x114570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x114574: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x114574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x114578: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x114578u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x11457c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x11457cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x114580: 0xc0a46e4  jal         func_291B90
    ctx->pc = 0x114580u;
    SET_GPR_U32(ctx, 31, 0x114588u);
    ctx->pc = 0x114584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114580u;
    // 0x114584: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291B90u, 0x114580u, 0x114588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114588u;
label_114588:
    // 0x114588: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x114588u;
    {
        const bool branch_taken_0x114588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11458Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114588u;
        // 0x11458c: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114588) {
            ctx->pc = 0x1145E4u;
            goto label_1145e4;
        }
    }
    ctx->pc = 0x114590u;
    // 0x114590: 0x24519b70  addiu       $s1, $v0, -0x6490
    ctx->pc = 0x114590u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x114594: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x114594u;
    SET_GPR_U32(ctx, 31, 0x11459Cu);
    ctx->pc = 0x114598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114594u;
    // 0x114598: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x114594u, 0x11459Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11459Cu;
label_11459c:
    // 0x11459c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x11459cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1145a0: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1145A0u;
    {
        const bool branch_taken_0x1145a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1145A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1145A0u;
        // 0x1145a4: 0x3c04005d  lui         $a0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1145a0) {
            ctx->pc = 0x1145D0u;
            goto label_1145d0;
        }
    }
    ctx->pc = 0x1145A8u;
    // 0x1145a8: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x1145a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x1145ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1145acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1145b0: 0x2484b000  addiu       $a0, $a0, -0x5000
    ctx->pc = 0x1145b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
    // 0x1145b4: 0xc0aa65e  jal         func_2A9978
    ctx->pc = 0x1145B4u;
    SET_GPR_U32(ctx, 31, 0x1145BCu);
    ctx->pc = 0x1145B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1145B4u;
    // 0x1145b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9978u, 0x1145B4u, 0x1145BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1145BCu;
label_1145bc:
    // 0x1145bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1145bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1145c0: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x1145C0u;
    SET_GPR_U32(ctx, 31, 0x1145C8u);
    ctx->pc = 0x1145C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1145C0u;
    // 0x1145c4: 0x240500fa  addiu       $a1, $zero, 0xFA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x1145C0u, 0x1145C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1145C8u;
label_1145c8:
    // 0x1145c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1145C8u;
    {
        const bool branch_taken_0x1145c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1145CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1145C8u;
        // 0x1145cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1145c8) {
            ctx->pc = 0x1145E8u;
            goto label_1145e8;
        }
    }
    ctx->pc = 0x1145D0u;
label_1145d0:
    // 0x1145d0: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x1145d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x1145d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1145d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1145d8: 0x2484b000  addiu       $a0, $a0, -0x5000
    ctx->pc = 0x1145d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
    // 0x1145dc: 0xc0aa65e  jal         func_2A9978
    ctx->pc = 0x1145DCu;
    SET_GPR_U32(ctx, 31, 0x1145E4u);
    ctx->pc = 0x1145E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1145DCu;
    // 0x1145e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9978u, 0x1145DCu, 0x1145E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1145E4u;
label_1145e4:
    // 0x1145e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1145e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1145e8:
    // 0x1145e8: 0xc048e4e  jal         func_123938
    ctx->pc = 0x1145E8u;
    SET_GPR_U32(ctx, 31, 0x1145F0u);
    ctx->pc = 0x1145ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1145E8u;
    // 0x1145ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x1145E8u, 0x1145F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1145F0u;
label_1145f0:
    // 0x1145f0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1145f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1145f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1145f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1145f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1145f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1145fc: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1145fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x114600: 0x3e00008  jr          $ra
    ctx->pc = 0x114600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114600u;
        // 0x114604: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114608u;
}
