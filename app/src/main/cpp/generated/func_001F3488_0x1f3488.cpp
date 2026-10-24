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

// Function: func_001F3488
// Address: 0x1f3488 - 0x1f3580
void func_001F3488_0x1f3488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F3488_0x1f3488");
#endif

    switch (ctx->pc) {
        case 0x1f34ccu: goto label_1f34cc;
        case 0x1f34d4u: goto label_1f34d4;
        case 0x1f34e0u: goto label_1f34e0;
        case 0x1f34ecu: goto label_1f34ec;
        case 0x1f3504u: goto label_1f3504;
        case 0x1f350cu: goto label_1f350c;
        case 0x1f3528u: goto label_1f3528;
        case 0x1f3534u: goto label_1f3534;
        case 0x1f3540u: goto label_1f3540;
        case 0x1f3554u: goto label_1f3554;
        case 0x1f3560u: goto label_1f3560;
        case 0x1f356cu: goto label_1f356c;
        default: break;
    }

    ctx->pc = 0x1f3488u;

    // 0x1f3488: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f3488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f348c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1f348cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1f3490: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f3490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f3494: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f3494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3498: 0x10a20016  beq         $a1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1F3498u;
    {
        const bool branch_taken_0x1f3498 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3498u;
        // 0x1f349c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3498) {
            ctx->pc = 0x1F34F4u;
            goto label_1f34f4;
        }
    }
    ctx->pc = 0x1F34A0u;
    // 0x1f34a0: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1f34a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f34a4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F34A4u;
    {
        const bool branch_taken_0x1f34a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F34A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F34A4u;
        // 0x1f34a8: 0x24900980  addiu       $s0, $a0, 0x980 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 2432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f34a4) {
            ctx->pc = 0x1F34C0u;
            goto label_1f34c0;
        }
    }
    ctx->pc = 0x1F34ACu;
    // 0x1f34ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f34acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f34b0: 0x10a20018  beq         $a1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1F34B0u;
    {
        const bool branch_taken_0x1f34b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F34B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F34B0u;
        // 0x1f34b4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f34b0) {
            ctx->pc = 0x1F3514u;
            goto label_1f3514;
        }
    }
    ctx->pc = 0x1F34B8u;
    // 0x1f34b8: 0x50a20023  beql        $a1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1F34B8u;
    {
        const bool branch_taken_0x1f34b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f34b8) {
            ctx->pc = 0x1F34BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F34B8u;
            // 0x1f34bc: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3548u;
            goto label_1f3548;
        }
    }
    ctx->pc = 0x1F34C0u;
label_1f34c0:
    // 0x1f34c0: 0x24050258  addiu       $a1, $zero, 0x258
    ctx->pc = 0x1f34c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x1f34c4: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1F34C4u;
    SET_GPR_U32(ctx, 31, 0x1F34CCu);
    ctx->pc = 0x1F34C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F34C4u;
    // 0x1f34c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1F34C4u, 0x1F34CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F34CCu;
label_1f34cc:
    // 0x1f34cc: 0xc0b5a52  jal         func_2D6948
    ctx->pc = 0x1F34CCu;
    SET_GPR_U32(ctx, 31, 0x1F34D4u);
    ctx->pc = 0x1F34D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F34CCu;
    // 0x1f34d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6948u, 0x1F34CCu, 0x1F34D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F34D4u;
label_1f34d4:
    // 0x1f34d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f34d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f34d8: 0xc0b5934  jal         func_2D64D0
    ctx->pc = 0x1F34D8u;
    SET_GPR_U32(ctx, 31, 0x1F34E0u);
    ctx->pc = 0x1F34DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F34D8u;
    // 0x1f34dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D64D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D64D0u, 0x1F34D8u, 0x1F34E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F34E0u;
label_1f34e0:
    // 0x1f34e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f34e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f34e4: 0xc0b5944  jal         func_2D6510
    ctx->pc = 0x1F34E4u;
    SET_GPR_U32(ctx, 31, 0x1F34ECu);
    ctx->pc = 0x1F34E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F34E4u;
    // 0x1f34e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6510u, 0x1F34E4u, 0x1F34ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F34ECu;
