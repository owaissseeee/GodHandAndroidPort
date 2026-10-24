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

// Function: _pictureHeader
// Address: 0x3a0680 - 0x3a07c8
void _pictureHeader_0x3a0680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_pictureHeader_0x3a0680");
#endif

    switch (ctx->pc) {
        case 0x3a069cu: goto label_3a069c;
        case 0x3a06acu: goto label_3a06ac;
        case 0x3a06bcu: goto label_3a06bc;
        case 0x3a06d8u: goto label_3a06d8;
        case 0x3a06e8u: goto label_3a06e8;
        case 0x3a0704u: goto label_3a0704;
        case 0x3a0714u: goto label_3a0714;
        case 0x3a0720u: goto label_3a0720;
        case 0x3a0728u: goto label_3a0728;
        case 0x3a0734u: goto label_3a0734;
        case 0x3a0744u: goto label_3a0744;
        default: break;
    }

    ctx->pc = 0x3a0680u;

    // 0x3a0680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a0680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a0684: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3a0684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3a0688: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a0688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a068c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3a068cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3a0690: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a0690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a0694: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A0694u;
    SET_GPR_U32(ctx, 31, 0x3A069Cu);
    ctx->pc = 0x3A0698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0694u;
    // 0x3a0698: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A0694u, 0x3A069Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A069Cu;
label_3a069c:
    // 0x3a069c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3a069cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a06a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a06a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a06a4: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A06A4u;
    SET_GPR_U32(ctx, 31, 0x3A06ACu);
    ctx->pc = 0x3A06A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A06A4u;
    // 0x3a06a8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A06A4u, 0x3A06ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A06ACu;
label_3a06ac:
    // 0x3a06ac: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x3a06acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    // 0x3a06b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a06b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a06b4: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A06B4u;
    SET_GPR_U32(ctx, 31, 0x3A06BCu);
    ctx->pc = 0x3A06B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A06B4u;
    // 0x3a06b8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A06B4u, 0x3A06BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A06BCu;
label_3a06bc:
    // 0x3a06bc: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x3a06bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x3a06c0: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x3a06c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x3a06c4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3a06c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a06c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A06C8u;
    {
        const bool branch_taken_0x3a06c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A06CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A06C8u;
        // 0x3a06cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a06c8) {
            ctx->pc = 0x3A06F0u;
            goto label_3a06f0;
        }
    }
    ctx->pc = 0x3A06D0u;
    // 0x3a06d0: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A06D0u;
    SET_GPR_U32(ctx, 31, 0x3A06D8u);
    ctx->pc = 0x3A06D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A06D0u;
    // 0x3a06d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A06D0u, 0x3A06D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A06D8u;
label_3a06d8:
    // 0x3a06d8: 0xae020164  sw          $v0, 0x164($s0)
    ctx->pc = 0x3a06d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 2));
    // 0x3a06dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a06dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a06e0: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A06E0u;
    SET_GPR_U32(ctx, 31, 0x3A06E8u);
    ctx->pc = 0x3A06E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A06E0u;
    // 0x3a06e4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A06E0u, 0x3A06E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A06E8u;
label_3a06e8:
    // 0x3a06e8: 0xae020168  sw          $v0, 0x168($s0)
    ctx->pc = 0x3a06e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 2));
    // 0x3a06ec: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x3a06ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_3a06f0:
    // 0x3a06f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a06f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a06f4: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3A06F4u;
    {
        const bool branch_taken_0x3a06f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A06F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A06F4u;
        // 0x3a06f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a06f4) {
            ctx->pc = 0x3A072Cu;
            goto label_3a072c;
        }
    }
    ctx->pc = 0x3A06FCu;
    // 0x3a06fc: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A06FCu;
    SET_GPR_U32(ctx, 31, 0x3A0704u);
    ctx->pc = 0x3A0700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A06FCu;
    // 0x3a0700: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A06FCu, 0x3A0704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0704u;
label_3a0704:
    // 0x3a0704: 0xae02016c  sw          $v0, 0x16C($s0)
    ctx->pc = 0x3a0704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 2));
    // 0x3a0708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a070c: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A070Cu;
    SET_GPR_U32(ctx, 31, 0x3A0714u);
    ctx->pc = 0x3A0710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A070Cu;
    // 0x3a0710: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A070Cu, 0x3A0714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0714u;
label_3a0714:
    // 0x3a0714: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A0714u;
    {
        const bool branch_taken_0x3a0714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0714u;
        // 0x3a0718: 0xae020170  sw          $v0, 0x170($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0714) {
            ctx->pc = 0x3A0728u;
            goto label_3a0728;
        }
    }
    ctx->pc = 0x3A071Cu;
    // 0x3a071c: 0x0  nop
    ctx->pc = 0x3a071cu;
    // NOP
