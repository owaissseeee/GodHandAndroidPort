#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: sceMcGetEntSpace
// Address: 0x7cead0 - 0x7cebe0
void sceMcGetEntSpace_0x7cead0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMcGetEntSpace_0x7cead0");
#endif

    switch (ctx->pc) {
        case 0x7ceb1cu: goto label_7ceb1c;
        case 0x7ceb40u: goto label_7ceb40;
        case 0x7ceb64u: goto label_7ceb64;
        case 0x7ceb98u: goto label_7ceb98;
        case 0x7ceba8u: goto label_7ceba8;
        default: break;
    }

    ctx->pc = 0x7cead0u;

    // 0x7cead0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7cead0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x7cead4: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cead4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cead8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x7cead8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x7ceadc: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x7ceadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x7ceae0: 0x24541980  addiu       $s4, $v0, 0x1980
    ctx->pc = 0x7ceae0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 6528));
    // 0x7ceae4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x7ceae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x7ceae8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x7ceae8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ceaec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x7ceaecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x7ceaf0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x7ceaf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ceaf4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x7ceaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x7ceaf8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x7ceaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x7ceafc: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x7ceafcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D19A4u));
    // 0x7ceb00: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CEB00u;
    {
        const bool branch_taken_0x7ceb00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CEB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CEB00u;
        // 0x7ceb04: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ceb00) {
            ctx->pc = 0x7CEB10u;
            goto label_7ceb10;
        }
    }
    ctx->pc = 0x7CEB08u;
    // 0x7ceb08: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x7CEB08u;
    {
        const bool branch_taken_0x7ceb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CEB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CEB08u;
        // 0x7ceb0c: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ceb08) {
            ctx->pc = 0x7CEBBCu;
            goto label_7cebbc;
        }
    }
    ctx->pc = 0x7CEB10u;
label_7ceb10:
    // 0x7ceb10: 0x3c11007d  lui         $s1, 0x7D
    ctx->pc = 0x7ceb10u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)125 << 16));
    // 0x7ceb14: 0xc0ebf3c  jal         func_3AFCF0
    ctx->pc = 0x7CEB14u;
    SET_GPR_U32(ctx, 31, 0x7CEB1Cu);
    ctx->pc = 0x7CEB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CEB14u;
    // 0x7ceb18: 0x8e2407b4  lw          $a0, 0x7B4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCF0u, 0x7CEB14u, 0x7CEB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CEB1Cu;
label_7ceb1c:
    // 0x7ceb1c: 0x4400027  bltz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x7CEB1Cu;
    {
        const bool branch_taken_0x7ceb1c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x7CEB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CEB1Cu;
        // 0x7ceb20: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ceb1c) {
            ctx->pc = 0x7CEBBCu;
            goto label_7cebbc;
        }
    }
    ctx->pc = 0x7CEB24u;
    // 0x7ceb24: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7CEB24u;
    {
        const bool branch_taken_0x7ceb24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ceb24) {
            ctx->pc = 0x7CEB38u;
            goto label_7ceb38;
        }
    }
    ctx->pc = 0x7CEB2Cu;
    // 0x7ceb2c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x7ceb2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7ceb30: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CEB30u;
    {
        const bool branch_taken_0x7ceb30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CEB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CEB30u;
        // 0x7ceb34: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ceb30) {
            ctx->pc = 0x7CEB48u;
            goto label_7ceb48;
        }
    }
    ctx->pc = 0x7CEB38u;
label_7ceb38:
    // 0x7ceb38: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x7CEB38u;
    SET_GPR_U32(ctx, 31, 0x7CEB40u);
    ctx->pc = 0x7CEB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CEB38u;
    // 0x7ceb3c: 0x8e2407b4  lw          $a0, 0x7B4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x7CEB38u, 0x7CEB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CEB40u;
label_7ceb40:
    // 0x7ceb40: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x7CEB40u;
    {
        const bool branch_taken_0x7ceb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CEB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CEB40u;
        // 0x7ceb44: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ceb40) {
            ctx->pc = 0x7CEBBCu;
            goto label_7cebbc;
        }
    }
    ctx->pc = 0x7CEB48u;
