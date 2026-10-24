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

// Function: func_00123460
// Address: 0x123460 - 0x1236e8
void func_00123460_0x123460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00123460_0x123460");
#endif

    switch (ctx->pc) {
        case 0x1234a4u: goto label_1234a4;
        case 0x1234b4u: goto label_1234b4;
        case 0x1234ecu: goto label_1234ec;
        case 0x1234fcu: goto label_1234fc;
        case 0x123510u: goto label_123510;
        case 0x123558u: goto label_123558;
        case 0x123570u: goto label_123570;
        case 0x12358cu: goto label_12358c;
        case 0x1235acu: goto label_1235ac;
        case 0x1235bcu: goto label_1235bc;
        case 0x1235ecu: goto label_1235ec;
        case 0x123608u: goto label_123608;
        case 0x123634u: goto label_123634;
        case 0x12367cu: goto label_12367c;
        case 0x12368cu: goto label_12368c;
        case 0x1236acu: goto label_1236ac;
        case 0x1236c8u: goto label_1236c8;
        default: break;
    }

    ctx->pc = 0x123460u;

    // 0x123460: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x123460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x123464: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x123464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x123468: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x123468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x12346c: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x12346cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x123470: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x123470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123474: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x123474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x123478: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x123478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x12347c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12347cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x123480: 0x8e0406a8  lw          $a0, 0x6A8($s0)
    ctx->pc = 0x123480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1704)));
    // 0x123484: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x123484u;
    {
        const bool branch_taken_0x123484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x123488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123484u;
        // 0x123488: 0xc454d4a0  lwc1        $f20, -0x2B60($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x123484) {
            ctx->pc = 0x1234B4u;
            goto label_1234b4;
        }
    }
    ctx->pc = 0x12348Cu;
    // 0x12348c: 0x8e0215f4  lw          $v0, 0x15F4($s0)
    ctx->pc = 0x12348cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5620)));
    // 0x123490: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x123490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x123494: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x123494u;
    {
        const bool branch_taken_0x123494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123494) {
            ctx->pc = 0x123498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123494u;
            // 0x123498: 0x920302f4  lbu         $v1, 0x2F4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1234B8u;
            goto label_1234b8;
        }
    }
    ctx->pc = 0x12349Cu;
    // 0x12349c: 0xc073db8  jal         func_1CF6E0
    ctx->pc = 0x12349Cu;
    SET_GPR_U32(ctx, 31, 0x1234A4u);
    ctx->pc = 0x1CF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF6E0u, 0x12349Cu, 0x1234A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1234A4u;
label_1234a4:
    // 0x1234a4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1234a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1234a8: 0xae0006a8  sw          $zero, 0x6A8($s0)
    ctx->pc = 0x1234a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1704), GPR_U32(ctx, 0));
    // 0x1234ac: 0xc07f04e  jal         func_1FC138
    ctx->pc = 0x1234ACu;
    SET_GPR_U32(ctx, 31, 0x1234B4u);
    ctx->pc = 0x1234B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1234ACu;
    // 0x1234b0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC138u, 0x1234ACu, 0x1234B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1234B4u;
label_1234b4:
    // 0x1234b4: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1234b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1234b8:
    // 0x1234b8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1234b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1234bc: 0x10620082  beq         $v1, $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x1234BCu;
    {
        const bool branch_taken_0x1234bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1234C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1234BCu;
        // 0x1234c0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1234bc) {
            ctx->pc = 0x1236C8u;
            goto label_1236c8;
        }
    }
    ctx->pc = 0x1234C4u;
    // 0x1234c4: 0x10620080  beq         $v1, $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x1234C4u;
    {
        const bool branch_taken_0x1234c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1234C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1234C4u;
        // 0x1234c8: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1234c4) {
            ctx->pc = 0x1236C8u;
            goto label_1236c8;
        }
    }
    ctx->pc = 0x1234CCu;
    // 0x1234cc: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x1234ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x1234d0: 0x8c437a2c  lw          $v1, 0x7A2C($v0)
    ctx->pc = 0x1234d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31276)));
    // 0x1234d4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1234d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1234d8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1234D8u;
    {
        const bool branch_taken_0x1234d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1234DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1234D8u;
        // 0x1234dc: 0x3c12005d  lui         $s2, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1234d8) {
            ctx->pc = 0x123510u;
            goto label_123510;
        }
    }
    ctx->pc = 0x1234E0u;
    // 0x1234e0: 0xc64cb000  lwc1        $f12, -0x5000($s2)
    ctx->pc = 0x1234e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294946816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1234e4: 0xc0aa716  jal         func_2A9C58
    ctx->pc = 0x1234E4u;
    SET_GPR_U32(ctx, 31, 0x1234ECu);
    ctx->pc = 0x1234E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1234E4u;
    // 0x1234e8: 0x2644b000  addiu       $a0, $s2, -0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294946816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9C58u, 0x1234E4u, 0x1234ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1234ECu;
