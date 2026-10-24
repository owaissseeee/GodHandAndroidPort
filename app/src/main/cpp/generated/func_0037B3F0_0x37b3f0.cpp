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

// Function: func_0037B3F0
// Address: 0x37b3f0 - 0x37b518
void func_0037B3F0_0x37b3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037B3F0_0x37b3f0");
#endif

    switch (ctx->pc) {
        case 0x37b414u: goto label_37b414;
        case 0x37b41cu: goto label_37b41c;
        case 0x37b440u: goto label_37b440;
        case 0x37b464u: goto label_37b464;
        case 0x37b484u: goto label_37b484;
        case 0x37b4a4u: goto label_37b4a4;
        case 0x37b4c4u: goto label_37b4c4;
        case 0x37b4e4u: goto label_37b4e4;
        case 0x37b504u: goto label_37b504;
        default: break;
    }

    ctx->pc = 0x37b3f0u;

    // 0x37b3f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37b3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37b3f4: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37b3f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37b3f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37b3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37b3fc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37b3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37b400: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37b404: 0x24e7bd90  addiu       $a3, $a3, -0x4270
    ctx->pc = 0x37b404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950288));
    // 0x37b408: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x37b408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37b40c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37B40Cu;
    SET_GPR_U32(ctx, 31, 0x37B414u);
    ctx->pc = 0x37B410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B40Cu;
    // 0x37b410: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37B40Cu, 0x37B414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B414u;
label_37b414:
    // 0x37b414: 0xc0e1d0c  jal         func_387430
    ctx->pc = 0x37B414u;
    SET_GPR_U32(ctx, 31, 0x37B41Cu);
    ctx->pc = 0x37B418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B414u;
    // 0x37b418: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387430u, 0x37B414u, 0x37B41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B41Cu;
label_37b41c:
    // 0x37b41c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37b41cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b420: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x37B420u;
    {
        const bool branch_taken_0x37b420 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x37B424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B420u;
        // 0x37b424: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b420) {
            ctx->pc = 0x37B448u;
            goto label_37b448;
        }
    }
    ctx->pc = 0x37B428u;
    // 0x37b428: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37b428u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37b42c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x37b42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x37b430: 0x24e7bda0  addiu       $a3, $a3, -0x4260
    ctx->pc = 0x37b430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950304));
    // 0x37b434: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x37b434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37b438: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37B438u;
    SET_GPR_U32(ctx, 31, 0x37B440u);
    ctx->pc = 0x37B43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B438u;
    // 0x37b43c: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37B438u, 0x37B440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B440u;
label_37b440:
    // 0x37b440: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x37B440u;
    {
        const bool branch_taken_0x37b440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B440u;
        // 0x37b444: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b440) {
            ctx->pc = 0x37B508u;
            goto label_37b508;
        }
    }
    ctx->pc = 0x37B448u;
label_37b448:
    // 0x37b448: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37B448u;
    {
        const bool branch_taken_0x37b448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B448u;
        // 0x37b44c: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b448) {
            ctx->pc = 0x37B464u;
            goto label_37b464;
        }
    }
    ctx->pc = 0x37B450u;
    // 0x37b450: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x37b450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x37b454: 0x24e7bda8  addiu       $a3, $a3, -0x4258
    ctx->pc = 0x37b454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950312));
    // 0x37b458: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x37b458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37b45c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37B45Cu;
    SET_GPR_U32(ctx, 31, 0x37B464u);
    ctx->pc = 0x37B460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B45Cu;
    // 0x37b460: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37B45Cu, 0x37B464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B464u;
label_37b464:
    // 0x37b464: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x37b464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x37b468: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37B468u;
    {
        const bool branch_taken_0x37b468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B468u;
        // 0x37b46c: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b468) {
            ctx->pc = 0x37B484u;
            goto label_37b484;
        }
    }
    ctx->pc = 0x37B470u;
    // 0x37b470: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x37b470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x37b474: 0x24e7bdc0  addiu       $a3, $a3, -0x4240
    ctx->pc = 0x37b474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950336));
    // 0x37b478: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x37b478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37b47c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37B47Cu;
    SET_GPR_U32(ctx, 31, 0x37B484u);
    ctx->pc = 0x37B480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B47Cu;
    // 0x37b480: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37B47Cu, 0x37B484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B484u;
