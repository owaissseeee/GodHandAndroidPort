#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r607_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r607
{
// Function: getLastedDie__FP7cEmWrapi
// Address: 0x79ac60 - 0x79ad90
void getLastedDie__FP7cEmWrapi_0x79ac60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getLastedDie__FP7cEmWrapi_0x79ac60");
#endif

    switch (ctx->pc) {
        case 0x79acc8u: goto label_79acc8;
        case 0x79ace0u: goto label_79ace0;
        case 0x79acf8u: goto label_79acf8;
        case 0x79ad0cu: goto label_79ad0c;
        case 0x79ad50u: goto label_79ad50;
        default: break;
    }

    ctx->pc = 0x79ac60u;

    // 0x79ac60: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x79ac60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x79ac64: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x79ac64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x79ac68: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x79ac68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac6c: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x79ac6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x79ac70: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x79ac70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x79ac74: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x79ac74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x79ac78: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x79ac78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x79ac7c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x79ac7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x79ac80: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x79ac80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x79ac84: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x79ac84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x79ac88: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x79ac88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x79ac8c: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x79ac8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x79ac90: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x79ac90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x79ac94: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x79ac94u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac98: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x79ac98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x79ac9c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x79ac9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x79aca0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x79aca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x79aca4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x79aca4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aca8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x79aca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x79acac: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x79acacu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79acb0: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x79acb0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x79acb4: 0x3a2e823  subu        $sp, $sp, $v0
    ctx->pc = 0x79acb4u;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x79acb8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x79acb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79acbc: 0x1a600008  blez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x79ACBCu;
    {
        const bool branch_taken_0x79acbc = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x79ACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACBCu;
        // 0x79acc0: 0x3a0b02d  daddu       $s6, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79acbc) {
            ctx->pc = 0x79ACE0u;
            goto label_79ace0;
        }
    }
    ctx->pc = 0x79ACC4u;
    // 0x79acc4: 0x0  nop
    ctx->pc = 0x79acc4u;
    // NOP
label_79acc8:
    // 0x79acc8: 0x2c41821  addu        $v1, $s6, $a0
    ctx->pc = 0x79acc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x79accc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x79acccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x79acd0: 0x93102a  slt         $v0, $a0, $s3
    ctx->pc = 0x79acd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x79acd4: 0x0  nop
    ctx->pc = 0x79acd4u;
    // NOP
    // 0x79acd8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x79ACD8u;
    {
        const bool branch_taken_0x79acd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79ACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACD8u;
        // 0x79acdc: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79acd8) {
            ctx->pc = 0x79ACC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79acc8;
        }
    }
    ctx->pc = 0x79ACE0u;
label_79ace0:
    // 0x79ace0: 0x1a600014  blez        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x79ACE0u;
    {
        const bool branch_taken_0x79ace0 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x79ACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACE0u;
        // 0x79ace4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ace0) {
            ctx->pc = 0x79AD34u;
            goto label_79ad34;
        }
    }
    ctx->pc = 0x79ACE8u;
    // 0x79ace8: 0x8fd20000  lw          $s2, 0x0($fp)
    ctx->pc = 0x79ace8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x79acec: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x79acecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79acf0: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x79acf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79acf4: 0x0  nop
    ctx->pc = 0x79acf4u;
    // NOP
label_79acf8:
    // 0x79acf8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x79acf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79acfc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x79ACFCu;
    {
        const bool branch_taken_0x79acfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79acfc) {
            ctx->pc = 0x79AD00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79ACFCu;
            // 0x79ad00: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AD24u;
            goto label_79ad24;
        }
    }
    ctx->pc = 0x79AD04u;
    // 0x79ad04: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79AD04u;
    SET_GPR_U32(ctx, 31, 0x79AD0Cu);
    ctx->pc = 0x79AD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD04u;
    // 0x79ad08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79AD04u, 0x79AD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD0Cu;
label_79ad0c:
    // 0x79ad0c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79AD0Cu;
    {
        const bool branch_taken_0x79ad0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79ad0c) {
            ctx->pc = 0x79AD10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AD0Cu;
            // 0x79ad10: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AD24u;
            goto label_79ad24;
        }
    }
    ctx->pc = 0x79AD14u;
    // 0x79ad14: 0xa2150000  sb          $s5, 0x0($s0)
    ctx->pc = 0x79ad14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 21));
    // 0x79ad18: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x79ad18u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ad1c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x79ad1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x79ad20: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x79ad20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_79ad24:
    // 0x79ad24: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x79ad24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x79ad28: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x79ad28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x79ad2c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x79AD2Cu;
    {
        const bool branch_taken_0x79ad2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD2Cu;
        // 0x79ad30: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad2c) {
            ctx->pc = 0x79ACF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79acf8;
        }
    }
    ctx->pc = 0x79AD34u;
label_79ad34:
    // 0x79ad34: 0x293102a  slt         $v0, $s4, $s3
    ctx->pc = 0x79ad34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x79ad38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79AD38u;
    {
        const bool branch_taken_0x79ad38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD38u;
        // 0x79ad3c: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad38) {
            ctx->pc = 0x79AD58u;
            goto label_79ad58;
        }
    }
    ctx->pc = 0x79AD40u;
    // 0x79ad40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79ad40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ad44: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x79ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
    // 0x79ad48: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79AD48u;
    SET_GPR_U32(ctx, 31, 0x79AD50u);
    ctx->pc = 0x79AD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD48u;
    // 0x79ad4c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AD48u, 0x79AD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD50u;
label_79ad50:
    // 0x79ad50: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x79AD50u;
    {
        const bool branch_taken_0x79ad50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79ad50) {
            ctx->pc = 0x79ACE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ace0;
        }
    }
    ctx->pc = 0x79AD58u;
label_79ad58:
    // 0x79ad58: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x79ad58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ad5c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x79ad5cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ad60: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x79ad60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79ad64: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x79ad64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x79ad68: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x79ad68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79ad6c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x79ad6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79ad70: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x79ad70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79ad74: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x79ad74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79ad78: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x79ad78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79ad7c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x79ad7cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79ad80: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x79ad80u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79ad84: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x79ad84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79ad88: 0x3e00008  jr          $ra
    ctx->pc = 0x79AD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD88u;
        // 0x79ad8c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AD88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AD90u;
}
} // namespace gh_r607
