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

// Function: func_00103370
// Address: 0x103370 - 0x1034e0
void func_00103370_0x103370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00103370_0x103370");
#endif

    switch (ctx->pc) {
        case 0x103394u: goto label_103394;
        case 0x1033e4u: goto label_1033e4;
        case 0x1033f0u: goto label_1033f0;
        case 0x1033fcu: goto label_1033fc;
        case 0x10341cu: goto label_10341c;
        case 0x10343cu: goto label_10343c;
        case 0x10347cu: goto label_10347c;
        case 0x1034b0u: goto label_1034b0;
        case 0x1034bcu: goto label_1034bc;
        default: break;
    }

    ctx->pc = 0x103370u;

    // 0x103370: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x103370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x103374: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x103374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x103378: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x103378u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10337c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x10337cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x103380: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x103380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x103384: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x103384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x103388: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x103388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10338c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x10338Cu;
    SET_GPR_U32(ctx, 31, 0x103394u);
    ctx->pc = 0x103390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10338Cu;
    // 0x103390: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x10338Cu, 0x103394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103394u;
label_103394:
    // 0x103394: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x103394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x103398: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x103398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10339c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10339cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1033a0: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x1033a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x1033a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1033a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1033a8: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1033A8u;
    {
        const bool branch_taken_0x1033a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1033ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1033A8u;
        // 0x1033ac: 0xe640054c  swc1        $f0, 0x54C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1033a8) {
            ctx->pc = 0x103450u;
            goto label_103450;
        }
    }
    ctx->pc = 0x1033B0u;
    // 0x1033b0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1033b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1033b4: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1033B4u;
    {
        const bool branch_taken_0x1033b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1033B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1033B4u;
        // 0x1033b8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1033b4) {
            ctx->pc = 0x1034C0u;
            goto label_1034c0;
        }
    }
    ctx->pc = 0x1033BCu;
    // 0x1033bc: 0x54600041  bnel        $v1, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x1033BCu;
    {
        const bool branch_taken_0x1033bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1033bc) {
            ctx->pc = 0x1033C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1033BCu;
            // 0x1033c0: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1034C4u;
            goto label_1034c4;
        }
    }
    ctx->pc = 0x1033C4u;
    // 0x1033c4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x1033c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x1033c8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1033c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1033cc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1033ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1033d0: 0x8c50004c  lw          $s0, 0x4C($v0)
    ctx->pc = 0x1033d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1033d4: 0x8c510050  lw          $s1, 0x50($v0)
    ctx->pc = 0x1033d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1033d8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1033d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1033dc: 0xc0b29c6  jal         func_2CA718
    ctx->pc = 0x1033DCu;
    SET_GPR_U32(ctx, 31, 0x1033E4u);
    ctx->pc = 0x1033E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1033DCu;
    // 0x1033e0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA718u, 0x1033DCu, 0x1033E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1033E4u;
label_1033e4:
    // 0x1033e4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1033e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1033e8: 0xc07e868  jal         func_1FA1A0
    ctx->pc = 0x1033E8u;
    SET_GPR_U32(ctx, 31, 0x1033F0u);
    ctx->pc = 0x1033ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1033E8u;
    // 0x1033ec: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA1A0u, 0x1033E8u, 0x1033F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1033F0u;
label_1033f0:
    // 0x1033f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1033f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1033f4: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x1033F4u;
    SET_GPR_U32(ctx, 31, 0x1033FCu);
    ctx->pc = 0x1033F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1033F4u;
    // 0x1033f8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x1033F4u, 0x1033FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1033FCu;
label_1033fc:
    // 0x1033fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1033fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x103400: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x103400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103404: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x103404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103408: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x103408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10340c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x10340cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x103410: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x103410u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103414: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x103414u;
    SET_GPR_U32(ctx, 31, 0x10341Cu);
    ctx->pc = 0x103418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103414u;
    // 0x103418: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x103414u, 0x10341Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10341Cu;
