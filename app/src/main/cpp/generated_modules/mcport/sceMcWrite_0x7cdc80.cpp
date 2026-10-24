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
// Function: sceMcWrite
// Address: 0x7cdc80 - 0x7cddf8
void sceMcWrite_0x7cdc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMcWrite_0x7cdc80");
#endif

    switch (ctx->pc) {
        case 0x7cdcd0u: goto label_7cdcd0;
        case 0x7cdd50u: goto label_7cdd50;
        case 0x7cdd88u: goto label_7cdd88;
        case 0x7cddb0u: goto label_7cddb0;
        case 0x7cddc0u: goto label_7cddc0;
        default: break;
    }

    ctx->pc = 0x7cdc80u;

    // 0x7cdc80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x7cdc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x7cdc84: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x7cdc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x7cdc88: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x7cdc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x7cdc8c: 0x3c14007d  lui         $s4, 0x7D
    ctx->pc = 0x7cdc8cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)125 << 16));
    // 0x7cdc90: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x7cdc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x7cdc94: 0x26821980  addiu       $v0, $s4, 0x1980
    ctx->pc = 0x7cdc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 6528));
    // 0x7cdc98: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x7cdc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x7cdc9c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x7cdc9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cdca0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x7cdca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x7cdca4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x7cdca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cdca8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x7cdca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x7cdcac: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x7cdcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x7cdcb0: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x7cdcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7D19A4u));
    // 0x7cdcb4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CDCB4u;
    {
        const bool branch_taken_0x7cdcb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CDCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDCB4u;
        // 0x7cdcb8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cdcb4) {
            ctx->pc = 0x7CDCC4u;
            goto label_7cdcc4;
        }
    }
    ctx->pc = 0x7CDCBCu;
    // 0x7cdcbc: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x7CDCBCu;
    {
        const bool branch_taken_0x7cdcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CDCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDCBCu;
        // 0x7cdcc0: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cdcbc) {
            ctx->pc = 0x7CDDD4u;
            goto label_7cddd4;
        }
    }
    ctx->pc = 0x7CDCC4u;
label_7cdcc4:
    // 0x7cdcc4: 0x3c15007d  lui         $s5, 0x7D
    ctx->pc = 0x7cdcc4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)125 << 16));
    // 0x7cdcc8: 0xc0ebf3c  jal         func_3AFCF0
    ctx->pc = 0x7CDCC8u;
    SET_GPR_U32(ctx, 31, 0x7CDCD0u);
    ctx->pc = 0x7CDCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CDCC8u;
    // 0x7cdccc: 0x8ea407b4  lw          $a0, 0x7B4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCF0u, 0x7CDCC8u, 0x7CDCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CDCD0u;
label_7cdcd0:
    // 0x7cdcd0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CDCD0u;
    {
        const bool branch_taken_0x7cdcd0 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x7CDCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDCD0u;
        // 0x7cdcd4: 0x3c13007d  lui         $s3, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cdcd0) {
            ctx->pc = 0x7CDCE0u;
            goto label_7cdce0;
        }
    }
    ctx->pc = 0x7CDCD8u;
    // 0x7cdcd8: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x7CDCD8u;
    {
        const bool branch_taken_0x7cdcd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CDCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDCD8u;
        // 0x7cdcdc: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cdcd8) {
            ctx->pc = 0x7CDDD4u;
            goto label_7cddd4;
        }
    }
    ctx->pc = 0x7CDCE0u;
label_7cdce0:
    // 0x7cdce0: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x7cdce0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x7cdce4: 0x26661a00  addiu       $a2, $s3, 0x1A00
    ctx->pc = 0x7cdce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 6656));
    // 0x7cdce8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CDCE8u;
    {
        const bool branch_taken_0x7cdce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CDCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDCE8u;
        // 0x7cdcec: 0xae721a00  sw          $s2, 0x1A00($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 6656), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cdce8) {
            ctx->pc = 0x7CDD00u;
            goto label_7cdd00;
        }
    }
    ctx->pc = 0x7CDCF0u;
    // 0x7cdcf0: 0xacd00014  sw          $s0, 0x14($a2)
    ctx->pc = 0x7cdcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 16));
    // 0x7cdcf4: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x7cdcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x7cdcf8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x7CDCF8u;
    {
        const bool branch_taken_0x7cdcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CDCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDCF8u;
        // 0x7cdcfc: 0xacc0000c  sw          $zero, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cdcf8) {
            ctx->pc = 0x7CDD2Cu;
            goto label_7cdd2c;
        }
    }
    ctx->pc = 0x7CDD00u;
