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

// Function: func_0037B660
// Address: 0x37b660 - 0x37b720
void func_0037B660_0x37b660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037B660_0x37b660");
#endif

    switch (ctx->pc) {
        case 0x37b6a8u: goto label_37b6a8;
        case 0x37b6c0u: goto label_37b6c0;
        case 0x37b6d0u: goto label_37b6d0;
        case 0x37b6e0u: goto label_37b6e0;
        case 0x37b6e8u: goto label_37b6e8;
        case 0x37b6f8u: goto label_37b6f8;
        case 0x37b708u: goto label_37b708;
        case 0x37b710u: goto label_37b710;
        default: break;
    }

    ctx->pc = 0x37b660u;

    // 0x37b660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37b660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37b664: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37b664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37b668: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37b66c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37b66cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b670: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x37b670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x37b674: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x37b674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x37b678: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x37B678u;
    {
        const bool branch_taken_0x37b678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b678) {
            ctx->pc = 0x37B67Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37B678u;
            // 0x37b67c: 0x8e030034  lw          $v1, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37B694u;
            goto label_37b694;
        }
    }
    ctx->pc = 0x37B680u;
    // 0x37b680: 0x92020027  lbu         $v0, 0x27($s0)
    ctx->pc = 0x37b680u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 39)));
    // 0x37b684: 0xa2000028  sb          $zero, 0x28($s0)
    ctx->pc = 0x37b684u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x37b688: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x37b688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x37b68c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x37B68Cu;
    {
        const bool branch_taken_0x37b68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B68Cu;
        // 0x37b690: 0xa2020027  sb          $v0, 0x27($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 39), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b68c) {
            ctx->pc = 0x37B710u;
            goto label_37b710;
        }
    }
    ctx->pc = 0x37B694u;
label_37b694:
    // 0x37b694: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x37b694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x37b698: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37B698u;
    {
        const bool branch_taken_0x37b698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B698u;
        // 0x37b69c: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b698) {
            ctx->pc = 0x37B6B0u;
            goto label_37b6b0;
        }
    }
    ctx->pc = 0x37B6A0u;
    // 0x37b6a0: 0xc0dedc8  jal         func_37B720
    ctx->pc = 0x37B6A0u;
    SET_GPR_U32(ctx, 31, 0x37B6A8u);
    ctx->pc = 0x37B6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B6A0u;
    // 0x37b6a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B720u, 0x37B6A0u, 0x37B6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B6A8u;
label_37b6a8:
    // 0x37b6a8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x37B6A8u;
    {
        const bool branch_taken_0x37b6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B6A8u;
        // 0x37b6ac: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b6a8) {
            ctx->pc = 0x37B714u;
            goto label_37b714;
        }
    }
    ctx->pc = 0x37B6B0u;
label_37b6b0:
    // 0x37b6b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37B6B0u;
    {
        const bool branch_taken_0x37b6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b6b0) {
            ctx->pc = 0x37B6C8u;
            goto label_37b6c8;
        }
    }
    ctx->pc = 0x37B6B8u;
    // 0x37b6b8: 0xc0dedda  jal         func_37B768
    ctx->pc = 0x37B6B8u;
    SET_GPR_U32(ctx, 31, 0x37B6C0u);
    ctx->pc = 0x37B6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B6B8u;
    // 0x37b6bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B768u, 0x37B6B8u, 0x37B6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B6C0u;
label_37b6c0:
    // 0x37b6c0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x37B6C0u;
    {
        const bool branch_taken_0x37b6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B6C0u;
        // 0x37b6c4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b6c0) {
            ctx->pc = 0x37B714u;
            goto label_37b714;
        }
    }
    ctx->pc = 0x37B6C8u;
label_37b6c8:
    // 0x37b6c8: 0xc0de7b0  jal         func_379EC0
    ctx->pc = 0x37B6C8u;
    SET_GPR_U32(ctx, 31, 0x37B6D0u);
    ctx->pc = 0x37B6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B6C8u;
    // 0x37b6cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379EC0u, 0x37B6C8u, 0x37B6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B6D0u;
label_37b6d0:
    // 0x37b6d0: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x37B6D0u;
    {
        const bool branch_taken_0x37b6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37b6d0) {
            ctx->pc = 0x37B6D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37B6D0u;
            // 0x37b6d4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37B714u;
            goto label_37b714;
        }
    }
    ctx->pc = 0x37B6D8u;
    // 0x37b6d8: 0xc0de87c  jal         func_37A1F0
    ctx->pc = 0x37B6D8u;
    SET_GPR_U32(ctx, 31, 0x37B6E0u);
    ctx->pc = 0x37B6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B6D8u;
    // 0x37b6dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A1F0u, 0x37B6D8u, 0x37B6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B6E0u;
label_37b6e0:
    // 0x37b6e0: 0xc0de932  jal         func_37A4C8
    ctx->pc = 0x37B6E0u;
    SET_GPR_U32(ctx, 31, 0x37B6E8u);
    ctx->pc = 0x37B6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B6E0u;
    // 0x37b6e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A4C8u, 0x37B6E0u, 0x37B6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B6E8u;
label_37b6e8:
    // 0x37b6e8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x37B6E8u;
    {
        const bool branch_taken_0x37b6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37b6e8) {
            ctx->pc = 0x37B708u;
            goto label_37b708;
        }
    }
    ctx->pc = 0x37B6F0u;
    // 0x37b6f0: 0xc0dede6  jal         func_37B798
    ctx->pc = 0x37B6F0u;
    SET_GPR_U32(ctx, 31, 0x37B6F8u);
    ctx->pc = 0x37B6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B6F0u;
    // 0x37b6f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B798u, 0x37B6F0u, 0x37B6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B6F8u;
label_37b6f8:
    // 0x37b6f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37B6F8u;
    {
        const bool branch_taken_0x37b6f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37b6f8) {
            ctx->pc = 0x37B708u;
            goto label_37b708;
        }
    }
    ctx->pc = 0x37B700u;
    // 0x37b700: 0xc0dee02  jal         func_37B808
    ctx->pc = 0x37B700u;
    SET_GPR_U32(ctx, 31, 0x37B708u);
    ctx->pc = 0x37B704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B700u;
    // 0x37b704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B808u, 0x37B700u, 0x37B708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B708u;
label_37b708:
    // 0x37b708: 0xc0de8a6  jal         func_37A298
    ctx->pc = 0x37B708u;
    SET_GPR_U32(ctx, 31, 0x37B710u);
    ctx->pc = 0x37B70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B708u;
    // 0x37b70c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A298u, 0x37B708u, 0x37B710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B710u;
label_37b710:
    // 0x37b710: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37b710u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37b714:
    // 0x37b714: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b718: 0x3e00008  jr          $ra
    ctx->pc = 0x37B718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B718u;
        // 0x37b71c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B720u;
}
