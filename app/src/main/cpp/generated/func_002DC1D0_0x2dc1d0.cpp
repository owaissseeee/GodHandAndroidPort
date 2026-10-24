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

// Function: func_002DC1D0
// Address: 0x2dc1d0 - 0x2dc260
void func_002DC1D0_0x2dc1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DC1D0_0x2dc1d0");
#endif

    switch (ctx->pc) {
        case 0x2dc1e4u: goto label_2dc1e4;
        case 0x2dc1fcu: goto label_2dc1fc;
        case 0x2dc220u: goto label_2dc220;
        case 0x2dc24cu: goto label_2dc24c;
        default: break;
    }

    ctx->pc = 0x2dc1d0u;

    // 0x2dc1d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dc1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dc1d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2dc1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2dc1d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc1dc: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DC1DCu;
    SET_GPR_U32(ctx, 31, 0x2DC1E4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DC1DCu, 0x2DC1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC1E4u;
label_2dc1e4:
    // 0x2dc1e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dc1e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc1e8: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x2dc1e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x2dc1ec: 0x58400018  blezl       $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2DC1ECu;
    {
        const bool branch_taken_0x2dc1ec = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2dc1ec) {
            ctx->pc = 0x2DC1F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC1ECu;
            // 0x2dc1f0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC250u;
            goto label_2dc250;
        }
    }
    ctx->pc = 0x2DC1F4u;
    // 0x2dc1f4: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DC1F4u;
    SET_GPR_U32(ctx, 31, 0x2DC1FCu);
    ctx->pc = 0x2DC1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC1F4u;
    // 0x2dc1f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DC1F4u, 0x2DC1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC1FCu;
label_2dc1fc:
    // 0x2dc1fc: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DC1FCu;
    {
        const bool branch_taken_0x2dc1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc1fc) {
            ctx->pc = 0x2DC200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC1FCu;
            // 0x2dc200: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC250u;
            goto label_2dc250;
        }
    }
    ctx->pc = 0x2DC204u;
    // 0x2dc204: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dc204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2dc208: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x2dc208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2dc20c: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x2dc20cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2dc210: 0x5c60000f  bgtzl       $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DC210u;
    {
        const bool branch_taken_0x2dc210 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2dc210) {
            ctx->pc = 0x2DC214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC210u;
            // 0x2dc214: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC250u;
            goto label_2dc250;
        }
    }
    ctx->pc = 0x2DC218u;
    // 0x2dc218: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2DC218u;
    SET_GPR_U32(ctx, 31, 0x2DC220u);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DC218u, 0x2DC220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC220u;
label_2dc220:
    // 0x2dc220: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2DC220u;
    {
        const bool branch_taken_0x2dc220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc220) {
            ctx->pc = 0x2DC224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC220u;
            // 0x2dc224: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC250u;
            goto label_2dc250;
        }
    }
    ctx->pc = 0x2DC228u;
    // 0x2dc228: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2dc228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2dc22c: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x2dc22cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc230: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x2dc230u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dc234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc238: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2dc238u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc23c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dc23cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc240: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x2dc240u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dc244: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x2DC244u;
    SET_GPR_U32(ctx, 31, 0x2DC24Cu);
    ctx->pc = 0x2DC248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC244u;
    // 0x2dc248: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x2DC244u, 0x2DC24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC24Cu;
label_2dc24c:
    // 0x2dc24c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2dc24cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dc250:
    // 0x2dc250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc254: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC254u;
        // 0x2dc258: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC25Cu;
    // 0x2dc25c: 0x0  nop
    ctx->pc = 0x2dc25cu;
    // NOP
    ctx->pc = 0x2dc260u;
}
