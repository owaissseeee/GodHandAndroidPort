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

// Function: func_00384EC8
// Address: 0x384ec8 - 0x384fa8
void func_00384EC8_0x384ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00384EC8_0x384ec8");
#endif

    switch (ctx->pc) {
        case 0x384efcu: goto label_384efc;
        case 0x384f10u: goto label_384f10;
        case 0x384f3cu: goto label_384f3c;
        case 0x384f4cu: goto label_384f4c;
        case 0x384f5cu: goto label_384f5c;
        case 0x384f6cu: goto label_384f6c;
        case 0x384f7cu: goto label_384f7c;
        default: break;
    }

    ctx->pc = 0x384ec8u;

    // 0x384ec8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x384ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x384ecc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x384eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x384ed0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x384ed0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384ed4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x384ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x384ed8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x384ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x384edc: 0x26300014  addiu       $s0, $s1, 0x14
    ctx->pc = 0x384edcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x384ee0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x384ee0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384ee4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x384ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x384ee8: 0x2632004c  addiu       $s2, $s1, 0x4C
    ctx->pc = 0x384ee8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x384eec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x384eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384ef0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x384ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x384ef4: 0xc0e02ba  jal         func_380AE8
    ctx->pc = 0x384EF4u;
    SET_GPR_U32(ctx, 31, 0x384EFCu);
    ctx->pc = 0x384EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384EF4u;
    // 0x384ef8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380AE8u, 0x384EF4u, 0x384EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384EFCu;
label_384efc:
    // 0x384efc: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x384EFCu;
    {
        const bool branch_taken_0x384efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x384efc) {
            ctx->pc = 0x384F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x384EFCu;
            // 0x384f00: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x384F84u;
            goto label_384f84;
        }
    }
    ctx->pc = 0x384F04u;
    // 0x384f04: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x384f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x384f08: 0xc0cac62  jal         func_32B188
    ctx->pc = 0x384F08u;
    SET_GPR_U32(ctx, 31, 0x384F10u);
    ctx->pc = 0x384F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384F08u;
    // 0x384f0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B188u, 0x384F08u, 0x384F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384F10u;
label_384f10:
    // 0x384f10: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x384f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x384f14: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x384f14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x384f18: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x384f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x384f1c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x384f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x384f20: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x384f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x384f24: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x384f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x384f28: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x384f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x384f2c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x384f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x384f30: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x384f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x384f34: 0xc0caa7c  jal         func_32A9F0
    ctx->pc = 0x384F34u;
    SET_GPR_U32(ctx, 31, 0x384F3Cu);
    ctx->pc = 0x384F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384F34u;
    // 0x384f38: 0x86250004  lh          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A9F0u, 0x384F34u, 0x384F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384F3Cu;
label_384f3c:
    // 0x384f3c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x384f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x384f40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x384f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384f44: 0xc0ca9b4  jal         func_32A6D0
    ctx->pc = 0x384F44u;
    SET_GPR_U32(ctx, 31, 0x384F4Cu);
    ctx->pc = 0x384F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384F44u;
    // 0x384f48: 0x86260008  lh          $a2, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A6D0u, 0x384F44u, 0x384F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384F4Cu;
label_384f4c:
    // 0x384f4c: 0x8626000a  lh          $a2, 0xA($s1)
    ctx->pc = 0x384f4cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x384f50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x384f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x384f54: 0xc0ca9b4  jal         func_32A6D0
    ctx->pc = 0x384F54u;
    SET_GPR_U32(ctx, 31, 0x384F5Cu);
    ctx->pc = 0x384F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384F54u;
    // 0x384f58: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A6D0u, 0x384F54u, 0x384F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384F5Cu;
label_384f5c:
    // 0x384f5c: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x384f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x384f60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x384f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384f64: 0xc0cacc0  jal         func_32B300
    ctx->pc = 0x384F64u;
    SET_GPR_U32(ctx, 31, 0x384F6Cu);
    ctx->pc = 0x384F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384F64u;
    // 0x384f68: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B300u, 0x384F64u, 0x384F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384F6Cu;
label_384f6c:
    // 0x384f6c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x384f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x384f70: 0x8e250084  lw          $a1, 0x84($s1)
    ctx->pc = 0x384f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x384f74: 0xc0caf70  jal         func_32BDC0
    ctx->pc = 0x384F74u;
    SET_GPR_U32(ctx, 31, 0x384F7Cu);
    ctx->pc = 0x384F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384F74u;
    // 0x384f78: 0x92660007  lbu         $a2, 0x7($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BDC0u, 0x384F74u, 0x384F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384F7Cu;
label_384f7c:
    // 0x384f7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x384F7Cu;
    {
        const bool branch_taken_0x384f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F7Cu;
        // 0x384f80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384f7c) {
            ctx->pc = 0x384F88u;
            goto label_384f88;
        }
    }
    ctx->pc = 0x384F84u;
label_384f84:
    // 0x384f84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x384f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_384f88:
    // 0x384f88: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x384f88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x384f8c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x384f8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x384f90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x384f90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x384f94: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x384f94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x384f98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x384f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x384f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x384F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F9Cu;
        // 0x384fa0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384FA4u;
    // 0x384fa4: 0x0  nop
    ctx->pc = 0x384fa4u;
    // NOP
    ctx->pc = 0x384fa8u;
}
