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

// Function: func_002BE708
// Address: 0x2be708 - 0x2be818
void func_002BE708_0x2be708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BE708_0x2be708");
#endif

    switch (ctx->pc) {
        case 0x2be730u: goto label_2be730;
        case 0x2be7bcu: goto label_2be7bc;
        case 0x2be7e0u: goto label_2be7e0;
        case 0x2be7f4u: goto label_2be7f4;
        case 0x2be804u: goto label_2be804;
        default: break;
    }

    ctx->pc = 0x2be708u;

    // 0x2be708: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2be708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2be70c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2be70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2be710: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2be710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2be714: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2be714u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be718: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2be718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2be71c: 0x30b0ffff  andi        $s0, $a1, 0xFFFF
    ctx->pc = 0x2be71cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2be720: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x2be720u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x2be724: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2be724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2be728: 0xc0b140a  jal         func_2C5028
    ctx->pc = 0x2BE728u;
    SET_GPR_U32(ctx, 31, 0x2BE730u);
    ctx->pc = 0x2BE72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE728u;
    // 0x2be72c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5028u, 0x2BE728u, 0x2BE730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE730u;
label_2be730:
    // 0x2be730: 0x50400035  beql        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x2BE730u;
    {
        const bool branch_taken_0x2be730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be730) {
            ctx->pc = 0x2BE734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE730u;
            // 0x2be734: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE808u;
            goto label_2be808;
        }
    }
    ctx->pc = 0x2BE738u;
    // 0x2be738: 0x90430010  lbu         $v1, 0x10($v0)
    ctx->pc = 0x2be738u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2be73c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2be73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be740: 0x54620031  bnel        $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2BE740u;
    {
        const bool branch_taken_0x2be740 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2be740) {
            ctx->pc = 0x2BE744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE740u;
            // 0x2be744: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE808u;
            goto label_2be808;
        }
    }
    ctx->pc = 0x2BE748u;
    // 0x2be748: 0x103202  srl         $a2, $s0, 8
    ctx->pc = 0x2be748u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x2be74c: 0x14c0000d  bnez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x2BE74Cu;
    {
        const bool branch_taken_0x2be74c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE74Cu;
        // 0x2be750: 0x320700ff  andi        $a3, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be74c) {
            ctx->pc = 0x2BE784u;
            goto label_2be784;
        }
    }
    ctx->pc = 0x2BE754u;
    // 0x2be754: 0x28e20040  slti        $v0, $a3, 0x40
    ctx->pc = 0x2be754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2be758: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2BE758u;
    {
        const bool branch_taken_0x2be758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be758) {
            ctx->pc = 0x2BE75Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE758u;
            // 0x2be75c: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE788u;
            goto label_2be788;
        }
    }
    ctx->pc = 0x2BE760u;
    // 0x2be760: 0x28e20046  slti        $v0, $a3, 0x46
    ctx->pc = 0x2be760u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)70) ? 1 : 0);
    // 0x2be764: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BE764u;
    {
        const bool branch_taken_0x2be764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be764) {
            ctx->pc = 0x2BE768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE764u;
            // 0x2be768: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE784u;
            goto label_2be784;
        }
    }
    ctx->pc = 0x2BE76Cu;
    // 0x2be76c: 0x28e2004e  slti        $v0, $a3, 0x4E
    ctx->pc = 0x2be76cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)78) ? 1 : 0);
    // 0x2be770: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BE770u;
    {
        const bool branch_taken_0x2be770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE770u;
        // 0x2be774: 0x28e2004c  slti        $v0, $a3, 0x4C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)76) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be770) {
            ctx->pc = 0x2BE784u;
            goto label_2be784;
        }
    }
    ctx->pc = 0x2BE778u;
    // 0x2be778: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BE778u;
    {
        const bool branch_taken_0x2be778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE778u;
        // 0x2be77c: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be778) {
            ctx->pc = 0x2BE788u;
            goto label_2be788;
        }
    }
    ctx->pc = 0x2BE780u;
    // 0x2be780: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x2be780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2be784:
    // 0x2be784: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2be784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_2be788:
    // 0x2be788: 0x8c627a30  lw          $v0, 0x7A30($v1)
    ctx->pc = 0x2be788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31280)));
    // 0x2be78c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x2be78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x2be790: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2BE790u;
    {
        const bool branch_taken_0x2be790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE790u;
        // 0x2be794: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be790) {
            ctx->pc = 0x2BE7C4u;
            goto label_2be7c4;
        }
    }
    ctx->pc = 0x2BE798u;
    // 0x2be798: 0x54c20005  bnel        $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BE798u;
    {
        const bool branch_taken_0x2be798 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x2be798) {
            ctx->pc = 0x2BE79Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE798u;
            // 0x2be79c: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE7B0u;
            goto label_2be7b0;
        }
    }
    ctx->pc = 0x2BE7A0u;
    // 0x2be7a0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2be7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2be7a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2be7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be7a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2BE7A8u;
    {
        const bool branch_taken_0x2be7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE7A8u;
        // 0x2be7ac: 0x24a5c0e0  addiu       $a1, $a1, -0x3F20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be7a8) {
            ctx->pc = 0x2BE7D8u;
            goto label_2be7d8;
        }
    }
    ctx->pc = 0x2BE7B0u;
