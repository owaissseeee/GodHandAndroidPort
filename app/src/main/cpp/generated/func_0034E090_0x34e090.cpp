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

// Function: func_0034E090
// Address: 0x34e090 - 0x34e140
void func_0034E090_0x34e090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034E090_0x34e090");
#endif

    switch (ctx->pc) {
        case 0x34e0c4u: goto label_34e0c4;
        default: break;
    }

    ctx->pc = 0x34e090u;

    // 0x34e090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34e090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34e094: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34e094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34e098: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34e098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e09c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34e09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34e0a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34e0a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e0a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34e0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x34e0a8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x34e0a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e0ac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x34e0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x34e0b0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x34e0b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e0b4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x34e0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x34e0b8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x34e0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x34e0bc: 0xc0d37b2  jal         func_34DEC8
    ctx->pc = 0x34E0BCu;
    SET_GPR_U32(ctx, 31, 0x34E0C4u);
    ctx->pc = 0x34E0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E0BCu;
    // 0x34e0c0: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEC8u, 0x34E0BCu, 0x34E0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E0C4u;
label_34e0c4:
    // 0x34e0c4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x34e0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x34e0c8: 0x2623ff44  addiu       $v1, $s1, -0xBC
    ctx->pc = 0x34e0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967108));
    // 0x34e0cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x34e0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e0d0: 0x34a50171  ori         $a1, $a1, 0x171
    ctx->pc = 0x34e0d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)369);
    // 0x34e0d4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x34E0D4u;
    {
        const bool branch_taken_0x34e0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E0D4u;
        // 0x34e0d8: 0x2c630044  sltiu       $v1, $v1, 0x44 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)68) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e0d4) {
            ctx->pc = 0x34E100u;
            goto label_34e100;
        }
    }
    ctx->pc = 0x34E0DCu;
    // 0x34e0dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34e0dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34e0e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34e0e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34e0e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34e0e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34e0e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x34e0e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34e0ec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x34e0ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34e0f0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x34e0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34e0f4: 0x80d375c  j           func_34DD70
    ctx->pc = 0x34E0F4u;
    ctx->pc = 0x34E0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E0F4u;
    // 0x34e0f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x34E0F4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34E0FCu;
    // 0x34e0fc: 0x0  nop
    ctx->pc = 0x34e0fcu;
    // NOP
label_34e100:
    // 0x34e100: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x34E100u;
    {
        const bool branch_taken_0x34e100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e100) {
            ctx->pc = 0x34E104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34E100u;
            // 0x34e104: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34E124u;
            goto label_34e124;
        }
    }
    ctx->pc = 0x34E108u;
    // 0x34e108: 0x8e041f7c  lw          $a0, 0x1F7C($s0)
    ctx->pc = 0x34e108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8060)));
    // 0x34e10c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x34e10cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x34e110: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34e110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34e114: 0xac930150  sw          $s3, 0x150($a0)
    ctx->pc = 0x34e114u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 19));
    // 0x34e118: 0xac72fd50  sw          $s2, -0x2B0($v1)
    ctx->pc = 0x34e118u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966608), GPR_U32(ctx, 18));
    // 0x34e11c: 0xac940154  sw          $s4, 0x154($a0)
    ctx->pc = 0x34e11cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 20));
    // 0x34e120: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34e120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34e124:
    // 0x34e124: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34e124u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34e128: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34e128u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34e12c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x34e12cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34e130: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x34e130u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34e134: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x34e134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34e138: 0x3e00008  jr          $ra
    ctx->pc = 0x34E138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E138u;
        // 0x34e13c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34E140u;
}
