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

// Function: func_00369078
// Address: 0x369078 - 0x369118
void func_00369078_0x369078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00369078_0x369078");
#endif

    switch (ctx->pc) {
        case 0x36909cu: goto label_36909c;
        case 0x3690a8u: goto label_3690a8;
        case 0x3690b4u: goto label_3690b4;
        case 0x3690bcu: goto label_3690bc;
        case 0x3690c4u: goto label_3690c4;
        case 0x3690ccu: goto label_3690cc;
        case 0x3690d4u: goto label_3690d4;
        case 0x3690dcu: goto label_3690dc;
        default: break;
    }

    ctx->pc = 0x369078u;

    // 0x369078: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x369078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36907c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36907cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369080: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x369080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x369084: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x369084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369088: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x369088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36908c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x36908cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x369090: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x369090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x369094: 0xc0d9b14  jal         func_366C50
    ctx->pc = 0x369094u;
    SET_GPR_U32(ctx, 31, 0x36909Cu);
    ctx->pc = 0x369098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369094u;
    // 0x369098: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366C50u, 0x369094u, 0x36909Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36909Cu;
label_36909c:
    // 0x36909c: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x36909cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x3690a0: 0xc0da3a0  jal         func_368E80
    ctx->pc = 0x3690A0u;
    SET_GPR_U32(ctx, 31, 0x3690A8u);
    ctx->pc = 0x3690A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3690A0u;
    // 0x3690a4: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368E80u, 0x3690A0u, 0x3690A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3690A8u;
label_3690a8:
    // 0x3690a8: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x3690a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    // 0x3690ac: 0xc0da446  jal         func_369118
    ctx->pc = 0x3690ACu;
    SET_GPR_U32(ctx, 31, 0x3690B4u);
    ctx->pc = 0x3690B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3690ACu;
    // 0x3690b0: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369118u, 0x3690ACu, 0x3690B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3690B4u;
label_3690b4:
    // 0x3690b4: 0xc0da44c  jal         func_369130
    ctx->pc = 0x3690B4u;
    SET_GPR_U32(ctx, 31, 0x3690BCu);
    ctx->pc = 0x3690B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3690B4u;
    // 0x3690b8: 0x26040028  addiu       $a0, $s0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369130u, 0x3690B4u, 0x3690BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3690BCu;
label_3690bc:
    // 0x3690bc: 0xc0da44c  jal         func_369130
    ctx->pc = 0x3690BCu;
    SET_GPR_U32(ctx, 31, 0x3690C4u);
    ctx->pc = 0x3690C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3690BCu;
    // 0x3690c0: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369130u, 0x3690BCu, 0x3690C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3690C4u;
label_3690c4:
    // 0x3690c4: 0xc0da44c  jal         func_369130
    ctx->pc = 0x3690C4u;
    SET_GPR_U32(ctx, 31, 0x3690CCu);
    ctx->pc = 0x3690C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3690C4u;
    // 0x3690c8: 0x26040068  addiu       $a0, $s0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369130u, 0x3690C4u, 0x3690CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3690CCu;
label_3690cc:
    // 0x3690cc: 0xc0da44c  jal         func_369130
    ctx->pc = 0x3690CCu;
    SET_GPR_U32(ctx, 31, 0x3690D4u);
    ctx->pc = 0x3690D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3690CCu;
    // 0x3690d0: 0x26040088  addiu       $a0, $s0, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369130u, 0x3690CCu, 0x3690D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3690D4u;
label_3690d4:
    // 0x3690d4: 0xc0da456  jal         func_369158
    ctx->pc = 0x3690D4u;
    SET_GPR_U32(ctx, 31, 0x3690DCu);
    ctx->pc = 0x3690D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3690D4u;
    // 0x3690d8: 0x260400a8  addiu       $a0, $s0, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369158u, 0x3690D4u, 0x3690DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3690DCu;
label_3690dc:
    // 0x3690dc: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x3690dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x3690e0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x3690e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x3690e4: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x3690e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x3690e8: 0x24426ec0  addiu       $v0, $v0, 0x6EC0
    ctx->pc = 0x3690e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28352));
    // 0x3690ec: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x3690ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x3690f0: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x3690f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x3690f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3690f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3690f8: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x3690f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x3690fc: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x3690fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x369100: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x369100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x369104: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x369104u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x369108: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x369108u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36910c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36910cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x369110: 0x3e00008  jr          $ra
    ctx->pc = 0x369110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369110u;
        // 0x369114: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369118u;
}
