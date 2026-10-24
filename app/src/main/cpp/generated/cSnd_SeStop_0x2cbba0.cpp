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

// Function: cSnd_SeStop
// Address: 0x2cbba0 - 0x2cbc20
void cSnd_SeStop_0x2cbba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_SeStop_0x2cbba0");
#endif

    switch (ctx->pc) {
        case 0x2cbbc8u: goto label_2cbbc8;
        case 0x2cbbe4u: goto label_2cbbe4;
        default: break;
    }

    ctx->pc = 0x2cbba0u;

    // 0x2cbba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cbba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cbba4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2cbba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2cbba8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cbba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cbbac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2cbbacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbbb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cbbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cbbb4: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2CBBB4u;
    {
        const bool branch_taken_0x2cbbb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBBB4u;
        // 0x2cbbb8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbbb4) {
            ctx->pc = 0x2CBC08u;
            goto label_2cbc08;
        }
    }
    ctx->pc = 0x2CBBBCu;
    // 0x2cbbbc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2cbbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2cbbc0: 0xc0dd414  jal         func_375050
    ctx->pc = 0x2CBBC0u;
    SET_GPR_U32(ctx, 31, 0x2CBBC8u);
    ctx->pc = 0x2CBBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBBC0u;
    // 0x2cbbc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375050u, 0x2CBBC0u, 0x2CBBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBBC8u;
label_2cbbc8:
    // 0x2cbbc8: 0x8e230140  lw          $v1, 0x140($s1)
    ctx->pc = 0x2cbbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x2cbbcc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CBBCCu;
    {
        const bool branch_taken_0x2cbbcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBBCCu;
        // 0x2cbbd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbbcc) {
            ctx->pc = 0x2CBBE0u;
            goto label_2cbbe0;
        }
    }
    ctx->pc = 0x2CBBD4u;
    // 0x2cbbd4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2CBBD4u;
    {
        const bool branch_taken_0x2cbbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBBD4u;
        // 0x2cbbd8: 0xae300140  sw          $s0, 0x140($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbbd4) {
            ctx->pc = 0x2CBC08u;
            goto label_2cbc08;
        }
    }
    ctx->pc = 0x2CBBDCu;
    // 0x2cbbdc: 0x0  nop
    ctx->pc = 0x2cbbdcu;
    // NOP
label_2cbbe0:
    // 0x2cbbe0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2cbbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2cbbe4:
    // 0x2cbbe4: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x2cbbe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2cbbe8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CBBE8u;
    {
        const bool branch_taken_0x2cbbe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBBE8u;
        // 0x2cbbec: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbbe8) {
            ctx->pc = 0x2CBC08u;
            goto label_2cbc08;
        }
    }
    ctx->pc = 0x2CBBF0u;
    // 0x2cbbf0: 0x26230140  addiu       $v1, $s1, 0x140
    ctx->pc = 0x2cbbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    // 0x2cbbf4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2cbbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cbbf8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cbbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cbbfc: 0x5480fff9  bnel        $a0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2CBBFCu;
    {
        const bool branch_taken_0x2cbbfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cbbfc) {
            ctx->pc = 0x2CBC00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBBFCu;
            // 0x2cbc00: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CBBE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cbbe4;
        }
    }
    ctx->pc = 0x2CBC04u;
    // 0x2cbc04: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2cbc04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_2cbc08:
    // 0x2cbc08: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2cbc08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cbc0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cbc0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cbc10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cbc10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cbc14: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBC14u;
        // 0x2cbc18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBC1Cu;
    // 0x2cbc1c: 0x0  nop
    ctx->pc = 0x2cbc1cu;
    // NOP
    ctx->pc = 0x2cbc20u;
}
