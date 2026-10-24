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

// Function: cE3_stepMenuClock
// Address: 0x201c28 - 0x201d20
void cE3_stepMenuClock_0x201c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cE3_stepMenuClock_0x201c28");
#endif

    switch (ctx->pc) {
        case 0x201ca0u: goto label_201ca0;
        case 0x201cc0u: goto label_201cc0;
        case 0x201ce8u: goto label_201ce8;
        case 0x201d08u: goto label_201d08;
        default: break;
    }

    ctx->pc = 0x201c28u;

    // 0x201c28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x201c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x201c2c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x201c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x201c30: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x201c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x201c34: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x201c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x201c38: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x201c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x201c3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x201c3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201c40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x201c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x201c44: 0x244474a0  addiu       $a0, $v0, 0x74A0
    ctx->pc = 0x201c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x201c48: 0x948205b0  lhu         $v0, 0x5B0($a0)
    ctx->pc = 0x201c48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x747A50u));
    // 0x201c4c: 0x5043002f  beql        $v0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x201C4Cu;
    {
        const bool branch_taken_0x201c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x201c4c) {
            ctx->pc = 0x201C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201C4Cu;
            // 0x201c50: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201D0Cu;
            goto label_201d0c;
        }
    }
    ctx->pc = 0x201C54u;
    // 0x201c54: 0x8c8305e4  lw          $v1, 0x5E4($a0)
    ctx->pc = 0x201c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1508)));
    // 0x201c58: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x201c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x201c5c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x201C5Cu;
    {
        const bool branch_taken_0x201c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201c5c) {
            ctx->pc = 0x201C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201C5Cu;
            // 0x201c60: 0x8c82058c  lw          $v0, 0x58C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1420)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201C78u;
            goto label_201c78;
        }
    }
    ctx->pc = 0x201C64u;
    // 0x201c64: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x201c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x201c68: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x201c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x201c6c: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x201C6Cu;
    {
        const bool branch_taken_0x201c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201c6c) {
            ctx->pc = 0x201C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201C6Cu;
            // 0x201c70: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201D0Cu;
            goto label_201d0c;
        }
    }
    ctx->pc = 0x201C74u;
    // 0x201c74: 0x8c82058c  lw          $v0, 0x58C($a0)
    ctx->pc = 0x201c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1420)));
label_201c78:
    // 0x201c78: 0x4420024  bltzl       $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x201C78u;
    {
        const bool branch_taken_0x201c78 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x201c78) {
            ctx->pc = 0x201C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201C78u;
            // 0x201c7c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201D0Cu;
            goto label_201d0c;
        }
    }
    ctx->pc = 0x201C80u;
    // 0x201c80: 0x82020002  lb          $v0, 0x2($s0)
    ctx->pc = 0x201c80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x201c84: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x201C84u;
    {
        const bool branch_taken_0x201c84 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x201C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C84u;
        // 0x201c88: 0x3c110062  lui         $s1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201c84) {
            ctx->pc = 0x201CE8u;
            goto label_201ce8;
        }
    }
    ctx->pc = 0x201C8Cu;
    // 0x201c8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x201c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201c90: 0x2624a990  addiu       $a0, $s1, -0x5670
    ctx->pc = 0x201c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945168));
    // 0x201c94: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x201c94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201c98: 0xc0b676e  jal         func_2D9DB8
    ctx->pc = 0x201C98u;
    SET_GPR_U32(ctx, 31, 0x201CA0u);
    ctx->pc = 0x201C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201C98u;
    // 0x201c9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9DB8u, 0x201C98u, 0x201CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201CA0u;
label_201ca0:
    // 0x201ca0: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x201ca0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x201ca4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x201ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201ca8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x201ca8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x201cac: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x201CACu;
    {
        const bool branch_taken_0x201cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201cac) {
            ctx->pc = 0x201CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201CACu;
            // 0x201cb0: 0x82060002  lb          $a2, 0x2($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201CC4u;
            goto label_201cc4;
        }
    }
    ctx->pc = 0x201CB4u;
    // 0x201cb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201cb8: 0xc0807a0  jal         func_201E80
    ctx->pc = 0x201CB8u;
    SET_GPR_U32(ctx, 31, 0x201CC0u);
    ctx->pc = 0x201CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201CB8u;
    // 0x201cbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201E80u, 0x201CB8u, 0x201CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201CC0u;
label_201cc0:
    // 0x201cc0: 0x82060002  lb          $a2, 0x2($s0)
    ctx->pc = 0x201cc0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_201cc4:
    // 0x201cc4: 0x24030708  addiu       $v1, $zero, 0x708
    ctx->pc = 0x201cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1800));
    // 0x201cc8: 0x8e27a990  lw          $a3, -0x5670($s1)
    ctx->pc = 0x201cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945168)));
    // 0x201ccc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x201cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x201cd0: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x201cd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x201cd4: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x201cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x201cd8: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x201cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x201cdc: 0x24a5c7d0  addiu       $a1, $a1, -0x3830
    ctx->pc = 0x201cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952912));
    // 0x201ce0: 0xc0807d2  jal         func_201F48
    ctx->pc = 0x201CE0u;
    SET_GPR_U32(ctx, 31, 0x201CE8u);
    ctx->pc = 0x201CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201CE0u;
    // 0x201ce4: 0xc73023  subu        $a2, $a2, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F48u, 0x201CE0u, 0x201CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201CE8u;
label_201ce8:
    // 0x201ce8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x201ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x201cec: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x201cecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x201cf0: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x201cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x201cf4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x201cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x201cf8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x201CF8u;
    {
        const bool branch_taken_0x201cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201CF8u;
        // 0x201cfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201cf8) {
            ctx->pc = 0x201D08u;
            goto label_201d08;
        }
    }
    ctx->pc = 0x201D00u;
    // 0x201d00: 0xc0807a0  jal         func_201E80
    ctx->pc = 0x201D00u;
    SET_GPR_U32(ctx, 31, 0x201D08u);
    ctx->pc = 0x201D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201D00u;
    // 0x201d04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201E80u, 0x201D00u, 0x201D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201D08u;
label_201d08:
    // 0x201d08: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x201d08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_201d0c:
    // 0x201d0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x201d0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201d10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x201d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201d14: 0x3e00008  jr          $ra
    ctx->pc = 0x201D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D14u;
        // 0x201d18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201D1Cu;
    // 0x201d1c: 0x0  nop
    ctx->pc = 0x201d1cu;
    // NOP
    ctx->pc = 0x201d20u;
}
