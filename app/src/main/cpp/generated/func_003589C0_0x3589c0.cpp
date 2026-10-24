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

// Function: func_003589C0
// Address: 0x3589c0 - 0x358a28
void func_003589C0_0x3589c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003589C0_0x3589c0");
#endif

    switch (ctx->pc) {
        case 0x3589e8u: goto label_3589e8;
        case 0x3589fcu: goto label_3589fc;
        case 0x358a04u: goto label_358a04;
        case 0x358a10u: goto label_358a10;
        default: break;
    }

    ctx->pc = 0x3589c0u;

    // 0x3589c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3589c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3589c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3589c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3589c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3589c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3589cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3589ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3589d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3589d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3589d4: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x3589d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x3589d8: 0x1065000e  beq         $v1, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x3589D8u;
    {
        const bool branch_taken_0x3589d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x3589DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3589D8u;
        // 0x3589dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3589d8) {
            ctx->pc = 0x358A14u;
            goto label_358a14;
        }
    }
    ctx->pc = 0x3589E0u;
    // 0x3589e0: 0xc0d6292  jal         func_358A48
    ctx->pc = 0x3589E0u;
    SET_GPR_U32(ctx, 31, 0x3589E8u);
    ctx->pc = 0x358A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358A48u, 0x3589E0u, 0x3589E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3589E8u;
label_3589e8:
    // 0x3589e8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3589E8u;
    {
        const bool branch_taken_0x3589e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3589ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3589E8u;
        // 0x3589ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3589e8) {
            ctx->pc = 0x358A14u;
            goto label_358a14;
        }
    }
    ctx->pc = 0x3589F0u;
    // 0x3589f0: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x3589f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x3589f4: 0xc0d628a  jal         func_358A28
    ctx->pc = 0x3589F4u;
    SET_GPR_U32(ctx, 31, 0x3589FCu);
    ctx->pc = 0x3589F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3589F4u;
    // 0x3589f8: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358A28u, 0x3589F4u, 0x3589FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3589FCu;
label_3589fc:
    // 0x3589fc: 0xc0d62aa  jal         func_358AA8
    ctx->pc = 0x3589FCu;
    SET_GPR_U32(ctx, 31, 0x358A04u);
    ctx->pc = 0x358A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3589FCu;
    // 0x358a00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358AA8u, 0x3589FCu, 0x358A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358A04u;
label_358a04:
    // 0x358a04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x358a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358a08: 0xc0d628a  jal         func_358A28
    ctx->pc = 0x358A08u;
    SET_GPR_U32(ctx, 31, 0x358A10u);
    ctx->pc = 0x358A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358A08u;
    // 0x358a0c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358A28u, 0x358A08u, 0x358A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358A10u;
label_358a10:
    // 0x358a10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x358a10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_358a14:
    // 0x358a14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x358a14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358a18: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x358a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x358a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x358A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358A1Cu;
        // 0x358a20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358A24u;
    // 0x358a24: 0x0  nop
    ctx->pc = 0x358a24u;
    // NOP
    ctx->pc = 0x358a28u;
}
