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

// Function: ColiseumBattle_Main
// Address: 0x1eec98 - 0x1eed00
void ColiseumBattle_Main_0x1eec98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ColiseumBattle_Main_0x1eec98");
#endif

    switch (ctx->pc) {
        case 0x1eec98u: goto label_1eec98;
        case 0x1eec9cu: goto label_1eec9c;
        case 0x1eeca0u: goto label_1eeca0;
        case 0x1eeca4u: goto label_1eeca4;
        case 0x1eeca8u: goto label_1eeca8;
        case 0x1eecacu: goto label_1eecac;
        case 0x1eecb0u: goto label_1eecb0;
        case 0x1eecb4u: goto label_1eecb4;
        case 0x1eecb8u: goto label_1eecb8;
        case 0x1eecbcu: goto label_1eecbc;
        case 0x1eecc0u: goto label_1eecc0;
        case 0x1eecc4u: goto label_1eecc4;
        case 0x1eecc8u: goto label_1eecc8;
        case 0x1eecccu: goto label_1eeccc;
        case 0x1eecd0u: goto label_1eecd0;
        case 0x1eecd4u: goto label_1eecd4;
        case 0x1eecd8u: goto label_1eecd8;
        case 0x1eecdcu: goto label_1eecdc;
        case 0x1eece0u: goto label_1eece0;
        case 0x1eece4u: goto label_1eece4;
        case 0x1eece8u: goto label_1eece8;
        case 0x1eececu: goto label_1eecec;
        case 0x1eecf0u: goto label_1eecf0;
        case 0x1eecf4u: goto label_1eecf4;
        case 0x1eecf8u: goto label_1eecf8;
        case 0x1eecfcu: goto label_1eecfc;
        default: break;
    }

    ctx->pc = 0x1eec98u;

label_1eec98:
    // 0x1eec98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eec98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1eec9c:
    // 0x1eec9c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1eec9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_1eeca0:
    // 0x1eeca0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1eeca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1eeca4:
    // 0x1eeca4: 0x2463e548  addiu       $v1, $v1, -0x1AB8
    ctx->pc = 0x1eeca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960456));
label_1eeca8:
    // 0x1eeca8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eeca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1eecac:
    // 0x1eecac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1eecacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1eecb0:
    // 0x1eecb0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1eecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1eecb4:
    // 0x1eecb4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1eecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1eecb8:
    // 0x1eecb8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1eecb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eecbc:
    // 0x1eecbc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1eecbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1eecc0:
    // 0x1eecc0: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x1eecc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_1eecc4:
    // 0x1eecc4: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x1eecc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1eecc8:
    // 0x1eecc8: 0xc0f809  jalr        $a2
label_1eeccc:
    if (ctx->pc == 0x1EECCCu) {
        ctx->pc = 0x1EECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EECC8u;
        // 0x1eeccc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EECD0u;
        goto label_1eecd0;
    }
    ctx->pc = 0x1EECC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1EECD0u);
        ctx->pc = 0x1EECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EECC8u;
        // 0x1eeccc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EECC8u, 0x1EECD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EECD0u;
label_1eecd0:
    // 0x1eecd0: 0x9e020054  lwu         $v0, 0x54($s0)
    ctx->pc = 0x1eecd0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_1eecd4:
    // 0x1eecd4: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x1eecd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
label_1eecd8:
    // 0x1eecd8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1eecd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1eecdc:
    // 0x1eecdc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1eece0:
    if (ctx->pc == 0x1EECE0u) {
        ctx->pc = 0x1EECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EECDCu;
        // 0x1eece0: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EECE4u;
        goto label_1eece4;
    }
    ctx->pc = 0x1EECDCu;
    {
        const bool branch_taken_0x1eecdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EECDCu;
        // 0x1eece0: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eecdc) {
            ctx->pc = 0x1EECECu;
            goto label_1eecec;
        }
    }
    ctx->pc = 0x1EECE4u;
label_1eece4:
    // 0x1eece4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1eece4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1eece8:
    // 0x1eece8: 0xa462ae40  sh          $v0, -0x51C0($v1)
    ctx->pc = 0x1eece8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294946368), (uint16_t)GPR_U32(ctx, 2));
label_1eecec:
    // 0x1eecec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1eececu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1eecf0:
    // 0x1eecf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eecf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1eecf4:
    // 0x1eecf4: 0x3e00008  jr          $ra
label_1eecf8:
    if (ctx->pc == 0x1EECF8u) {
        ctx->pc = 0x1EECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EECF4u;
        // 0x1eecf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EECFCu;
        goto label_1eecfc;
    }
    ctx->pc = 0x1EECF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EECF4u;
        // 0x1eecf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EECF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EECFCu;
label_1eecfc:
    // 0x1eecfc: 0x0  nop
    ctx->pc = 0x1eecfcu;
    // NOP
    ctx->pc = 0x1eed00u;
}
