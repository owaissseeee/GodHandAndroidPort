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

// Function: UiPanel_setSlideMode
// Address: 0x1df428 - 0x1df528
void UiPanel_setSlideMode_0x1df428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UiPanel_setSlideMode_0x1df428");
#endif

    switch (ctx->pc) {
        case 0x1df46cu: goto label_1df46c;
        case 0x1df47cu: goto label_1df47c;
        case 0x1df48cu: goto label_1df48c;
        case 0x1df4a0u: goto label_1df4a0;
        case 0x1df4bcu: goto label_1df4bc;
        case 0x1df4ccu: goto label_1df4cc;
        case 0x1df4dcu: goto label_1df4dc;
        case 0x1df4f4u: goto label_1df4f4;
        case 0x1df504u: goto label_1df504;
        case 0x1df514u: goto label_1df514;
        default: break;
    }

    ctx->pc = 0x1df428u;

    // 0x1df428: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1df428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1df42c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1df42cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1df430: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1df430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1df434: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1df434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df438: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1df438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1df43c: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DF43Cu;
    {
        const bool branch_taken_0x1df43c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF43Cu;
        // 0x1df440: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df43c) {
            ctx->pc = 0x1DF494u;
            goto label_1df494;
        }
    }
    ctx->pc = 0x1DF444u;
    // 0x1df444: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1df444u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1df448: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DF448u;
    {
        const bool branch_taken_0x1df448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df448) {
            ctx->pc = 0x1DF44Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF448u;
            // 0x1df44c: 0x26040728  addiu       $a0, $s0, 0x728 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1832));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF464u;
            goto label_1df464;
        }
    }
    ctx->pc = 0x1DF450u;
    // 0x1df450: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1df450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1df454: 0x10a20014  beq         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DF454u;
    {
        const bool branch_taken_0x1df454 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF454u;
        // 0x1df458: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df454) {
            ctx->pc = 0x1DF4A8u;
            goto label_1df4a8;
        }
    }
    ctx->pc = 0x1DF45Cu;
    // 0x1df45c: 0x10a20021  beq         $a1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1DF45Cu;
    {
        const bool branch_taken_0x1df45c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF45Cu;
        // 0x1df460: 0x26040728  addiu       $a0, $s0, 0x728 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df45c) {
            ctx->pc = 0x1DF4E4u;
            goto label_1df4e4;
        }
    }
    ctx->pc = 0x1DF464u;
label_1df464:
    // 0x1df464: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1DF464u;
    SET_GPR_U32(ctx, 31, 0x1DF46Cu);
    ctx->pc = 0x1DF468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF464u;
    // 0x1df468: 0x240500c8  addiu       $a1, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1DF464u, 0x1DF46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF46Cu;
label_1df46c:
    // 0x1df46c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df470: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1df470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1df474: 0xc077b98  jal         func_1DEE60
    ctx->pc = 0x1DF474u;
    SET_GPR_U32(ctx, 31, 0x1DF47Cu);
    ctx->pc = 0x1DF478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF474u;
    // 0x1df478: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE60u, 0x1DF474u, 0x1DF47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF47Cu;
label_1df47c:
    // 0x1df47c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df480: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1df480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1df484: 0xc077b98  jal         func_1DEE60
    ctx->pc = 0x1DF484u;
    SET_GPR_U32(ctx, 31, 0x1DF48Cu);
    ctx->pc = 0x1DF488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF484u;
    // 0x1df488: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE60u, 0x1DF484u, 0x1DF48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF48Cu;
label_1df48c:
    // 0x1df48c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1DF48Cu;
    {
        const bool branch_taken_0x1df48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF48Cu;
        // 0x1df490: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df48c) {
            ctx->pc = 0x1DF518u;
            goto label_1df518;
        }
    }
    ctx->pc = 0x1DF494u;
