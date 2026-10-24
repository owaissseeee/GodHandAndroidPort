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

// Function: cIDPanel_trans
// Address: 0x1640e8 - 0x164140
void cIDPanel_trans_0x1640e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cIDPanel_trans_0x1640e8");
#endif

    switch (ctx->pc) {
        case 0x16411cu: goto label_16411c;
        case 0x164128u: goto label_164128;
        case 0x164130u: goto label_164130;
        default: break;
    }

    ctx->pc = 0x1640e8u;

    // 0x1640e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1640e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1640ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1640ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1640f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1640f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1640f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1640f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1640f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1640f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1640fc: 0x92030064  lbu         $v1, 0x64($s0)
    ctx->pc = 0x1640fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x164100: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x164100u;
    {
        const bool branch_taken_0x164100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x164100) {
            ctx->pc = 0x164104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164100u;
            // 0x164104: 0x3c040056  lui         $a0, 0x56 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164120u;
            goto label_164120;
        }
    }
    ctx->pc = 0x164108u;
    // 0x164108: 0x8202005b  lb          $v0, 0x5B($s0)
    ctx->pc = 0x164108u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 91)));
    // 0x16410c: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16410Cu;
    {
        const bool branch_taken_0x16410c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16410c) {
            ctx->pc = 0x164110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16410Cu;
            // 0x164110: 0x3c040056  lui         $a0, 0x56 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164120u;
            goto label_164120;
        }
    }
    ctx->pc = 0x164114u;
    // 0x164114: 0xc058f16  jal         func_163C58
    ctx->pc = 0x164114u;
    SET_GPR_U32(ctx, 31, 0x16411Cu);
    ctx->pc = 0x163C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C58u, 0x164114u, 0x16411Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16411Cu;
label_16411c:
    // 0x16411c: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x16411cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_164120:
    // 0x164120: 0xc05925e  jal         func_164978
    ctx->pc = 0x164120u;
    SET_GPR_U32(ctx, 31, 0x164128u);
    ctx->pc = 0x164124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164120u;
    // 0x164124: 0x24847d70  addiu       $a0, $a0, 0x7D70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164978u, 0x164120u, 0x164128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164128u;
label_164128:
    // 0x164128: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x164128u;
    SET_GPR_U32(ctx, 31, 0x164130u);
    ctx->pc = 0x16412Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164128u;
    // 0x16412c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x164128u, 0x164130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164130u;
label_164130:
    // 0x164130: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x164130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164134: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x164134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164138: 0x3e00008  jr          $ra
    ctx->pc = 0x164138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16413Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164138u;
        // 0x16413c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164140u;
}
