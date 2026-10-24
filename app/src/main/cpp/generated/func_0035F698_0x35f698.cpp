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

// Function: func_0035F698
// Address: 0x35f698 - 0x35f788
void func_0035F698_0x35f698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035F698_0x35f698");
#endif

    switch (ctx->pc) {
        case 0x35f6e8u: goto label_35f6e8;
        case 0x35f71cu: goto label_35f71c;
        case 0x35f72cu: goto label_35f72c;
        case 0x35f73cu: goto label_35f73c;
        case 0x35f74cu: goto label_35f74c;
        case 0x35f75cu: goto label_35f75c;
        default: break;
    }

    ctx->pc = 0x35f698u;

    // 0x35f698: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35f698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35f69c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35f69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35f6a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35f6a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f6a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35f6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35f6a8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35f6a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f6ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35f6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35f6b0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x35f6b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f6b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35f6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35f6b8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x35f6b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f6bc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x35f6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x35f6c0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x35f6c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f6c4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x35f6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x35f6c8: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x35f6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x35f6cc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x35f6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x35f6d0: 0x14530003  bne         $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x35F6D0u;
    {
        const bool branch_taken_0x35f6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x35F6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F6D0u;
        // 0x35f6d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f6d0) {
            ctx->pc = 0x35F6E0u;
            goto label_35f6e0;
        }
    }
    ctx->pc = 0x35F6D8u;
    // 0x35f6d8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x35f6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x35f6dc: 0x244534e0  addiu       $a1, $v0, 0x34E0
    ctx->pc = 0x35f6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 13536));
label_35f6e0:
    // 0x35f6e0: 0xc0d7bcc  jal         func_35EF30
    ctx->pc = 0x35F6E0u;
    SET_GPR_U32(ctx, 31, 0x35F6E8u);
    ctx->pc = 0x35EF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EF30u, 0x35F6E0u, 0x35F6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F6E8u;
label_35f6e8:
    // 0x35f6e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35f6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f6ec: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x35f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x35f6f0: 0x14530005  bne         $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x35F6F0u;
    {
        const bool branch_taken_0x35f6f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x35F6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F6F0u;
        // 0x35f6f4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f6f0) {
            ctx->pc = 0x35F708u;
            goto label_35f708;
        }
    }
    ctx->pc = 0x35F6F8u;
    // 0x35f6f8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x35f6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x35f6fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x35F6FCu;
    {
        const bool branch_taken_0x35f6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F6FCu;
        // 0x35f700: 0x24516840  addiu       $s1, $v0, 0x6840 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 26688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f6fc) {
            ctx->pc = 0x35F714u;
            goto label_35f714;
        }
    }
    ctx->pc = 0x35F704u;
    // 0x35f704: 0x0  nop
    ctx->pc = 0x35f704u;
    // NOP
label_35f708:
    // 0x35f708: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x35F708u;
    {
        const bool branch_taken_0x35f708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x35F70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F708u;
        // 0x35f70c: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f708) {
            ctx->pc = 0x35F714u;
            goto label_35f714;
        }
    }
    ctx->pc = 0x35F710u;
    // 0x35f710: 0x24516678  addiu       $s1, $v0, 0x6678
    ctx->pc = 0x35f710u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 26232));
label_35f714:
    // 0x35f714: 0xc0d7bce  jal         func_35EF38
    ctx->pc = 0x35F714u;
    SET_GPR_U32(ctx, 31, 0x35F71Cu);
    ctx->pc = 0x35F718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F714u;
    // 0x35f718: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EF38u, 0x35F714u, 0x35F71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F71Cu;
label_35f71c:
    // 0x35f71c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x35f71cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x35f720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35f720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f724: 0xc0d7bd0  jal         func_35EF40
    ctx->pc = 0x35F724u;
    SET_GPR_U32(ctx, 31, 0x35F72Cu);
    ctx->pc = 0x35F728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F724u;
    // 0x35f728: 0x24a55ec0  addiu       $a1, $a1, 0x5EC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EF40u, 0x35F724u, 0x35F72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F72Cu;
label_35f72c:
    // 0x35f72c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x35f72cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x35f730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35f730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f734: 0xc0d7bd4  jal         func_35EF50
    ctx->pc = 0x35F734u;
    SET_GPR_U32(ctx, 31, 0x35F73Cu);
    ctx->pc = 0x35F738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F734u;
    // 0x35f738: 0x24a56368  addiu       $a1, $a1, 0x6368 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EF50u, 0x35F734u, 0x35F73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F73Cu;
label_35f73c:
    // 0x35f73c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x35f73cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x35f740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35f740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f744: 0xc0d7bd8  jal         func_35EF60
    ctx->pc = 0x35F744u;
    SET_GPR_U32(ctx, 31, 0x35F74Cu);
    ctx->pc = 0x35F748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F744u;
    // 0x35f748: 0x24a56110  addiu       $a1, $a1, 0x6110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EF60u, 0x35F744u, 0x35F74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F74Cu;
label_35f74c:
    // 0x35f74c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x35f74cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x35f750: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35f750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f754: 0xc0d7bdc  jal         func_35EF70
    ctx->pc = 0x35F754u;
    SET_GPR_U32(ctx, 31, 0x35F75Cu);
    ctx->pc = 0x35F758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F754u;
    // 0x35f758: 0x24a565c0  addiu       $a1, $a1, 0x65C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EF70u, 0x35F754u, 0x35F75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F75Cu;
label_35f75c:
    // 0x35f75c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35f75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f760: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35f760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f764: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35f764u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f768: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x35f768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f76c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x35f76cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35f770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35f770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f774: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35f774u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35f778: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35f778u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f77c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x35f77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35f780: 0x80d7bde  j           func_35EF78
    ctx->pc = 0x35F780u;
    ctx->pc = 0x35F784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F780u;
    // 0x35f784: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EF78u, 0x35F780u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35F788u;
}
