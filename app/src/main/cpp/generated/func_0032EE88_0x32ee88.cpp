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

// Function: func_0032EE88
// Address: 0x32ee88 - 0x32ef00
void func_0032EE88_0x32ee88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032EE88_0x32ee88");
#endif

    switch (ctx->pc) {
        case 0x32eeb8u: goto label_32eeb8;
        case 0x32eeccu: goto label_32eecc;
        default: break;
    }

    ctx->pc = 0x32ee88u;

    // 0x32ee88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32ee88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32ee8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32ee8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32ee90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32ee90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ee94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32ee94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32ee98: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x32ee98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ee9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32ee9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32eea0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x32eea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x32eea4: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x32eea4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x32eea8: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x32EEA8u;
    {
        const bool branch_taken_0x32eea8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x32EEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EEA8u;
        // 0x32eeac: 0x92230003  lbu         $v1, 0x3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32eea8) {
            ctx->pc = 0x32EEE8u;
            goto label_32eee8;
        }
    }
    ctx->pc = 0x32EEB0u;
    // 0x32eeb0: 0x2630000c  addiu       $s0, $s1, 0xC
    ctx->pc = 0x32eeb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x32eeb4: 0x0  nop
    ctx->pc = 0x32eeb4u;
    // NOP
label_32eeb8:
    // 0x32eeb8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x32eeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32eebc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32EEBCu;
    {
        const bool branch_taken_0x32eebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EEBCu;
        // 0x32eec0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32eebc) {
            ctx->pc = 0x32EED0u;
            goto label_32eed0;
        }
    }
    ctx->pc = 0x32EEC4u;
    // 0x32eec4: 0xc0ca630  jal         func_3298C0
    ctx->pc = 0x32EEC4u;
    SET_GPR_U32(ctx, 31, 0x32EECCu);
    ctx->pc = 0x32EEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EEC4u;
    // 0x32eec8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3298C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3298C0u, 0x32EEC4u, 0x32EECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EECCu;
label_32eecc:
    // 0x32eecc: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x32eeccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_32eed0:
    // 0x32eed0: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x32eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x32eed4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x32eed4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x32eed8: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x32eed8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x32eedc: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x32eedcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32eee0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x32EEE0u;
    {
        const bool branch_taken_0x32eee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32EEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EEE0u;
        // 0x32eee4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32eee0) {
            ctx->pc = 0x32EEB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32eeb8;
        }
    }
    ctx->pc = 0x32EEE8u;
label_32eee8:
    // 0x32eee8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32eee8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32eeec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32eeecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32eef0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32eef0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32eef4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x32eef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32eef8: 0x3e00008  jr          $ra
    ctx->pc = 0x32EEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32EEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EEF8u;
        // 0x32eefc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32EEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32EF00u;
}