label_1234ec:
    // 0x1234ec: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1234ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1234f0: 0x24519b70  addiu       $s1, $v0, -0x6490
    ctx->pc = 0x1234f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x1234f4: 0xc07eaec  jal         func_1FABB0
    ctx->pc = 0x1234F4u;
    SET_GPR_U32(ctx, 31, 0x1234FCu);
    ctx->pc = 0x1234F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1234F4u;
    // 0x1234f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FABB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FABB0u, 0x1234F4u, 0x1234FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1234FCu;
label_1234fc:
    // 0x1234fc: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1234fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x123500: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x123500u;
    {
        const bool branch_taken_0x123500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123500u;
        // 0x123504: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123500) {
            ctx->pc = 0x123510u;
            goto label_123510;
        }
    }
    ctx->pc = 0x123508u;
    // 0x123508: 0xc07ead4  jal         func_1FAB50
    ctx->pc = 0x123508u;
    SET_GPR_U32(ctx, 31, 0x123510u);
    ctx->pc = 0x12350Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123508u;
    // 0x12350c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAB50u, 0x123508u, 0x123510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123510u;
label_123510:
    // 0x123510: 0x8e0515f4  lw          $a1, 0x15F4($s0)
    ctx->pc = 0x123510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5620)));
    // 0x123514: 0x2644b000  addiu       $a0, $s2, -0x5000
    ctx->pc = 0x123514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294946816));
    // 0x123518: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x123518u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12351c: 0x30a20200  andi        $v0, $a1, 0x200
    ctx->pc = 0x12351cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)512);
    // 0x123520: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x123520u;
    {
        const bool branch_taken_0x123520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x123524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123520u;
        // 0x123524: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123520) {
            ctx->pc = 0x123558u;
            goto label_123558;
        }
    }
    ctx->pc = 0x123528u;
    // 0x123528: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x123528u;
    {
        const bool branch_taken_0x123528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12352Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123528u;
        // 0x12352c: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123528) {
            ctx->pc = 0x123558u;
            goto label_123558;
        }
    }
    ctx->pc = 0x123530u;
    // 0x123530: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x123530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x123534: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x123534u;
    {
        const bool branch_taken_0x123534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123534u;
        // 0x123538: 0xc60c05a8  lwc1        $f12, 0x5A8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x123534) {
            ctx->pc = 0x12354Cu;
            goto label_12354c;
        }
    }
    ctx->pc = 0x12353Cu;
    // 0x12353c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x12353cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x123540: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x123540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x123544: 0x0  nop
    ctx->pc = 0x123544u;
    // NOP
    // 0x123548: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x123548u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_12354c:
    // 0x12354c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12354cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123550: 0xc0aa6b4  jal         func_2A9AD0
    ctx->pc = 0x123550u;
    SET_GPR_U32(ctx, 31, 0x123558u);
    ctx->pc = 0x123554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123550u;
    // 0x123554: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9AD0u, 0x123550u, 0x123558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123558u;
label_123558:
    // 0x123558: 0x8e0215f4  lw          $v0, 0x15F4($s0)
    ctx->pc = 0x123558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5620)));
    // 0x12355c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x12355cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x123560: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x123560u;
    {
        const bool branch_taken_0x123560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123560) {
            ctx->pc = 0x123564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123560u;
            // 0x123564: 0x960205f2  lhu         $v0, 0x5F2($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1522)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12361Cu;
            goto label_12361c;
        }
    }
    ctx->pc = 0x123568u;
    // 0x123568: 0xc0aa6f0  jal         func_2A9BC0
    ctx->pc = 0x123568u;
    SET_GPR_U32(ctx, 31, 0x123570u);
    ctx->pc = 0x12356Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123568u;
    // 0x12356c: 0x2644b000  addiu       $a0, $s2, -0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294946816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9BC0u, 0x123568u, 0x123570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123570u;
