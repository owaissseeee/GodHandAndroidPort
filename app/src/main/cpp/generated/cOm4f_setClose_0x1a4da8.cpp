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

// Function: cOm4f_setClose
// Address: 0x1a4da8 - 0x1a4e00
void cOm4f_setClose_0x1a4da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOm4f_setClose_0x1a4da8");
#endif

    switch (ctx->pc) {
        case 0x1a4ddcu: goto label_1a4ddc;
        default: break;
    }

    ctx->pc = 0x1a4da8u;

    // 0x1a4da8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a4da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a4dac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a4dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4db0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a4db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a4db4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a4db8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a4db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4dbc: 0x92020762  lbu         $v0, 0x762($s0)
    ctx->pc = 0x1a4dbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1890)));
    // 0x1a4dc0: 0x5043000c  beql        $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1A4DC0u;
    {
        const bool branch_taken_0x1a4dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a4dc0) {
            ctx->pc = 0x1A4DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4DC0u;
            // 0x1a4dc4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4DF4u;
            goto label_1a4df4;
        }
    }
    ctx->pc = 0x1A4DC8u;
    // 0x1a4dc8: 0x92020761  lbu         $v0, 0x761($s0)
    ctx->pc = 0x1a4dc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1889)));
    // 0x1a4dcc: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A4DCCu;
    {
        const bool branch_taken_0x1a4dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a4dcc) {
            ctx->pc = 0x1A4DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4DCCu;
            // 0x1a4dd0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4DF4u;
            goto label_1a4df4;
        }
    }
    ctx->pc = 0x1A4DD4u;
    // 0x1a4dd4: 0xc0692f4  jal         func_1A4BD0
    ctx->pc = 0x1A4DD4u;
    SET_GPR_U32(ctx, 31, 0x1A4DDCu);
    ctx->pc = 0x1A4DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4DD4u;
    // 0x1a4dd8: 0xa2020760  sb          $v0, 0x760($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1888), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4BD0u, 0x1A4DD4u, 0x1A4DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4DDCu;
label_1a4ddc:
    // 0x1a4ddc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a4ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a4de0: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1a4de0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4de4: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x1a4de4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a4de8: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1a4de8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4dec: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1a4decu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4df0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a4df0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a4df4:
    // 0x1a4df4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4df8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DF8u;
        // 0x1a4dfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4E00u;
}