label_2be7b0:
    // 0x2be7b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2be7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be7b4: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x2BE7B4u;
    SET_GPR_U32(ctx, 31, 0x2BE7BCu);
    ctx->pc = 0x2BE7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE7B4u;
    // 0x2be7b8: 0x24a5c118  addiu       $a1, $a1, -0x3EE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x2BE7B4u, 0x2BE7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE7BCu;
label_2be7bc:
    // 0x2be7bc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2BE7BCu;
    {
        const bool branch_taken_0x2be7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE7BCu;
        // 0x2be7c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be7bc) {
            ctx->pc = 0x2BE7F8u;
            goto label_2be7f8;
        }
    }
    ctx->pc = 0x2BE7C4u;
label_2be7c4:
    // 0x2be7c4: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BE7C4u;
    {
        const bool branch_taken_0x2be7c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BE7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE7C4u;
        // 0x2be7c8: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be7c4) {
            ctx->pc = 0x2BE7E8u;
            goto label_2be7e8;
        }
    }
    ctx->pc = 0x2BE7CCu;
    // 0x2be7cc: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2be7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2be7d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2be7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be7d4: 0x24a5c150  addiu       $a1, $a1, -0x3EB0
    ctx->pc = 0x2be7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951248));
label_2be7d8:
    // 0x2be7d8: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x2BE7D8u;
    SET_GPR_U32(ctx, 31, 0x2BE7E0u);
    ctx->pc = 0x2BE7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE7D8u;
    // 0x2be7dc: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x2BE7D8u, 0x2BE7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE7E0u;
label_2be7e0:
    // 0x2be7e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BE7E0u;
    {
        const bool branch_taken_0x2be7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE7E0u;
        // 0x2be7e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be7e0) {
            ctx->pc = 0x2BE7F8u;
            goto label_2be7f8;
        }
    }
    ctx->pc = 0x2BE7E8u;
label_2be7e8:
    // 0x2be7e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2be7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be7ec: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x2BE7ECu;
    SET_GPR_U32(ctx, 31, 0x2BE7F4u);
    ctx->pc = 0x2BE7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE7ECu;
    // 0x2be7f0: 0x24a5c170  addiu       $a1, $a1, -0x3E90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x2BE7ECu, 0x2BE7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE7F4u;
label_2be7f4:
    // 0x2be7f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2be7f8:
    // 0x2be7f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2be7f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be7fc: 0xc0afa0e  jal         func_2BE838
    ctx->pc = 0x2BE7FCu;
    SET_GPR_U32(ctx, 31, 0x2BE804u);
    ctx->pc = 0x2BE800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE7FCu;
    // 0x2be800: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE838u, 0x2BE7FCu, 0x2BE804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE804u;
label_2be804:
    // 0x2be804: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2be804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2be808:
    // 0x2be808: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2be808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2be80c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2be80cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2be810: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE810u;
        // 0x2be814: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE818u;
}
