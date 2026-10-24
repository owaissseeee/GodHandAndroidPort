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

// Function: sfmps_ExecCopySj
// Address: 0x34f188 - 0x34f1f8
void sfmps_ExecCopySj_0x34f188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfmps_ExecCopySj_0x34f188");
#endif

    switch (ctx->pc) {
        case 0x34f188u: goto label_34f188;
        case 0x34f18cu: goto label_34f18c;
        case 0x34f190u: goto label_34f190;
        case 0x34f194u: goto label_34f194;
        case 0x34f198u: goto label_34f198;
        case 0x34f19cu: goto label_34f19c;
        case 0x34f1a0u: goto label_34f1a0;
        case 0x34f1a4u: goto label_34f1a4;
        case 0x34f1a8u: goto label_34f1a8;
        case 0x34f1acu: goto label_34f1ac;
        case 0x34f1b0u: goto label_34f1b0;
        case 0x34f1b4u: goto label_34f1b4;
        case 0x34f1b8u: goto label_34f1b8;
        case 0x34f1bcu: goto label_34f1bc;
        case 0x34f1c0u: goto label_34f1c0;
        case 0x34f1c4u: goto label_34f1c4;
        case 0x34f1c8u: goto label_34f1c8;
        case 0x34f1ccu: goto label_34f1cc;
        case 0x34f1d0u: goto label_34f1d0;
        case 0x34f1d4u: goto label_34f1d4;
        case 0x34f1d8u: goto label_34f1d8;
        case 0x34f1dcu: goto label_34f1dc;
        case 0x34f1e0u: goto label_34f1e0;
        case 0x34f1e4u: goto label_34f1e4;
        case 0x34f1e8u: goto label_34f1e8;
        case 0x34f1ecu: goto label_34f1ec;
        case 0x34f1f0u: goto label_34f1f0;
        case 0x34f1f4u: goto label_34f1f4;
        default: break;
    }

    ctx->pc = 0x34f188u;

label_34f188:
    // 0x34f188: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34f188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_34f18c:
    // 0x34f18c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34f18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_34f190:
    // 0x34f190: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34f190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34f194:
    // 0x34f194: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x34f194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_34f198:
    // 0x34f198: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34f198u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_34f19c:
    // 0x34f19c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34f19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_34f1a0:
    // 0x34f1a0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x34f1a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34f1a4:
    // 0x34f1a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x34f1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_34f1a8:
    // 0x34f1a8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x34f1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_34f1ac:
    // 0x34f1ac: 0x40f809  jalr        $v0
label_34f1b0:
    if (ctx->pc == 0x34F1B0u) {
        ctx->pc = 0x34F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F1ACu;
        // 0x34f1b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F1B4u;
        goto label_34f1b4;
    }
    ctx->pc = 0x34F1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34F1B4u);
        ctx->pc = 0x34F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F1ACu;
        // 0x34f1b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F1ACu, 0x34F1B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34F1B4u;
label_34f1b4:
    // 0x34f1b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x34f1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34f1b8:
    // 0x34f1b8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x34f1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_34f1bc:
    // 0x34f1bc: 0xc0d9a58  jal         func_366960
label_34f1c0:
    if (ctx->pc == 0x34F1C0u) {
        ctx->pc = 0x34F1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F1BCu;
        // 0x34f1c0: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F1C4u;
        goto label_34f1c4;
    }
    ctx->pc = 0x34F1BCu;
    SET_GPR_U32(ctx, 31, 0x34F1C4u);
    ctx->pc = 0x34F1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F1BCu;
    // 0x34f1c0: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366960u, 0x34F1BCu, 0x34F1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F1C4u;
label_34f1c4:
    // 0x34f1c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x34f1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_34f1c8:
    // 0x34f1c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34f1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34f1cc:
    // 0x34f1cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34f1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34f1d0:
    // 0x34f1d0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x34f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_34f1d4:
    // 0x34f1d4: 0x40f809  jalr        $v0
label_34f1d8:
    if (ctx->pc == 0x34F1D8u) {
        ctx->pc = 0x34F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F1D4u;
        // 0x34f1d8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F1DCu;
        goto label_34f1dc;
    }
    ctx->pc = 0x34F1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34F1DCu);
        ctx->pc = 0x34F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F1D4u;
        // 0x34f1d8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F1D4u, 0x34F1DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34F1DCu;
label_34f1dc:
    // 0x34f1dc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x34f1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_34f1e0:
    // 0x34f1e0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34f1e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34f1e4:
    // 0x34f1e4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x34f1e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_34f1e8:
    // 0x34f1e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34f1e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34f1ec:
    // 0x34f1ec: 0x3e00008  jr          $ra
label_34f1f0:
    if (ctx->pc == 0x34F1F0u) {
        ctx->pc = 0x34F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F1ECu;
        // 0x34f1f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F1F4u;
        goto label_34f1f4;
    }
    ctx->pc = 0x34F1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F1ECu;
        // 0x34f1f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34F1F4u;
label_34f1f4:
    // 0x34f1f4: 0x0  nop
    ctx->pc = 0x34f1f4u;
    // NOP
    ctx->pc = 0x34f1f8u;
}
