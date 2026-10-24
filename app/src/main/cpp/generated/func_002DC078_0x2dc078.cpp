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

// Function: func_002DC078
// Address: 0x2dc078 - 0x2dc108
void func_002DC078_0x2dc078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DC078_0x2dc078");
#endif

    switch (ctx->pc) {
        case 0x2dc08cu: goto label_2dc08c;
        case 0x2dc0a4u: goto label_2dc0a4;
        case 0x2dc0c8u: goto label_2dc0c8;
        case 0x2dc0f4u: goto label_2dc0f4;
        default: break;
    }

    ctx->pc = 0x2dc078u;

    // 0x2dc078: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dc078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dc07c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2dc07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2dc080: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc084: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DC084u;
    SET_GPR_U32(ctx, 31, 0x2DC08Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DC084u, 0x2DC08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC08Cu;
label_2dc08c:
    // 0x2dc08c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dc08cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc090: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x2dc090u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x2dc094: 0x58400018  blezl       $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2DC094u;
    {
        const bool branch_taken_0x2dc094 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2dc094) {
            ctx->pc = 0x2DC098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC094u;
            // 0x2dc098: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC0F8u;
            goto label_2dc0f8;
        }
    }
    ctx->pc = 0x2DC09Cu;
    // 0x2dc09c: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DC09Cu;
    SET_GPR_U32(ctx, 31, 0x2DC0A4u);
    ctx->pc = 0x2DC0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC09Cu;
    // 0x2dc0a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DC09Cu, 0x2DC0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC0A4u;
label_2dc0a4:
    // 0x2dc0a4: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DC0A4u;
    {
        const bool branch_taken_0x2dc0a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc0a4) {
            ctx->pc = 0x2DC0A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC0A4u;
            // 0x2dc0a8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC0F8u;
            goto label_2dc0f8;
        }
    }
    ctx->pc = 0x2DC0ACu;
    // 0x2dc0ac: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dc0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2dc0b0: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x2dc0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2dc0b4: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x2dc0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2dc0b8: 0x5c60000f  bgtzl       $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DC0B8u;
    {
        const bool branch_taken_0x2dc0b8 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2dc0b8) {
            ctx->pc = 0x2DC0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC0B8u;
            // 0x2dc0bc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC0F8u;
            goto label_2dc0f8;
        }
    }
    ctx->pc = 0x2DC0C0u;
    // 0x2dc0c0: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2DC0C0u;
    SET_GPR_U32(ctx, 31, 0x2DC0C8u);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DC0C0u, 0x2DC0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC0C8u;
label_2dc0c8:
    // 0x2dc0c8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2DC0C8u;
    {
        const bool branch_taken_0x2dc0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc0c8) {
            ctx->pc = 0x2DC0CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC0C8u;
            // 0x2dc0cc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC0F8u;
            goto label_2dc0f8;
        }
    }
    ctx->pc = 0x2DC0D0u;
    // 0x2dc0d0: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x2dc0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x2dc0d4: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x2dc0d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc0d8: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x2dc0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc0dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dc0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc0e0: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2dc0e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc0e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dc0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc0e8: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x2dc0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dc0ec: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x2DC0ECu;
    SET_GPR_U32(ctx, 31, 0x2DC0F4u);
    ctx->pc = 0x2DC0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC0ECu;
    // 0x2dc0f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x2DC0ECu, 0x2DC0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC0F4u;
label_2dc0f4:
    // 0x2dc0f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2dc0f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dc0f8:
    // 0x2dc0f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc0fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC0FCu;
        // 0x2dc100: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC0FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC104u;
    // 0x2dc104: 0x0  nop
    ctx->pc = 0x2dc104u;
    // NOP
    ctx->pc = 0x2dc108u;
}
