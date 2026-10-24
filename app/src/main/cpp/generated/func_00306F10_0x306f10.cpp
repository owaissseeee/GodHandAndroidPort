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

// Function: func_00306F10
// Address: 0x306f10 - 0x306f88
void func_00306F10_0x306f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00306F10_0x306f10");
#endif

    switch (ctx->pc) {
        case 0x306f6cu: goto label_306f6c;
        default: break;
    }

    ctx->pc = 0x306f10u;

    // 0x306f10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x306f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x306f14: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x306f14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x306f18: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x306f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x306f1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x306f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x306f20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x306F20u;
    {
        const bool branch_taken_0x306f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F20u;
        // 0x306f24: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306f20) {
            ctx->pc = 0x306F40u;
            goto label_306f40;
        }
    }
    ctx->pc = 0x306F28u;
    // 0x306f28: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x306f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x306f2c: 0x24820300  addiu       $v0, $a0, 0x300
    ctx->pc = 0x306f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    // 0x306f30: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x306f30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x306f34: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x306f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x306f38: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x306F38u;
    {
        const bool branch_taken_0x306f38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x306f38) {
            ctx->pc = 0x306F3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306F38u;
            // 0x306f3c: 0x94a2000a  lhu         $v0, 0xA($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306F48u;
            goto label_306f48;
        }
    }
    ctx->pc = 0x306F40u;
label_306f40:
    // 0x306f40: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x306F40u;
    {
        const bool branch_taken_0x306f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F40u;
        // 0x306f44: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306f40) {
            ctx->pc = 0x306F74u;
            goto label_306f74;
        }
    }
    ctx->pc = 0x306F48u;
label_306f48:
    // 0x306f48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x306f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x306f4c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x306f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x306f50: 0x38403  sra         $s0, $v1, 16
    ctx->pc = 0x306f50u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 16));
    // 0x306f54: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x306F54u;
    {
        const bool branch_taken_0x306f54 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x306F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F54u;
        // 0x306f58: 0xa4a2000a  sh          $v0, 0xA($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306f54) {
            ctx->pc = 0x306F70u;
            goto label_306f70;
        }
    }
    ctx->pc = 0x306F5Cu;
    // 0x306f5c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x306F5Cu;
    {
        const bool branch_taken_0x306f5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x306F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F5Cu;
        // 0x306f60: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306f5c) {
            ctx->pc = 0x306F74u;
            goto label_306f74;
        }
    }
    ctx->pc = 0x306F64u;
    // 0x306f64: 0xc0c1bfe  jal         func_306FF8
    ctx->pc = 0x306F64u;
    SET_GPR_U32(ctx, 31, 0x306F6Cu);
    ctx->pc = 0x306F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306F64u;
    // 0x306f68: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306FF8u, 0x306F64u, 0x306F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306F6Cu;
label_306f6c:
    // 0x306f6c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x306f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_306f70:
    // 0x306f70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x306f70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_306f74:
    // 0x306f74: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x306f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x306f78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x306f78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x306f7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x306f7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x306f80: 0x3e00008  jr          $ra
    ctx->pc = 0x306F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F80u;
        // 0x306f84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306F88u;
}
