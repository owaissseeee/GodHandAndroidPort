#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "r040_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r040
{
// Function: ExecYouWin__12PetitDevilId
// Address: 0x799f28 - 0x79a070
void ExecYouWin__12PetitDevilId_0x799f28(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExecYouWin__12PetitDevilId_0x799f28");
#endif

    if (__builtin_expect(ctx->pc != 0x799f28u, 0)) {
        switch (ctx->pc) {
            case 0x799fa8u: goto label_799fa8;
            case 0x799fb8u: goto label_799fb8;
            case 0x79a048u: goto label_79a048;
            default: break;
        }
    }



    // 0x799f28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x799f2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x799f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x799f30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799f34: 0x80802d  daddu       $s0, $a0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f38: 0x9e020000  lwu         $v0, 0x0($s0)
    ctx->pc = 0x799f38u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799f3c: 0x210bb  dsra        $v0, $v0, 2
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
    // 0x799f40: 0x30420001  andi        $v0, $v0, 0x1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x799f44: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x799F44u;
    {
        const bool branch_taken_0x799f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F44u;
        // 0x799f48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f44) {
            ctx->pc = 0x79A05Cu;
            goto label_79a05c;
        }
    }
    // 0x799f4c: 0x8e030ec8  lw          $v1, 0xEC8($s0)
    ctx->pc = 0x799f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3784)));
    // 0x799f50: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x799F50u;
    {
        const bool branch_taken_0x799f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x799F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F50u;
        // 0x799f54: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f50) {
            ctx->pc = 0x799FC8u;
            goto label_799fc8;
        }
    }
    // 0x799f58: 0x50400041  beql        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x799F58u;
    {
        const bool branch_taken_0x799f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799f58) {
            ctx->pc = 0x799F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799F58u;
            // 0x799f5c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A060u;
            goto label_79a060;
        }
    }
    // 0x799f60: 0x5460003f  bnel        $v1, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x799F60u;
    {
        const bool branch_taken_0x799f60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x799f60) {
            ctx->pc = 0x799F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799F60u;
            // 0x799f64: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A060u;
            goto label_79a060;
        }
    }
    // 0x799f68: 0x2406ff00  addiu       $a2, $zero, -0x100
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x799f6c: 0x3c02ffff  lui         $v0, 0xFFFF
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x799f70: 0xa63024  and         $a2, $a1, $a2
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x799f74: 0x344200ff  ori         $v0, $v0, 0xFF
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x799f78: 0x34c60073  ori         $a2, $a2, 0x73
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)115);
    // 0x799f7c: 0x3c030073  lui         $v1, 0x73
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x799f80: 0xc23024  and         $a2, $a2, $v0
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x799f84: 0x3c058000  lui         $a1, 0x8000
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x799f88: 0x34c67300  ori         $a2, $a2, 0x7300
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)29440);
    // 0x799f8c: 0x30c67373  andi        $a2, $a2, 0x7373
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)29555);
    // 0x799f90: 0xc33025  or          $a2, $a2, $v1
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x799f94: 0x260408f0  addiu       $a0, $s0, 0x8F0
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2288));
    // 0x799f98: 0xc53025  or          $a2, $a2, $a1
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x799f9c: 0x2407000f  addiu       $a3, $zero, 0xF
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x799fa0: 0xc0b5a36  jal         func_2D68D8
    SET_GPR_U32(ctx, 31, 0x799FA8u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FA0u;
    // 0x799fa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D68D8u;
    if (!runtime->callDirectStatic(rdram, ctx, &CustomIDWork_SetColorAnimNormal_2D68D8_0x2d68d8, 0x2D68D8u, 0x799FA8u)) {
        return;
    }
label_799fa8:
    // 0x799fa8: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fac: 0x24050004  addiu       $a1, $zero, 0x4
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799fb0: 0xc1e65ac  jal         func_7996B0
    SET_GPR_U32(ctx, 31, 0x799FB8u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FB0u;
    // 0x799fb4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7996B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7996B0u, 0x799FB0u, 0x799FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_799fb8:
    // 0x799fb8: 0x8e020ec8  lw          $v0, 0xEC8($s0)
    ctx->pc = 0x799fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3784)));
    // 0x799fbc: 0x2403000f  addiu       $v1, $zero, 0xF
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x799fc0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x799FC0u;
    {
        const bool branch_taken_0x799fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FC0u;
        // 0x799fc4: 0xae030ecc  sw          $v1, 0xECC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3788), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fc0) {
            ctx->pc = 0x79A04Cu;
            goto label_79a04c;
        }
    }
