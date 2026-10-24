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

// Function: func_00333390
// Address: 0x333390 - 0x333438
void func_00333390_0x333390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00333390_0x333390");
#endif

    switch (ctx->pc) {
        case 0x3333b8u: goto label_3333b8;
        case 0x3333dcu: goto label_3333dc;
        case 0x3333f0u: goto label_3333f0;
        case 0x3333f8u: goto label_3333f8;
        case 0x333408u: goto label_333408;
        case 0x33341cu: goto label_33341c;
        default: break;
    }

    ctx->pc = 0x333390u;

    // 0x333390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x333390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x333394: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x333394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x333398: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x333398u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33339c: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x33339cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x3333a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3333a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3333a4: 0x24a59de0  addiu       $a1, $a1, -0x6220
    ctx->pc = 0x3333a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942176));
    // 0x3333a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3333a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3333ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3333acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3333b0: 0xc0e95f1  jal         func_3A57C4
    ctx->pc = 0x3333B0u;
    SET_GPR_U32(ctx, 31, 0x3333B8u);
    ctx->pc = 0x3333B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3333B0u;
    // 0x3333b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A57C4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57C4u, 0x3333B0u, 0x3333B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3333B8u;
label_3333b8:
    // 0x3333b8: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x3333b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3333bc: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x3333bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x3333c0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3333C0u;
    {
        const bool branch_taken_0x3333c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3333C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3333C0u;
        // 0x3333c4: 0x2404005c  addiu       $a0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3333c0) {
            ctx->pc = 0x3333DCu;
            goto label_3333dc;
        }
    }
    ctx->pc = 0x3333C8u;
    // 0x3333c8: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3333C8u;
    {
        const bool branch_taken_0x3333c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x3333CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3333C8u;
        // 0x3333cc: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3333c8) {
            ctx->pc = 0x3333DCu;
            goto label_3333dc;
        }
    }
    ctx->pc = 0x3333D0u;
    // 0x3333d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3333d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3333d4: 0xc0e94ea  jal         func_3A53A8
    ctx->pc = 0x3333D4u;
    SET_GPR_U32(ctx, 31, 0x3333DCu);
    ctx->pc = 0x3333D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3333D4u;
    // 0x3333d8: 0x24a544e0  addiu       $a1, $a1, 0x44E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53A8u, 0x3333D4u, 0x3333DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3333DCu;
label_3333dc:
    // 0x3333dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3333dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3333e0: 0x3c100045  lui         $s0, 0x45
    ctx->pc = 0x3333e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)69 << 16));
    // 0x3333e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3333e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3333e8: 0xc0e94ea  jal         func_3A53A8
    ctx->pc = 0x3333E8u;
    SET_GPR_U32(ctx, 31, 0x3333F0u);
    ctx->pc = 0x3333ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3333E8u;
    // 0x3333ec: 0x261044e8  addiu       $s0, $s0, 0x44E8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53A8u, 0x3333E8u, 0x3333F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3333F0u;
label_3333f0:
    // 0x3333f0: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x3333F0u;
    SET_GPR_U32(ctx, 31, 0x3333F8u);
    ctx->pc = 0x3333F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3333F0u;
    // 0x3333f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x3333F0u, 0x3333F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3333F8u;
label_3333f8:
    // 0x3333f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3333f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3333fc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3333fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x333400: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x333400u;
    SET_GPR_U32(ctx, 31, 0x333408u);
    ctx->pc = 0x333404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333400u;
    // 0x333404: 0x2444fffe  addiu       $a0, $v0, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x333400u, 0x333408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333408u;
label_333408:
    // 0x333408: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x333408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33340c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33340Cu;
    {
        const bool branch_taken_0x33340c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x333410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33340Cu;
        // 0x333410: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33340c) {
            ctx->pc = 0x333420u;
            goto label_333420;
        }
    }
    ctx->pc = 0x333414u;
    // 0x333414: 0xc0e94ea  jal         func_3A53A8
    ctx->pc = 0x333414u;
    SET_GPR_U32(ctx, 31, 0x33341Cu);
    ctx->pc = 0x3A53A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53A8u, 0x333414u, 0x33341Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33341Cu;
label_33341c:
    // 0x33341c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33341cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_333420:
    // 0x333420: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x333420u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x333424: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x333424u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333428: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x333428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33342c: 0x80cca7a  j           func_3329E8
    ctx->pc = 0x33342Cu;
    ctx->pc = 0x333430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33342Cu;
    // 0x333430: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3329E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3329E8u, 0x33342Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x333434u;
    // 0x333434: 0x0  nop
    ctx->pc = 0x333434u;
    // NOP
    ctx->pc = 0x333438u;
}
