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

// Function: func_002F1170
// Address: 0x2f1170 - 0x2f11c8
void func_002F1170_0x2f1170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F1170_0x2f1170");
#endif

    switch (ctx->pc) {
        case 0x2f1194u: goto label_2f1194;
        case 0x2f11acu: goto label_2f11ac;
        default: break;
    }

    ctx->pc = 0x2f1170u;

    // 0x2f1170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f1170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f1174: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2f1174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2f1178: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f1178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f117c: 0x8c626488  lw          $v0, 0x6488($v1)
    ctx->pc = 0x2f117cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786488u));
    // 0x2f1180: 0x24706488  addiu       $s0, $v1, 0x6488
    ctx->pc = 0x2f1180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25736));
    // 0x2f1184: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F1184u;
    {
        const bool branch_taken_0x2f1184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1184u;
        // 0x2f1188: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1184) {
            ctx->pc = 0x2F11ACu;
            goto label_2f11ac;
        }
    }
    ctx->pc = 0x2F118Cu;
    // 0x2f118c: 0xc0c0052  jal         func_300148
    ctx->pc = 0x2F118Cu;
    SET_GPR_U32(ctx, 31, 0x2F1194u);
    ctx->pc = 0x300148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300148u, 0x2F118Cu, 0x2F1194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1194u;
label_2f1194:
    // 0x2f1194: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2f1194u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2f1198: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x2f1198u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x2f119c: 0x24a5ec00  addiu       $a1, $a1, -0x1400
    ctx->pc = 0x2f119cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962176));
    // 0x2f11a0: 0x24c663c8  addiu       $a2, $a2, 0x63C8
    ctx->pc = 0x2f11a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25544));
    // 0x2f11a4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2F11A4u;
    SET_GPR_U32(ctx, 31, 0x2F11ACu);
    ctx->pc = 0x2F11A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F11A4u;
    // 0x2f11a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2F11A4u, 0x2F11ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F11ACu;
label_2f11ac:
    // 0x2f11ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f11acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f11b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f11b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f11b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f11b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f11b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F11B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F11BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F11B8u;
        // 0x2f11bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F11B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F11C0u;
    // 0x2f11c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2f11c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f11c4: 0x0  nop
    ctx->pc = 0x2f11c4u;
    // NOP
    ctx->pc = 0x2f11c8u;
}