label_799fc8:
    // 0x799fc8: 0x8e020ecc  lw          $v0, 0xECC($s0)
    ctx->pc = 0x799fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3788)));
    // 0x799fcc: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x799FCCu;
    {
        const bool branch_taken_0x799fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FCCu;
        // 0x799fd0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fcc) {
            ctx->pc = 0x79A058u;
            goto label_79a058;
        }
    }
    // 0x799fd4: 0x2405ff00  addiu       $a1, $zero, -0x100
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x799fd8: 0x3c02ffff  lui         $v0, 0xFFFF
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x799fdc: 0xc53024  and         $a2, $a2, $a1
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x799fe0: 0x344200ff  ori         $v0, $v0, 0xFF
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x799fe4: 0x1052824  and         $a1, $t0, $a1
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x799fe8: 0x34c600a8  ori         $a2, $a2, 0xA8
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)168);
    // 0x799fec: 0x34a50073  ori         $a1, $a1, 0x73
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)115);
    // 0x799ff0: 0xc23024  and         $a2, $a2, $v0
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x799ff4: 0xa22824  and         $a1, $a1, $v0
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x799ff8: 0x3c03ff00  lui         $v1, 0xFF00
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x799ffc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x79a000: 0x34a57300  ori         $a1, $a1, 0x7300
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)29440);
    // 0x79a004: 0x34c6a800  ori         $a2, $a2, 0xA800
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)43008);
    // 0x79a008: 0xa32824  and         $a1, $a1, $v1
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x79a00c: 0xc33024  and         $a2, $a2, $v1
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x79a010: 0x3c040073  lui         $a0, 0x73
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x79a014: 0x3c0300a8  lui         $v1, 0xA8
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)168 << 16));
    // 0x79a018: 0x3c0200ff  lui         $v0, 0xFF
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x79a01c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79a020: 0xa42825  or          $a1, $a1, $a0
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x79a024: 0xc33025  or          $a2, $a2, $v1
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x79a028: 0xa22824  and         $a1, $a1, $v0
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x79a02c: 0x3c038000  lui         $v1, 0x8000
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x79a030: 0xc23024  and         $a2, $a2, $v0
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x79a034: 0xc33025  or          $a2, $a2, $v1
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x79a038: 0xa32825  or          $a1, $a1, $v1
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x79a03c: 0x260408f0  addiu       $a0, $s0, 0x8F0
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2288));
    // 0x79a040: 0xc0b5a44  jal         func_2D6910
    SET_GPR_U32(ctx, 31, 0x79A048u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A040u;
    // 0x79a044: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6910u;
    if (!runtime->callDirectStatic(rdram, ctx, &CustomIDWork_SetColorAnimSin_0x2d6910, 0x2D6910u, 0x79A048u)) {
        return;
    }
label_79a048:
    // 0x79a048: 0x8e020ec8  lw          $v0, 0xEC8($s0)
    ctx->pc = 0x79a048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3784)));
label_79a04c:
    // 0x79a04c: 0x24420001  addiu       $v0, $v0, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a050: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79A050u;
    {
        const bool branch_taken_0x79a050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A050u;
        // 0x79a054: 0xae020ec8  sw          $v0, 0xEC8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a050) {
            ctx->pc = 0x79A05Cu;
            goto label_79a05c;
        }
    }
label_79a058:
    // 0x79a058: 0xae020ecc  sw          $v0, 0xECC($s0)
    ctx->pc = 0x79a058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3788), GPR_U32(ctx, 2));
label_79a05c:
    // 0x79a05c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79a05cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_79a060:
    // 0x79a060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a064: 0x3e00008  jr          $ra
    ctx->pc = 0x79A064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A064u;
        // 0x79a068: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x79a06c: 0x0  nop
    // NOP
    ctx->pc = 0x79a070u;
}
} // namespace gh_r040
