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

// Function: func_0037E128
// Address: 0x37e128 - 0x37e200
void func_0037E128_0x37e128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037E128_0x37e128");
#endif

    switch (ctx->pc) {
        case 0x37e174u: goto label_37e174;
        case 0x37e188u: goto label_37e188;
        case 0x37e19cu: goto label_37e19c;
        case 0x37e1b0u: goto label_37e1b0;
        case 0x37e1c4u: goto label_37e1c4;
        case 0x37e1d8u: goto label_37e1d8;
        default: break;
    }

    ctx->pc = 0x37e128u;

    // 0x37e128: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37e128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37e12c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x37e12cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e130: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37e130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37e134: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x37e134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37e138: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37e138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37e13c: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x37e13cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x37e140: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x37e140u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x37e144: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x37E144u;
    {
        const bool branch_taken_0x37e144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E144u;
        // 0x37e148: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e144) {
            ctx->pc = 0x37E1DCu;
            goto label_37e1dc;
        }
    }
    ctx->pc = 0x37E14Cu;
    // 0x37e14c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x37e14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37e150: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x37e150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x37e154: 0x2442c150  addiu       $v0, $v0, -0x3EB0
    ctx->pc = 0x37e154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951248));
    // 0x37e158: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x37e158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37e15c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x37e15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37e160: 0x800008  jr          $a0
    ctx->pc = 0x37E160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37E168u: goto label_37e168;
            case 0x37E17Cu: goto label_37e17c;
            case 0x37E190u: goto label_37e190;
            case 0x37E1A4u: goto label_37e1a4;
            case 0x37E1B8u: goto label_37e1b8;
            case 0x37E1CCu: goto label_37e1cc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37E160u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x37E168u;
label_37e168:
    // 0x37e168: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x37e168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e16c: 0xc0df880  jal         func_37E200
    ctx->pc = 0x37E16Cu;
    SET_GPR_U32(ctx, 31, 0x37E174u);
    ctx->pc = 0x37E170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E16Cu;
    // 0x37e170: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37E200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37E200u, 0x37E16Cu, 0x37E174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E174u;
label_37e174:
    // 0x37e174: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x37E174u;
    {
        const bool branch_taken_0x37e174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E174u;
        // 0x37e178: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e174) {
            ctx->pc = 0x37E1DCu;
            goto label_37e1dc;
        }
    }
    ctx->pc = 0x37E17Cu;
label_37e17c:
    // 0x37e17c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x37e17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e180: 0xc0df8da  jal         func_37E368
    ctx->pc = 0x37E180u;
    SET_GPR_U32(ctx, 31, 0x37E188u);
    ctx->pc = 0x37E184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E180u;
    // 0x37e184: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37E368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37E368u, 0x37E180u, 0x37E188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E188u;
label_37e188:
    // 0x37e188: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x37E188u;
    {
        const bool branch_taken_0x37e188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E188u;
        // 0x37e18c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e188) {
            ctx->pc = 0x37E1DCu;
            goto label_37e1dc;
        }
    }
    ctx->pc = 0x37E190u;
label_37e190:
    // 0x37e190: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x37e190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e194: 0xc0e0228  jal         func_3808A0
    ctx->pc = 0x37E194u;
    SET_GPR_U32(ctx, 31, 0x37E19Cu);
    ctx->pc = 0x37E198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E194u;
    // 0x37e198: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3808A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3808A0u, 0x37E194u, 0x37E19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E19Cu;
label_37e19c:
    // 0x37e19c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x37E19Cu;
    {
        const bool branch_taken_0x37e19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E19Cu;
        // 0x37e1a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e19c) {
            ctx->pc = 0x37E1DCu;
            goto label_37e1dc;
        }
    }
    ctx->pc = 0x37E1A4u;
label_37e1a4:
    // 0x37e1a4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x37e1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e1a8: 0xc0e0650  jal         func_381940
    ctx->pc = 0x37E1A8u;
    SET_GPR_U32(ctx, 31, 0x37E1B0u);
    ctx->pc = 0x37E1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E1A8u;
    // 0x37e1ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381940u, 0x37E1A8u, 0x37E1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E1B0u;
label_37e1b0:
    // 0x37e1b0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x37E1B0u;
    {
        const bool branch_taken_0x37e1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E1B0u;
        // 0x37e1b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e1b0) {
            ctx->pc = 0x37E1DCu;
            goto label_37e1dc;
        }
    }
    ctx->pc = 0x37E1B8u;
label_37e1b8:
    // 0x37e1b8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x37e1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e1bc: 0xc0e0b4c  jal         func_382D30
    ctx->pc = 0x37E1BCu;
    SET_GPR_U32(ctx, 31, 0x37E1C4u);
    ctx->pc = 0x37E1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E1BCu;
    // 0x37e1c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382D30u, 0x37E1BCu, 0x37E1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E1C4u;
label_37e1c4:
    // 0x37e1c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x37E1C4u;
    {
        const bool branch_taken_0x37e1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E1C4u;
        // 0x37e1c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e1c4) {
            ctx->pc = 0x37E1DCu;
            goto label_37e1dc;
        }
    }
    ctx->pc = 0x37E1CCu;
label_37e1cc:
    // 0x37e1cc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x37e1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e1d0: 0xc0e1328  jal         func_384CA0
    ctx->pc = 0x37E1D0u;
    SET_GPR_U32(ctx, 31, 0x37E1D8u);
    ctx->pc = 0x37E1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E1D0u;
    // 0x37e1d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384CA0u, 0x37E1D0u, 0x37E1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E1D8u;
label_37e1d8:
    // 0x37e1d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x37e1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37e1dc:
    // 0x37e1dc: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x37E1DCu;
    {
        const bool branch_taken_0x37e1dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x37e1dc) {
            ctx->pc = 0x37E1E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37E1DCu;
            // 0x37e1e0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37E1F0u;
            goto label_37e1f0;
        }
    }
    ctx->pc = 0x37E1E4u;
    // 0x37e1e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37e1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37e1e8: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x37e1e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x37e1ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37e1ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37e1f0:
    // 0x37e1f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37e1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37e1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x37E1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E1F4u;
        // 0x37e1f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37E1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37E1FCu;
    // 0x37e1fc: 0x0  nop
    ctx->pc = 0x37e1fcu;
    // NOP
    ctx->pc = 0x37e200u;
}
