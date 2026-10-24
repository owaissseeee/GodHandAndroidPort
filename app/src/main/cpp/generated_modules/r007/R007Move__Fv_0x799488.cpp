#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r007_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r007
{
// Function: R007Move__Fv
// Address: 0x799488 - 0x7994e8
void R007Move__Fv_0x799488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R007Move__Fv_0x799488");
#endif

    switch (ctx->pc) {
        case 0x7994ccu: goto label_7994cc;
        default: break;
    }

    ctx->pc = 0x799488u;

    // 0x799488: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x799488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x79948c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79948cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x799490: 0x8c627a2c  lw          $v0, 0x7A2C($v1)
    ctx->pc = 0x799490u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A2Cu));
    // 0x799494: 0x24647a2c  addiu       $a0, $v1, 0x7A2C
    ctx->pc = 0x799494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 31276));
    // 0x799498: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x799498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x79949c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x79949Cu;
    {
        const bool branch_taken_0x79949c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79949Cu;
        // 0x7994a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79949c) {
            ctx->pc = 0x7994CCu;
            goto label_7994cc;
        }
    }
    ctx->pc = 0x7994A4u;
    // 0x7994a4: 0xdc82fc24  ld          $v0, -0x3DC($a0)
    ctx->pc = 0x7994a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 4294966308)));
    // 0x7994a8: 0x3403cc00  ori         $v1, $zero, 0xCC00
    ctx->pc = 0x7994a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52224);
    // 0x7994ac: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x7994acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x7994b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7994b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7994b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7994B4u;
    {
        const bool branch_taken_0x7994b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994B4u;
        // 0x7994b8: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994b4) {
            ctx->pc = 0x7994CCu;
            goto label_7994cc;
        }
    }
    ctx->pc = 0x7994BCu;
    // 0x7994bc: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x7994bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x7994c0: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x7994c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x7994c4: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x7994C4u;
    SET_GPR_U32(ctx, 31, 0x7994CCu);
    ctx->pc = 0x7994C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994C4u;
    // 0x7994c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x7994C4u, 0x7994CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994CCu;
label_7994cc:
    // 0x7994cc: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x7994ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x7994d0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x7994d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x7994d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7994d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7994d8: 0xa462ae40  sh          $v0, -0x51C0($v1)
    ctx->pc = 0x7994d8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CAE40u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CAE40u, _value); } while (0);
    // 0x7994dc: 0x3e00008  jr          $ra
    ctx->pc = 0x7994DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7994E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994DCu;
        // 0x7994e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7994DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7994E4u;
    // 0x7994e4: 0x0  nop
    ctx->pc = 0x7994e4u;
    // NOP
    ctx->pc = 0x7994e8u;
}
} // namespace gh_r007
