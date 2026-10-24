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

// Function: deci2Putchar
// Address: 0x3b0d80 - 0x3b0e30
void deci2Putchar_0x3b0d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("deci2Putchar_0x3b0d80");
#endif

    switch (ctx->pc) {
        case 0x3b0dc0u: goto label_3b0dc0;
        default: break;
    }

    ctx->pc = 0x3b0d80u;

    // 0x3b0d80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b0d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b0d84: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b0d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b0d88: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x3b0d88u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x3b0d8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b0d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b0d90: 0x8e25ae4c  lw          $a1, -0x51B4($s1)
    ctx->pc = 0x3b0d90u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FAE4Cu));
    // 0x3b0d94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b0d94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0d98: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b0d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b0d9c: 0x28a2007e  slti        $v0, $a1, 0x7E
    ctx->pc = 0x3b0d9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)126) ? 1 : 0);
    // 0x3b0da0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B0DA0u;
    {
        const bool branch_taken_0x3b0da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0DA0u;
        // 0x3b0da4: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0da0) {
            ctx->pc = 0x3B0DC8u;
            goto label_3b0dc8;
        }
    }
    ctx->pc = 0x3B0DA8u;
    // 0x3b0da8: 0x3c120078  lui         $s2, 0x78
    ctx->pc = 0x3b0da8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)120 << 16));
    // 0x3b0dac: 0xae20ae4c  sw          $zero, -0x51B4($s1)
    ctx->pc = 0x3b0dacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294946380), GPR_U32(ctx, 0));
    // 0x3b0db0: 0x2642e3a0  addiu       $v0, $s2, -0x1C60
    ctx->pc = 0x3b0db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960032));
    // 0x3b0db4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b0db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0db8: 0xc0edeaa  jal         func_3B7AA8
    ctx->pc = 0x3B0DB8u;
    SET_GPR_U32(ctx, 31, 0x3B0DC0u);
    ctx->pc = 0x3B0DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0DB8u;
    // 0x3b0dbc: 0xa040007f  sb          $zero, 0x7F($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 127), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7AA8u, 0x3B0DB8u, 0x3B0DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0DC0u;
label_3b0dc0:
    // 0x3b0dc0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3B0DC0u;
    {
        const bool branch_taken_0x3b0dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0DC0u;
        // 0x3b0dc4: 0x8e25ae4c  lw          $a1, -0x51B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0dc0) {
            ctx->pc = 0x3B0DCCu;
            goto label_3b0dcc;
        }
    }
    ctx->pc = 0x3B0DC8u;
label_3b0dc8:
    // 0x3b0dc8: 0x3c120078  lui         $s2, 0x78
    ctx->pc = 0x3b0dc8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)120 << 16));
label_3b0dcc:
    // 0x3b0dcc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3b0dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3b0dd0: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3B0DD0u;
    {
        const bool branch_taken_0x3b0dd0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B0DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0DD0u;
        // 0x3b0dd4: 0x2642e3a0  addiu       $v0, $s2, -0x1C60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0dd0) {
            ctx->pc = 0x3B0E08u;
            goto label_3b0e08;
        }
    }
    ctx->pc = 0x3B0DD8u;
    // 0x3b0dd8: 0x2644e3a0  addiu       $a0, $s2, -0x1C60
    ctx->pc = 0x3b0dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960032));
    // 0x3b0ddc: 0xae20ae4c  sw          $zero, -0x51B4($s1)
    ctx->pc = 0x3b0ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294946380), GPR_U32(ctx, 0));
    // 0x3b0de0: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x3b0de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3b0de4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b0de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b0de8: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x3b0de8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x3b0dec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3b0decu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0df0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b0df0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b0df4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b0df4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b0df8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b0df8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b0dfc: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3b0dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b0e00: 0x80edeaa  j           func_3B7AA8
    ctx->pc = 0x3B0E00u;
    ctx->pc = 0x3B0E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0E00u;
    // 0x3b0e04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7AA8u, 0x3B0E00u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B0E08u;
label_3b0e08:
    // 0x3b0e08: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x3b0e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3b0e0c: 0xae23ae4c  sw          $v1, -0x51B4($s1)
    ctx->pc = 0x3b0e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294946380), GPR_U32(ctx, 3));
    // 0x3b0e10: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3b0e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3b0e14: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x3b0e14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x3b0e18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b0e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b0e1c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b0e1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b0e20: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b0e20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b0e24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b0e24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b0e28: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0E28u;
        // 0x3b0e2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B0E30u;
}
