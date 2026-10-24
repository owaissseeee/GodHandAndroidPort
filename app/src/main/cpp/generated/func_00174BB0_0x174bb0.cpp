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

// Function: func_00174BB0
// Address: 0x174bb0 - 0x174c28
void func_00174BB0_0x174bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00174BB0_0x174bb0");
#endif

    switch (ctx->pc) {
        case 0x174bc8u: goto label_174bc8;
        default: break;
    }

    ctx->pc = 0x174bb0u;

    // 0x174bb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x174bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x174bb4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x174bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x174bb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x174bbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x174bbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174bc0: 0xc06dce0  jal         func_1B7380
    ctx->pc = 0x174BC0u;
    SET_GPR_U32(ctx, 31, 0x174BC8u);
    ctx->pc = 0x174BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174BC0u;
    // 0x174bc4: 0x8e050650  lw          $a1, 0x650($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x174BC0u, 0x174BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174BC8u;
label_174bc8:
    // 0x174bc8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x174bc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174bcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x174bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174bd0: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x174BD0u;
    {
        const bool branch_taken_0x174bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x174bd0) {
            ctx->pc = 0x174BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174BD0u;
            // 0x174bd4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174C18u;
            goto label_174c18;
        }
    }
    ctx->pc = 0x174BD8u;
    // 0x174bd8: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x174bd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x174bdc: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x174BDCu;
    {
        const bool branch_taken_0x174bdc = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x174bdc) {
            ctx->pc = 0x174BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174BDCu;
            // 0x174be0: 0xa20302f4  sb          $v1, 0x2F4($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174C08u;
            goto label_174c08;
        }
    }
    ctx->pc = 0x174BE4u;
    // 0x174be4: 0x8e0305b0  lw          $v1, 0x5B0($s0)
    ctx->pc = 0x174be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x174be8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x174be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x174bec: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x174becu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x174bf0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x174bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x174bf4: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x174bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x174bf8: 0xae0305b0  sw          $v1, 0x5B0($s0)
    ctx->pc = 0x174bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 3));
    // 0x174bfc: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x174bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x174c00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x174C00u;
    {
        const bool branch_taken_0x174c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C00u;
        // 0x174c04: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174c00) {
            ctx->pc = 0x174C14u;
            goto label_174c14;
        }
    }
    ctx->pc = 0x174C08u;
label_174c08:
    // 0x174c08: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x174c08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x174c0c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x174c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x174c10: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x174c10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_174c14:
    // 0x174c14: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x174c14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_174c18:
    // 0x174c18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x174C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C1Cu;
        // 0x174c20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174C24u;
    // 0x174c24: 0x0  nop
    ctx->pc = 0x174c24u;
    // NOP
    ctx->pc = 0x174c28u;
}
