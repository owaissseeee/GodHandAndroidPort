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

// Function: SetSlotEntryBitFlag_191860
// Address: 0x191860 - 0x1918d0
void SetSlotEntryBitFlag_191860_0x191860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetSlotEntryBitFlag_191860_0x191860");
#endif

    switch (ctx->pc) {
        case 0x191894u: goto label_191894;
        default: break;
    }

    ctx->pc = 0x191860u;

    // 0x191860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x191860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x191864: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x191864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x191868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x191868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19186c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19186cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191870: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x191870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x191878: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19187c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x19187cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x191880: 0x8c440600  lw          $a0, 0x600($v0)
    ctx->pc = 0x191880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1536)));
    // 0x191884: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x191884u;
    {
        const bool branch_taken_0x191884 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x191884) {
            ctx->pc = 0x191888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191884u;
            // 0x191888: 0x102142  srl         $a0, $s0, 5 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191898u;
            goto label_191898;
        }
    }
    ctx->pc = 0x19188Cu;
    // 0x19188c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x19188Cu;
    SET_GPR_U32(ctx, 31, 0x191894u);
    ctx->pc = 0x191890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19188Cu;
    // 0x191890: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x19188Cu, 0x191894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191894u;
label_191894:
    // 0x191894: 0x102142  srl         $a0, $s0, 5
    ctx->pc = 0x191894u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
label_191898:
    // 0x191898: 0x26230f80  addiu       $v1, $s1, 0xF80
    ctx->pc = 0x191898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3968));
    // 0x19189c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x19189cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1918a0: 0x3205001f  andi        $a1, $s0, 0x1F
    ctx->pc = 0x1918a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x1918a4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1918a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1918a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1918a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1918ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1918acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1918b0: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x1918b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x1918b4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1918b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1918b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1918b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1918bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1918bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1918c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1918c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1918c4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1918c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1918c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1918C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1918CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918C8u;
        // 0x1918cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1918C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1918D0u;
}
