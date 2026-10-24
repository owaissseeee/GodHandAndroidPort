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

// Function: func_002CAB58
// Address: 0x2cab58 - 0x2cabe0
void func_002CAB58_0x2cab58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002CAB58_0x2cab58");
#endif

    switch (ctx->pc) {
        case 0x2cab80u: goto label_2cab80;
        case 0x2cab88u: goto label_2cab88;
        case 0x2cab98u: goto label_2cab98;
        default: break;
    }

    ctx->pc = 0x2cab58u;

    // 0x2cab58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cab58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cab5c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2cab5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2cab60: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2cab60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2cab64: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2cab64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2cab68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cab68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cab6c: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x2cab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2cab70: 0x8c900018  lw          $s0, 0x18($a0)
    ctx->pc = 0x2cab70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2cab74: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CAB74u;
    {
        const bool branch_taken_0x2cab74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB74u;
        // 0x2cab78: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cab74) {
            ctx->pc = 0x2CABC0u;
            goto label_2cabc0;
        }
    }
    ctx->pc = 0x2CAB7Cu;
    // 0x2cab7c: 0x3c120018  lui         $s2, 0x18
    ctx->pc = 0x2cab7cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)24 << 16));
label_2cab80:
    // 0x2cab80: 0xc0dce94  jal         func_373A50
    ctx->pc = 0x2CAB80u;
    SET_GPR_U32(ctx, 31, 0x2CAB88u);
    ctx->pc = 0x2CAB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAB80u;
    // 0x2cab84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A50u, 0x2CAB80u, 0x2CAB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAB88u;
label_2cab88:
    // 0x2cab88: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2CAB88u;
    {
        const bool branch_taken_0x2cab88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cab88) {
            ctx->pc = 0x2CAB8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAB88u;
            // 0x2cab8c: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CABB8u;
            goto label_2cabb8;
        }
    }
    ctx->pc = 0x2CAB90u;
    // 0x2cab90: 0xc0dce96  jal         func_373A58
    ctx->pc = 0x2CAB90u;
    SET_GPR_U32(ctx, 31, 0x2CAB98u);
    ctx->pc = 0x2CAB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAB90u;
    // 0x2cab94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A58u, 0x2CAB90u, 0x2CAB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAB98u;
label_2cab98:
    // 0x2cab98: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CAB98u;
    {
        const bool branch_taken_0x2cab98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cab98) {
            ctx->pc = 0x2CAB9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAB98u;
            // 0x2cab9c: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CABB8u;
            goto label_2cabb8;
        }
    }
    ctx->pc = 0x2CABA0u;
    // 0x2caba0: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x2caba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x2caba4: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x2caba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x2caba8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CABA8u;
    {
        const bool branch_taken_0x2caba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CABA8u;
        // 0x2cabac: 0x721024  and         $v0, $v1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caba8) {
            ctx->pc = 0x2CABB4u;
            goto label_2cabb4;
        }
    }
    ctx->pc = 0x2CABB0u;
    // 0x2cabb0: 0x2880a  movz        $s1, $zero, $v0
    ctx->pc = 0x2cabb0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_2cabb4:
    // 0x2cabb4: 0x8e100088  lw          $s0, 0x88($s0)
    ctx->pc = 0x2cabb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_2cabb8:
    // 0x2cabb8: 0x1600fff1  bnez        $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2CABB8u;
    {
        const bool branch_taken_0x2cabb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cabb8) {
            ctx->pc = 0x2CAB80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cab80;
        }
    }
    ctx->pc = 0x2CABC0u;
label_2cabc0:
    // 0x2cabc0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2cabc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cabc4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2cabc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cabc8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2cabc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cabcc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2cabccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cabd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cabd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cabd4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CABD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CABD4u;
        // 0x2cabd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CABD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CABDCu;
    // 0x2cabdc: 0x0  nop
    ctx->pc = 0x2cabdcu;
    // NOP
    ctx->pc = 0x2cabe0u;
}
