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

// Function: func_001ED3C0
// Address: 0x1ed3c0 - 0x1ed488
void func_001ED3C0_0x1ed3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001ED3C0_0x1ed3c0");
#endif

    switch (ctx->pc) {
        case 0x1ed3f4u: goto label_1ed3f4;
        case 0x1ed40cu: goto label_1ed40c;
        case 0x1ed41cu: goto label_1ed41c;
        case 0x1ed43cu: goto label_1ed43c;
        case 0x1ed44cu: goto label_1ed44c;
        case 0x1ed460u: goto label_1ed460;
        case 0x1ed470u: goto label_1ed470;
        default: break;
    }

    ctx->pc = 0x1ed3c0u;

    // 0x1ed3c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ed3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ed3c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ed3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ed3c8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1ed3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1ed3cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ed3ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed3d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ed3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ed3d4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ed3d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed3d8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ed3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1ed3dc: 0x26240fe0  addiu       $a0, $s1, 0xFE0
    ctx->pc = 0x1ed3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4064));
    // 0x1ed3e0: 0x8e30162c  lw          $s0, 0x162C($s1)
    ctx->pc = 0x1ed3e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5676)));
    // 0x1ed3e4: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x1ed3e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1ed3e8: 0x242800a  movz        $s0, $s2, $v0
    ctx->pc = 0x1ed3e8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
    // 0x1ed3ec: 0xc0b5952  jal         func_2D6548
    ctx->pc = 0x1ED3ECu;
    SET_GPR_U32(ctx, 31, 0x1ED3F4u);
    ctx->pc = 0x1ED3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED3ECu;
    // 0x1ed3f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6548u, 0x1ED3ECu, 0x1ED3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED3F4u;
label_1ed3f4:
    // 0x1ed3f4: 0x5e00000b  bgtzl       $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1ED3F4u;
    {
        const bool branch_taken_0x1ed3f4 = (GPR_S64(ctx, 16) > 0);
        if (branch_taken_0x1ed3f4) {
            ctx->pc = 0x1ED3F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED3F4u;
            // 0x1ed3f8: 0x8e22162c  lw          $v0, 0x162C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5676)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED424u;
            goto label_1ed424;
        }
    }
    ctx->pc = 0x1ED3FCu;
    // 0x1ed3fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed400: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x1ed400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1ed404: 0xc07b38c  jal         func_1ECE30
    ctx->pc = 0x1ED404u;
    SET_GPR_U32(ctx, 31, 0x1ED40Cu);
    ctx->pc = 0x1ED408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED404u;
    // 0x1ed408: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECE30u, 0x1ED404u, 0x1ED40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED40Cu;
label_1ed40c:
    // 0x1ed40c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed410: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x1ed410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1ed414: 0xc07b38c  jal         func_1ECE30
    ctx->pc = 0x1ED414u;
    SET_GPR_U32(ctx, 31, 0x1ED41Cu);
    ctx->pc = 0x1ED418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED414u;
    // 0x1ed418: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECE30u, 0x1ED414u, 0x1ED41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED41Cu;
label_1ed41c:
    // 0x1ed41c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1ED41Cu;
    {
        const bool branch_taken_0x1ed41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED41Cu;
        // 0x1ed420: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed41c) {
            ctx->pc = 0x1ED474u;
            goto label_1ed474;
        }
    }
    ctx->pc = 0x1ED424u;
label_1ed424:
    // 0x1ed424: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1ed424u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ed428: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1ED428u;
    {
        const bool branch_taken_0x1ed428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED428u;
        // 0x1ed42c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed428) {
            ctx->pc = 0x1ED454u;
            goto label_1ed454;
        }
    }
    ctx->pc = 0x1ED430u;
    // 0x1ed430: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x1ed430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1ed434: 0xc07b38c  jal         func_1ECE30
    ctx->pc = 0x1ED434u;
    SET_GPR_U32(ctx, 31, 0x1ED43Cu);
    ctx->pc = 0x1ED438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED434u;
    // 0x1ed438: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECE30u, 0x1ED434u, 0x1ED43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED43Cu;
label_1ed43c:
    // 0x1ed43c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed440: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x1ed440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1ed444: 0xc07b38c  jal         func_1ECE30
    ctx->pc = 0x1ED444u;
    SET_GPR_U32(ctx, 31, 0x1ED44Cu);
    ctx->pc = 0x1ED448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED444u;
    // 0x1ed448: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECE30u, 0x1ED444u, 0x1ED44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED44Cu;
label_1ed44c:
    // 0x1ed44c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1ED44Cu;
    {
        const bool branch_taken_0x1ed44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED44Cu;
        // 0x1ed450: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed44c) {
            ctx->pc = 0x1ED474u;
            goto label_1ed474;
        }
    }
    ctx->pc = 0x1ED454u;
label_1ed454:
    // 0x1ed454: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x1ed454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1ed458: 0xc07b38c  jal         func_1ECE30
    ctx->pc = 0x1ED458u;
    SET_GPR_U32(ctx, 31, 0x1ED460u);
    ctx->pc = 0x1ED45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED458u;
    // 0x1ed45c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECE30u, 0x1ED458u, 0x1ED460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED460u;
label_1ed460:
    // 0x1ed460: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed464: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x1ed464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1ed468: 0xc07b38c  jal         func_1ECE30
    ctx->pc = 0x1ED468u;
    SET_GPR_U32(ctx, 31, 0x1ED470u);
    ctx->pc = 0x1ED46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED468u;
    // 0x1ed46c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECE30u, 0x1ED468u, 0x1ED470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED470u;
label_1ed470:
    // 0x1ed470: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ed470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ed474:
    // 0x1ed474: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ed474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed478: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1ed478u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed47c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed47cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed480: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED480u;
        // 0x1ed484: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED488u;
}