label_1df494:
    // 0x1df494: 0x26040728  addiu       $a0, $s0, 0x728
    ctx->pc = 0x1df494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1832));
    // 0x1df498: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1DF498u;
    SET_GPR_U32(ctx, 31, 0x1DF4A0u);
    ctx->pc = 0x1DF49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF498u;
    // 0x1df49c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1DF498u, 0x1DF4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF4A0u;
label_1df4a0:
    // 0x1df4a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1DF4A0u;
    {
        const bool branch_taken_0x1df4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF4A0u;
        // 0x1df4a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df4a0) {
            ctx->pc = 0x1DF4C0u;
            goto label_1df4c0;
        }
    }
    ctx->pc = 0x1DF4A8u;
label_1df4a8:
    // 0x1df4a8: 0x26040728  addiu       $a0, $s0, 0x728
    ctx->pc = 0x1df4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1832));
    // 0x1df4ac: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x1df4acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1df4b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1df4b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df4b4: 0xc0b59da  jal         func_2D6768
    ctx->pc = 0x1DF4B4u;
    SET_GPR_U32(ctx, 31, 0x1DF4BCu);
    ctx->pc = 0x1DF4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF4B4u;
    // 0x1df4b8: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6768u, 0x1DF4B4u, 0x1DF4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF4BCu;
label_1df4bc:
    // 0x1df4bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1df4c0:
    // 0x1df4c0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1df4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1df4c4: 0xc077b98  jal         func_1DEE60
    ctx->pc = 0x1DF4C4u;
    SET_GPR_U32(ctx, 31, 0x1DF4CCu);
    ctx->pc = 0x1DF4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF4C4u;
    // 0x1df4c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE60u, 0x1DF4C4u, 0x1DF4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF4CCu;
label_1df4cc:
    // 0x1df4cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df4d0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1df4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1df4d4: 0xc077b98  jal         func_1DEE60
    ctx->pc = 0x1DF4D4u;
    SET_GPR_U32(ctx, 31, 0x1DF4DCu);
    ctx->pc = 0x1DF4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF4D4u;
    // 0x1df4d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE60u, 0x1DF4D4u, 0x1DF4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF4DCu;
label_1df4dc:
    // 0x1df4dc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1DF4DCu;
    {
        const bool branch_taken_0x1df4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF4DCu;
        // 0x1df4e0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df4dc) {
            ctx->pc = 0x1DF518u;
            goto label_1df518;
        }
    }
    ctx->pc = 0x1DF4E4u;
label_1df4e4:
    // 0x1df4e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1df4e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df4e8: 0x240600c8  addiu       $a2, $zero, 0xC8
    ctx->pc = 0x1df4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1df4ec: 0xc0b59da  jal         func_2D6768
    ctx->pc = 0x1DF4ECu;
    SET_GPR_U32(ctx, 31, 0x1DF4F4u);
    ctx->pc = 0x1DF4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF4ECu;
    // 0x1df4f0: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6768u, 0x1DF4ECu, 0x1DF4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF4F4u;
label_1df4f4:
    // 0x1df4f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df4f8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1df4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1df4fc: 0xc077b98  jal         func_1DEE60
    ctx->pc = 0x1DF4FCu;
    SET_GPR_U32(ctx, 31, 0x1DF504u);
    ctx->pc = 0x1DF500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF4FCu;
    // 0x1df500: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE60u, 0x1DF4FCu, 0x1DF504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF504u;
label_1df504:
    // 0x1df504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df508: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1df508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1df50c: 0xc077b98  jal         func_1DEE60
    ctx->pc = 0x1DF50Cu;
    SET_GPR_U32(ctx, 31, 0x1DF514u);
    ctx->pc = 0x1DF510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF50Cu;
    // 0x1df510: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE60u, 0x1DF50Cu, 0x1DF514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF514u;
label_1df514:
    // 0x1df514: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1df514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1df518:
    // 0x1df518: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1df518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df51c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF51Cu;
        // 0x1df520: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF51Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF524u;
    // 0x1df524: 0x0  nop
    ctx->pc = 0x1df524u;
    // NOP
    ctx->pc = 0x1df528u;
}