label_7cdd00:
    // 0x7cdd00: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x7cdd00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x7cdd04: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x7cdd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x7cdd08: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x7cdd08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x7cdd0c: 0x2624fff0  addiu       $a0, $s1, -0x10
    ctx->pc = 0x7cdd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x7cdd10: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7cdd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7cdd14: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x7cdd14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x7cdd18: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x7cdd18u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x7cdd1c: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x7cdd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x7cdd20: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x7cdd20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x7cdd24: 0xacc5000c  sw          $a1, 0xC($a2)
    ctx->pc = 0x7cdd24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
    // 0x7cdd28: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x7cdd28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_7cdd2c:
    // 0x7cdd2c: 0x26621a00  addiu       $v0, $s3, 0x1A00
    ctx->pc = 0x7cdd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 6656));
    // 0x7cdd30: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x7cdd30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cdd34: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x7cdd34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x7cdd38: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x7CDD38u;
    {
        const bool branch_taken_0x7cdd38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CDD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDD38u;
        // 0x7cdd3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cdd38) {
            ctx->pc = 0x7CDD78u;
            goto label_7cdd78;
        }
    }
    ctx->pc = 0x7CDD40u;
    // 0x7cdd40: 0x3c12007d  lui         $s2, 0x7D
    ctx->pc = 0x7cdd40u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)125 << 16));
    // 0x7cdd44: 0x3c10007d  lui         $s0, 0x7D
    ctx->pc = 0x7cdd44u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)125 << 16));
    // 0x7cdd48: 0x2261021  addu        $v0, $s1, $a2
    ctx->pc = 0x7cdd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x7cdd4c: 0x24e41a00  addiu       $a0, $a3, 0x1A00
    ctx->pc = 0x7cdd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 6656));
label_7cdd50:
    // 0x7cdd50: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x7cdd50u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7cdd54: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x7cdd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x7cdd58: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7cdd58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x7cdd5c: 0xa0650020  sb          $a1, 0x20($v1)
    ctx->pc = 0x7cdd5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x7cdd60: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x7cdd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x7cdd64: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x7cdd64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x7cdd68: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x7CDD68u;
    {
        const bool branch_taken_0x7cdd68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CDD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDD68u;
        // 0x7cdd6c: 0x2261021  addu        $v0, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cdd68) {
            ctx->pc = 0x7CDD50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cdd50;
        }
    }
    ctx->pc = 0x7CDD70u;
    // 0x7cdd70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7CDD70u;
    {
        const bool branch_taken_0x7cdd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7cdd70) {
            ctx->pc = 0x7CDD80u;
            goto label_7cdd80;
        }
    }
    ctx->pc = 0x7CDD78u;
label_7cdd78:
    // 0x7cdd78: 0x3c12007d  lui         $s2, 0x7D
    ctx->pc = 0x7cdd78u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)125 << 16));
    // 0x7cdd7c: 0x3c10007d  lui         $s0, 0x7D
    ctx->pc = 0x7cdd7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)125 << 16));
label_7cdd80:
    // 0x7cdd80: 0xc0ebfc8  jal         func_3AFF20
    ctx->pc = 0x7CDD80u;
    SET_GPR_U32(ctx, 31, 0x7CDD88u);
    ctx->pc = 0x7CDD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CDD80u;
    // 0x7cdd84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFF20u, 0x7CDD80u, 0x7CDD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CDD88u;
label_7cdd88:
    // 0x7cdd88: 0x26841980  addiu       $a0, $s4, 0x1980
    ctx->pc = 0x7cdd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 6528));
    // 0x7cdd8c: 0x26671a00  addiu       $a3, $s3, 0x1A00
    ctx->pc = 0x7cdd8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 6656));
    // 0x7cdd90: 0x26492f40  addiu       $t1, $s2, 0x2F40
    ctx->pc = 0x7cdd90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 12096));
    // 0x7cdd94: 0x260bd628  addiu       $t3, $s0, -0x29D8
    ctx->pc = 0x7cdd94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956584));
    // 0x7cdd98: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x7cdd98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x7cdd9c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x7cdd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x7cdda0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7cdda0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7cdda4: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x7cdda4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x7cdda8: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x7CDDA8u;
    SET_GPR_U32(ctx, 31, 0x7CDDB0u);
    ctx->pc = 0x7CDDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CDDA8u;
    // 0x7cddac: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x7CDDA8u, 0x7CDDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CDDB0u;
label_7cddb0:
    // 0x7cddb0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CDDB0u;
    {
        const bool branch_taken_0x7cddb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CDDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDDB0u;
        // 0x7cddb4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cddb0) {
            ctx->pc = 0x7CDDC8u;
            goto label_7cddc8;
        }
    }
    ctx->pc = 0x7CDDB8u;
    // 0x7cddb8: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x7CDDB8u;
    SET_GPR_U32(ctx, 31, 0x7CDDC0u);
    ctx->pc = 0x7CDDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CDDB8u;
    // 0x7cddbc: 0x8ea407b4  lw          $a0, 0x7B4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x7CDDB8u, 0x7CDDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CDDC0u;
label_7cddc0:
    // 0x7cddc0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7CDDC0u;
    {
        const bool branch_taken_0x7cddc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CDDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDDC0u;
        // 0x7cddc4: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cddc0) {
            ctx->pc = 0x7CDDD4u;
            goto label_7cddd4;
        }
    }
    ctx->pc = 0x7CDDC8u;
label_7cddc8:
    // 0x7cddc8: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7cddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7cddcc: 0xac6207b0  sw          $v0, 0x7B0($v1)
    ctx->pc = 0x7cddccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7D07B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7D07B0u, _value); } while (0);
    // 0x7cddd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7cddd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7cddd4:
    // 0x7cddd4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x7cddd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7cddd8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x7cddd8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7cdddc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x7cdddcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7cdde0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x7cdde0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7cdde4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x7cdde4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7cdde8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x7cdde8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7cddec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x7cddecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7cddf0: 0x3e00008  jr          $ra
    ctx->pc = 0x7CDDF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CDDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDDF0u;
        // 0x7cddf4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CDDF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CDDF8u;
}
} // namespace gh_mcport
