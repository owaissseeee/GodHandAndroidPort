#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: fileCheck__7cMcBoot
// Address: 0x7c0650 - 0x7c07b0
void fileCheck__7cMcBoot_0x7c0650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fileCheck__7cMcBoot_0x7c0650");
#endif

    switch (ctx->pc) {
        case 0x7c06a4u: goto label_7c06a4;
        case 0x7c06b8u: goto label_7c06b8;
        case 0x7c06ccu: goto label_7c06cc;
        case 0x7c06dcu: goto label_7c06dc;
        case 0x7c06f8u: goto label_7c06f8;
        case 0x7c0714u: goto label_7c0714;
        default: break;
    }

    ctx->pc = 0x7c0650u;

    // 0x7c0650: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7c0650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7c0654: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7c0654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7c0658: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7c0658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7c065c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c065cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0660: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7c0660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7c0664: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x7c0664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c0668: 0x8e2300f4  lw          $v1, 0xF4($s1)
    ctx->pc = 0x7c0668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x7c066c: 0x1064000d  beq         $v1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x7C066Cu;
    {
        const bool branch_taken_0x7c066c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x7C0670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C066Cu;
        // 0x7c0670: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c066c) {
            ctx->pc = 0x7C06A4u;
            goto label_7c06a4;
        }
    }
    ctx->pc = 0x7C0674u;
    // 0x7c0674: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C0674u;
    {
        const bool branch_taken_0x7c0674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c0674) {
            ctx->pc = 0x7C0678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C0674u;
            // 0x7c0678: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C068Cu;
            goto label_7c068c;
        }
    }
    ctx->pc = 0x7C067Cu;
    // 0x7c067c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x7C067Cu;
    {
        const bool branch_taken_0x7c067c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C067Cu;
        // 0x7c0680: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c067c) {
            ctx->pc = 0x7C069Cu;
            goto label_7c069c;
        }
    }
    ctx->pc = 0x7C0684u;
    // 0x7c0684: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x7C0684u;
    {
        const bool branch_taken_0x7c0684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0684u;
        // 0x7c0688: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0684) {
            ctx->pc = 0x7C07A0u;
            goto label_7c07a0;
        }
    }
    ctx->pc = 0x7C068Cu;
label_7c068c:
    // 0x7c068c: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x7C068Cu;
    {
        const bool branch_taken_0x7c068c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C0690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C068Cu;
        // 0x7c0690: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c068c) {
            ctx->pc = 0x7C06E8u;
            goto label_7c06e8;
        }
    }
    ctx->pc = 0x7C0694u;
    // 0x7c0694: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x7C0694u;
    {
        const bool branch_taken_0x7c0694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0694u;
        // 0x7c0698: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0694) {
            ctx->pc = 0x7C07A0u;
            goto label_7c07a0;
        }
    }
    ctx->pc = 0x7C069Cu;
label_7c069c:
    // 0x7c069c: 0xae2400f4  sw          $a0, 0xF4($s1)
    ctx->pc = 0x7c069cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 4));
    // 0x7c06a0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x7c06a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_7c06a4:
    // 0x7c06a4: 0x3c10007d  lui         $s0, 0x7D
    ctx->pc = 0x7c06a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)125 << 16));
    // 0x7c06a8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x7c06a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x7c06ac: 0x26101740  addiu       $s0, $s0, 0x1740
    ctx->pc = 0x7c06acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5952));
    // 0x7c06b0: 0xc1f0c7c  jal         func_7C31F0
    ctx->pc = 0x7C06B0u;
    SET_GPR_U32(ctx, 31, 0x7C06B8u);
    ctx->pc = 0x7C06B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C06B0u;
    // 0x7c06b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C31F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C31F0u, 0x7C06B0u, 0x7C06B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C06B8u;
label_7c06b8:
    // 0x7c06b8: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7c06b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
    // 0x7c06bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c06bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c06c0: 0x24a50990  addiu       $a1, $a1, 0x990
    ctx->pc = 0x7c06c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2448));
    // 0x7c06c4: 0xc1f0d42  jal         func_7C3508
    ctx->pc = 0x7C06C4u;
    SET_GPR_U32(ctx, 31, 0x7C06CCu);
    ctx->pc = 0x7C06C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C06C4u;
    // 0x7c06c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3508u, 0x7C06C4u, 0x7C06CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C06CCu;
label_7c06cc:
    // 0x7c06cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c06ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c06d0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x7c06d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x7c06d4: 0xc1f03a0  jal         func_7C0E80
    ctx->pc = 0x7C06D4u;
    SET_GPR_U32(ctx, 31, 0x7C06DCu);
    ctx->pc = 0x7C06D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C06D4u;
    // 0x7c06d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C0E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C0E80u, 0x7C06D4u, 0x7C06DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C06DCu;
