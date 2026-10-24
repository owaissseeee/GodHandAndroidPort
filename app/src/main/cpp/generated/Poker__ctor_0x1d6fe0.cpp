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

// Function: Poker__ctor
// Address: 0x1d6fe0 - 0x1d70d0
void Poker__ctor_0x1d6fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Poker__ctor_0x1d6fe0");
#endif

    switch (ctx->pc) {
        case 0x1d7008u: goto label_1d7008;
        case 0x1d7010u: goto label_1d7010;
        case 0x1d701cu: goto label_1d701c;
        case 0x1d7030u: goto label_1d7030;
        case 0x1d7060u: goto label_1d7060;
        case 0x1d7088u: goto label_1d7088;
        default: break;
    }

    ctx->pc = 0x1d6fe0u;

    // 0x1d6fe0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d6fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d6fe4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d6fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d6fe8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d6fe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6fec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d6fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1d6ff0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d6ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d6ff4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1d6ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1d6ff8: 0x24120033  addiu       $s2, $zero, 0x33
    ctx->pc = 0x1d6ff8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x1d6ffc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d7000: 0xc077e16  jal         func_1DF858
    ctx->pc = 0x1D7000u;
    SET_GPR_U32(ctx, 31, 0x1D7008u);
    ctx->pc = 0x1D7004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7000u;
    // 0x1d7004: 0x26302e64  addiu       $s0, $s1, 0x2E64 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 11876));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF858u, 0x1D7000u, 0x1D7008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7008u;
label_1d7008:
    // 0x1d7008: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1d7008u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d700c: 0x0  nop
    ctx->pc = 0x1d700cu;
    // NOP
label_1d7010:
    // 0x1d7010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7014: 0xc075b6c  jal         func_1D6DB0
    ctx->pc = 0x1D7014u;
    SET_GPR_U32(ctx, 31, 0x1D701Cu);
    ctx->pc = 0x1D7018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7014u;
    // 0x1d7018: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6DB0u, 0x1D7014u, 0x1D701Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D701Cu;
label_1d701c:
    // 0x1d701c: 0x0  nop
    ctx->pc = 0x1d701cu;
    // NOP
    // 0x1d7020: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D7020u;
    {
        const bool branch_taken_0x1d7020 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1D7024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7020u;
        // 0x1d7024: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7020) {
            ctx->pc = 0x1D7010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7010;
        }
    }
    ctx->pc = 0x1D7028u;
    // 0x1d7028: 0xc075b6c  jal         func_1D6DB0
    ctx->pc = 0x1D7028u;
    SET_GPR_U32(ctx, 31, 0x1D7030u);
    ctx->pc = 0x1D702Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7028u;
    // 0x1d702c: 0x26243018  addiu       $a0, $s1, 0x3018 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6DB0u, 0x1D7028u, 0x1D7030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7030u;
label_1d7030:
    // 0x1d7030: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1d7030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d7034: 0xae203020  sw          $zero, 0x3020($s1)
    ctx->pc = 0x1d7034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12320), GPR_U32(ctx, 0));
    // 0x1d7038: 0xae223048  sw          $v0, 0x3048($s1)
    ctx->pc = 0x1d7038u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12360), GPR_U32(ctx, 2));
    // 0x1d703c: 0x26243052  addiu       $a0, $s1, 0x3052
    ctx->pc = 0x1d703cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12370));
    // 0x1d7040: 0xa2203024  sb          $zero, 0x3024($s1)
    ctx->pc = 0x1d7040u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12324), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d7044: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d7044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d7048: 0xa2203025  sb          $zero, 0x3025($s1)
    ctx->pc = 0x1d7048u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d704c: 0x26223014  addiu       $v0, $s1, 0x3014
    ctx->pc = 0x1d704cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12308));
    // 0x1d7050: 0xae20304c  sw          $zero, 0x304C($s1)
    ctx->pc = 0x1d7050u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12364), GPR_U32(ctx, 0));
    // 0x1d7054: 0xae203034  sw          $zero, 0x3034($s1)
    ctx->pc = 0x1d7054u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12340), GPR_U32(ctx, 0));
    // 0x1d7058: 0xae203038  sw          $zero, 0x3038($s1)
    ctx->pc = 0x1d7058u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12344), GPR_U32(ctx, 0));
    // 0x1d705c: 0x0  nop
    ctx->pc = 0x1d705cu;
    // NOP
label_1d7060:
    // 0x1d7060: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d7060u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d7064: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d7064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d7068: 0x0  nop
    ctx->pc = 0x1d7068u;
    // NOP
    // 0x1d706c: 0x0  nop
    ctx->pc = 0x1d706cu;
    // NOP
    // 0x1d7070: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D7070u;
    {
        const bool branch_taken_0x1d7070 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1D7074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7070u;
        // 0x1d7074: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7070) {
            ctx->pc = 0x1D7060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7060;
        }
    }
    ctx->pc = 0x1D7078u;
    // 0x1d7078: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x1d7078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1d707c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d707cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d7080: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x1d7080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1d7084: 0x0  nop
    ctx->pc = 0x1d7084u;
    // NOP
label_1d7088:
    // 0x1d7088: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x1d7088u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1d708c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d708cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d7090: 0x0  nop
    ctx->pc = 0x1d7090u;
    // NOP
    // 0x1d7094: 0x0  nop
    ctx->pc = 0x1d7094u;
    // NOP
    // 0x1d7098: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D7098u;
    {
        const bool branch_taken_0x1d7098 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1D709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7098u;
        // 0x1d709c: 0x2442fffe  addiu       $v0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7098) {
            ctx->pc = 0x1D7088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7088;
        }
    }
    ctx->pc = 0x1D70A0u;
    // 0x1d70a0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1d70a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70a4: 0xa2203050  sb          $zero, 0x3050($s1)
    ctx->pc = 0x1d70a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12368), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d70a8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1d70a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d70ac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d70acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d70b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d70b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d70b4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1d70b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d70b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d70b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d70bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D70BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D70C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70BCu;
        // 0x1d70c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D70BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D70C4u;
    // 0x1d70c4: 0x0  nop
    ctx->pc = 0x1d70c4u;
    // NOP
    // 0x1d70c8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1d70c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1d70cc: 0x0  nop
    ctx->pc = 0x1d70ccu;
    // NOP
    ctx->pc = 0x1d70d0u;
}