label_1f34ec:
    // 0x1f34ec: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1F34ECu;
    {
        const bool branch_taken_0x1f34ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F34F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F34ECu;
        // 0x1f34f0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f34ec) {
            ctx->pc = 0x1F3570u;
            goto label_1f3570;
        }
    }
    ctx->pc = 0x1F34F4u;
label_1f34f4:
    // 0x1f34f4: 0x24900980  addiu       $s0, $a0, 0x980
    ctx->pc = 0x1f34f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 2432));
    // 0x1f34f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f34f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f34fc: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1F34FCu;
    SET_GPR_U32(ctx, 31, 0x1F3504u);
    ctx->pc = 0x1F3500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F34FCu;
    // 0x1f3500: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1F34FCu, 0x1F3504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3504u;
label_1f3504:
    // 0x1f3504: 0xc0b5a52  jal         func_2D6948
    ctx->pc = 0x1F3504u;
    SET_GPR_U32(ctx, 31, 0x1F350Cu);
    ctx->pc = 0x1F3508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3504u;
    // 0x1f3508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6948u, 0x1F3504u, 0x1F350Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F350Cu;
label_1f350c:
    // 0x1f350c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F350Cu;
    {
        const bool branch_taken_0x1f350c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F350Cu;
        // 0x1f3510: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f350c) {
            ctx->pc = 0x1F352Cu;
            goto label_1f352c;
        }
    }
    ctx->pc = 0x1F3514u;
label_1f3514:
    // 0x1f3514: 0x24050258  addiu       $a1, $zero, 0x258
    ctx->pc = 0x1f3514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x1f3518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f351c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f351cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3520: 0xc0b59da  jal         func_2D6768
    ctx->pc = 0x1F3520u;
    SET_GPR_U32(ctx, 31, 0x1F3528u);
    ctx->pc = 0x1F3524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3520u;
    // 0x1f3524: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6768u, 0x1F3520u, 0x1F3528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3528u;
label_1f3528:
    // 0x1f3528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f352c:
    // 0x1f352c: 0xc0b5934  jal         func_2D64D0
    ctx->pc = 0x1F352Cu;
    SET_GPR_U32(ctx, 31, 0x1F3534u);
    ctx->pc = 0x1F3530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F352Cu;
    // 0x1f3530: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D64D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D64D0u, 0x1F352Cu, 0x1F3534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3534u;
label_1f3534:
    // 0x1f3534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3538: 0xc0b5944  jal         func_2D6510
    ctx->pc = 0x1F3538u;
    SET_GPR_U32(ctx, 31, 0x1F3540u);
    ctx->pc = 0x1F353Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3538u;
    // 0x1f353c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6510u, 0x1F3538u, 0x1F3540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3540u;
label_1f3540:
    // 0x1f3540: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F3540u;
    {
        const bool branch_taken_0x1f3540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3540u;
        // 0x1f3544: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3540) {
            ctx->pc = 0x1F3570u;
            goto label_1f3570;
        }
    }
    ctx->pc = 0x1F3548u;
label_1f3548:
    // 0x1f3548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f354c: 0xc0b5a26  jal         func_2D6898
    ctx->pc = 0x1F354Cu;
    SET_GPR_U32(ctx, 31, 0x1F3554u);
    ctx->pc = 0x1F3550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F354Cu;
    // 0x1f3550: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6898u, 0x1F354Cu, 0x1F3554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3554u;
label_1f3554:
    // 0x1f3554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3558: 0xc0b5934  jal         func_2D64D0
    ctx->pc = 0x1F3558u;
    SET_GPR_U32(ctx, 31, 0x1F3560u);
    ctx->pc = 0x1F355Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3558u;
    // 0x1f355c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D64D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D64D0u, 0x1F3558u, 0x1F3560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3560u;
label_1f3560:
    // 0x1f3560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3564: 0xc0b5944  jal         func_2D6510
    ctx->pc = 0x1F3564u;
    SET_GPR_U32(ctx, 31, 0x1F356Cu);
    ctx->pc = 0x1F3568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3564u;
    // 0x1f3568: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6510u, 0x1F3564u, 0x1F356Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F356Cu;
label_1f356c:
    // 0x1f356c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f356cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f3570:
    // 0x1f3570: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f3570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3574: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3574u;
        // 0x1f3578: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F357Cu;
    // 0x1f357c: 0x0  nop
    ctx->pc = 0x1f357cu;
    // NOP
    ctx->pc = 0x1f3580u;
}