label_3a0720:
    // 0x3a0720: 0xc0e8388  jal         func_3A0E20
    ctx->pc = 0x3A0720u;
    SET_GPR_U32(ctx, 31, 0x3A0728u);
    ctx->pc = 0x3A0724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0720u;
    // 0x3a0724: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0E20u, 0x3A0720u, 0x3A0728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0728u;
label_3a0728:
    // 0x3a0728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a072c:
    // 0x3a072c: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A072Cu;
    SET_GPR_U32(ctx, 31, 0x3A0734u);
    ctx->pc = 0x3A0730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A072Cu;
    // 0x3a0730: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A072Cu, 0x3A0734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0734u;
label_3a0734:
    // 0x3a0734: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A0734u;
    {
        const bool branch_taken_0x3a0734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0734u;
        // 0x3a0738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0734) {
            ctx->pc = 0x3A0720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0720;
        }
    }
    ctx->pc = 0x3A073Cu;
    // 0x3a073c: 0xc0e8306  jal         func_3A0C18
    ctx->pc = 0x3A073Cu;
    SET_GPR_U32(ctx, 31, 0x3A0744u);
    ctx->pc = 0x3A0740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A073Cu;
    // 0x3a0740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0C18u, 0x3A073Cu, 0x3A0744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0744u;
label_3a0744:
    // 0x3a0744: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x3a0744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x3a0748: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a0748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a074c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a074cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a0750: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A0750u;
    {
        const bool branch_taken_0x3a0750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A0754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0750u;
        // 0x3a0754: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0750) {
            ctx->pc = 0x3A0778u;
            goto label_3a0778;
        }
    }
    ctx->pc = 0x3A0758u;
    // 0x3a0758: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A0758u;
    {
        const bool branch_taken_0x3a0758 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0758) {
            ctx->pc = 0x3A075Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0758u;
            // 0x3a075c: 0x8e02085c  lw          $v0, 0x85C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A077Cu;
            goto label_3a077c;
        }
    }
    ctx->pc = 0x3A0760u;
    // 0x3a0760: 0x6230004  bgezl       $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A0760u;
    {
        const bool branch_taken_0x3a0760 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x3a0760) {
            ctx->pc = 0x3A0764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0760u;
            // 0x3a0764: 0xae000864  sw          $zero, 0x864($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2148), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0774u;
            goto label_3a0774;
        }
    }
    ctx->pc = 0x3A0768u;
    // 0x3a0768: 0x8e020864  lw          $v0, 0x864($s0)
    ctx->pc = 0x3a0768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2148)));
    // 0x3a076c: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x3a076cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3a0770: 0xae000864  sw          $zero, 0x864($s0)
    ctx->pc = 0x3a0770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2148), GPR_U32(ctx, 0));
label_3a0774:
    // 0x3a0774: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a0774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a0778:
    // 0x3a0778: 0x8e02085c  lw          $v0, 0x85C($s0)
    ctx->pc = 0x3a0778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2140)));
label_3a077c:
    // 0x3a077c: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x3a077cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3a0780: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A0780u;
    {
        const bool branch_taken_0x3a0780 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0780u;
        // 0x3a0784: 0xae0301bc  sw          $v1, 0x1BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0780) {
            ctx->pc = 0x3A079Cu;
            goto label_3a079c;
        }
    }
    ctx->pc = 0x3A0788u;
    // 0x3a0788: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x3a0788u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3a078c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A078Cu;
    {
        const bool branch_taken_0x3a078c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a078c) {
            ctx->pc = 0x3A0790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A078Cu;
            // 0x3a0790: 0x8e020860  lw          $v0, 0x860($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A07A0u;
            goto label_3a07a0;
        }
    }
    ctx->pc = 0x3A0794u;
    // 0x3a0794: 0x24620400  addiu       $v0, $v1, 0x400
    ctx->pc = 0x3a0794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x3a0798: 0xae0201bc  sw          $v0, 0x1BC($s0)
    ctx->pc = 0x3a0798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
label_3a079c:
    // 0x3a079c: 0x8e020860  lw          $v0, 0x860($s0)
    ctx->pc = 0x3a079cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2144)));
label_3a07a0:
    // 0x3a07a0: 0x8e0401bc  lw          $a0, 0x1BC($s0)
    ctx->pc = 0x3a07a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x3a07a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a07a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a07a8: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x3a07a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3a07ac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3a07acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a07b0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x3a07b0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x3a07b4: 0xae020860  sw          $v0, 0x860($s0)
    ctx->pc = 0x3a07b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2144), GPR_U32(ctx, 2));
    // 0x3a07b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a07b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a07bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3A07BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A07C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A07BCu;
        // 0x3a07c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A07BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A07C4u;
    // 0x3a07c4: 0x0  nop
    ctx->pc = 0x3a07c4u;
    // NOP
    ctx->pc = 0x3a07c8u;
}
