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

// Function: cSeData_PrepareDecode
// Address: 0x2cfbc0 - 0x2cfc68
void cSeData_PrepareDecode_0x2cfbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSeData_PrepareDecode_0x2cfbc0");
#endif

    switch (ctx->pc) {
        case 0x2cfbd4u: goto label_2cfbd4;
        case 0x2cfbfcu: goto label_2cfbfc;
        case 0x2cfc20u: goto label_2cfc20;
        case 0x2cfc34u: goto label_2cfc34;
        case 0x2cfc48u: goto label_2cfc48;
        default: break;
    }

    ctx->pc = 0x2cfbc0u;

    // 0x2cfbc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cfbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cfbc4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cfbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2cfbc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cfbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cfbcc: 0xc0b3f1a  jal         func_2CFC68
    ctx->pc = 0x2CFBCCu;
    SET_GPR_U32(ctx, 31, 0x2CFBD4u);
    ctx->pc = 0x2CFBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFBCCu;
    // 0x2cfbd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC68u, 0x2CFBCCu, 0x2CFBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFBD4u;
label_2cfbd4:
    // 0x2cfbd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cfbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cfbd8: 0x1043001d  beq         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2CFBD8u;
    {
        const bool branch_taken_0x2cfbd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CFBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFBD8u;
        // 0x2cfbdc: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfbd8) {
            ctx->pc = 0x2CFC50u;
            goto label_2cfc50;
        }
    }
    ctx->pc = 0x2CFBE0u;
    // 0x2cfbe0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2cfbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2cfbe4: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x2cfbe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2cfbe8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2cfbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cfbec: 0x2484008e  addiu       $a0, $a0, 0x8E
    ctx->pc = 0x2cfbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 142));
    // 0x2cfbf0: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x2cfbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2cfbf4: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x2CFBF4u;
    SET_GPR_U32(ctx, 31, 0x2CFBFCu);
    ctx->pc = 0x2CFBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFBF4u;
    // 0x2cfbf8: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x2CFBF4u, 0x2CFBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFBFCu;
label_2cfbfc:
    // 0x2cfbfc: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x2cfbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x2cfc00: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2cfc00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2cfc04: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2cfc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2cfc08: 0x24840d40  addiu       $a0, $a0, 0xD40
    ctx->pc = 0x2cfc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3392));
    // 0x2cfc0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cfc0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfc10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cfc10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfc14: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x2cfc14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2cfc18: 0xc07fe70  jal         func_1FF9C0
    ctx->pc = 0x2CFC18u;
    SET_GPR_U32(ctx, 31, 0x2CFC20u);
    ctx->pc = 0x2CFC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFC18u;
    // 0x2cfc1c: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9C0u, 0x2CFC18u, 0x2CFC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFC20u;
label_2cfc20:
    // 0x2cfc20: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x2cfc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2cfc24: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2cfc24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfc28: 0x8e070024  lw          $a3, 0x24($s0)
    ctx->pc = 0x2cfc28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2cfc2c: 0xc0c8a9a  jal         func_322A68
    ctx->pc = 0x2CFC2Cu;
    SET_GPR_U32(ctx, 31, 0x2CFC34u);
    ctx->pc = 0x2CFC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFC2Cu;
    // 0x2cfc30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322A68u, 0x2CFC2Cu, 0x2CFC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFC34u;
label_2cfc34:
    // 0x2cfc34: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CFC34u;
    {
        const bool branch_taken_0x2cfc34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CFC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFC34u;
        // 0x2cfc38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfc34) {
            ctx->pc = 0x2CFC54u;
            goto label_2cfc54;
        }
    }
    ctx->pc = 0x2CFC3Cu;
    // 0x2cfc3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cfc3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfc40: 0xc0b3f2c  jal         func_2CFCB0
    ctx->pc = 0x2CFC40u;
    SET_GPR_U32(ctx, 31, 0x2CFC48u);
    ctx->pc = 0x2CFC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFC40u;
    // 0x2cfc44: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCB0u, 0x2CFC40u, 0x2CFC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFC48u;
label_2cfc48:
    // 0x2cfc48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CFC48u;
    {
        const bool branch_taken_0x2cfc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFC48u;
        // 0x2cfc4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfc48) {
            ctx->pc = 0x2CFC54u;
            goto label_2cfc54;
        }
    }
    ctx->pc = 0x2CFC50u;
label_2cfc50:
    // 0x2cfc50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cfc50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cfc54:
    // 0x2cfc54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cfc54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cfc58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cfc58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cfc5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFC5Cu;
        // 0x2cfc60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFC64u;
    // 0x2cfc64: 0x0  nop
    ctx->pc = 0x2cfc64u;
    // NOP
    ctx->pc = 0x2cfc68u;
}
