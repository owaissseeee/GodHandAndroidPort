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

// Function: func_003870E0
// Address: 0x3870e0 - 0x387160
void func_003870E0_0x3870e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003870E0_0x3870e0");
#endif

    switch (ctx->pc) {
        case 0x3870fcu: goto label_3870fc;
        case 0x387110u: goto label_387110;
        default: break;
    }

    ctx->pc = 0x3870e0u;

    // 0x3870e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3870e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3870e4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3870e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3870e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3870e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3870ec: 0x48403  sra         $s0, $a0, 16
    ctx->pc = 0x3870ecu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 4), 16));
    // 0x3870f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3870f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3870f4: 0xc0e1d0c  jal         func_387430
    ctx->pc = 0x3870F4u;
    SET_GPR_U32(ctx, 31, 0x3870FCu);
    ctx->pc = 0x3870F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3870F4u;
    // 0x3870f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387430u, 0x3870F4u, 0x3870FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3870FCu;
label_3870fc:
    // 0x3870fc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3870fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x387100: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x387100u;
    {
        const bool branch_taken_0x387100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387100u;
        // 0x387104: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387100) {
            ctx->pc = 0x38714Cu;
            goto label_38714c;
        }
    }
    ctx->pc = 0x387108u;
    // 0x387108: 0xc0dde66  jal         func_377998
    ctx->pc = 0x387108u;
    SET_GPR_U32(ctx, 31, 0x387110u);
    ctx->pc = 0x377998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377998u, 0x387108u, 0x387110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387110u;
label_387110:
    // 0x387110: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x387110u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387114: 0x10e0000c  beqz        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x387114u;
    {
        const bool branch_taken_0x387114 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x387118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387114u;
        // 0x387118: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387114) {
            ctx->pc = 0x387148u;
            goto label_387148;
        }
    }
    ctx->pc = 0x38711Cu;
    // 0x38711c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x38711cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x387120: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x387120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x387124: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x387124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x387128: 0xa4f0000c  sh          $s0, 0xC($a3)
    ctx->pc = 0x387128u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 16));
    // 0x38712c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38712cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387130: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x387130u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x387134: 0xa0e40008  sb          $a0, 0x8($a3)
    ctx->pc = 0x387134u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 8), (uint8_t)GPR_U32(ctx, 4));
    // 0x387138: 0xa0e50009  sb          $a1, 0x9($a3)
    ctx->pc = 0x387138u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 9), (uint8_t)GPR_U32(ctx, 5));
    // 0x38713c: 0xa4e6000a  sh          $a2, 0xA($a3)
    ctx->pc = 0x38713cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10), (uint16_t)GPR_U32(ctx, 6));
    // 0x387140: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x387140u;
    {
        const bool branch_taken_0x387140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387140u;
        // 0x387144: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387140) {
            ctx->pc = 0x38714Cu;
            goto label_38714c;
        }
    }
    ctx->pc = 0x387148u;
label_387148:
    // 0x387148: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x387148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38714c:
    // 0x38714c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38714cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x387150: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x387150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x387154: 0x3e00008  jr          $ra
    ctx->pc = 0x387154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387154u;
        // 0x387158: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38715Cu;
    // 0x38715c: 0x0  nop
    ctx->pc = 0x38715cu;
    // NOP
    ctx->pc = 0x387160u;
}