label_37b484:
    // 0x37b484: 0x32020004  andi        $v0, $s0, 0x4
    ctx->pc = 0x37b484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
    // 0x37b488: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37B488u;
    {
        const bool branch_taken_0x37b488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B488u;
        // 0x37b48c: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b488) {
            ctx->pc = 0x37B4A4u;
            goto label_37b4a4;
        }
    }
    ctx->pc = 0x37B490u;
    // 0x37b490: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x37b490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x37b494: 0x24e7bdc8  addiu       $a3, $a3, -0x4238
    ctx->pc = 0x37b494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950344));
    // 0x37b498: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x37b498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37b49c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37B49Cu;
    SET_GPR_U32(ctx, 31, 0x37B4A4u);
    ctx->pc = 0x37B4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B49Cu;
    // 0x37b4a0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37B49Cu, 0x37B4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B4A4u;
label_37b4a4:
    // 0x37b4a4: 0x32020008  andi        $v0, $s0, 0x8
    ctx->pc = 0x37b4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
    // 0x37b4a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37B4A8u;
    {
        const bool branch_taken_0x37b4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B4A8u;
        // 0x37b4ac: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b4a8) {
            ctx->pc = 0x37B4C4u;
            goto label_37b4c4;
        }
    }
    ctx->pc = 0x37B4B0u;
    // 0x37b4b0: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x37b4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x37b4b4: 0x24e7bdd0  addiu       $a3, $a3, -0x4230
    ctx->pc = 0x37b4b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950352));
    // 0x37b4b8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x37b4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37b4bc: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37B4BCu;
    SET_GPR_U32(ctx, 31, 0x37B4C4u);
    ctx->pc = 0x37B4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B4BCu;
    // 0x37b4c0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37B4BCu, 0x37B4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B4C4u;
label_37b4c4:
    // 0x37b4c4: 0x32020010  andi        $v0, $s0, 0x10
    ctx->pc = 0x37b4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
    // 0x37b4c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37B4C8u;
    {
        const bool branch_taken_0x37b4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B4C8u;
        // 0x37b4cc: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b4c8) {
            ctx->pc = 0x37B4E4u;
            goto label_37b4e4;
        }
    }
    ctx->pc = 0x37B4D0u;
    // 0x37b4d0: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x37b4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x37b4d4: 0x24e7bdd8  addiu       $a3, $a3, -0x4228
    ctx->pc = 0x37b4d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950360));
    // 0x37b4d8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x37b4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37b4dc: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37B4DCu;
    SET_GPR_U32(ctx, 31, 0x37B4E4u);
    ctx->pc = 0x37B4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B4DCu;
    // 0x37b4e0: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37B4DCu, 0x37B4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B4E4u;
label_37b4e4:
    // 0x37b4e4: 0x32020020  andi        $v0, $s0, 0x20
    ctx->pc = 0x37b4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
    // 0x37b4e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37B4E8u;
    {
        const bool branch_taken_0x37b4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B4E8u;
        // 0x37b4ec: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b4e8) {
            ctx->pc = 0x37B504u;
            goto label_37b504;
        }
    }
    ctx->pc = 0x37B4F0u;
    // 0x37b4f0: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x37b4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x37b4f4: 0x24e7bde0  addiu       $a3, $a3, -0x4220
    ctx->pc = 0x37b4f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950368));
    // 0x37b4f8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x37b4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37b4fc: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37B4FCu;
    SET_GPR_U32(ctx, 31, 0x37B504u);
    ctx->pc = 0x37B500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B4FCu;
    // 0x37b500: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37B4FCu, 0x37B504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B504u;
label_37b504:
    // 0x37b504: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37b504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37b508:
    // 0x37b508: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b50c: 0x3e00008  jr          $ra
    ctx->pc = 0x37B50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B50Cu;
        // 0x37b510: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B50Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B514u;
    // 0x37b514: 0x0  nop
    ctx->pc = 0x37b514u;
    // NOP
    ctx->pc = 0x37b518u;
}
