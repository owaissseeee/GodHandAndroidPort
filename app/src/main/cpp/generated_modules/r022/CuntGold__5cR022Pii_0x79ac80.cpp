#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: CuntGold__5cR022Pii
// Address: 0x79ac80 - 0x79ad58
void CuntGold__5cR022Pii_0x79ac80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CuntGold__5cR022Pii_0x79ac80");
#endif

    switch (ctx->pc) {
        case 0x79ad24u: goto label_79ad24;
        default: break;
    }

    ctx->pc = 0x79ac80u;

    // 0x79ac80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79ac80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79ac84: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x79ac84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x79ac88: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79ac88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79ac8c: 0x344286a0  ori         $v0, $v0, 0x86A0
    ctx->pc = 0x79ac8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34464);
    // 0x79ac90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79ac90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x79ac94: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x79ac94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79ac98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79ac9c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x79ac9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aca0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x79aca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79aca4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x79aca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x79aca8: 0x51182a  slt         $v1, $v0, $s1
    ctx->pc = 0x79aca8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x79acac: 0x54600014  bnel        $v1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x79ACACu;
    {
        const bool branch_taken_0x79acac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79acac) {
            ctx->pc = 0x79ACB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79ACACu;
            // 0x79acb0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AD00u;
            goto label_79ad00;
        }
    }
    ctx->pc = 0x79ACB4u;
    // 0x79acb4: 0x24832710  addiu       $v1, $a0, 0x2710
    ctx->pc = 0x79acb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 10000));
    // 0x79acb8: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x79acb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x79acbc: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x79ACBCu;
    {
        const bool branch_taken_0x79acbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79acbc) {
            ctx->pc = 0x79ACC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79ACBCu;
            // 0x79acc0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AD00u;
            goto label_79ad00;
        }
    }
    ctx->pc = 0x79ACC4u;
    // 0x79acc4: 0x248303e8  addiu       $v1, $a0, 0x3E8
    ctx->pc = 0x79acc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1000));
    // 0x79acc8: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x79acc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x79accc: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x79ACCCu;
    {
        const bool branch_taken_0x79accc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79accc) {
            ctx->pc = 0x79ACD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79ACCCu;
            // 0x79acd0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AD00u;
            goto label_79ad00;
        }
    }
    ctx->pc = 0x79ACD4u;
    // 0x79acd4: 0x24830064  addiu       $v1, $a0, 0x64
    ctx->pc = 0x79acd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
    // 0x79acd8: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x79acd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x79acdc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x79ACDCu;
    {
        const bool branch_taken_0x79acdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79acdc) {
            ctx->pc = 0x79ACE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79ACDCu;
            // 0x79ace0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AD00u;
            goto label_79ad00;
        }
    }
    ctx->pc = 0x79ACE4u;
    // 0x79ace4: 0x2483000a  addiu       $v1, $a0, 0xA
    ctx->pc = 0x79ace4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
    // 0x79ace8: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x79ace8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x79acec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79ACECu;
    {
        const bool branch_taken_0x79acec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACECu;
        // 0x79acf0: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79acec) {
            ctx->pc = 0x79ACFCu;
            goto label_79acfc;
        }
    }
    ctx->pc = 0x79ACF4u;
    // 0x79acf4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79ACF4u;
    {
        const bool branch_taken_0x79acf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACF4u;
        // 0x79acf8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79acf4) {
            ctx->pc = 0x79AD00u;
            goto label_79ad00;
        }
    }
    ctx->pc = 0x79ACFCu;
label_79acfc:
    // 0x79acfc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x79acfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_79ad00:
    // 0x79ad00: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79ad00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79ad04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79ad04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ad08: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79ad08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79ad0c: 0x24060165  addiu       $a2, $zero, 0x165
    ctx->pc = 0x79ad0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 357));
    // 0x79ad10: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79ad10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79ad14: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79ad14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79ad18: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79ad18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ad1c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79AD1Cu;
    SET_GPR_U32(ctx, 31, 0x79AD24u);
    ctx->pc = 0x79AD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD1Cu;
    // 0x79ad20: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79AD1Cu, 0x79AD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD24u;
label_79ad24:
    // 0x79ad24: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x79ad24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79ad28: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x79ad28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79ad2c: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AD2Cu;
    {
        const bool branch_taken_0x79ad2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79ad2c) {
            ctx->pc = 0x79AD30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AD2Cu;
            // 0x79ad30: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AD3Cu;
            goto label_79ad3c;
        }
    }
    ctx->pc = 0x79AD34u;
    // 0x79ad34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79AD34u;
    {
        const bool branch_taken_0x79ad34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD34u;
        // 0x79ad38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad34) {
            ctx->pc = 0x79AD40u;
            goto label_79ad40;
        }
    }
    ctx->pc = 0x79AD3Cu;
label_79ad3c:
    // 0x79ad3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79ad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79ad40:
    // 0x79ad40: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79ad40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79ad44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79ad44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79ad48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79ad48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79ad4c: 0x3e00008  jr          $ra
    ctx->pc = 0x79AD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD4Cu;
        // 0x79ad50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AD4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AD54u;
    // 0x79ad54: 0x0  nop
    ctx->pc = 0x79ad54u;
    // NOP
    ctx->pc = 0x79ad58u;
}
} // namespace gh_r022
