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

// Function: cSeData_AllocSysMem
// Address: 0x2cf888 - 0x2cf8e8
void cSeData_AllocSysMem_0x2cf888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSeData_AllocSysMem_0x2cf888");
#endif

    switch (ctx->pc) {
        case 0x2cf8c4u: goto label_2cf8c4;
        case 0x2cf8d4u: goto label_2cf8d4;
        default: break;
    }

    ctx->pc = 0x2cf888u;

    // 0x2cf888: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cf888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cf88c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cf88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2cf890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cf890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cf894: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cf894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf898: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2cf898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2cf89c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2CF89Cu;
    {
        const bool branch_taken_0x2cf89c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF89Cu;
        // 0x2cf8a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf89c) {
            ctx->pc = 0x2CF8D8u;
            goto label_2cf8d8;
        }
    }
    ctx->pc = 0x2CF8A4u;
    // 0x2cf8a4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2cf8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2cf8a8: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x2cf8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2cf8ac: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CF8ACu;
    {
        const bool branch_taken_0x2cf8ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CF8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF8ACu;
        // 0x2cf8b0: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf8ac) {
            ctx->pc = 0x2CF8C8u;
            goto label_2cf8c8;
        }
    }
    ctx->pc = 0x2CF8B4u;
    // 0x2cf8b4: 0x8c470024  lw          $a3, 0x24($v0)
    ctx->pc = 0x2cf8b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2cf8b8: 0x24843a40  addiu       $a0, $a0, 0x3A40
    ctx->pc = 0x2cf8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14912));
    // 0x2cf8bc: 0xc0b4c14  jal         func_2D3050
    ctx->pc = 0x2CF8BCu;
    SET_GPR_U32(ctx, 31, 0x2CF8C4u);
    ctx->pc = 0x2CF8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF8BCu;
    // 0x2cf8c0: 0x26060018  addiu       $a2, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3050u, 0x2CF8BCu, 0x2CF8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF8C4u;
label_2cf8c4:
    // 0x2cf8c4: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2cf8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_2cf8c8:
    // 0x2cf8c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cf8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf8cc: 0xc0b3f2c  jal         func_2CFCB0
    ctx->pc = 0x2CF8CCu;
    SET_GPR_U32(ctx, 31, 0x2CF8D4u);
    ctx->pc = 0x2CF8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF8CCu;
    // 0x2cf8d0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCB0u, 0x2CF8CCu, 0x2CF8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF8D4u;
label_2cf8d4:
    // 0x2cf8d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cf8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cf8d8:
    // 0x2cf8d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cf8d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf8dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cf8dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF8E0u;
        // 0x2cf8e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF8E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF8E8u;
}
