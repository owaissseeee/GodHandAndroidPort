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

// Function: InitObjVtableField35C_139878
// Address: 0x139878 - 0x1398d0
void InitObjVtableField35C_139878_0x139878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjVtableField35C_139878_0x139878");
#endif

    switch (ctx->pc) {
        case 0x13989cu: goto label_13989c;
        default: break;
    }

    ctx->pc = 0x139878u;

    // 0x139878: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x139878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13987c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x13987cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x139880: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x139880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x139884: 0x2442d8f8  addiu       $v0, $v0, -0x2708
    ctx->pc = 0x139884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957304));
    // 0x139888: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x139888u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x13988c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13988Cu;
    {
        const bool branch_taken_0x13988c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x139890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13988Cu;
        // 0x139890: 0xac82035c  sw          $v0, 0x35C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 860), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13988c) {
            ctx->pc = 0x13989Cu;
            goto label_13989c;
        }
    }
    ctx->pc = 0x139894u;
    // 0x139894: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x139894u;
    SET_GPR_U32(ctx, 31, 0x13989Cu);
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x139894u, 0x13989Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13989Cu;
label_13989c:
    // 0x13989c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13989cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1398a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1398A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1398A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1398A0u;
        // 0x1398a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1398A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1398A8u;
    // 0x1398a8: 0xac8203e4  sw          $v0, 0x3E4($a0)
    ctx->pc = 0x1398a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 996), GPR_U32(ctx, 2));
    // 0x1398ac: 0x0  nop
    ctx->pc = 0x1398acu;
    // NOP
    // 0x1398b0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1398b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1398b4: 0x0  nop
    ctx->pc = 0x1398b4u;
    // NOP
    // 0x1398b8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1398b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1398bc: 0x0  nop
    ctx->pc = 0x1398bcu;
    // NOP
    // 0x1398c0: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x1398c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1398c4: 0x0  nop
    ctx->pc = 0x1398c4u;
    // NOP
    // 0x1398c8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1398c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1398cc: 0x0  nop
    ctx->pc = 0x1398ccu;
    // NOP
    ctx->pc = 0x1398d0u;
}
