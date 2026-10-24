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

// Function: func_00336D08
// Address: 0x336d08 - 0x336db0
void func_00336D08_0x336d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00336D08_0x336d08");
#endif

    switch (ctx->pc) {
        case 0x336d90u: goto label_336d90;
        default: break;
    }

    ctx->pc = 0x336d08u;

    // 0x336d08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x336d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x336d0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x336d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x336d10: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x336d10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336d14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x336d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x336d18: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x336d18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336d1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x336d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x336d20: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x336D20u;
    {
        const bool branch_taken_0x336d20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x336D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336D20u;
        // 0x336d24: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336d20) {
            ctx->pc = 0x336D48u;
            goto label_336d48;
        }
    }
    ctx->pc = 0x336D28u;
    // 0x336d28: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x336d28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x336d2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x336d2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336d30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x336d30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x336d34: 0x24845308  addiu       $a0, $a0, 0x5308
    ctx->pc = 0x336d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21256));
    // 0x336d38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x336d38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336d3c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x336d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x336d40: 0x80cfc4c  j           func_33F130
    ctx->pc = 0x336D40u;
    ctx->pc = 0x336D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336D40u;
    // 0x336d44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x336D40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x336D48u;
label_336d48:
    // 0x336d48: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x336d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x336d4c: 0x80820003  lb          $v0, 0x3($a0)
    ctx->pc = 0x336d4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x336d50: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x336d50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x336d54: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x336d54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x336d58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x336D58u;
    {
        const bool branch_taken_0x336d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x336D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336D58u;
        // 0x336d5c: 0x8e0400e8  lw          $a0, 0xE8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336d58) {
            ctx->pc = 0x336D68u;
            goto label_336d68;
        }
    }
    ctx->pc = 0x336D60u;
    // 0x336d60: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x336D60u;
    {
        const bool branch_taken_0x336d60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x336d60) {
            ctx->pc = 0x336D88u;
            goto label_336d88;
        }
    }
    ctx->pc = 0x336D68u;
label_336d68:
    // 0x336d68: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x336d68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x336d6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x336d6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336d70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x336d70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x336d74: 0x24845330  addiu       $a0, $a0, 0x5330
    ctx->pc = 0x336d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21296));
    // 0x336d78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x336d78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336d7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x336d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x336d80: 0x80cfc4c  j           func_33F130
    ctx->pc = 0x336D80u;
    ctx->pc = 0x336D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336D80u;
    // 0x336d84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x336D80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x336D88u;
label_336d88:
    // 0x336d88: 0xc0d0248  jal         func_340920
    ctx->pc = 0x336D88u;
    SET_GPR_U32(ctx, 31, 0x336D90u);
    ctx->pc = 0x340920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340920u, 0x336D88u, 0x336D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336D90u;
label_336d90:
    // 0x336d90: 0xae1100f0  sw          $s1, 0xF0($s0)
    ctx->pc = 0x336d90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 17));
    // 0x336d94: 0xae1200ec  sw          $s2, 0xEC($s0)
    ctx->pc = 0x336d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 18));
    // 0x336d98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x336d98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x336d9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x336d9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336da0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x336da0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336da4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x336da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x336da8: 0x3e00008  jr          $ra
    ctx->pc = 0x336DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336DA8u;
        // 0x336dac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336DB0u;
}
