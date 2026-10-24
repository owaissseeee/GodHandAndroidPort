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

// Function: _$_7ostream
// Address: 0x38a838 - 0x38a8d8
void ps2____7ostream_0x38a838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2____7ostream_0x38a838");
#endif

    switch (ctx->pc) {
        case 0x38a8b0u: goto label_38a8b0;
        case 0x38a8c4u: goto label_38a8c4;
        default: break;
    }

    ctx->pc = 0x38a838u;

    // 0x38a838: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x38a838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x38a83c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x38a83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x38a840: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x38a840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x38a844: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x38a844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x38a848: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38a848u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a84c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x38a84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x38a850: 0x2444d178  addiu       $a0, $v0, -0x2E88
    ctx->pc = 0x38a850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955384));
    // 0x38a854: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x38a854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a858: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x38a858u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x38a85c: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x38A85Cu;
    {
        const bool branch_taken_0x38a85c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x38A860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A85Cu;
        // 0x38a860: 0xacc40028  sw          $a0, 0x28($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a85c) {
            ctx->pc = 0x38A88Cu;
            goto label_38a88c;
        }
    }
    ctx->pc = 0x38A864u;
    // 0x38a864: 0xdc45d178  ld          $a1, -0x2E88($v0)
    ctx->pc = 0x38a864u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294955384)));
    // 0x38a868: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x38a868u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38a86c: 0x24c2fff8  addiu       $v0, $a2, -0x8
    ctx->pc = 0x38a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x38a870: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x38a870u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38a874: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x38a874u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x38a878: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38a878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38a87c: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x38a87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x38a880: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x38a880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x38a884: 0xa7a30008  sh          $v1, 0x8($sp)
    ctx->pc = 0x38a884u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x38a888: 0xacdd0028  sw          $sp, 0x28($a2)
    ctx->pc = 0x38a888u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 29));
label_38a88c:
    // 0x38a88c: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x38a88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x38a890: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x38A890u;
    {
        const bool branch_taken_0x38a890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A890u;
        // 0x38a894: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a890) {
            ctx->pc = 0x38A8B0u;
            goto label_38a8b0;
        }
    }
    ctx->pc = 0x38A898u;
    // 0x38a898: 0x8cc40020  lw          $a0, 0x20($a2)
    ctx->pc = 0x38a898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x38a89c: 0x2442d340  addiu       $v0, $v0, -0x2CC0
    ctx->pc = 0x38a89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955840));
    // 0x38a8a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38A8A0u;
    {
        const bool branch_taken_0x38a8a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A8A0u;
        // 0x38a8a4: 0xacc20028  sw          $v0, 0x28($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a8a0) {
            ctx->pc = 0x38A8B0u;
            goto label_38a8b0;
        }
    }
    ctx->pc = 0x38A8A8u;
    // 0x38a8a8: 0xc0c3d72  jal         func_30F5C8
    ctx->pc = 0x38A8A8u;
    SET_GPR_U32(ctx, 31, 0x38A8B0u);
    ctx->pc = 0x30F5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5C8u, 0x38A8A8u, 0x38A8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A8B0u;
label_38a8b0:
    // 0x38a8b0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x38a8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x38a8b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38A8B4u;
    {
        const bool branch_taken_0x38a8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A8B4u;
        // 0x38a8b8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a8b4) {
            ctx->pc = 0x38A8C8u;
            goto label_38a8c8;
        }
    }
    ctx->pc = 0x38A8BCu;
    // 0x38a8bc: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x38A8BCu;
    SET_GPR_U32(ctx, 31, 0x38A8C4u);
    ctx->pc = 0x38A8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A8BCu;
    // 0x38a8c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x38A8BCu, 0x38A8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A8C4u;
label_38a8c4:
    // 0x38a8c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x38a8c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_38a8c8:
    // 0x38a8c8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x38a8c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38a8cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x38a8ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38a8d0: 0x3e00008  jr          $ra
    ctx->pc = 0x38A8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A8D0u;
        // 0x38a8d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A8D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A8D8u;
}
