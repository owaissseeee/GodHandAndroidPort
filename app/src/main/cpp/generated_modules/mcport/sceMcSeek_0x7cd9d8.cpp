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
// Function: sceMcSeek
// Address: 0x7cd9d8 - 0x7cdab8
void sceMcSeek_0x7cd9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMcSeek_0x7cd9d8");
#endif

    switch (ctx->pc) {
        case 0x7cda24u: goto label_7cda24;
        case 0x7cda74u: goto label_7cda74;
        case 0x7cda84u: goto label_7cda84;
        default: break;
    }

    ctx->pc = 0x7cd9d8u;

    // 0x7cd9d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7cd9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x7cd9dc: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cd9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cd9e0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x7cd9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x7cd9e4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x7cd9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x7cd9e8: 0x24531980  addiu       $s3, $v0, 0x1980
    ctx->pc = 0x7cd9e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 6528));
    // 0x7cd9ec: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x7cd9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x7cd9f0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x7cd9f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd9f4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x7cd9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x7cd9f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x7cd9f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd9fc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x7cd9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x7cda00: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x7cda00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x7cda04: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x7cda04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D19A4u));
    // 0x7cda08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CDA08u;
    {
        const bool branch_taken_0x7cda08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CDA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDA08u;
        // 0x7cda0c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cda08) {
            ctx->pc = 0x7CDA18u;
            goto label_7cda18;
        }
    }
    ctx->pc = 0x7CDA10u;
    // 0x7cda10: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x7CDA10u;
    {
        const bool branch_taken_0x7cda10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CDA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDA10u;
        // 0x7cda14: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cda10) {
            ctx->pc = 0x7CDA98u;
            goto label_7cda98;
        }
    }
    ctx->pc = 0x7CDA18u;
label_7cda18:
    // 0x7cda18: 0x3c14007d  lui         $s4, 0x7D
    ctx->pc = 0x7cda18u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)125 << 16));
    // 0x7cda1c: 0xc0ebf3c  jal         func_3AFCF0
    ctx->pc = 0x7CDA1Cu;
    SET_GPR_U32(ctx, 31, 0x7CDA24u);
    ctx->pc = 0x7CDA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CDA1Cu;
    // 0x7cda20: 0x8e8407b4  lw          $a0, 0x7B4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCF0u, 0x7CDA1Cu, 0x7CDA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CDA24u;
label_7cda24:
    // 0x7cda24: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CDA24u;
    {
        const bool branch_taken_0x7cda24 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x7CDA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDA24u;
        // 0x7cda28: 0x3c03007d  lui         $v1, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cda24) {
            ctx->pc = 0x7CDA34u;
            goto label_7cda34;
        }
    }
    ctx->pc = 0x7CDA2Cu;
    // 0x7cda2c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x7CDA2Cu;
    {
        const bool branch_taken_0x7cda2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CDA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDA2Cu;
        // 0x7cda30: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cda2c) {
            ctx->pc = 0x7CDA98u;
            goto label_7cda98;
        }
    }
    ctx->pc = 0x7CDA34u;
label_7cda34:
    // 0x7cda34: 0x3c09007d  lui         $t1, 0x7D
    ctx->pc = 0x7cda34u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)125 << 16));
    // 0x7cda38: 0x24621a00  addiu       $v0, $v1, 0x1A00
    ctx->pc = 0x7cda38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 6656));
    // 0x7cda3c: 0xac701a00  sw          $s0, 0x1A00($v1)
    ctx->pc = 0x7cda3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6656), GPR_U32(ctx, 16));
    // 0x7cda40: 0x3c0b007d  lui         $t3, 0x7D
    ctx->pc = 0x7cda40u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)125 << 16));
    // 0x7cda44: 0xac510010  sw          $s1, 0x10($v0)
    ctx->pc = 0x7cda44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
    // 0x7cda48: 0xac520014  sw          $s2, 0x14($v0)
    ctx->pc = 0x7cda48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 18));
    // 0x7cda4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x7cda4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cda50: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x7cda50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cda54: 0x25292f40  addiu       $t1, $t1, 0x2F40
    ctx->pc = 0x7cda54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12096));
    // 0x7cda58: 0x256bd628  addiu       $t3, $t3, -0x29D8
    ctx->pc = 0x7cda58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956584));
    // 0x7cda5c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x7cda5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x7cda60: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x7cda60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7cda64: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7cda64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7cda68: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x7cda68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x7cda6c: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x7CDA6Cu;
    SET_GPR_U32(ctx, 31, 0x7CDA74u);
    ctx->pc = 0x7CDA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CDA6Cu;
    // 0x7cda70: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x7CDA6Cu, 0x7CDA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CDA74u;
label_7cda74:
    // 0x7cda74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CDA74u;
    {
        const bool branch_taken_0x7cda74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CDA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDA74u;
        // 0x7cda78: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cda74) {
            ctx->pc = 0x7CDA8Cu;
            goto label_7cda8c;
        }
    }
    ctx->pc = 0x7CDA7Cu;
    // 0x7cda7c: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x7CDA7Cu;
    SET_GPR_U32(ctx, 31, 0x7CDA84u);
    ctx->pc = 0x7CDA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CDA7Cu;
    // 0x7cda80: 0x8e8407b4  lw          $a0, 0x7B4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x7CDA7Cu, 0x7CDA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CDA84u;
label_7cda84:
    // 0x7cda84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7CDA84u;
    {
        const bool branch_taken_0x7cda84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CDA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDA84u;
        // 0x7cda88: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cda84) {
            ctx->pc = 0x7CDA98u;
            goto label_7cda98;
        }
    }
    ctx->pc = 0x7CDA8Cu;
label_7cda8c:
    // 0x7cda8c: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7cda8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7cda90: 0xac6207b0  sw          $v0, 0x7B0($v1)
    ctx->pc = 0x7cda90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7D07B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7D07B0u, _value); } while (0);
    // 0x7cda94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7cda94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7cda98:
    // 0x7cda98: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x7cda98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7cda9c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x7cda9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7cdaa0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x7cdaa0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7cdaa4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x7cdaa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7cdaa8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x7cdaa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7cdaac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x7cdaacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7cdab0: 0x3e00008  jr          $ra
    ctx->pc = 0x7CDAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CDAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDAB0u;
        // 0x7cdab4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CDAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CDAB8u;
}
} // namespace gh_mcport