label_10341c:
    // 0x10341c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x10341cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x103420: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x103420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103424: 0x24050053  addiu       $a1, $zero, 0x53
    ctx->pc = 0x103424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x103428: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x103428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10342c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10342cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103430: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x103430u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x103434: 0xc0c194a  jal         func_306528
    ctx->pc = 0x103434u;
    SET_GPR_U32(ctx, 31, 0x10343Cu);
    ctx->pc = 0x103438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103434u;
    // 0x103438: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x103434u, 0x10343Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10343Cu;
label_10343c:
    // 0x10343c: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x10343cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x103440: 0x24020082  addiu       $v0, $zero, 0x82
    ctx->pc = 0x103440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x103444: 0xae421490  sw          $v0, 0x1490($s2)
    ctx->pc = 0x103444u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5264), GPR_U32(ctx, 2));
    // 0x103448: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x103448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10344c: 0xa24302f6  sb          $v1, 0x2F6($s2)
    ctx->pc = 0x10344cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 3));
label_103450:
    // 0x103450: 0x8e421490  lw          $v0, 0x1490($s2)
    ctx->pc = 0x103450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5264)));
    // 0x103454: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x103454u;
    {
        const bool branch_taken_0x103454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103454u;
        // 0x103458: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103454) {
            ctx->pc = 0x103464u;
            goto label_103464;
        }
    }
    ctx->pc = 0x10345Cu;
    // 0x10345c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10345Cu;
    {
        const bool branch_taken_0x10345c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10345Cu;
        // 0x103460: 0xae421490  sw          $v0, 0x1490($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10345c) {
            ctx->pc = 0x103474u;
            goto label_103474;
        }
    }
    ctx->pc = 0x103464u;
label_103464:
    // 0x103464: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x103464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x103468: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x103468u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x10346c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x10346cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x103470: 0xac627a24  sw          $v0, 0x7A24($v1)
    ctx->pc = 0x103470u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A24u, _value); } while (0);
label_103474:
    // 0x103474: 0xc055f06  jal         func_157C18
    ctx->pc = 0x103474u;
    SET_GPR_U32(ctx, 31, 0x10347Cu);
    ctx->pc = 0x103478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103474u;
    // 0x103478: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x103474u, 0x10347Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10347Cu;
label_10347c:
    // 0x10347c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10347Cu;
    {
        const bool branch_taken_0x10347c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10347Cu;
        // 0x103480: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10347c) {
            ctx->pc = 0x10349Cu;
            goto label_10349c;
        }
    }
    ctx->pc = 0x103484u;
    // 0x103484: 0x8c437a24  lw          $v1, 0x7A24($v0)
    ctx->pc = 0x103484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31268)));
    // 0x103488: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x103488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x10348c: 0xac437a24  sw          $v1, 0x7A24($v0)
    ctx->pc = 0x10348cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31268), GPR_U32(ctx, 3));
    // 0x103490: 0x924402f6  lbu         $a0, 0x2F6($s2)
    ctx->pc = 0x103490u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x103494: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x103494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x103498: 0xa24402f6  sb          $a0, 0x2F6($s2)
    ctx->pc = 0x103498u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 4));
label_10349c:
    // 0x10349c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10349cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1034a0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1034a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1034a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1034a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1034a8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x1034A8u;
    SET_GPR_U32(ctx, 31, 0x1034B0u);
    ctx->pc = 0x1034ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1034A8u;
    // 0x1034ac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x1034A8u, 0x1034B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1034B0u;
label_1034b0:
    // 0x1034b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1034b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1034b4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x1034B4u;
    SET_GPR_U32(ctx, 31, 0x1034BCu);
    ctx->pc = 0x1034B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1034B4u;
    // 0x1034b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x1034B4u, 0x1034BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1034BCu;
label_1034bc:
    // 0x1034bc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1034bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1034c0:
    // 0x1034c0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1034c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1034c4:
    // 0x1034c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1034c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1034c8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1034c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1034cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1034ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1034d0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1034d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1034d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1034D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1034D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034D4u;
        // 0x1034d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1034D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1034DCu;
    // 0x1034dc: 0x0  nop
    ctx->pc = 0x1034dcu;
    // NOP
    ctx->pc = 0x1034e0u;
}
