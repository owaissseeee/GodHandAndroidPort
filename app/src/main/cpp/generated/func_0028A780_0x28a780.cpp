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

// Function: func_0028A780
// Address: 0x28a780 - 0x28a8d0
void func_0028A780_0x28a780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028A780_0x28a780");
#endif

    switch (ctx->pc) {
        case 0x28a7ccu: goto label_28a7cc;
        case 0x28a7d8u: goto label_28a7d8;
        case 0x28a818u: goto label_28a818;
        case 0x28a840u: goto label_28a840;
        case 0x28a890u: goto label_28a890;
        case 0x28a898u: goto label_28a898;
        case 0x28a8b8u: goto label_28a8b8;
        case 0x28a8c0u: goto label_28a8c0;
        default: break;
    }

    ctx->pc = 0x28a780u;

    // 0x28a780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28a780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28a784: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28a784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28a788: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28a788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28a78c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28a78cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a790: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x28a790u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x28a794: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28A794u;
    {
        const bool branch_taken_0x28a794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A794u;
        // 0x28a798: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a794) {
            ctx->pc = 0x28A7ACu;
            goto label_28a7ac;
        }
    }
    ctx->pc = 0x28A79Cu;
    // 0x28a79c: 0x5062002e  beql        $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x28A79Cu;
    {
        const bool branch_taken_0x28a79c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28a79c) {
            ctx->pc = 0x28A7A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A79Cu;
            // 0x28a7a0: 0x8e0205f0  lw          $v0, 0x5F0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A858u;
            goto label_28a858;
        }
    }
    ctx->pc = 0x28A7A4u;
    // 0x28a7a4: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x28A7A4u;
    {
        const bool branch_taken_0x28a7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A7A4u;
        // 0x28a7a8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a7a4) {
            ctx->pc = 0x28A8C4u;
            goto label_28a8c4;
        }
    }
    ctx->pc = 0x28A7ACu;
label_28a7ac:
    // 0x28a7ac: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x28a7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x28a7b0: 0x240202a7  addiu       $v0, $zero, 0x2A7
    ctx->pc = 0x28a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 679));
    // 0x28a7b4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28A7B4u;
    {
        const bool branch_taken_0x28a7b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28A7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A7B4u;
        // 0x28a7b8: 0x240202ab  addiu       $v0, $zero, 0x2AB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 683));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a7b4) {
            ctx->pc = 0x28A7D0u;
            goto label_28a7d0;
        }
    }
    ctx->pc = 0x28A7BCu;
    // 0x28a7bc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28A7BCu;
    {
        const bool branch_taken_0x28a7bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28a7bc) {
            ctx->pc = 0x28A7D0u;
            goto label_28a7d0;
        }
    }
    ctx->pc = 0x28A7C4u;
    // 0x28a7c4: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x28A7C4u;
    SET_GPR_U32(ctx, 31, 0x28A7CCu);
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x28A7C4u, 0x28A7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A7CCu;
label_28a7cc:
    // 0x28a7cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28a7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_28a7d0:
    // 0x28a7d0: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x28A7D0u;
    SET_GPR_U32(ctx, 31, 0x28A7D8u);
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x28A7D0u, 0x28A7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A7D8u;
label_28a7d8:
    // 0x28a7d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28a7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28a7dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28A7DCu;
    {
        const bool branch_taken_0x28a7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A7DCu;
        // 0x28a7e0: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a7dc) {
            ctx->pc = 0x28A7F0u;
            goto label_28a7f0;
        }
    }
    ctx->pc = 0x28A7E4u;
    // 0x28a7e4: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x28a7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x28a7e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28A7E8u;
    {
        const bool branch_taken_0x28a7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A7E8u;
        // 0x28a7ec: 0x8c440084  lw          $a0, 0x84($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a7e8) {
            ctx->pc = 0x28A7F8u;
            goto label_28a7f8;
        }
    }
    ctx->pc = 0x28A7F0u;
