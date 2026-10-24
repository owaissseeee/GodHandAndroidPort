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
// Function: sceMcFormat
// Address: 0x7ce428 - 0x7ce4f8
void sceMcFormat_0x7ce428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMcFormat_0x7ce428");
#endif

    switch (ctx->pc) {
        case 0x7ce46cu: goto label_7ce46c;
        case 0x7ce4b4u: goto label_7ce4b4;
        case 0x7ce4c4u: goto label_7ce4c4;
        default: break;
    }

    ctx->pc = 0x7ce428u;

    // 0x7ce428: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x7ce428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x7ce42c: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7ce42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7ce430: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x7ce430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x7ce434: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x7ce434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x7ce438: 0x24521980  addiu       $s2, $v0, 0x1980
    ctx->pc = 0x7ce438u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 6528));
    // 0x7ce43c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x7ce43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x7ce440: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x7ce440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce444: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x7ce444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x7ce448: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x7ce448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x7ce44c: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x7ce44cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D19A4u));
    // 0x7ce450: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CE450u;
    {
        const bool branch_taken_0x7ce450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CE454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE450u;
        // 0x7ce454: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce450) {
            ctx->pc = 0x7CE460u;
            goto label_7ce460;
        }
    }
    ctx->pc = 0x7CE458u;
    // 0x7ce458: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x7CE458u;
    {
        const bool branch_taken_0x7ce458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CE45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE458u;
        // 0x7ce45c: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce458) {
            ctx->pc = 0x7CE4D8u;
            goto label_7ce4d8;
        }
    }
    ctx->pc = 0x7CE460u;
label_7ce460:
    // 0x7ce460: 0x3c13007d  lui         $s3, 0x7D
    ctx->pc = 0x7ce460u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)125 << 16));
    // 0x7ce464: 0xc0ebf3c  jal         func_3AFCF0
    ctx->pc = 0x7CE464u;
    SET_GPR_U32(ctx, 31, 0x7CE46Cu);
    ctx->pc = 0x7CE468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE464u;
    // 0x7ce468: 0x8e6407b4  lw          $a0, 0x7B4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCF0u, 0x7CE464u, 0x7CE46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE46Cu;
label_7ce46c:
    // 0x7ce46c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CE46Cu;
    {
        const bool branch_taken_0x7ce46c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x7CE470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE46Cu;
        // 0x7ce470: 0x3c07007d  lui         $a3, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce46c) {
            ctx->pc = 0x7CE47Cu;
            goto label_7ce47c;
        }
    }
    ctx->pc = 0x7CE474u;
    // 0x7ce474: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x7CE474u;
    {
        const bool branch_taken_0x7ce474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CE478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE474u;
        // 0x7ce478: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce474) {
            ctx->pc = 0x7CE4D8u;
            goto label_7ce4d8;
        }
    }
    ctx->pc = 0x7CE47Cu;
label_7ce47c:
    // 0x7ce47c: 0x3c09007d  lui         $t1, 0x7D
    ctx->pc = 0x7ce47cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)125 << 16));
    // 0x7ce480: 0x24e71a00  addiu       $a3, $a3, 0x1A00
    ctx->pc = 0x7ce480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6656));
    // 0x7ce484: 0x3c0b007d  lui         $t3, 0x7D
    ctx->pc = 0x7ce484u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)125 << 16));
    // 0x7ce488: 0xacf00004  sw          $s0, 0x4($a3)
    ctx->pc = 0x7ce488u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
    // 0x7ce48c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7ce48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce490: 0xacf10008  sw          $s1, 0x8($a3)
    ctx->pc = 0x7ce490u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 17));
    // 0x7ce494: 0x25292f40  addiu       $t1, $t1, 0x2F40
    ctx->pc = 0x7ce494u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12096));
    // 0x7ce498: 0x256bd628  addiu       $t3, $t3, -0x29D8
    ctx->pc = 0x7ce498u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956584));
    // 0x7ce49c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x7ce49cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x7ce4a0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x7ce4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x7ce4a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7ce4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7ce4a8: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x7ce4a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x7ce4ac: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x7CE4ACu;
    SET_GPR_U32(ctx, 31, 0x7CE4B4u);
    ctx->pc = 0x7CE4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE4ACu;
    // 0x7ce4b0: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x7CE4ACu, 0x7CE4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE4B4u;
label_7ce4b4:
    // 0x7ce4b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CE4B4u;
    {
        const bool branch_taken_0x7ce4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CE4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE4B4u;
        // 0x7ce4b8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce4b4) {
            ctx->pc = 0x7CE4CCu;
            goto label_7ce4cc;
        }
    }
    ctx->pc = 0x7CE4BCu;
    // 0x7ce4bc: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x7CE4BCu;
    SET_GPR_U32(ctx, 31, 0x7CE4C4u);
    ctx->pc = 0x7CE4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE4BCu;
    // 0x7ce4c0: 0x8e6407b4  lw          $a0, 0x7B4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x7CE4BCu, 0x7CE4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE4C4u;
label_7ce4c4:
    // 0x7ce4c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7CE4C4u;
    {
        const bool branch_taken_0x7ce4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CE4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE4C4u;
        // 0x7ce4c8: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce4c4) {
            ctx->pc = 0x7CE4D8u;
            goto label_7ce4d8;
        }
    }
    ctx->pc = 0x7CE4CCu;
label_7ce4cc:
    // 0x7ce4cc: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7ce4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7ce4d0: 0xac6207b0  sw          $v0, 0x7B0($v1)
    ctx->pc = 0x7ce4d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7D07B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7D07B0u, _value); } while (0);
    // 0x7ce4d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7ce4d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7ce4d8:
    // 0x7ce4d8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x7ce4d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7ce4dc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x7ce4dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7ce4e0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x7ce4e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7ce4e4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x7ce4e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7ce4e8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x7ce4e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ce4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x7CE4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CE4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE4ECu;
        // 0x7ce4f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CE4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CE4F4u;
    // 0x7ce4f4: 0x0  nop
    ctx->pc = 0x7ce4f4u;
    // NOP
    ctx->pc = 0x7ce4f8u;
}
} // namespace gh_mcport