label_123570:
    // 0x123570: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x123570u;
    {
        const bool branch_taken_0x123570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123570u;
        // 0x123574: 0x960205f2  lhu         $v0, 0x5F2($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1522)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123570) {
            ctx->pc = 0x123594u;
            goto label_123594;
        }
    }
    ctx->pc = 0x123578u;
    // 0x123578: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x123578u;
    {
        const bool branch_taken_0x123578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12357Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123578u;
        // 0x12357c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123578) {
            ctx->pc = 0x1236ACu;
            goto label_1236ac;
        }
    }
    ctx->pc = 0x123580u;
    // 0x123580: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x123580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x123584: 0xc0c1880  jal         func_306200
    ctx->pc = 0x123584u;
    SET_GPR_U32(ctx, 31, 0x12358Cu);
    ctx->pc = 0x123588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123584u;
    // 0x123588: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x123584u, 0x12358Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12358Cu;
label_12358c:
    // 0x12358c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x12358Cu;
    {
        const bool branch_taken_0x12358c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12358Cu;
        // 0x123590: 0xa60005f2  sh          $zero, 0x5F2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1522), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12358c) {
            ctx->pc = 0x1236ACu;
            goto label_1236ac;
        }
    }
    ctx->pc = 0x123594u;
label_123594:
    // 0x123594: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x123594u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123598: 0x10510044  beq         $v0, $s1, . + 4 + (0x44 << 2)
    ctx->pc = 0x123598u;
    {
        const bool branch_taken_0x123598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x12359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123598u;
        // 0x12359c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123598) {
            ctx->pc = 0x1236ACu;
            goto label_1236ac;
        }
    }
    ctx->pc = 0x1235A0u;
    // 0x1235a0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1235a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1235a4: 0xc0c1880  jal         func_306200
    ctx->pc = 0x1235A4u;
    SET_GPR_U32(ctx, 31, 0x1235ACu);
    ctx->pc = 0x1235A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1235A4u;
    // 0x1235a8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x1235A4u, 0x1235ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1235ACu;
label_1235ac:
    // 0x1235ac: 0xa61105f2  sh          $s1, 0x5F2($s0)
    ctx->pc = 0x1235acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1522), (uint16_t)GPR_U32(ctx, 17));
    // 0x1235b0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1235b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1235b4: 0xc07f02a  jal         func_1FC0A8
    ctx->pc = 0x1235B4u;
    SET_GPR_U32(ctx, 31, 0x1235BCu);
    ctx->pc = 0x1235B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1235B4u;
    // 0x1235b8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0A8u, 0x1235B4u, 0x1235BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1235BCu;
label_1235bc:
    // 0x1235bc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1235bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1235c0: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x1235c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1235c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1235C4u;
    {
        const bool branch_taken_0x1235c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1235C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1235C4u;
        // 0x1235c8: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1235c4) {
            ctx->pc = 0x1235E4u;
            goto label_1235e4;
        }
    }
    ctx->pc = 0x1235CCu;
    // 0x1235cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1235ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1235d0: 0x2442c7d0  addiu       $v0, $v0, -0x3830
    ctx->pc = 0x1235d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952912));
    // 0x1235d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1235d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1235d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1235d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1235dc: 0x800008  jr          $a0
    ctx->pc = 0x1235DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1235E4u: goto label_1235e4;
            case 0x123600u: goto label_123600;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1235DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1235E4u;
label_1235e4:
    // 0x1235e4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1235E4u;
    SET_GPR_U32(ctx, 31, 0x1235ECu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1235E4u, 0x1235ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1235ECu;
label_1235ec:
    // 0x1235ec: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1235ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1235f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1235f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1235f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1235f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1235f8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1235F8u;
    {
        const bool branch_taken_0x1235f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1235FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1235F8u;
        // 0x1235fc: 0x24050025  addiu       $a1, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1235f8) {
            ctx->pc = 0x12366Cu;
            goto label_12366c;
        }
    }
    ctx->pc = 0x123600u;
