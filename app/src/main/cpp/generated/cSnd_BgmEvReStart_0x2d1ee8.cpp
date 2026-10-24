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

// Function: cSnd_BgmEvReStart
// Address: 0x2d1ee8 - 0x2d1fa0
void cSnd_BgmEvReStart_0x2d1ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_BgmEvReStart_0x2d1ee8");
#endif

    switch (ctx->pc) {
        case 0x2d1f28u: goto label_2d1f28;
        case 0x2d1f60u: goto label_2d1f60;
        case 0x2d1f70u: goto label_2d1f70;
        default: break;
    }

    ctx->pc = 0x2d1ee8u;

    // 0x2d1ee8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d1ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d1eec: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2d1eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2d1ef0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2d1ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2d1ef4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2d1ef4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1ef8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d1ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d1efc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2d1efcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1f00: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2d1f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2d1f04: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2d1f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x2d1f08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d1f0c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2d1f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2d1f10: 0x8c900018  lw          $s0, 0x18($a0)
    ctx->pc = 0x2d1f10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2d1f14: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D1F14u;
    {
        const bool branch_taken_0x2d1f14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1F14u;
        // 0x2d1f18: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1f14) {
            ctx->pc = 0x2D1F7Cu;
            goto label_2d1f7c;
        }
    }
    ctx->pc = 0x2D1F1Cu;
    // 0x2d1f1c: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x2d1f1cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d1f20: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x2d1f20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d1f24: 0x0  nop
    ctx->pc = 0x2d1f24u;
    // NOP
label_2d1f28:
    // 0x2d1f28: 0x52550009  beql        $s2, $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D1F28u;
    {
        const bool branch_taken_0x2d1f28 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 21));
        if (branch_taken_0x2d1f28) {
            ctx->pc = 0x2D1F2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1F28u;
            // 0x2d1f2c: 0x8e020094  lw          $v0, 0x94($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1F50u;
            goto label_2d1f50;
        }
    }
    ctx->pc = 0x2D1F30u;
    // 0x2d1f30: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x2d1f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2d1f34: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x2d1f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x2d1f38: 0x5453000e  bnel        $v0, $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x2D1F38u;
    {
        const bool branch_taken_0x2d1f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2d1f38) {
            ctx->pc = 0x2D1F3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1F38u;
            // 0x2d1f3c: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1F74u;
            goto label_2d1f74;
        }
    }
    ctx->pc = 0x2D1F40u;
    // 0x2d1f40: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x2d1f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2d1f44: 0x5452000b  bnel        $v0, $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x2D1F44u;
    {
        const bool branch_taken_0x2d1f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2d1f44) {
            ctx->pc = 0x2D1F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1F44u;
            // 0x2d1f48: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1F74u;
            goto label_2d1f74;
        }
    }
    ctx->pc = 0x2D1F4Cu;
    // 0x2d1f4c: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x2d1f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_2d1f50:
    // 0x2d1f50: 0x54540008  bnel        $v0, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D1F50u;
    {
        const bool branch_taken_0x2d1f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2d1f50) {
            ctx->pc = 0x2D1F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1F50u;
            // 0x2d1f54: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1F74u;
            goto label_2d1f74;
        }
    }
    ctx->pc = 0x2D1F58u;
    // 0x2d1f58: 0xc0b32b2  jal         func_2CCAC8
    ctx->pc = 0x2D1F58u;
    SET_GPR_U32(ctx, 31, 0x2D1F60u);
    ctx->pc = 0x2D1F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1F58u;
    // 0x2d1f5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCAC8u, 0x2D1F58u, 0x2D1F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1F60u;
label_2d1f60:
    // 0x2d1f60: 0x6200003  bltz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1F60u;
    {
        const bool branch_taken_0x2d1f60 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x2D1F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1F60u;
        // 0x2d1f64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1f60) {
            ctx->pc = 0x2D1F70u;
            goto label_2d1f70;
        }
    }
    ctx->pc = 0x2D1F68u;
    // 0x2d1f68: 0xc0dce86  jal         func_373A18
    ctx->pc = 0x2D1F68u;
    SET_GPR_U32(ctx, 31, 0x2D1F70u);
    ctx->pc = 0x2D1F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1F68u;
    // 0x2d1f6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A18u, 0x2D1F68u, 0x2D1F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1F70u;
label_2d1f70:
    // 0x2d1f70: 0x8e100088  lw          $s0, 0x88($s0)
    ctx->pc = 0x2d1f70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_2d1f74:
    // 0x2d1f74: 0x1600ffec  bnez        $s0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2D1F74u;
    {
        const bool branch_taken_0x2d1f74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1f74) {
            ctx->pc = 0x2D1F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1f28;
        }
    }
    ctx->pc = 0x2D1F7Cu;
label_2d1f7c:
    // 0x2d1f7c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2d1f7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d1f80: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2d1f80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d1f84: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2d1f84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d1f88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d1f88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1f8c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2d1f8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1f90: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2d1f90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1f94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1f98: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1F98u;
        // 0x2d1f9c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1FA0u;
}
