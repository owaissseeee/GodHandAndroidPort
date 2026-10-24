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

// Function: _copyrightExtension
// Address: 0x3a1068 - 0x3a1100
void _copyrightExtension_0x3a1068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_copyrightExtension_0x3a1068");
#endif

    switch (ctx->pc) {
        case 0x3a1080u: goto label_3a1080;
        case 0x3a108cu: goto label_3a108c;
        case 0x3a1098u: goto label_3a1098;
        case 0x3a10a4u: goto label_3a10a4;
        case 0x3a10b0u: goto label_3a10b0;
        case 0x3a10bcu: goto label_3a10bc;
        case 0x3a10c8u: goto label_3a10c8;
        case 0x3a10d4u: goto label_3a10d4;
        case 0x3a10e0u: goto label_3a10e0;
        case 0x3a10ecu: goto label_3a10ec;
        default: break;
    }

    ctx->pc = 0x3a1068u;

    // 0x3a1068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a1068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a106c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a106cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a1070: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a1070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a1074: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a1074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a1078: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A1078u;
    SET_GPR_U32(ctx, 31, 0x3A1080u);
    ctx->pc = 0x3A107Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1078u;
    // 0x3a107c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A1078u, 0x3A1080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1080u;
label_3a1080:
    // 0x3a1080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a1080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1084: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A1084u;
    SET_GPR_U32(ctx, 31, 0x3A108Cu);
    ctx->pc = 0x3A1088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1084u;
    // 0x3a1088: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A1084u, 0x3A108Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A108Cu;
label_3a108c:
    // 0x3a108c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a108cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1090: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A1090u;
    SET_GPR_U32(ctx, 31, 0x3A1098u);
    ctx->pc = 0x3A1094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1090u;
    // 0x3a1094: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A1090u, 0x3A1098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1098u;
label_3a1098:
    // 0x3a1098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a1098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a109c: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A109Cu;
    SET_GPR_U32(ctx, 31, 0x3A10A4u);
    ctx->pc = 0x3A10A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A109Cu;
    // 0x3a10a0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A109Cu, 0x3A10A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A10A4u;
label_3a10a4:
    // 0x3a10a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a10a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a10a8: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A10A8u;
    SET_GPR_U32(ctx, 31, 0x3A10B0u);
    ctx->pc = 0x3A10ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A10A8u;
    // 0x3a10ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A10A8u, 0x3A10B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A10B0u;
label_3a10b0:
    // 0x3a10b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a10b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a10b4: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A10B4u;
    SET_GPR_U32(ctx, 31, 0x3A10BCu);
    ctx->pc = 0x3A10B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A10B4u;
    // 0x3a10b8: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A10B4u, 0x3A10BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A10BCu;
label_3a10bc:
    // 0x3a10bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a10bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a10c0: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A10C0u;
    SET_GPR_U32(ctx, 31, 0x3A10C8u);
    ctx->pc = 0x3A10C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A10C0u;
    // 0x3a10c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A10C0u, 0x3A10C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A10C8u;
label_3a10c8:
    // 0x3a10c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a10c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a10cc: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A10CCu;
    SET_GPR_U32(ctx, 31, 0x3A10D4u);
    ctx->pc = 0x3A10D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A10CCu;
    // 0x3a10d0: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A10CCu, 0x3A10D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A10D4u;
label_3a10d4:
    // 0x3a10d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a10d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a10d8: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A10D8u;
    SET_GPR_U32(ctx, 31, 0x3A10E0u);
    ctx->pc = 0x3A10DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A10D8u;
    // 0x3a10dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A10D8u, 0x3A10E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A10E0u;
label_3a10e0:
    // 0x3a10e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a10e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a10e4: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A10E4u;
    SET_GPR_U32(ctx, 31, 0x3A10ECu);
    ctx->pc = 0x3A10E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A10E4u;
    // 0x3a10e8: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A10E4u, 0x3A10ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A10ECu;
label_3a10ec:
    // 0x3a10ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a10ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a10f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a10f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a10f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A10F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A10F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A10F4u;
        // 0x3a10f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A10F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A10FCu;
    // 0x3a10fc: 0x0  nop
    ctx->pc = 0x3a10fcu;
    // NOP
    ctx->pc = 0x3a1100u;
}
