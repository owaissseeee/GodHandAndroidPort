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

// Function: func_00377CB8
// Address: 0x377cb8 - 0x377d58
void func_00377CB8_0x377cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00377CB8_0x377cb8");
#endif

    switch (ctx->pc) {
        case 0x377cf8u: goto label_377cf8;
        case 0x377d1cu: goto label_377d1c;
        default: break;
    }

    ctx->pc = 0x377cb8u;

    // 0x377cb8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x377cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x377cbc: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x377cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x377cc0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x377cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x377cc4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x377cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x377cc8: 0x3c11001f  lui         $s1, 0x1F
    ctx->pc = 0x377cc8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)31 << 16));
    // 0x377ccc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x377cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x377cd0: 0x2450a7d4  addiu       $s0, $v0, -0x582C
    ctx->pc = 0x377cd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944724));
    // 0x377cd4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x377cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x377cd8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x377cd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377cdc: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x377cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x377ce0: 0x24130080  addiu       $s3, $zero, 0x80
    ctx->pc = 0x377ce0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x377ce4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x377ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x377ce8: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x377ce8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x377cec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x377cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x377cf0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x377cf0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x377cf4: 0x3c14fffe  lui         $s4, 0xFFFE
    ctx->pc = 0x377cf4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65534 << 16));
label_377cf8:
    // 0x377cf8: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x377cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x377cfc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x377cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x377d00: 0xa6150000  sh          $s5, 0x0($s0)
    ctx->pc = 0x377d00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 21));
    // 0x377d04: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x377d04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x377d08: 0xa6130004  sh          $s3, 0x4($s0)
    ctx->pc = 0x377d08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 19));
    // 0x377d0c: 0xa6130006  sh          $s3, 0x6($s0)
    ctx->pc = 0x377d0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 19));
    // 0x377d10: 0xa6000008  sh          $zero, 0x8($s0)
    ctx->pc = 0x377d10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x377d14: 0xc0dd2b8  jal         func_374AE0
    ctx->pc = 0x377D14u;
    SET_GPR_U32(ctx, 31, 0x377D1Cu);
    ctx->pc = 0x377D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377D14u;
    // 0x377d18: 0xa600000a  sh          $zero, 0xA($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374AE0u, 0x377D14u, 0x377D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377D1Cu;
label_377d1c:
    // 0x377d1c: 0xa6120014  sh          $s2, 0x14($s0)
    ctx->pc = 0x377d1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 18));
    // 0x377d20: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x377d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x377d24: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x377d24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x377d28: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x377d28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x377d2c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x377D2Cu;
    {
        const bool branch_taken_0x377d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x377D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377D2Cu;
        // 0x377d30: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377d2c) {
            ctx->pc = 0x377CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_377cf8;
        }
    }
    ctx->pc = 0x377D34u;
    // 0x377d34: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x377d34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x377d38: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x377d38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x377d3c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x377d3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x377d40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x377d40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x377d44: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x377d44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x377d48: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x377d48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377d4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x377d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377d50: 0x3e00008  jr          $ra
    ctx->pc = 0x377D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377D50u;
        // 0x377d54: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377D58u;
}
