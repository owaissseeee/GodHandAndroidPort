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

// Function: cSndSeVoice_Detach
// Address: 0x2ce488 - 0x2ce510
void cSndSeVoice_Detach_0x2ce488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndSeVoice_Detach_0x2ce488");
#endif

    switch (ctx->pc) {
        case 0x2ce4a4u: goto label_2ce4a4;
        case 0x2ce4e4u: goto label_2ce4e4;
        case 0x2ce4f4u: goto label_2ce4f4;
        default: break;
    }

    ctx->pc = 0x2ce488u;

    // 0x2ce488: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ce488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ce48c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ce48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ce490: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ce490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ce494: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ce494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce498: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ce498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ce49c: 0xc0b368e  jal         func_2CDA38
    ctx->pc = 0x2CE49Cu;
    SET_GPR_U32(ctx, 31, 0x2CE4A4u);
    ctx->pc = 0x2CE4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE49Cu;
    // 0x2ce4a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDA38u, 0x2CE49Cu, 0x2CE4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE4A4u;
label_2ce4a4:
    // 0x2ce4a4: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2CE4A4u;
    {
        const bool branch_taken_0x2ce4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce4a4) {
            ctx->pc = 0x2CE4A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE4A4u;
            // 0x2ce4a8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE500u;
            goto label_2ce500;
        }
    }
    ctx->pc = 0x2CE4ACu;
    // 0x2ce4ac: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x2ce4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2ce4b0: 0x54710013  bnel        $v1, $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CE4B0u;
    {
        const bool branch_taken_0x2ce4b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x2ce4b0) {
            ctx->pc = 0x2CE4B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE4B0u;
            // 0x2ce4b4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE500u;
            goto label_2ce500;
        }
    }
    ctx->pc = 0x2CE4B8u;
    // 0x2ce4b8: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x2ce4b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ce4bc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ce4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2ce4c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ce4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ce4c4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2CE4C4u;
    {
        const bool branch_taken_0x2ce4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce4c4) {
            ctx->pc = 0x2CE4C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE4C4u;
            // 0x2ce4c8: 0xae00003c  sw          $zero, 0x3C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE4F8u;
            goto label_2ce4f8;
        }
    }
    ctx->pc = 0x2CE4CCu;
    // 0x2ce4cc: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2ce4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2ce4d0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CE4D0u;
    {
        const bool branch_taken_0x2ce4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce4d0) {
            ctx->pc = 0x2CE4D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE4D0u;
            // 0x2ce4d4: 0x8c4500f0  lw          $a1, 0xF0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE4ECu;
            goto label_2ce4ec;
        }
    }
    ctx->pc = 0x2CE4D8u;
    // 0x2ce4d8: 0x8c6500f0  lw          $a1, 0xF0($v1)
    ctx->pc = 0x2ce4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x2ce4dc: 0xc0c294e  jal         func_30A538
    ctx->pc = 0x2CE4DCu;
    SET_GPR_U32(ctx, 31, 0x2CE4E4u);
    ctx->pc = 0x2CE4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE4DCu;
    // 0x2ce4e0: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A538u, 0x2CE4DCu, 0x2CE4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE4E4u;
label_2ce4e4:
    // 0x2ce4e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CE4E4u;
    {
        const bool branch_taken_0x2ce4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE4E4u;
        // 0x2ce4e8: 0xae00003c  sw          $zero, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce4e4) {
            ctx->pc = 0x2CE4F8u;
            goto label_2ce4f8;
        }
    }
    ctx->pc = 0x2CE4ECu;
label_2ce4ec:
    // 0x2ce4ec: 0xc0c294e  jal         func_30A538
    ctx->pc = 0x2CE4ECu;
    SET_GPR_U32(ctx, 31, 0x2CE4F4u);
    ctx->pc = 0x2CE4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE4ECu;
    // 0x2ce4f0: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A538u, 0x2CE4ECu, 0x2CE4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE4F4u;
label_2ce4f4:
    // 0x2ce4f4: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x2ce4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_2ce4f8:
    // 0x2ce4f8: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x2ce4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x2ce4fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ce4fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ce500:
    // 0x2ce500: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ce500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce504: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ce504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce508: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE508u;
        // 0x2ce50c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE510u;
}
