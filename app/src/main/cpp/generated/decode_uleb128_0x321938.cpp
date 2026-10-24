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

// Function: decode_uleb128
// Address: 0x321938 - 0x321980
void decode_uleb128_0x321938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("decode_uleb128_0x321938");
#endif

    switch (ctx->pc) {
        case 0x321950u: goto label_321950;
        default: break;
    }

    ctx->pc = 0x321938u;

    // 0x321938: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x321938u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32193c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32193cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321940: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x321940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x321944: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x321944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x321948: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x321948u;
    {
        const bool branch_taken_0x321948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321948u;
        // 0x32194c: 0x3066007f  andi        $a2, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x321948) {
            ctx->pc = 0x321970u;
            goto label_321970;
        }
    }
    ctx->pc = 0x321950u;
label_321950:
    // 0x321950: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x321950u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x321954: 0x24e70007  addiu       $a3, $a3, 0x7
    ctx->pc = 0x321954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x321958: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x321958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x32195c: 0x3062007f  andi        $v0, $v1, 0x7F
    ctx->pc = 0x32195cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x321960: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x321960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x321964: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x321964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x321968: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x321968u;
    {
        const bool branch_taken_0x321968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321968u;
        // 0x32196c: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321968) {
            ctx->pc = 0x321950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321950;
        }
    }
    ctx->pc = 0x321970u;
label_321970:
    // 0x321970: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x321970u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x321974: 0x3e00008  jr          $ra
    ctx->pc = 0x321974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321974u;
        // 0x321978: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32197Cu;
    // 0x32197c: 0x0  nop
    ctx->pc = 0x32197cu;
    // NOP
    ctx->pc = 0x321980u;
}
