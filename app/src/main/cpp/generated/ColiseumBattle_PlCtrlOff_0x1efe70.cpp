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

// Function: ColiseumBattle_PlCtrlOff
// Address: 0x1efe70 - 0x1efed0
void ColiseumBattle_PlCtrlOff_0x1efe70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ColiseumBattle_PlCtrlOff_0x1efe70");
#endif

    switch (ctx->pc) {
        case 0x1efe8cu: goto label_1efe8c;
        default: break;
    }

    ctx->pc = 0x1efe70u;

    // 0x1efe70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1efe70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1efe74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1efe74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1efe78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1efe78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1efe7c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EFE7Cu;
    {
        const bool branch_taken_0x1efe7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFE7Cu;
        // 0x1efe80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efe7c) {
            ctx->pc = 0x1EFE98u;
            goto label_1efe98;
        }
    }
    ctx->pc = 0x1EFE84u;
    // 0x1efe84: 0xc0c6be8  jal         func_31AFA0
    ctx->pc = 0x1EFE84u;
    SET_GPR_U32(ctx, 31, 0x1EFE8Cu);
    ctx->pc = 0x31AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AFA0u, 0x1EFE84u, 0x1EFE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFE8Cu;
label_1efe8c:
    // 0x1efe8c: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x1efe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1efe90: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EFE90u;
    {
        const bool branch_taken_0x1efe90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFE90u;
        // 0x1efe94: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efe90) {
            ctx->pc = 0x1EFEBCu;
            goto label_1efebc;
        }
    }
    ctx->pc = 0x1EFE98u;
label_1efe98:
    // 0x1efe98: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x1efe98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x1efe9c: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x1efe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x1efea0: 0x8c837a78  lw          $v1, 0x7A78($a0)
    ctx->pc = 0x1efea0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A78u));
    // 0x1efea4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1efea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1efea8: 0x2405fffb  addiu       $a1, $zero, -0x5
    ctx->pc = 0x1efea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1efeac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1efeacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1efeb0: 0xac837a78  sw          $v1, 0x7A78($a0)
    ctx->pc = 0x1efeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 31352), GPR_U32(ctx, 3));
    // 0x1efeb4: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x1efeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1efeb8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1efeb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_1efebc:
    // 0x1efebc: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x1efebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x1efec0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1efec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1efec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1efec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1efec8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFEC8u;
        // 0x1efecc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFEC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFED0u;
}
