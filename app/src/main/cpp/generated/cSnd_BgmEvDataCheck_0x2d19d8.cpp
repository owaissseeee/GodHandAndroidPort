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

// Function: cSnd_BgmEvDataCheck
// Address: 0x2d19d8 - 0x2d1a30
void cSnd_BgmEvDataCheck_0x2d19d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_BgmEvDataCheck_0x2d19d8");
#endif

    switch (ctx->pc) {
        case 0x2d19f0u: goto label_2d19f0;
        case 0x2d19f8u: goto label_2d19f8;
        case 0x2d1a0cu: goto label_2d1a0c;
        case 0x2d1a14u: goto label_2d1a14;
        default: break;
    }

    ctx->pc = 0x2d19d8u;

    // 0x2d19d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d19d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d19dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d19dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d19e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d19e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d19e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d19e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d19e8: 0xc0b4b66  jal         func_2D2D98
    ctx->pc = 0x2D19E8u;
    SET_GPR_U32(ctx, 31, 0x2D19F0u);
    ctx->pc = 0x2D19ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D19E8u;
    // 0x2d19ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2D98u, 0x2D19E8u, 0x2D19F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D19F0u;
label_2d19f0:
    // 0x2d19f0: 0xc0b3fde  jal         func_2CFF78
    ctx->pc = 0x2D19F0u;
    SET_GPR_U32(ctx, 31, 0x2D19F8u);
    ctx->pc = 0x2D19F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D19F0u;
    // 0x2d19f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF78u, 0x2D19F0u, 0x2D19F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D19F8u;
label_2d19f8:
    // 0x2d19f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d19f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d19fc: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D19FCu;
    {
        const bool branch_taken_0x2d19fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D1A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D19FCu;
        // 0x2d1a00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d19fc) {
            ctx->pc = 0x2D1A1Cu;
            goto label_2d1a1c;
        }
    }
    ctx->pc = 0x2D1A04u;
    // 0x2d1a04: 0xc0b4b66  jal         func_2D2D98
    ctx->pc = 0x2D1A04u;
    SET_GPR_U32(ctx, 31, 0x2D1A0Cu);
    ctx->pc = 0x2D1A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1A04u;
    // 0x2d1a08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2D98u, 0x2D1A04u, 0x2D1A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1A0Cu;
label_2d1a0c:
    // 0x2d1a0c: 0xc0b3fda  jal         func_2CFF68
    ctx->pc = 0x2D1A0Cu;
    SET_GPR_U32(ctx, 31, 0x2D1A14u);
    ctx->pc = 0x2D1A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1A0Cu;
    // 0x2d1a10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF68u, 0x2D1A0Cu, 0x2D1A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1A14u;
label_2d1a14:
    // 0x2d1a14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1A14u;
    {
        const bool branch_taken_0x2d1a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1A14u;
        // 0x2d1a18: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1a14) {
            ctx->pc = 0x2D1A24u;
            goto label_2d1a24;
        }
    }
    ctx->pc = 0x2D1A1Cu;
label_2d1a1c:
    // 0x2d1a1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1a20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d1a20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d1a24:
    // 0x2d1a24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1a28: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1A28u;
        // 0x2d1a2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1A30u;
}
