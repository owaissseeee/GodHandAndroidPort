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

// Function: func_0032F178
// Address: 0x32f178 - 0x32f230
void func_0032F178_0x32f178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032F178_0x32f178");
#endif

    switch (ctx->pc) {
        case 0x32f19cu: goto label_32f19c;
        case 0x32f1b8u: goto label_32f1b8;
        case 0x32f1d4u: goto label_32f1d4;
        default: break;
    }

    ctx->pc = 0x32f178u;

    // 0x32f178: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32f178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32f17c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32f17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32f180: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32f180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f184: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32f184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32f188: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32f188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32f18c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x32f18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x32f190: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32f190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32f194: 0xc0cbd1a  jal         func_32F468
    ctx->pc = 0x32F194u;
    SET_GPR_U32(ctx, 31, 0x32F19Cu);
    ctx->pc = 0x32F198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F194u;
    // 0x32f198: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F468u, 0x32F194u, 0x32F19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F19Cu;
label_32f19c:
    // 0x32f19c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x32f19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32f1a0: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x32F1A0u;
    {
        const bool branch_taken_0x32f1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x32F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F1A0u;
        // 0x32f1a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f1a0) {
            ctx->pc = 0x32F1FCu;
            goto label_32f1fc;
        }
    }
    ctx->pc = 0x32F1A8u;
    // 0x32f1a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x32f1a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f1ac: 0x24130005  addiu       $s3, $zero, 0x5
    ctx->pc = 0x32f1acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x32f1b0: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x32f1b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x32f1b4: 0x0  nop
    ctx->pc = 0x32f1b4u;
    // NOP
label_32f1b8:
    // 0x32f1b8: 0x82020003  lb          $v0, 0x3($s0)
    ctx->pc = 0x32f1b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x32f1bc: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x32f1bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32f1c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x32F1C0u;
    {
        const bool branch_taken_0x32f1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F1C0u;
        // 0x32f1c4: 0x92030003  lbu         $v1, 0x3($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f1c0) {
            ctx->pc = 0x32F1E8u;
            goto label_32f1e8;
        }
    }
    ctx->pc = 0x32F1C8u;
    // 0x32f1c8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x32f1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32f1cc: 0xc0ca7e6  jal         func_329F98
    ctx->pc = 0x32F1CCu;
    SET_GPR_U32(ctx, 31, 0x32F1D4u);
    ctx->pc = 0x32F1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F1CCu;
    // 0x32f1d0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329F98u, 0x32F1CCu, 0x32F1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F1D4u;
label_32f1d4:
    // 0x32f1d4: 0x5053fff8  beql        $v0, $s3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x32F1D4u;
    {
        const bool branch_taken_0x32f1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x32f1d4) {
            ctx->pc = 0x32F1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32F1D4u;
            // 0x32f1d8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32F1B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32f1b8;
        }
    }
    ctx->pc = 0x32F1DCu;
    // 0x32f1dc: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x32F1DCu;
    {
        const bool branch_taken_0x32f1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f1dc) {
            ctx->pc = 0x32F1E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32F1DCu;
            // 0x32f1e0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32F1B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32f1b8;
        }
    }
    ctx->pc = 0x32F1E4u;
    // 0x32f1e4: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x32f1e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_32f1e8:
    // 0x32f1e8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x32f1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x32f1ec: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x32f1ecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x32f1f0: 0x12430002  beq         $s2, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x32F1F0u;
    {
        const bool branch_taken_0x32f1f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x32F1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F1F0u;
        // 0x32f1f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f1f0) {
            ctx->pc = 0x32F1FCu;
            goto label_32f1fc;
        }
    }
    ctx->pc = 0x32F1F8u;
    // 0x32f1f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32f1f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32f1fc:
    // 0x32f1fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32f1fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32f200: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32f200u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32f204: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32f204u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32f208: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x32f208u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32f20c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32f20cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32f210: 0x3e00008  jr          $ra
    ctx->pc = 0x32F210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F210u;
        // 0x32f214: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F218u;
    // 0x32f218: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x32f218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32f21c: 0x0  nop
    ctx->pc = 0x32f21cu;
    // NOP
    // 0x32f220: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x32f220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x32f224: 0x0  nop
    ctx->pc = 0x32f224u;
    // NOP
    // 0x32f228: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x32f228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32f22c: 0x0  nop
    ctx->pc = 0x32f22cu;
    // NOP
    ctx->pc = 0x32f230u;
}
