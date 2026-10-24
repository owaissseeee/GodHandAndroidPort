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

// Function: _sceMpegNextBit
// Address: 0x39eaa8 - 0x39eb90
void _sceMpegNextBit_0x39eaa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceMpegNextBit_0x39eaa8");
#endif

    switch (ctx->pc) {
        case 0x39eac4u: goto label_39eac4;
        case 0x39eafcu: goto label_39eafc;
        case 0x39eb6cu: goto label_39eb6c;
        default: break;
    }

    ctx->pc = 0x39eaa8u;

    // 0x39eaa8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39eaa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39eaac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39eaacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39eab0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x39eab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x39eab4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39eab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39eab8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39eab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x39eabc: 0xc0e7b2e  jal         func_39ECB8
    ctx->pc = 0x39EABCu;
    SET_GPR_U32(ctx, 31, 0x39EAC4u);
    ctx->pc = 0x39EAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EABCu;
    // 0x39eac0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39ECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39ECB8u, 0x39EABCu, 0x39EAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EAC4u;
label_39eac4:
    // 0x39eac4: 0x8e020828  lw          $v0, 0x828($s0)
    ctx->pc = 0x39eac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x39eac8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39EAC8u;
    {
        const bool branch_taken_0x39eac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39EACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EAC8u;
        // 0x39eacc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39eac8) {
            ctx->pc = 0x39EAE0u;
            goto label_39eae0;
        }
    }
    ctx->pc = 0x39EAD0u;
    // 0x39ead0: 0x8e02084c  lw          $v0, 0x84C($s0)
    ctx->pc = 0x39ead0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2124)));
    // 0x39ead4: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x39ead4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x39ead8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x39EAD8u;
    {
        const bool branch_taken_0x39ead8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EAD8u;
        // 0x39eadc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ead8) {
            ctx->pc = 0x39EB08u;
            goto label_39eb08;
        }
    }
    ctx->pc = 0x39EAE0u;
label_39eae0:
    // 0x39eae0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x39eae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x39eae4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x39eae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x39eae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39eae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39eaec: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x39eaecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x39eaf0: 0xae000828  sw          $zero, 0x828($s0)
    ctx->pc = 0x39eaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
    // 0x39eaf4: 0xc0e7a4a  jal         func_39E928
    ctx->pc = 0x39EAF4u;
    SET_GPR_U32(ctx, 31, 0x39EAFCu);
    ctx->pc = 0x39EAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EAF4u;
    // 0x39eaf8: 0xae03082c  sw          $v1, 0x82C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39E928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E928u, 0x39EAF4u, 0x39EAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EAFCu;
label_39eafc:
    // 0x39eafc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x39eafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x39eb00: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x39eb00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x39eb04: 0xae020848  sw          $v0, 0x848($s0)
    ctx->pc = 0x39eb04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
label_39eb08:
    // 0x39eb08: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x39eb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x39eb0c: 0x3c084000  lui         $t0, 0x4000
    ctx->pc = 0x39eb0cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16384 << 16));
    // 0x39eb10: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39eb10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39eb14: 0x2282825  or          $a1, $s1, $t0
    ctx->pc = 0x39eb14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 8));
    // 0x39eb18: 0xae04084c  sw          $a0, 0x84C($s0)
    ctx->pc = 0x39eb18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 4));
    // 0x39eb1c: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x39eb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x39eb20: 0x8e060848  lw          $a2, 0x848($s0)
    ctx->pc = 0x39eb20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
    // 0x39eb24: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x39eb24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x39eb28: 0xa23824  and         $a3, $a1, $v0
    ctx->pc = 0x39eb28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x39eb2c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x39eb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x39eb30: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x39eb30u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x39eb34: 0xae07082c  sw          $a3, 0x82C($s0)
    ctx->pc = 0x39eb34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 7));
    // 0x39eb38: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x39eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x39eb3c: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39EB3Cu;
    {
        const bool branch_taken_0x39eb3c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x39EB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EB3Cu;
        // 0x39eb40: 0x868806  srlv        $s1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39eb3c) {
            ctx->pc = 0x39EB58u;
            goto label_39eb58;
        }
    }
    ctx->pc = 0x39EB44u;
    // 0x39eb44: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x39eb44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x39eb48: 0x50e20006  beql        $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39EB48u;
    {
        const bool branch_taken_0x39eb48 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x39eb48) {
            ctx->pc = 0x39EB4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39EB48u;
            // 0x39eb4c: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39EB64u;
            goto label_39eb64;
        }
    }
    ctx->pc = 0x39EB50u;
    // 0x39eb50: 0x14e80003  bne         $a3, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39EB50u;
    {
        const bool branch_taken_0x39eb50 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        ctx->pc = 0x39EB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EB50u;
        // 0x39eb54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39eb50) {
            ctx->pc = 0x39EB60u;
            goto label_39eb60;
        }
    }
    ctx->pc = 0x39EB58u;
label_39eb58:
    // 0x39eb58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x39EB58u;
    {
        const bool branch_taken_0x39eb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EB58u;
        // 0x39eb5c: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39eb58) {
            ctx->pc = 0x39EB64u;
            goto label_39eb64;
        }
    }
    ctx->pc = 0x39EB60u;
label_39eb60:
    // 0x39eb60: 0xae020828  sw          $v0, 0x828($s0)
    ctx->pc = 0x39eb60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
label_39eb64:
    // 0x39eb64: 0xc0e7a4a  jal         func_39E928
    ctx->pc = 0x39EB64u;
    SET_GPR_U32(ctx, 31, 0x39EB6Cu);
    ctx->pc = 0x39EB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EB64u;
    // 0x39eb68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39E928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E928u, 0x39EB64u, 0x39EB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EB6Cu;
label_39eb6c:
    // 0x39eb6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x39eb6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x39eb70: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x39eb70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x39eb74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39eb74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39eb78: 0xae020848  sw          $v0, 0x848($s0)
    ctx->pc = 0x39eb78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
    // 0x39eb7c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x39eb7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39eb80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39eb80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39eb84: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x39eb84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39eb88: 0x3e00008  jr          $ra
    ctx->pc = 0x39EB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39EB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EB88u;
        // 0x39eb8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39EB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39EB90u;
}