label_123600:
    // 0x123600: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x123600u;
    SET_GPR_U32(ctx, 31, 0x123608u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x123600u, 0x123608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123608u;
label_123608:
    // 0x123608: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x123608u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x12360c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x12360cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123610: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x123610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123614: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x123614u;
    {
        const bool branch_taken_0x123614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123614u;
        // 0x123618: 0x24050073  addiu       $a1, $zero, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123614) {
            ctx->pc = 0x12366Cu;
            goto label_12366c;
        }
    }
    ctx->pc = 0x12361Cu;
label_12361c:
    // 0x12361c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12361cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x123620: 0x10430022  beq         $v0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x123620u;
    {
        const bool branch_taken_0x123620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x123624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123620u;
        // 0x123624: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123620) {
            ctx->pc = 0x1236ACu;
            goto label_1236ac;
        }
    }
    ctx->pc = 0x123628u;
    // 0x123628: 0xa60305f2  sh          $v1, 0x5F2($s0)
    ctx->pc = 0x123628u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1522), (uint16_t)GPR_U32(ctx, 3));
    // 0x12362c: 0xc07f02a  jal         func_1FC0A8
    ctx->pc = 0x12362Cu;
    SET_GPR_U32(ctx, 31, 0x123634u);
    ctx->pc = 0x123630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12362Cu;
    // 0x123630: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0A8u, 0x12362Cu, 0x123634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123634u;
label_123634:
    // 0x123634: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x123634u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123638: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x123638u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x12363c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12363Cu;
    {
        const bool branch_taken_0x12363c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12363Cu;
        // 0x123640: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12363c) {
            ctx->pc = 0x12365Cu;
            goto label_12365c;
        }
    }
    ctx->pc = 0x123644u;
    // 0x123644: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x123644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x123648: 0x2442c7f0  addiu       $v0, $v0, -0x3810
    ctx->pc = 0x123648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952944));
    // 0x12364c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12364cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x123650: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x123650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x123654: 0x800008  jr          $a0
    ctx->pc = 0x123654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12365Cu: goto label_12365c;
            case 0x123684u: goto label_123684;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123654u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12365Cu;
label_12365c:
    // 0x12365c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x12365cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x123660: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x123660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123664: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x123664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x123668: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x123668u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12366c:
    // 0x12366c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12366cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123670: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x123670u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x123674: 0xc0c194a  jal         func_306528
    ctx->pc = 0x123674u;
    SET_GPR_U32(ctx, 31, 0x12367Cu);
    ctx->pc = 0x123678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123674u;
    // 0x123678: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x123674u, 0x12367Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12367Cu;
label_12367c:
    // 0x12367c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12367Cu;
    {
        const bool branch_taken_0x12367c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12367c) {
            ctx->pc = 0x1236ACu;
            goto label_1236ac;
        }
    }
    ctx->pc = 0x123684u;
label_123684:
    // 0x123684: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x123684u;
    SET_GPR_U32(ctx, 31, 0x12368Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x123684u, 0x12368Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12368Cu;
label_12368c:
    // 0x12368c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x12368cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x123690: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x123690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123694: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x123694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123698: 0x24050072  addiu       $a1, $zero, 0x72
    ctx->pc = 0x123698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x12369c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12369cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1236a0: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1236a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1236a4: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1236A4u;
    SET_GPR_U32(ctx, 31, 0x1236ACu);
    ctx->pc = 0x1236A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1236A4u;
    // 0x1236a8: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1236A4u, 0x1236ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1236ACu;
label_1236ac:
    // 0x1236ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1236acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1236b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1236b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1236b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1236b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1236b8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1236b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1236bc: 0xe60005dc  swc1        $f0, 0x5DC($s0)
    ctx->pc = 0x1236bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1500), bits); }
    // 0x1236c0: 0xc0560a2  jal         func_158288
    ctx->pc = 0x1236C0u;
    SET_GPR_U32(ctx, 31, 0x1236C8u);
    ctx->pc = 0x1236C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1236C0u;
    // 0x1236c4: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x1236C0u, 0x1236C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1236C8u;
label_1236c8:
    // 0x1236c8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1236c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1236cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1236ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1236d0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1236d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1236d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1236d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1236d8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1236d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1236dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1236DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1236E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1236DCu;
        // 0x1236e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1236DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1236E4u;
    // 0x1236e4: 0x0  nop
    ctx->pc = 0x1236e4u;
    // NOP
    ctx->pc = 0x1236e8u;
}
