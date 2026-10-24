#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r606_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r606
{
// Function: getLastedDie__FP7cEmWrapi
// Address: 0x799ef0 - 0x79a020
void getLastedDie__FP7cEmWrapi_0x799ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getLastedDie__FP7cEmWrapi_0x799ef0");
#endif

    switch (ctx->pc) {
        case 0x799f58u: goto label_799f58;
        case 0x799f70u: goto label_799f70;
        case 0x799f88u: goto label_799f88;
        case 0x799f9cu: goto label_799f9c;
        case 0x799fe0u: goto label_799fe0;
        default: break;
    }

    ctx->pc = 0x799ef0u;

    // 0x799ef0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x799ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x799ef4: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x799ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x799ef8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x799ef8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799efc: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x799efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x799f00: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x799f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x799f04: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x799f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x799f08: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x799f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x799f0c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x799f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x799f10: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x799f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x799f14: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x799f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x799f18: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x799f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x799f1c: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x799f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x799f20: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x799f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x799f24: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x799f24u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f28: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x799f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x799f2c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x799f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x799f30: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x799f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x799f34: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x799f34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x799f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x799f3c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x799f3cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f40: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x799f40u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x799f44: 0x3a2e823  subu        $sp, $sp, $v0
    ctx->pc = 0x799f44u;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x799f48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x799f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f4c: 0x1a600008  blez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x799F4Cu;
    {
        const bool branch_taken_0x799f4c = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x799F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F4Cu;
        // 0x799f50: 0x3a0b02d  daddu       $s6, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f4c) {
            ctx->pc = 0x799F70u;
            goto label_799f70;
        }
    }
    ctx->pc = 0x799F54u;
    // 0x799f54: 0x0  nop
    ctx->pc = 0x799f54u;
    // NOP
label_799f58:
    // 0x799f58: 0x2c41821  addu        $v1, $s6, $a0
    ctx->pc = 0x799f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x799f5c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x799f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x799f60: 0x93102a  slt         $v0, $a0, $s3
    ctx->pc = 0x799f60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x799f64: 0x0  nop
    ctx->pc = 0x799f64u;
    // NOP
    // 0x799f68: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x799F68u;
    {
        const bool branch_taken_0x799f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F68u;
        // 0x799f6c: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f68) {
            ctx->pc = 0x799F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799f58;
        }
    }
    ctx->pc = 0x799F70u;
label_799f70:
    // 0x799f70: 0x1a600014  blez        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x799F70u;
    {
        const bool branch_taken_0x799f70 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x799F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F70u;
        // 0x799f74: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f70) {
            ctx->pc = 0x799FC4u;
            goto label_799fc4;
        }
    }
    ctx->pc = 0x799F78u;
    // 0x799f78: 0x8fd20000  lw          $s2, 0x0($fp)
    ctx->pc = 0x799f78u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x799f7c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x799f7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799f80: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x799f80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f84: 0x0  nop
    ctx->pc = 0x799f84u;
    // NOP
label_799f88:
    // 0x799f88: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x799f88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799f8c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x799F8Cu;
    {
        const bool branch_taken_0x799f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799f8c) {
            ctx->pc = 0x799F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799F8Cu;
            // 0x799f90: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799FB4u;
            goto label_799fb4;
        }
    }
    ctx->pc = 0x799F94u;
    // 0x799f94: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799F94u;
    SET_GPR_U32(ctx, 31, 0x799F9Cu);
    ctx->pc = 0x799F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F94u;
    // 0x799f98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799F94u, 0x799F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F9Cu;
label_799f9c:
    // 0x799f9c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x799F9Cu;
    {
        const bool branch_taken_0x799f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799f9c) {
            ctx->pc = 0x799FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799F9Cu;
            // 0x799fa0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799FB4u;
            goto label_799fb4;
        }
    }
    ctx->pc = 0x799FA4u;
    // 0x799fa4: 0xa2150000  sb          $s5, 0x0($s0)
    ctx->pc = 0x799fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 21));
    // 0x799fa8: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x799fa8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fac: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x799facu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x799fb0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x799fb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_799fb4:
    // 0x799fb4: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x799fb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x799fb8: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x799fb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x799fbc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x799FBCu;
    {
        const bool branch_taken_0x799fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FBCu;
        // 0x799fc0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fbc) {
            ctx->pc = 0x799F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799f88;
        }
    }
    ctx->pc = 0x799FC4u;
label_799fc4:
    // 0x799fc4: 0x293102a  slt         $v0, $s4, $s3
    ctx->pc = 0x799fc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x799fc8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x799FC8u;
    {
        const bool branch_taken_0x799fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FC8u;
        // 0x799fcc: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fc8) {
            ctx->pc = 0x799FE8u;
            goto label_799fe8;
        }
    }
    ctx->pc = 0x799FD0u;
    // 0x799fd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799fd4: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x799fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
    // 0x799fd8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799FD8u;
    SET_GPR_U32(ctx, 31, 0x799FE0u);
    ctx->pc = 0x799FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FD8u;
    // 0x799fdc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799FD8u, 0x799FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FE0u;
label_799fe0:
    // 0x799fe0: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x799FE0u;
    {
        const bool branch_taken_0x799fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x799fe0) {
            ctx->pc = 0x799F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799f70;
        }
    }
    ctx->pc = 0x799FE8u;
label_799fe8:
    // 0x799fe8: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x799fe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fec: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x799fecu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ff0: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x799ff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x799ff4: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x799ff4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x799ff8: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x799ff8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x799ffc: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x799ffcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79a000: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x79a000u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79a004: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x79a004u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79a008: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x79a008u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79a00c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x79a00cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a010: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x79a010u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a014: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x79a014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a018: 0x3e00008  jr          $ra
    ctx->pc = 0x79A018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A018u;
        // 0x79a01c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A020u;
}
} // namespace gh_r606
