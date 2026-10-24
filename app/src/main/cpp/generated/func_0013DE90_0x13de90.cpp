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

// Function: func_0013DE90
// Address: 0x13de90 - 0x13df20
void func_0013DE90_0x13de90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013DE90_0x13de90");
#endif

    switch (ctx->pc) {
        case 0x13ded0u: goto label_13ded0;
        case 0x13dedcu: goto label_13dedc;
        case 0x13df00u: goto label_13df00;
        default: break;
    }

    ctx->pc = 0x13de90u;

    // 0x13de90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13de90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13de94: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x13de94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x13de98: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x13de98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x13de9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13de9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dea0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x13dea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x13dea4: 0x26220120  addiu       $v0, $s1, 0x120
    ctx->pc = 0x13dea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x13dea8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x13dea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x13deac: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x13deacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13deb0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x13deb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x13deb4: 0x3c130042  lui         $s3, 0x42
    ctx->pc = 0x13deb4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)66 << 16));
    // 0x13deb8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x13DEB8u;
    {
        const bool branch_taken_0x13deb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DEB8u;
        // 0x13debc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13deb8) {
            ctx->pc = 0x13DEE8u;
            goto label_13dee8;
        }
    }
    ctx->pc = 0x13DEC0u;
    // 0x13dec0: 0x2630038c  addiu       $s0, $s1, 0x38C
    ctx->pc = 0x13dec0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 908));
    // 0x13dec4: 0x10500008  beq         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13DEC4u;
    {
        const bool branch_taken_0x13dec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x13DEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DEC4u;
        // 0x13dec8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dec4) {
            ctx->pc = 0x13DEE8u;
            goto label_13dee8;
        }
    }
    ctx->pc = 0x13DECCu;
    // 0x13decc: 0x2610ff84  addiu       $s0, $s0, -0x7C
    ctx->pc = 0x13deccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967172));
label_13ded0:
    // 0x13ded0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13ded0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ded4: 0xc0b5760  jal         func_2D5D80
    ctx->pc = 0x13DED4u;
    SET_GPR_U32(ctx, 31, 0x13DEDCu);
    ctx->pc = 0x13DED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DED4u;
    // 0x13ded8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5D80u, 0x13DED4u, 0x13DEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DEDCu;
label_13dedc:
    // 0x13dedc: 0x0  nop
    ctx->pc = 0x13dedcu;
    // NOP
    // 0x13dee0: 0x1650fffb  bne         $s2, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x13DEE0u;
    {
        const bool branch_taken_0x13dee0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x13DEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DEE0u;
        // 0x13dee4: 0x2610ff84  addiu       $s0, $s0, -0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dee0) {
            ctx->pc = 0x13DED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13ded0;
        }
    }
    ctx->pc = 0x13DEE8u;
label_13dee8:
    // 0x13dee8: 0x2662dcc8  addiu       $v0, $s3, -0x2338
    ctx->pc = 0x13dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294958280));
    // 0x13deec: 0x32830001  andi        $v1, $s4, 0x1
    ctx->pc = 0x13deecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x13def0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13DEF0u;
    {
        const bool branch_taken_0x13def0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DEF0u;
        // 0x13def4: 0xae220080  sw          $v0, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13def0) {
            ctx->pc = 0x13DF00u;
            goto label_13df00;
        }
    }
    ctx->pc = 0x13DEF8u;
    // 0x13def8: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x13DEF8u;
    SET_GPR_U32(ctx, 31, 0x13DF00u);
    ctx->pc = 0x13DEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DEF8u;
    // 0x13defc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x13DEF8u, 0x13DF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DF00u;
label_13df00:
    // 0x13df00: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x13df00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13df04: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x13df04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13df08: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x13df08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13df0c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x13df0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13df10: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x13df10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13df14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13df14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13df18: 0x3e00008  jr          $ra
    ctx->pc = 0x13DF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DF18u;
        // 0x13df1c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DF20u;
}