label_28a7f0:
    // 0x28a7f0: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x28a7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x28a7f4: 0x8c44008c  lw          $a0, 0x8C($v0)
    ctx->pc = 0x28a7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_28a7f8:
    // 0x28a7f8: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x28a7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28a7fc: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x28a7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28a800: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28a800u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28a804: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28a804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a808: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x28a808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x28a80c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28a80cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a810: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x28A810u;
    SET_GPR_U32(ctx, 31, 0x28A818u);
    ctx->pc = 0x28A814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A810u;
    // 0x28a814: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x28A810u, 0x28A818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A818u;
label_28a818:
    // 0x28a818: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x28a818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x28a81c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28a81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a820: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x28a820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x28a824: 0x2406005c  addiu       $a2, $zero, 0x5C
    ctx->pc = 0x28a824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x28a828: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x28a828u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a82c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28a82cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a830: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28a830u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a834: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x28a834u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a838: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x28A838u;
    SET_GPR_U32(ctx, 31, 0x28A840u);
    ctx->pc = 0x28A83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A838u;
    // 0x28a83c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x28A838u, 0x28A840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A840u;
label_28a840:
    // 0x28a840: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x28a840u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x28a844: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x28a844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x28a848: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x28a848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    // 0x28a84c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28a84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28a850: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x28a850u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x28a854: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x28a854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
label_28a858:
    // 0x28a858: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28A858u;
    {
        const bool branch_taken_0x28a858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A858u;
        // 0x28a85c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a858) {
            ctx->pc = 0x28A890u;
            goto label_28a890;
        }
    }
    ctx->pc = 0x28A860u;
    // 0x28a860: 0x8e030670  lw          $v1, 0x670($s0)
    ctx->pc = 0x28a860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
    // 0x28a864: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x28a864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    // 0x28a868: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x28a868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x28a86c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28A86Cu;
    {
        const bool branch_taken_0x28a86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A86Cu;
        // 0x28a870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a86c) {
            ctx->pc = 0x28A890u;
            goto label_28a890;
        }
    }
    ctx->pc = 0x28A874u;
    // 0x28a874: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x28a874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a878: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x28a878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x28a87c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x28a87cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x28a880: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28a880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28a884: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x28a884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x28a888: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x28A888u;
    SET_GPR_U32(ctx, 31, 0x28A890u);
    ctx->pc = 0x28A88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A888u;
    // 0x28a88c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x28A888u, 0x28A890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A890u;
label_28a890:
    // 0x28a890: 0xc055f06  jal         func_157C18
    ctx->pc = 0x28A890u;
    SET_GPR_U32(ctx, 31, 0x28A898u);
    ctx->pc = 0x28A894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A890u;
    // 0x28a894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x28A890u, 0x28A898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A898u;
label_28a898:
    // 0x28a898: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28A898u;
    {
        const bool branch_taken_0x28a898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a898) {
            ctx->pc = 0x28A8B0u;
            goto label_28a8b0;
        }
    }
    ctx->pc = 0x28A8A0u;
    // 0x28a8a0: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x28a8a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a8a4: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x28a8a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a8a8: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x28a8a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a8ac: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x28a8acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_28a8b0:
    // 0x28a8b0: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x28A8B0u;
    SET_GPR_U32(ctx, 31, 0x28A8B8u);
    ctx->pc = 0x28A8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A8B0u;
    // 0x28a8b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x28A8B0u, 0x28A8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A8B8u;
label_28a8b8:
    // 0x28a8b8: 0xc0b6a6e  jal         func_2DA9B8
    ctx->pc = 0x28A8B8u;
    SET_GPR_U32(ctx, 31, 0x28A8C0u);
    ctx->pc = 0x28A8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A8B8u;
    // 0x28a8bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9B8u, 0x28A8B8u, 0x28A8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A8C0u;
label_28a8c0:
    // 0x28a8c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28a8c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28a8c4:
    // 0x28a8c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28a8c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x28A8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A8C8u;
        // 0x28a8cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A8D0u;
}
