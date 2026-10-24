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
// Function: func_007CF018
// Address: 0x7cf018 - 0x7cf0d8
void func_007CF018_0x7cf018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007CF018_0x7cf018");
#endif

    switch (ctx->pc) {
        case 0x7cf050u: goto label_7cf050;
        case 0x7cf074u: goto label_7cf074;
        case 0x7cf08cu: goto label_7cf08c;
        case 0x7cf0a4u: goto label_7cf0a4;
        default: break;
    }

    ctx->pc = 0x7cf018u;

    // 0x7cf018: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7cf018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7cf01c: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cf01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cf020: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x7cf020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x7cf024: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x7cf024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x7cf028: 0x24523080  addiu       $s2, $v0, 0x3080
    ctx->pc = 0x7cf028u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 12416));
    // 0x7cf02c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7cf02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x7cf030: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x7cf030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cf034: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7cf034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cf038: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x7cf038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x7cf03c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x7cf03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x7cf040: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7cf040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cf044: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x7cf044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x7cf048: 0xc0eca14  jal         func_3B2850
    ctx->pc = 0x7CF048u;
    SET_GPR_U32(ctx, 31, 0x7CF050u);
    ctx->pc = 0x7CF04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CF048u;
    // 0x7cf04c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2850u, 0x7CF048u, 0x7CF050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CF050u;
label_7cf050:
    // 0x7cf050: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7cf050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7cf054: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CF054u;
    {
        const bool branch_taken_0x7cf054 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7CF058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CF054u;
        // 0x7cf058: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cf054) {
            ctx->pc = 0x7CF06Cu;
            goto label_7cf06c;
        }
    }
    ctx->pc = 0x7CF05Cu;
    // 0x7cf05c: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7CF05Cu;
    {
        const bool branch_taken_0x7cf05c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7CF060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CF05Cu;
        // 0x7cf060: 0x3c10007d  lui         $s0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cf05c) {
            ctx->pc = 0x7CF07Cu;
            goto label_7cf07c;
        }
    }
    ctx->pc = 0x7CF064u;
    // 0x7cf064: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x7CF064u;
    {
        const bool branch_taken_0x7cf064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CF068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CF064u;
        // 0x7cf068: 0xae330004  sw          $s3, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cf064) {
            ctx->pc = 0x7CF0B8u;
            goto label_7cf0b8;
        }
    }
    ctx->pc = 0x7CF06Cu;
label_7cf06c:
    // 0x7cf06c: 0xc1f3bba  jal         func_7CEEE8
    ctx->pc = 0x7CF06Cu;
    SET_GPR_U32(ctx, 31, 0x7CF074u);
    ctx->pc = 0x7CF070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CF06Cu;
    // 0x7cf070: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CEEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CEEE8u, 0x7CF06Cu, 0x7CF074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CF074u;
label_7cf074:
    // 0x7cf074: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x7CF074u;
    {
        const bool branch_taken_0x7cf074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CF078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CF074u;
        // 0x7cf078: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cf074) {
            ctx->pc = 0x7CF0B4u;
            goto label_7cf0b4;
        }
    }
    ctx->pc = 0x7CF07Cu;
label_7cf07c:
    // 0x7cf07c: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x7cf07cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x7cf080: 0x8e045080  lw          $a0, 0x5080($s0)
    ctx->pc = 0x7cf080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20608)));
    // 0x7cf084: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x7CF084u;
    SET_GPR_U32(ctx, 31, 0x7CF08Cu);
    ctx->pc = 0x7CF088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CF084u;
    // 0x7cf088: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x7CF084u, 0x7CF08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CF08Cu;
label_7cf08c:
    // 0x7cf08c: 0x8e035080  lw          $v1, 0x5080($s0)
    ctx->pc = 0x7cf08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20608)));
    // 0x7cf090: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x7cf090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x7cf094: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x7cf094u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x7cf098: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x7cf098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cf09c: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x7CF09Cu;
    SET_GPR_U32(ctx, 31, 0x7CF0A4u);
    ctx->pc = 0x7CF0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CF09Cu;
    // 0x7cf0a0: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x7CF09Cu, 0x7CF0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CF0A4u;
label_7cf0a4:
    // 0x7cf0a4: 0x8e035080  lw          $v1, 0x5080($s0)
    ctx->pc = 0x7cf0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20608)));
    // 0x7cf0a8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x7cf0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x7cf0ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7cf0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7cf0b0: 0xae035080  sw          $v1, 0x5080($s0)
    ctx->pc = 0x7cf0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20608), GPR_U32(ctx, 3));
label_7cf0b4:
    // 0x7cf0b4: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x7cf0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
label_7cf0b8:
    // 0x7cf0b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x7cf0b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cf0bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x7cf0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7cf0c0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x7cf0c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7cf0c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x7cf0c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7cf0c8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x7cf0c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7cf0cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7cf0ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7cf0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x7CF0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CF0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CF0D0u;
        // 0x7cf0d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CF0D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CF0D8u;
}
} // namespace gh_mcport
