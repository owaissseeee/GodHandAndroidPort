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

// Function: cdvd_exit
// Address: 0x398720 - 0x3987c0
void cdvd_exit_0x398720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cdvd_exit_0x398720");
#endif

    switch (ctx->pc) {
        case 0x398750u: goto label_398750;
        case 0x398768u: goto label_398768;
        case 0x398774u: goto label_398774;
        case 0x398780u: goto label_398780;
        case 0x398788u: goto label_398788;
        case 0x398790u: goto label_398790;
        case 0x3987a0u: goto label_3987a0;
        default: break;
    }

    ctx->pc = 0x398720u;

    // 0x398720: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x398720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x398724: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x398724u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x398728: 0x8c438654  lw          $v1, -0x79AC($v0)
    ctx->pc = 0x398728u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F8654u));
    // 0x39872c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39872cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x398730: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x398730u;
    {
        const bool branch_taken_0x398730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x398734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398730u;
        // 0x398734: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398730) {
            ctx->pc = 0x398758u;
            goto label_398758;
        }
    }
    ctx->pc = 0x398738u;
    // 0x398738: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x398738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x39873c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x39873cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x398740: 0xac6286a0  sw          $v0, -0x7960($v1)
    ctx->pc = 0x398740u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F86A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F86A0u, _value); } while (0);
    // 0x398744: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x398744u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x398748: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x398748u;
    SET_GPR_U32(ctx, 31, 0x398750u);
    ctx->pc = 0x39874Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398748u;
    // 0x39874c: 0x8e048660  lw          $a0, -0x79A0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x398748u, 0x398750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398750u;
label_398750:
    // 0x398750: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x398750u;
    {
        const bool branch_taken_0x398750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398750u;
        // 0x398754: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398750) {
            ctx->pc = 0x398760u;
            goto label_398760;
        }
    }
    ctx->pc = 0x398758u;
label_398758:
    // 0x398758: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x398758u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x39875c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x39875cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_398760:
    // 0x398760: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x398760u;
    SET_GPR_U32(ctx, 31, 0x398768u);
    ctx->pc = 0x398764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398760u;
    // 0x398764: 0x8c448668  lw          $a0, -0x7998($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x398760u, 0x398768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398768u;
label_398768:
    // 0x398768: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x398768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x39876c: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x39876Cu;
    SET_GPR_U32(ctx, 31, 0x398774u);
    ctx->pc = 0x398770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39876Cu;
    // 0x398770: 0x8c64866c  lw          $a0, -0x7994($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936172)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x39876Cu, 0x398774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398774u;
label_398774:
    // 0x398774: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x398774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x398778: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x398778u;
    SET_GPR_U32(ctx, 31, 0x398780u);
    ctx->pc = 0x39877Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398778u;
    // 0x39877c: 0x8c648670  lw          $a0, -0x7990($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x398778u, 0x398780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398780u;
label_398780:
    // 0x398780: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x398780u;
    SET_GPR_U32(ctx, 31, 0x398788u);
    ctx->pc = 0x398784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398780u;
    // 0x398784: 0x8e048660  lw          $a0, -0x79A0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x398780u, 0x398788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398788u;
label_398788:
    // 0x398788: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x398788u;
    SET_GPR_U32(ctx, 31, 0x398790u);
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x398788u, 0x398790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398790u;
label_398790:
    // 0x398790: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x398790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x398794: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x398794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398798: 0xc0ec940  jal         func_3B2500
    ctx->pc = 0x398798u;
    SET_GPR_U32(ctx, 31, 0x3987A0u);
    ctx->pc = 0x39879Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398798u;
    // 0x39879c: 0x34840012  ori         $a0, $a0, 0x12 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2500u, 0x398798u, 0x3987A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3987A0u;
label_3987a0:
    // 0x3987a0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3987A0u;
    {
        const bool branch_taken_0x3987a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3987A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3987A0u;
        // 0x3987a4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3987a0) {
            ctx->pc = 0x3987B4u;
            goto label_3987b4;
        }
    }
    ctx->pc = 0x3987A8u;
    // 0x3987a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3987a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3987ac: 0x80ed8fc  j           func_3B63F0
    ctx->pc = 0x3987ACu;
    ctx->pc = 0x3987B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3987ACu;
    // 0x3987b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3987ACu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3987B4u;
label_3987b4:
    // 0x3987b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3987b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3987b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3987B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3987BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3987B8u;
        // 0x3987bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3987B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3987C0u;
}
