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

// Function: cOl29_setCloseFix
// Address: 0x17fa78 - 0x17faf0
void cOl29_setCloseFix_0x17fa78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOl29_setCloseFix_0x17fa78");
#endif

    switch (ctx->pc) {
        case 0x17fa78u: goto label_17fa78;
        case 0x17fa7cu: goto label_17fa7c;
        case 0x17fa80u: goto label_17fa80;
        case 0x17fa84u: goto label_17fa84;
        case 0x17fa88u: goto label_17fa88;
        case 0x17fa8cu: goto label_17fa8c;
        case 0x17fa90u: goto label_17fa90;
        case 0x17fa94u: goto label_17fa94;
        case 0x17fa98u: goto label_17fa98;
        case 0x17fa9cu: goto label_17fa9c;
        case 0x17faa0u: goto label_17faa0;
        case 0x17faa4u: goto label_17faa4;
        case 0x17faa8u: goto label_17faa8;
        case 0x17faacu: goto label_17faac;
        case 0x17fab0u: goto label_17fab0;
        case 0x17fab4u: goto label_17fab4;
        case 0x17fab8u: goto label_17fab8;
        case 0x17fabcu: goto label_17fabc;
        case 0x17fac0u: goto label_17fac0;
        case 0x17fac4u: goto label_17fac4;
        case 0x17fac8u: goto label_17fac8;
        case 0x17faccu: goto label_17facc;
        case 0x17fad0u: goto label_17fad0;
        case 0x17fad4u: goto label_17fad4;
        case 0x17fad8u: goto label_17fad8;
        case 0x17fadcu: goto label_17fadc;
        case 0x17fae0u: goto label_17fae0;
        case 0x17fae4u: goto label_17fae4;
        case 0x17fae8u: goto label_17fae8;
        case 0x17faecu: goto label_17faec;
        default: break;
    }

    ctx->pc = 0x17fa78u;

label_17fa78:
    // 0x17fa78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17fa78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17fa7c:
    // 0x17fa7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17fa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17fa80:
    // 0x17fa80: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17fa80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_17fa84:
    // 0x17fa84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17fa84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17fa88:
    // 0x17fa88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17fa88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17fa8c:
    // 0x17fa8c: 0x92020764  lbu         $v0, 0x764($s0)
    ctx->pc = 0x17fa8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1892)));
label_17fa90:
    // 0x17fa90: 0x54430014  bnel        $v0, $v1, . + 4 + (0x14 << 2)
label_17fa94:
    if (ctx->pc == 0x17FA94u) {
        ctx->pc = 0x17FA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FA90u;
        // 0x17fa94: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FA98u;
        goto label_17fa98;
    }
    ctx->pc = 0x17FA90u;
    {
        const bool branch_taken_0x17fa90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17fa90) {
            ctx->pc = 0x17FA94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17FA90u;
            // 0x17fa94: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17FAE4u;
            goto label_17fae4;
        }
    }
    ctx->pc = 0x17FA98u;
label_17fa98:
    // 0x17fa98: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x17fa98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_17fa9c:
    // 0x17fa9c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x17fa9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_17faa0:
    // 0x17faa0: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x17faa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_17faa4:
    // 0x17faa4: 0x40f809  jalr        $v0
label_17faa8:
    if (ctx->pc == 0x17FAA8u) {
        ctx->pc = 0x17FAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FAA4u;
        // 0x17faa8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FAACu;
        goto label_17faac;
    }
    ctx->pc = 0x17FAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17FAACu);
        ctx->pc = 0x17FAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FAA4u;
        // 0x17faa8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FAA4u, 0x17FAACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17FAACu;
label_17faac:
    // 0x17faac: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x17faacu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_17fab0:
    // 0x17fab0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x17fab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_17fab4:
    // 0x17fab4: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x17fab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_17fab8:
    // 0x17fab8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17fab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17fabc:
    // 0x17fabc: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x17fabcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_17fac0:
    // 0x17fac0: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x17fac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_17fac4:
    // 0x17fac4: 0x60f809  jalr        $v1
label_17fac8:
    if (ctx->pc == 0x17FAC8u) {
        ctx->pc = 0x17FAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FAC4u;
        // 0x17fac8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FACCu;
        goto label_17facc;
    }
    ctx->pc = 0x17FAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17FACCu);
        ctx->pc = 0x17FAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FAC4u;
        // 0x17fac8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FAC4u, 0x17FACCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17FACCu;
label_17facc:
    // 0x17facc: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x17faccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_17fad0:
    // 0x17fad0: 0xa2000764  sb          $zero, 0x764($s0)
    ctx->pc = 0x17fad0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1892), (uint8_t)GPR_U32(ctx, 0));
label_17fad4:
    // 0x17fad4: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x17fad4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
label_17fad8:
    // 0x17fad8: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x17fad8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
label_17fadc:
    // 0x17fadc: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x17fadcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_17fae0:
    // 0x17fae0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17fae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17fae4:
    // 0x17fae4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17fae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17fae8:
    // 0x17fae8: 0x3e00008  jr          $ra
label_17faec:
    if (ctx->pc == 0x17FAECu) {
        ctx->pc = 0x17FAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FAE8u;
        // 0x17faec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FAF0u;
        goto label_fallthrough_0x17fae8;
    }
    ctx->pc = 0x17FAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FAE8u;
        // 0x17faec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17fae8:
    ctx->pc = 0x17FAF0u;
}
