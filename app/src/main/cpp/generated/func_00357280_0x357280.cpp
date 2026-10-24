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

// Function: func_00357280
// Address: 0x357280 - 0x3572f8
void func_00357280_0x357280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00357280_0x357280");
#endif

    switch (ctx->pc) {
        case 0x3572a8u: goto label_3572a8;
        case 0x3572b4u: goto label_3572b4;
        case 0x3572c4u: goto label_3572c4;
        default: break;
    }

    ctx->pc = 0x357280u;

    // 0x357280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x357280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x357284: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x357284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x357288: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x357288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35728c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35728cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x357290: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x357290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x357294: 0x2451e2c4  addiu       $s1, $v0, -0x1D3C
    ctx->pc = 0x357294u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959812));
    // 0x357298: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x357298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35729c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x35729cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3572a0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x3572a0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3EE2C4u));
    // 0x3572a4: 0x0  nop
    ctx->pc = 0x3572a4u;
    // NOP
label_3572a8:
    // 0x3572a8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3572a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x3572ac: 0xc0d37b2  jal         func_34DEC8
    ctx->pc = 0x3572ACu;
    SET_GPR_U32(ctx, 31, 0x3572B4u);
    ctx->pc = 0x3572B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3572ACu;
    // 0x3572b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEC8u, 0x3572ACu, 0x3572B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3572B4u;
label_3572b4:
    // 0x3572b4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3572B4u;
    {
        const bool branch_taken_0x3572b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3572B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3572B4u;
        // 0x3572b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3572b4) {
            ctx->pc = 0x3572CCu;
            goto label_3572cc;
        }
    }
    ctx->pc = 0x3572BCu;
    // 0x3572bc: 0xc0d5c96  jal         func_357258
    ctx->pc = 0x3572BCu;
    SET_GPR_U32(ctx, 31, 0x3572C4u);
    ctx->pc = 0x357258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357258u, 0x3572BCu, 0x3572C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3572C4u;
label_3572c4:
    // 0x3572c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3572C4u;
    {
        const bool branch_taken_0x3572c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3572C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3572C4u;
        // 0x3572c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3572c4) {
            ctx->pc = 0x3572E4u;
            goto label_3572e4;
        }
    }
    ctx->pc = 0x3572CCu;
label_3572cc:
    // 0x3572cc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3572ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3572d0: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x3572d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3572d4: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3572D4u;
    {
        const bool branch_taken_0x3572d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3572d4) {
            ctx->pc = 0x3572D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3572D4u;
            // 0x3572d8: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3572A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3572a8;
        }
    }
    ctx->pc = 0x3572DCu;
    // 0x3572dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3572dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3572e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3572e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3572e4:
    // 0x3572e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3572e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3572e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3572e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3572ec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3572ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3572f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3572F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3572F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3572F0u;
        // 0x3572f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3572F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3572F8u;
}
