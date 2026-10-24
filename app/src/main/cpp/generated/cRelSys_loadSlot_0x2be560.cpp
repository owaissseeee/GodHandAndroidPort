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

// Function: cRelSys_loadSlot
// Address: 0x2be560 - 0x2be5f0
void cRelSys_loadSlot_0x2be560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cRelSys_loadSlot_0x2be560");
#endif

    switch (ctx->pc) {
        case 0x2be5a0u: goto label_2be5a0;
        case 0x2be5acu: goto label_2be5ac;
        case 0x2be5b4u: goto label_2be5b4;
        case 0x2be5d4u: goto label_2be5d4;
        default: break;
    }

    ctx->pc = 0x2be560u;

    // 0x2be560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2be560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2be564: 0x3c070075  lui         $a3, 0x75
    ctx->pc = 0x2be564u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)117 << 16));
    // 0x2be568: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2be568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2be56c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2be56cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be570: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2be570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2be574: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x2be574u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x2be578: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2be578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be57c: 0x26103f20  addiu       $s0, $s0, 0x3F20
    ctx->pc = 0x2be57cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16160));
    // 0x2be580: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2be580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2be584: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2be584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be588: 0x24e74220  addiu       $a3, $a3, 0x4220
    ctx->pc = 0x2be588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16928));
    // 0x2be58c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2be58cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be590: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2be590u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be594: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2be594u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be598: 0xc08032c  jal         func_200CB0
    ctx->pc = 0x2BE598u;
    SET_GPR_U32(ctx, 31, 0x2BE5A0u);
    ctx->pc = 0x2BE59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE598u;
    // 0x2be59c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200CB0u, 0x2BE598u, 0x2BE5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE5A0u;
label_2be5a0:
    // 0x2be5a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2be5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be5a4: 0xc080442  jal         func_201108
    ctx->pc = 0x2BE5A4u;
    SET_GPR_U32(ctx, 31, 0x2BE5ACu);
    ctx->pc = 0x2BE5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE5A4u;
    // 0x2be5a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201108u, 0x2BE5A4u, 0x2BE5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE5ACu;
label_2be5ac:
    // 0x2be5ac: 0xc0af9a8  jal         func_2BE6A0
    ctx->pc = 0x2BE5ACu;
    SET_GPR_U32(ctx, 31, 0x2BE5B4u);
    ctx->pc = 0x2BE5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE5ACu;
    // 0x2be5b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE6A0u, 0x2BE5ACu, 0x2BE5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE5B4u;
label_2be5b4:
    // 0x2be5b4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2be5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2be5b8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BE5B8u;
    {
        const bool branch_taken_0x2be5b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE5B8u;
        // 0x2be5bc: 0xa2220004  sb          $v0, 0x4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be5b8) {
            ctx->pc = 0x2BE5D8u;
            goto label_2be5d8;
        }
    }
    ctx->pc = 0x2BE5C0u;
    // 0x2be5c0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2be5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2be5c4: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BE5C4u;
    {
        const bool branch_taken_0x2be5c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be5c4) {
            ctx->pc = 0x2BE5C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE5C4u;
            // 0x2be5c8: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE5D8u;
            goto label_2be5d8;
        }
    }
    ctx->pc = 0x2BE5CCu;
    // 0x2be5cc: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x2BE5CCu;
    SET_GPR_U32(ctx, 31, 0x2BE5D4u);
    ctx->pc = 0x2BE5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE5CCu;
    // 0x2be5d0: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x2BE5CCu, 0x2BE5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE5D4u;
label_2be5d4:
    // 0x2be5d4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2be5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2be5d8:
    // 0x2be5d8: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x2be5d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2be5dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2be5dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2be5e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2be5e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2be5e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2be5e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE5E8u;
        // 0x2be5ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE5E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE5F0u;
}
