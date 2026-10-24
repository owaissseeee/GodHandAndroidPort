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

// Function: SFD_GetCond
// Address: 0x35a128 - 0x35a1c8
void SFD_GetCond_0x35a128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFD_GetCond_0x35a128");
#endif

    switch (ctx->pc) {
        case 0x35a170u: goto label_35a170;
        case 0x35a1a4u: goto label_35a1a4;
        default: break;
    }

    ctx->pc = 0x35a128u;

    // 0x35a128: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35a128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35a12c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a130: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35a130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a134: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35a134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35a138: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35a138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a13c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35a13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35a140: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x35a140u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a144: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35a144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35a148: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35A148u;
    {
        const bool branch_taken_0x35a148 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x35A14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A148u;
        // 0x35a14c: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a148) {
            ctx->pc = 0x35A168u;
            goto label_35a168;
        }
    }
    ctx->pc = 0x35A150u;
    // 0x35a150: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x35a150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x35a154: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x35a154u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x35a158: 0x8c22e0c0  lw          $v0, -0x1F40($at)
    ctx->pc = 0x35a158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959296)));
    // 0x35a15c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x35A15Cu;
    {
        const bool branch_taken_0x35a15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A15Cu;
        // 0x35a160: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a15c) {
            ctx->pc = 0x35A1A8u;
            goto label_35a1a8;
        }
    }
    ctx->pc = 0x35A164u;
    // 0x35a164: 0x0  nop
    ctx->pc = 0x35a164u;
    // NOP
label_35a168:
    // 0x35a168: 0xc0d37b2  jal         func_34DEC8
    ctx->pc = 0x35A168u;
    SET_GPR_U32(ctx, 31, 0x35A170u);
    ctx->pc = 0x34DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEC8u, 0x35A168u, 0x35A170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A170u;
label_35a170:
    // 0x35a170: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x35a170u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x35a174: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35A174u;
    {
        const bool branch_taken_0x35a174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A174u;
        // 0x35a178: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a174) {
            ctx->pc = 0x35A198u;
            goto label_35a198;
        }
    }
    ctx->pc = 0x35A17Cu;
    // 0x35a17c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a17cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a180: 0x34a50113  ori         $a1, $a1, 0x113
    ctx->pc = 0x35a180u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)275);
    // 0x35a184: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35a184u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a188: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35a188u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a18c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35a18cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35a190: 0x80d375c  j           func_34DD70
    ctx->pc = 0x35A190u;
    ctx->pc = 0x35A194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A190u;
    // 0x35a194: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x35A190u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35A198u;
label_35a198:
    // 0x35a198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35a198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a19c: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x35A19Cu;
    SET_GPR_U32(ctx, 31, 0x35A1A4u);
    ctx->pc = 0x35A1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A19Cu;
    // 0x35a1a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x35A19Cu, 0x35A1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A1A4u;
label_35a1a4:
    // 0x35a1a4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x35a1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_35a1a8:
    // 0x35a1a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a1a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a1ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35a1acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a1b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35a1b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a1b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35a1b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a1b8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35a1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35a1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x35A1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A1BCu;
        // 0x35a1c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A1BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A1C4u;
    // 0x35a1c4: 0x0  nop
    ctx->pc = 0x35a1c4u;
    // NOP
    ctx->pc = 0x35a1c8u;
}