label_7ceb48:
    // 0x7ceb48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7ceb48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ceb4c: 0x24501a30  addiu       $s0, $v0, 0x1A30
    ctx->pc = 0x7ceb4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 6704));
    // 0x7ceb50: 0xac531a30  sw          $s3, 0x1A30($v0)
    ctx->pc = 0x7ceb50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6704), GPR_U32(ctx, 19));
    // 0x7ceb54: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x7ceb54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x7ceb58: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x7ceb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x7ceb5c: 0xc0e9768  jal         func_3A5DA0
    ctx->pc = 0x7CEB5Cu;
    SET_GPR_U32(ctx, 31, 0x7CEB64u);
    ctx->pc = 0x7CEB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CEB5Cu;
    // 0x7ceb60: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5DA0u, 0x7CEB5Cu, 0x7CEB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CEB64u;
label_7ceb64:
    // 0x7ceb64: 0x3c09007d  lui         $t1, 0x7D
    ctx->pc = 0x7ceb64u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)125 << 16));
    // 0x7ceb68: 0x3c0b007d  lui         $t3, 0x7D
    ctx->pc = 0x7ceb68u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)125 << 16));
    // 0x7ceb6c: 0xa2000413  sb          $zero, 0x413($s0)
    ctx->pc = 0x7ceb6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x7ceb70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x7ceb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ceb74: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x7ceb74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ceb78: 0x25292f40  addiu       $t1, $t1, 0x2F40
    ctx->pc = 0x7ceb78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12096));
    // 0x7ceb7c: 0x256bd628  addiu       $t3, $t3, -0x29D8
    ctx->pc = 0x7ceb7cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956584));
    // 0x7ceb80: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x7ceb80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x7ceb84: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x7ceb84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x7ceb88: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7ceb88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7ceb8c: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x7ceb8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x7ceb90: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x7CEB90u;
    SET_GPR_U32(ctx, 31, 0x7CEB98u);
    ctx->pc = 0x7CEB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CEB90u;
    // 0x7ceb94: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x7CEB90u, 0x7CEB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CEB98u;
label_7ceb98:
    // 0x7ceb98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CEB98u;
    {
        const bool branch_taken_0x7ceb98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CEB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CEB98u;
        // 0x7ceb9c: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ceb98) {
            ctx->pc = 0x7CEBB0u;
            goto label_7cebb0;
        }
    }
    ctx->pc = 0x7CEBA0u;
    // 0x7ceba0: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x7CEBA0u;
    SET_GPR_U32(ctx, 31, 0x7CEBA8u);
    ctx->pc = 0x7CEBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CEBA0u;
    // 0x7ceba4: 0x8e2407b4  lw          $a0, 0x7B4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x7CEBA0u, 0x7CEBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CEBA8u;
label_7ceba8:
    // 0x7ceba8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7CEBA8u;
    {
        const bool branch_taken_0x7ceba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CEBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CEBA8u;
        // 0x7cebac: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ceba8) {
            ctx->pc = 0x7CEBBCu;
            goto label_7cebbc;
        }
    }
    ctx->pc = 0x7CEBB0u;
label_7cebb0:
    // 0x7cebb0: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7cebb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7cebb4: 0xac6207b0  sw          $v0, 0x7B0($v1)
    ctx->pc = 0x7cebb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7D07B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7D07B0u, _value); } while (0);
    // 0x7cebb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7cebb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7cebbc:
    // 0x7cebbc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x7cebbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7cebc0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x7cebc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7cebc4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x7cebc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7cebc8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x7cebc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7cebcc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x7cebccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7cebd0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x7cebd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7cebd4: 0x3e00008  jr          $ra
    ctx->pc = 0x7CEBD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CEBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CEBD4u;
        // 0x7cebd8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CEBD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CEBDCu;
    // 0x7cebdc: 0x0  nop
    ctx->pc = 0x7cebdcu;
    // NOP
    ctx->pc = 0x7cebe0u;
}
} // namespace gh_mcport
