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

// Function: _skip_ws__7istream
// Address: 0x389398 - 0x389400
void _skip_ws__7istream_0x389398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_skip_ws__7istream_0x389398");
#endif

    switch (ctx->pc) {
        case 0x3893b4u: goto label_3893b4;
        case 0x3893ecu: goto label_3893ec;
        default: break;
    }

    ctx->pc = 0x389398u;

    // 0x389398: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x389398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38939c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38939cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3893a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3893a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3893a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3893a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3893a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3893a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3893ac: 0xc0e1d6a  jal         func_3875A8
    ctx->pc = 0x3893ACu;
    SET_GPR_U32(ctx, 31, 0x3893B4u);
    ctx->pc = 0x3893B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3893ACu;
    // 0x3893b0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3875A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3875A8u, 0x3893ACu, 0x3893B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3893B4u;
label_3893b4:
    // 0x3893b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3893b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3893b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3893b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3893bc: 0x54a20007  bnel        $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3893BCu;
    {
        const bool branch_taken_0x3893bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3893bc) {
            ctx->pc = 0x3893C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3893BCu;
            // 0x3893c0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3893DCu;
            goto label_3893dc;
        }
    }
    ctx->pc = 0x3893C4u;
    // 0x3893c4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3893c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3893c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3893c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3893cc: 0x9083001a  lbu         $v1, 0x1A($a0)
    ctx->pc = 0x3893ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x3893d0: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x3893d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x3893d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3893D4u;
    {
        const bool branch_taken_0x3893d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3893D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3893D4u;
        // 0x3893d8: 0xa083001a  sb          $v1, 0x1A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3893d4) {
            ctx->pc = 0x3893F0u;
            goto label_3893f0;
        }
    }
    ctx->pc = 0x3893DCu;
label_3893dc:
    // 0x3893dc: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x3893dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x3893e0: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x3893e0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x3893e4: 0xc0e2d18  jal         func_38B460
    ctx->pc = 0x3893E4u;
    SET_GPR_U32(ctx, 31, 0x3893ECu);
    ctx->pc = 0x3893E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3893E4u;
    // 0x3893e8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B460u, 0x3893E4u, 0x3893ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3893ECu;
label_3893ec:
    // 0x3893ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3893ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3893f0:
    // 0x3893f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3893f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3893f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3893f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3893f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3893F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3893FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3893F8u;
        // 0x3893fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3893F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389400u;
}