label_7c06dc:
    // 0x7c06dc: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x7C06DCu;
    {
        const bool branch_taken_0x7c06dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C06E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C06DCu;
        // 0x7c06e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c06dc) {
            ctx->pc = 0x7C0788u;
            goto label_7c0788;
        }
    }
    ctx->pc = 0x7C06E4u;
    // 0x7c06e4: 0xae2200f4  sw          $v0, 0xF4($s1)
    ctx->pc = 0x7c06e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
label_7c06e8:
    // 0x7c06e8: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7c06e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7c06ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c06ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c06f0: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C06F0u;
    SET_GPR_U32(ctx, 31, 0x7C06F8u);
    ctx->pc = 0x7C06F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C06F0u;
    // 0x7c06f4: 0x24841740  addiu       $a0, $a0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C06F0u, 0x7C06F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C06F8u;
label_7c06f8:
    // 0x7c06f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7c06f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c06fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c06fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c0700: 0x56020026  bnel        $s0, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x7C0700u;
    {
        const bool branch_taken_0x7c0700 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x7c0700) {
            ctx->pc = 0x7C0704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C0700u;
            // 0x7c0704: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C079Cu;
            goto label_7c079c;
        }
    }
    ctx->pc = 0x7C0708u;
    // 0x7c0708: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c0708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c070c: 0xc1f03c8  jal         func_7C0F20
    ctx->pc = 0x7C070Cu;
    SET_GPR_U32(ctx, 31, 0x7C0714u);
    ctx->pc = 0x7C0710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C070Cu;
    // 0x7c0710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C0F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C0F20u, 0x7C070Cu, 0x7C0714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C0714u;
label_7c0714:
    // 0x7c0714: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x7c0714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0718: 0x50d00006  beql        $a2, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C0718u;
    {
        const bool branch_taken_0x7c0718 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 16));
        if (branch_taken_0x7c0718) {
            ctx->pc = 0x7C071Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C0718u;
            // 0x7c071c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C0734u;
            goto label_7c0734;
        }
    }
    ctx->pc = 0x7C0720u;
    // 0x7c0720: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x7c0720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7c0724: 0x50c20010  beql        $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x7C0724u;
    {
        const bool branch_taken_0x7c0724 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x7c0724) {
            ctx->pc = 0x7C0728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C0724u;
            // 0x7c0728: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C0768u;
            goto label_7c0768;
        }
    }
    ctx->pc = 0x7C072Cu;
    // 0x7c072c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x7C072Cu;
    {
        const bool branch_taken_0x7c072c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C072Cu;
        // 0x7c0730: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c072c) {
            ctx->pc = 0x7C078Cu;
            goto label_7c078c;
        }
    }
    ctx->pc = 0x7C0734u;
label_7c0734:
    // 0x7c0734: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x7c0734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c0738: 0x26250088  addiu       $a1, $s1, 0x88
    ctx->pc = 0x7c0738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    // 0x7c073c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x7c073cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x7c0740: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x7c0740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x7c0744: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x7c0744u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x7c0748: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x7c0748u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x7c074c: 0x862004  sllv        $a0, $a2, $a0
    ctx->pc = 0x7c074cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    // 0x7c0750: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x7c0750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x7c0754: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x7c0754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x7c0758: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x7c0758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x7c075c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x7c075cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x7c0760: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x7c0760u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x7c0764: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x7c0764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_7c0768:
    // 0x7c0768: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x7c0768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x7c076c: 0x28430014  slti        $v1, $v0, 0x14
    ctx->pc = 0x7c076cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x7c0770: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x7c0770u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x7c0774: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C0774u;
    {
        const bool branch_taken_0x7c0774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0774u;
        // 0x7c0778: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0774) {
            ctx->pc = 0x7C078Cu;
            goto label_7c078c;
        }
    }
    ctx->pc = 0x7C077Cu;
    // 0x7c077c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c077cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c0780: 0x1000ffc8  b           . + 4 + (-0x38 << 2)
    ctx->pc = 0x7C0780u;
    {
        const bool branch_taken_0x7c0780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0780u;
        // 0x7c0784: 0xae2200f4  sw          $v0, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0780) {
            ctx->pc = 0x7C06A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c06a4;
        }
    }
    ctx->pc = 0x7C0788u;
label_7c0788:
    // 0x7c0788: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x7c0788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_7c078c:
    // 0x7c078c: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c078cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c0790: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x7c0790u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x7c0794: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x7c0794u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
    // 0x7c0798: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7c0798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_7c079c:
    // 0x7c079c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7c079cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7c07a0:
    // 0x7c07a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7c07a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c07a4: 0x3e00008  jr          $ra
    ctx->pc = 0x7C07A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C07A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C07A4u;
        // 0x7c07a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C07A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C07ACu;
    // 0x7c07ac: 0x0  nop
    ctx->pc = 0x7c07acu;
    // NOP
    ctx->pc = 0x7c07b0u;
}
} // namespace gh_mcport
