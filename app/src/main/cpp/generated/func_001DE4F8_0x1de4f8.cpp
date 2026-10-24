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

// Function: func_001DE4F8
// Address: 0x1de4f8 - 0x1de5f8
void func_001DE4F8_0x1de4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DE4F8_0x1de4f8");
#endif

    switch (ctx->pc) {
        case 0x1de53cu: goto label_1de53c;
        case 0x1de54cu: goto label_1de54c;
        case 0x1de55cu: goto label_1de55c;
        case 0x1de570u: goto label_1de570;
        case 0x1de58cu: goto label_1de58c;
        case 0x1de59cu: goto label_1de59c;
        case 0x1de5acu: goto label_1de5ac;
        case 0x1de5c4u: goto label_1de5c4;
        case 0x1de5d4u: goto label_1de5d4;
        case 0x1de5e4u: goto label_1de5e4;
        default: break;
    }

    ctx->pc = 0x1de4f8u;

    // 0x1de4f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1de4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1de4fc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1de4fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1de500: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1de500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1de504: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de50c: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DE50Cu;
    {
        const bool branch_taken_0x1de50c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DE510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE50Cu;
        // 0x1de510: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de50c) {
            ctx->pc = 0x1DE564u;
            goto label_1de564;
        }
    }
    ctx->pc = 0x1DE514u;
    // 0x1de514: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1de514u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1de518: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE518u;
    {
        const bool branch_taken_0x1de518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de518) {
            ctx->pc = 0x1DE51Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE518u;
            // 0x1de51c: 0x2604089c  addiu       $a0, $s0, 0x89C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2204));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE534u;
            goto label_1de534;
        }
    }
    ctx->pc = 0x1DE520u;
    // 0x1de520: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1de520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1de524: 0x10a20014  beq         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DE524u;
    {
        const bool branch_taken_0x1de524 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DE528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE524u;
        // 0x1de528: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de524) {
            ctx->pc = 0x1DE578u;
            goto label_1de578;
        }
    }
    ctx->pc = 0x1DE52Cu;
    // 0x1de52c: 0x10a20021  beq         $a1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1DE52Cu;
    {
        const bool branch_taken_0x1de52c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DE530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE52Cu;
        // 0x1de530: 0x2604089c  addiu       $a0, $s0, 0x89C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de52c) {
            ctx->pc = 0x1DE5B4u;
            goto label_1de5b4;
        }
    }
    ctx->pc = 0x1DE534u;
label_1de534:
    // 0x1de534: 0xc0b59be  jal         func_2D66F8
    ctx->pc = 0x1DE534u;
    SET_GPR_U32(ctx, 31, 0x1DE53Cu);
    ctx->pc = 0x1DE538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE534u;
    // 0x1de538: 0x24050046  addiu       $a1, $zero, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66F8u, 0x1DE534u, 0x1DE53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE53Cu;
label_1de53c:
    // 0x1de53c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de540: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1de540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1de544: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DE544u;
    SET_GPR_U32(ctx, 31, 0x1DE54Cu);
    ctx->pc = 0x1DE548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE544u;
    // 0x1de548: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DE544u, 0x1DE54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE54Cu;
label_1de54c:
    // 0x1de54c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de550: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1de550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1de554: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DE554u;
    SET_GPR_U32(ctx, 31, 0x1DE55Cu);
    ctx->pc = 0x1DE558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE554u;
    // 0x1de558: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DE554u, 0x1DE55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE55Cu;
label_1de55c:
    // 0x1de55c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1DE55Cu;
    {
        const bool branch_taken_0x1de55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE55Cu;
        // 0x1de560: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de55c) {
            ctx->pc = 0x1DE5E8u;
            goto label_1de5e8;
        }
    }
    ctx->pc = 0x1DE564u;
label_1de564:
    // 0x1de564: 0x2604089c  addiu       $a0, $s0, 0x89C
    ctx->pc = 0x1de564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2204));
    // 0x1de568: 0xc0b59be  jal         func_2D66F8
    ctx->pc = 0x1DE568u;
    SET_GPR_U32(ctx, 31, 0x1DE570u);
    ctx->pc = 0x1DE56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE568u;
    // 0x1de56c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66F8u, 0x1DE568u, 0x1DE570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE570u;
label_1de570:
    // 0x1de570: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1DE570u;
    {
        const bool branch_taken_0x1de570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE570u;
        // 0x1de574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de570) {
            ctx->pc = 0x1DE590u;
            goto label_1de590;
        }
    }
    ctx->pc = 0x1DE578u;
label_1de578:
    // 0x1de578: 0x2604089c  addiu       $a0, $s0, 0x89C
    ctx->pc = 0x1de578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2204));
    // 0x1de57c: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1de57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1de580: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1de580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de584: 0xc0b59fc  jal         func_2D67F0
    ctx->pc = 0x1DE584u;
    SET_GPR_U32(ctx, 31, 0x1DE58Cu);
    ctx->pc = 0x1DE588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE584u;
    // 0x1de588: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D67F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D67F0u, 0x1DE584u, 0x1DE58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE58Cu;
label_1de58c:
    // 0x1de58c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1de590:
    // 0x1de590: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1de590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1de594: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DE594u;
    SET_GPR_U32(ctx, 31, 0x1DE59Cu);
    ctx->pc = 0x1DE598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE594u;
    // 0x1de598: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DE594u, 0x1DE59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE59Cu;
label_1de59c:
    // 0x1de59c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de5a0: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1de5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1de5a4: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DE5A4u;
    SET_GPR_U32(ctx, 31, 0x1DE5ACu);
    ctx->pc = 0x1DE5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE5A4u;
    // 0x1de5a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DE5A4u, 0x1DE5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE5ACu;
label_1de5ac:
    // 0x1de5ac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1DE5ACu;
    {
        const bool branch_taken_0x1de5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5ACu;
        // 0x1de5b0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de5ac) {
            ctx->pc = 0x1DE5E8u;
            goto label_1de5e8;
        }
    }
    ctx->pc = 0x1DE5B4u;
label_1de5b4:
    // 0x1de5b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1de5b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de5b8: 0x24060046  addiu       $a2, $zero, 0x46
    ctx->pc = 0x1de5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1de5bc: 0xc0b59fc  jal         func_2D67F0
    ctx->pc = 0x1DE5BCu;
    SET_GPR_U32(ctx, 31, 0x1DE5C4u);
    ctx->pc = 0x1DE5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE5BCu;
    // 0x1de5c0: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D67F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D67F0u, 0x1DE5BCu, 0x1DE5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE5C4u;
label_1de5c4:
    // 0x1de5c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de5c8: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1de5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1de5cc: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DE5CCu;
    SET_GPR_U32(ctx, 31, 0x1DE5D4u);
    ctx->pc = 0x1DE5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE5CCu;
    // 0x1de5d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DE5CCu, 0x1DE5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE5D4u;
label_1de5d4:
    // 0x1de5d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de5d8: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1de5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1de5dc: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DE5DCu;
    SET_GPR_U32(ctx, 31, 0x1DE5E4u);
    ctx->pc = 0x1DE5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE5DCu;
    // 0x1de5e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DE5DCu, 0x1DE5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE5E4u;
label_1de5e4:
    // 0x1de5e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1de5e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1de5e8:
    // 0x1de5e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de5e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de5ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5ECu;
        // 0x1de5f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE5ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE5F4u;
    // 0x1de5f4: 0x0  nop
    ctx->pc = 0x1de5f4u;
    // NOP
    ctx->pc = 0x1de5f8u;
}
